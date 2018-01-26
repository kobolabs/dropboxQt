dropboxQt is C++11/Qt adaptation of Dropbox v2 API. Underneath is simple web API built on HTTP, OAuth 2.0, and JSON.

There are two flavors of API functions - asynchronous and blocking. The blocking calls return unique_ptr of result object and can throw exceptions derived from DropboxException. The asynchronous companion functions (with Async suffix) don't throw exception but provide two callbacks - for result and error. The regular GUI Qt application may take advantage of asynchronous functions as they fit better into event driven model. The blocking APIs functions are convenient for algorithms running in background thread as they allow to create more compact and clean code.

###Create Folder example
```
using namespace dropboxQt;
DropboxClient dbox("ACCESS_TOKEN");
files::CreateFolderArg arg("path_to_new_folder");
```
####1.Async call, no exceptions, callback on completed
```
dbox.getFiles()->createFolder_Async(arg, 
[](std::unique_ptr<files::FolderMetadata> res)
{
  qDebug() << "folder created, id=" << res->id();
});
```
####also callback on completed and error
```
dbox.getFiles()->createFolder_Async(arg, 
[](std::unique_ptr<files::FolderMetadata> res)
{
  qDebug() << "folder created, id=" << res->id();
},
[](std::unique_ptr<DropboxException> e) 
{
  qDebug() << "Exception: " << e->what();
});
```
####2.Blocking call, no callbacks, exception checking
```
try
{
  std::unique_ptr<files::FolderMetadata> res = dbox.getFiles()->createFolder(arg);
  qDebug() << "folder created, id=" << res->id();
}
catch (DropboxException& e)
{
  qDebug() << "Exception: " << e.what();
}
```
####3. Blocking call, no callbacks, no exception, returns boolean
```
if(dbox.createFolder("path_to_new_folder")){
  qDebug() << "folder created";
}
else{
  qDebug() << "failed to create folder";
}
```
###More Code Examples
####Get user account info
```
    try
        {
            std::unique_ptr<users::FullAccount> accountInfo = m_c.getUsers()->getCurrentAccount();
            qDebug() << accountInfo->toString();
        }
    catch(DropboxException& e)
        {
            qDebug() << "Exception: " << e.what();
        }
```
####Check Folder exists
```
DropboxClient client(token_string);
if(client.folderExists(path))
{
    std::cout << "folder: " << path << " exists." << std::endl;
};
```
####Delete file
```
DropboxClient client(token_string);
if(client.deleteFile(path))
{
    std::cout << "file: " << path << " deleted." << std::endl;
};
```
####Download text file and print content on the screen
```
	QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);

    try
        {
            files::DownloadArg d(m_curr_dir + fileName);
            std::unique_ptr<files::FileMetadata> md = m_c.getFiles()->download(d, &buffer);
            std::cout << << md->id().toStdString() << std::endl;
            std::cout << byteArray.constData();
        }
    catch(DropboxException& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
```
####Authorize and get access token
```
    using namespace dropboxQt;
    DropboxAppInfo ai;
    ai.readFromFile(fileName);
    try
       {
        QString url = DropboxWebAuth::getCodeAuthorizeUrl(appInfo);
        //navigate to url and authorize access at the Dropbox web page
        //get auth_code from redirected page, generated by Dropbox
        DropboxWebAuth::AuthFinish res = DropboxWebAuth::getTokenFromCode(appInfo, QString::fromStdString(auth_code));
        const DropboxAuthInfo& authInfo = res.getAuthInfo();
        authInfo.storeToFile(tokenFile);
        }
     catch(DropboxException& e)
     {
        std::cout << "Exception: " << e.what() << " " << e.code() << std::endl;
     }
```

###Requirement.
Qt 5.xx and C++11 compiler. The used C++11 features are limited to lambdas & smart pointers so C++11 implementation available in VC2010 compiler should be sufficient, also modern GCC 5.xx and clang that comes with XCode 6.xx should be ok.

###Installation
Run qmake in 'prj' folder to generate Makefile, compile, see generated static library dropboxQt.
To create sample project, cd in 'examples' and run qmake for each subfolder. There is shell script to open IDE
on windows and generate project files - see folder 'bin' and win-configure-open-ide.bat
You have to add dropboxQt to your LIB list (as shown in sample) and add path to cprj/src to the INCLUDE list.

###Current status
Public interfaces are stabilized (unlikely to be changed in such a way that would break client code), examples are working, host application - AriadneOrganizer is being testest under supported by Qt platforms - Windows/x64, OSX, Linux, iOS, Android. But not all Dropbox API functions are covered in examples and used in host application - use it at your own discretion.

###Features
- connect to Dropbox using Api v2.
- request OAuth2 token
- functions & classes to work with API from files, team, user namespaces.


