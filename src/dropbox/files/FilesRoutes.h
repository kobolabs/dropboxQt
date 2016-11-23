/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/DropboxRouteBase.h"
#include "dropbox/files/FilesAddPropertiesError.h"
#include "dropbox/files/FilesAlphaGetMetadataArg.h"
#include "dropbox/files/FilesAlphaGetMetadataError.h"
#include "dropbox/files/FilesCommitInfo.h"
#include "dropbox/files/FilesCommitInfoWithProperties.h"
#include "dropbox/files/FilesCreateFolderArg.h"
#include "dropbox/files/FilesCreateFolderError.h"
#include "dropbox/files/FilesDeleteArg.h"
#include "dropbox/files/FilesDeleteError.h"
#include "dropbox/files/FilesDownloadArg.h"
#include "dropbox/files/FilesDownloadError.h"
#include "dropbox/files/FilesFileMetadata.h"
#include "dropbox/files/FilesFolderMetadata.h"
#include "dropbox/files/FilesGetCopyReferenceArg.h"
#include "dropbox/files/FilesGetCopyReferenceError.h"
#include "dropbox/files/FilesGetCopyReferenceResult.h"
#include "dropbox/files/FilesGetMetadataArg.h"
#include "dropbox/files/FilesGetMetadataError.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateArg.h"
#include "dropbox/properties/PropertiesGetPropertyTemplateResult.h"
#include "dropbox/files/FilesGetTemporaryLinkArg.h"
#include "dropbox/files/FilesGetTemporaryLinkError.h"
#include "dropbox/files/FilesGetTemporaryLinkResult.h"
#include "dropbox/files/FilesInvalidPropertyGroupError.h"
#include "dropbox/async/AsyncLaunchEmptyResult.h"
#include "dropbox/files/FilesListFolderArg.h"
#include "dropbox/files/FilesListFolderContinueArg.h"
#include "dropbox/files/FilesListFolderContinueError.h"
#include "dropbox/files/FilesListFolderError.h"
#include "dropbox/files/FilesListFolderGetLatestCursorResult.h"
#include "dropbox/files/FilesListFolderLongpollArg.h"
#include "dropbox/files/FilesListFolderLongpollError.h"
#include "dropbox/files/FilesListFolderLongpollResult.h"
#include "dropbox/files/FilesListFolderResult.h"
#include "dropbox/properties/PropertiesListPropertyTemplateIds.h"
#include "dropbox/files/FilesListRevisionsArg.h"
#include "dropbox/files/FilesListRevisionsError.h"
#include "dropbox/files/FilesListRevisionsResult.h"
#include "dropbox/files/FilesMetadata.h"
#include "dropbox/async/AsyncPollArg.h"
#include "dropbox/async/AsyncPollError.h"
#include "dropbox/files/FilesPreviewArg.h"
#include "dropbox/files/FilesPreviewError.h"
#include "dropbox/files/FilesPropertyGroupWithPath.h"
#include "dropbox/properties/PropertiesPropertyTemplateError.h"
#include "dropbox/files/FilesRelocationArg.h"
#include "dropbox/files/FilesRelocationError.h"
#include "dropbox/files/FilesRemovePropertiesArg.h"
#include "dropbox/files/FilesRemovePropertiesError.h"
#include "dropbox/files/FilesRestoreArg.h"
#include "dropbox/files/FilesRestoreError.h"
#include "dropbox/files/FilesSaveCopyReferenceArg.h"
#include "dropbox/files/FilesSaveCopyReferenceError.h"
#include "dropbox/files/FilesSaveCopyReferenceResult.h"
#include "dropbox/files/FilesSaveUrlArg.h"
#include "dropbox/files/FilesSaveUrlError.h"
#include "dropbox/files/FilesSaveUrlJobStatus.h"
#include "dropbox/files/FilesSaveUrlResult.h"
#include "dropbox/files/FilesSearchArg.h"
#include "dropbox/files/FilesSearchError.h"
#include "dropbox/files/FilesSearchResult.h"
#include "dropbox/files/FilesThumbnailArg.h"
#include "dropbox/files/FilesThumbnailError.h"
#include "dropbox/files/FilesUpdatePropertiesError.h"
#include "dropbox/files/FilesUpdatePropertyGroupArg.h"
#include "dropbox/files/FilesUploadError.h"
#include "dropbox/files/FilesUploadErrorWithProperties.h"
#include "dropbox/files/FilesUploadSessionAppendArg.h"
#include "dropbox/files/FilesUploadSessionCursor.h"
#include "dropbox/files/FilesUploadSessionFinishArg.h"
#include "dropbox/files/FilesUploadSessionFinishBatchArg.h"
#include "dropbox/files/FilesUploadSessionFinishBatchJobStatus.h"
#include "dropbox/files/FilesUploadSessionFinishError.h"
#include "dropbox/files/FilesUploadSessionLookupError.h"
#include "dropbox/files/FilesUploadSessionStartArg.h"
#include "dropbox/files/FilesUploadSessionStartResult.h"

namespace dropboxQt{
namespace files{

    ///exception AlphaGetMetadataError for alpha/get_metadata
    DECLARE_API_ERR_EXCEPTION(AlphaGetMetadataErrorException, files::AlphaGetMetadataError);

    ///exception UploadErrorWithProperties for alpha/upload
    DECLARE_API_ERR_EXCEPTION(UploadErrorWithPropertiesException, files::UploadErrorWithProperties);

    ///exception RelocationError for copy
    DECLARE_API_ERR_EXCEPTION(RelocationErrorException, files::RelocationError);

    ///exception GetCopyReferenceError for copy_reference/get
    DECLARE_API_ERR_EXCEPTION(GetCopyReferenceErrorException, files::GetCopyReferenceError);

    ///exception SaveCopyReferenceError for copy_reference/save
    DECLARE_API_ERR_EXCEPTION(SaveCopyReferenceErrorException, files::SaveCopyReferenceError);

    ///exception CreateFolderError for create_folder
    DECLARE_API_ERR_EXCEPTION(CreateFolderErrorException, files::CreateFolderError);

    ///exception DeleteError for delete
    DECLARE_API_ERR_EXCEPTION(DeleteErrorException, files::DeleteError);

    ///exception DownloadError for download
    DECLARE_API_ERR_EXCEPTION(DownloadErrorException, files::DownloadError);

    ///exception GetMetadataError for get_metadata
    DECLARE_API_ERR_EXCEPTION(GetMetadataErrorException, files::GetMetadataError);

    ///exception PreviewError for get_preview
    DECLARE_API_ERR_EXCEPTION(PreviewErrorException, files::PreviewError);

    ///exception GetTemporaryLinkError for get_temporary_link
    DECLARE_API_ERR_EXCEPTION(GetTemporaryLinkErrorException, files::GetTemporaryLinkError);

    ///exception ThumbnailError for get_thumbnail
    DECLARE_API_ERR_EXCEPTION(ThumbnailErrorException, files::ThumbnailError);

    ///exception ListFolderError for list_folder
    DECLARE_API_ERR_EXCEPTION(ListFolderErrorException, files::ListFolderError);

    ///exception ListFolderContinueError for list_folder/continue
    DECLARE_API_ERR_EXCEPTION(ListFolderContinueErrorException, files::ListFolderContinueError);

    ///exception ListFolderLongpollError for list_folder/longpoll
    DECLARE_API_ERR_EXCEPTION(ListFolderLongpollErrorException, files::ListFolderLongpollError);

    ///exception ListRevisionsError for list_revisions
    DECLARE_API_ERR_EXCEPTION(ListRevisionsErrorException, files::ListRevisionsError);

    ///exception AddPropertiesError for properties/add
    DECLARE_API_ERR_EXCEPTION(AddPropertiesErrorException, files::AddPropertiesError);

    ///exception InvalidPropertyGroupError for properties/overwrite
    DECLARE_API_ERR_EXCEPTION(InvalidPropertyGroupErrorException, files::InvalidPropertyGroupError);

    ///exception RemovePropertiesError for properties/remove
    DECLARE_API_ERR_EXCEPTION(RemovePropertiesErrorException, files::RemovePropertiesError);

    ///exception PropertyTemplateError for properties/template/get
    DECLARE_API_ERR_EXCEPTION(PropertyTemplateErrorException, properties::PropertyTemplateError);

    ///exception UpdatePropertiesError for properties/update
    DECLARE_API_ERR_EXCEPTION(UpdatePropertiesErrorException, files::UpdatePropertiesError);

    ///exception RestoreError for restore
    DECLARE_API_ERR_EXCEPTION(RestoreErrorException, files::RestoreError);

    ///exception SaveUrlError for save_url
    DECLARE_API_ERR_EXCEPTION(SaveUrlErrorException, files::SaveUrlError);

    ///exception PollError for save_url/check_job_status
    DECLARE_API_ERR_EXCEPTION(PollErrorException, async::PollError);

    ///exception SearchError for search
    DECLARE_API_ERR_EXCEPTION(SearchErrorException, files::SearchError);

    ///exception UploadError for upload
    DECLARE_API_ERR_EXCEPTION(UploadErrorException, files::UploadError);

    ///exception UploadSessionLookupError for upload_session/append
    DECLARE_API_ERR_EXCEPTION(UploadSessionLookupErrorException, files::UploadSessionLookupError);

    ///exception UploadSessionFinishError for upload_session/finish
    DECLARE_API_ERR_EXCEPTION(UploadSessionFinishErrorException, files::UploadSessionFinishError);


    class FilesRoutes: public DropboxRouteBase{
    public:
        FilesRoutes(Endpoint* ep):DropboxRouteBase(ep){};
            /**
            ApiRoute('alpha/get_metadata')


            Returns the metadata for a file or folder. This is an alpha endpoint
            compatible with the properties API. Note: Metadata for the root
            folder is unsupported.

            on error:AlphaGetMetadataError throws exception AlphaGetMetadataErrorException
            */
        std::unique_ptr<Metadata> alphaGetMetadata(const AlphaGetMetadataArg& );
        void alphaGetMetadata_Async(
            const AlphaGetMetadataArg&,
            std::function<void(std::unique_ptr<Metadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('alpha/upload')


            Create a new file with the contents provided in the request. Note
            that this endpoint is part of the properties API alpha and is
            slightly different from :meth:`upload`. Do not use this to upload a
            file larger than 150 MB. Instead, create an upload session with
            :meth:`upload_session_start`.

            on error:UploadErrorWithProperties throws exception UploadErrorWithPropertiesException
            */
        std::unique_ptr<FileMetadata> alphaUpload(const CommitInfoWithProperties& , QIODevice* readFrom);
        void alphaUpload_Async(
            const CommitInfoWithProperties&,
            QIODevice* data,
            std::function<void(std::unique_ptr<FileMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('copy')


            Copy a file or folder to a different location in the user's Dropbox.
            If the source path is a folder all its contents will be copied.

            on error:RelocationError throws exception RelocationErrorException
            */
        std::unique_ptr<Metadata> copy(const RelocationArg& );
        void copy_Async(
            const RelocationArg&,
            std::function<void(std::unique_ptr<Metadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('copy_reference/get')


            Get a copy reference to a file or folder. This reference string can
            be used to save that file or folder to another user's Dropbox by
            passing it to :meth:`copy_reference_save`.

            on error:GetCopyReferenceError throws exception GetCopyReferenceErrorException
            */
        std::unique_ptr<GetCopyReferenceResult> copyReferenceGet(const GetCopyReferenceArg& );
        void copyReferenceGet_Async(
            const GetCopyReferenceArg&,
            std::function<void(std::unique_ptr<GetCopyReferenceResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('copy_reference/save')


            Save a copy reference returned by :meth:`copy_reference_get` to the
            user's Dropbox.

            on error:SaveCopyReferenceError throws exception SaveCopyReferenceErrorException
            */
        std::unique_ptr<SaveCopyReferenceResult> copyReferenceSave(const SaveCopyReferenceArg& );
        void copyReferenceSave_Async(
            const SaveCopyReferenceArg&,
            std::function<void(std::unique_ptr<SaveCopyReferenceResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('create_folder')


            Create a folder at a given path.

            on error:CreateFolderError throws exception CreateFolderErrorException
            */
        std::unique_ptr<FolderMetadata> createFolder(const CreateFolderArg& );
        void createFolder_Async(
            const CreateFolderArg&,
            std::function<void(std::unique_ptr<FolderMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('delete')


            Delete the file or folder at a given path. If the path is a folder,
            all its contents will be deleted too. A successful response
            indicates that the file or folder was deleted. The returned metadata
            will be the corresponding :class:`FileMetadata` or
            :class:`FolderMetadata` for the item at time of deletion, and not a
            :class:`DeletedMetadata` object.

            on error:DeleteError throws exception DeleteErrorException
            */
        std::unique_ptr<Metadata> deleteOperation(const DeleteArg& );
        void deleteOperation_Async(
            const DeleteArg&,
            std::function<void(std::unique_ptr<Metadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('download')


            Download a file from a user's Dropbox.

            on error:DownloadError throws exception DownloadErrorException
            */
        std::unique_ptr<FileMetadata> download(const DownloadArg& , QIODevice* writeTo);
        void download_Async(
            const DownloadArg&,
            QIODevice* data,
            std::function<void(std::unique_ptr<FileMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('get_metadata')


            Returns the metadata for a file or folder. Note: Metadata for the
            root folder is unsupported.

            on error:GetMetadataError throws exception GetMetadataErrorException
            */
        std::unique_ptr<Metadata> getMetadata(const GetMetadataArg& );
        void getMetadata_Async(
            const GetMetadataArg&,
            std::function<void(std::unique_ptr<Metadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('get_preview')


            Get a preview for a file. Currently previews are only generated for
            the files with  the following extensions: .doc, .docx, .docm, .ppt,
            .pps, .ppsx, .ppsm, .pptx, .pptm,  .xls, .xlsx, .xlsm, .rtf

            on error:PreviewError throws exception PreviewErrorException
            */
        std::unique_ptr<FileMetadata> getPreview(const PreviewArg& , QIODevice* writeTo);
        void getPreview_Async(
            const PreviewArg&,
            QIODevice* data,
            std::function<void(std::unique_ptr<FileMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('get_temporary_link')


            Get a temporary link to stream content of a file. This link will
            expire in four hours and afterwards you will get 410 Gone.
            Content-Type of the link is determined automatically by the file's
            mime type.

            on error:GetTemporaryLinkError throws exception GetTemporaryLinkErrorException
            */
        std::unique_ptr<GetTemporaryLinkResult> getTemporaryLink(const GetTemporaryLinkArg& );
        void getTemporaryLink_Async(
            const GetTemporaryLinkArg&,
            std::function<void(std::unique_ptr<GetTemporaryLinkResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('get_thumbnail')


            Get a thumbnail for an image. This method currently supports files
            with the following file extensions: jpg, jpeg, png, tiff, tif, gif
            and bmp. Photos that are larger than 20MB in size won't be converted
            to a thumbnail.

            on error:ThumbnailError throws exception ThumbnailErrorException
            */
        std::unique_ptr<FileMetadata> getThumbnail(const ThumbnailArg& , QIODevice* writeTo);
        void getThumbnail_Async(
            const ThumbnailArg&,
            QIODevice* data,
            std::function<void(std::unique_ptr<FileMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('list_folder')


            Returns the contents of a folder.

            on error:ListFolderError throws exception ListFolderErrorException
            */
        std::unique_ptr<ListFolderResult> listFolder(const ListFolderArg& );
        void listFolder_Async(
            const ListFolderArg&,
            std::function<void(std::unique_ptr<ListFolderResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('list_folder/continue')


            Once a cursor has been retrieved from :meth:`list_folder`, use this
            to paginate through all files and retrieve updates to the folder.

            on error:ListFolderContinueError throws exception ListFolderContinueErrorException
            */
        std::unique_ptr<ListFolderResult> listFolderContinue(const ListFolderContinueArg& );
        void listFolderContinue_Async(
            const ListFolderContinueArg&,
            std::function<void(std::unique_ptr<ListFolderResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('list_folder/get_latest_cursor')


            A way to quickly get a cursor for the folder's state. Unlike
            :meth:`list_folder`, :meth:`list_folder_get_latest_cursor` doesn't
            return any entries. This endpoint is for app which only needs to
            know about new files and modifications and doesn't need to know
            about files that already exist in Dropbox.

            on error:ListFolderError throws exception ListFolderErrorException
            */
        std::unique_ptr<ListFolderGetLatestCursorResult> listFolderGetLatestCursor(const ListFolderArg& );
        void listFolderGetLatestCursor_Async(
            const ListFolderArg&,
            std::function<void(std::unique_ptr<ListFolderGetLatestCursorResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('list_folder/longpoll')


            A longpoll endpoint to wait for changes on an account. In
            conjunction with :meth:`list_folder_continue`, this call gives you a
            low-latency way to monitor an account for file changes. The
            connection will block until there are changes available or a timeout
            occurs. This endpoint is useful mostly for client-side apps. If
            you're looking for server-side notifications, check out our
            `webhooks documentation
            <https://www.dropbox.com/developers/reference/webhooks>`_.

            on error:ListFolderLongpollError throws exception ListFolderLongpollErrorException
            */
        std::unique_ptr<ListFolderLongpollResult> listFolderLongpoll(const ListFolderLongpollArg& );
        void listFolderLongpoll_Async(
            const ListFolderLongpollArg&,
            std::function<void(std::unique_ptr<ListFolderLongpollResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('list_revisions')


            Return revisions of a file

            on error:ListRevisionsError throws exception ListRevisionsErrorException
            */
        std::unique_ptr<ListRevisionsResult> listRevisions(const ListRevisionsArg& );
        void listRevisions_Async(
            const ListRevisionsArg&,
            std::function<void(std::unique_ptr<ListRevisionsResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('move')


            Move a file or folder to a different location in the user's Dropbox.
            If the source path is a folder all its contents will be moved.

            on error:RelocationError throws exception RelocationErrorException
            */
        std::unique_ptr<Metadata> move(const RelocationArg& );
        void move_Async(
            const RelocationArg&,
            std::function<void(std::unique_ptr<Metadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('permanently_delete')


            Permanently delete the file or folder at a given path (see
            https://www.dropbox.com/en/help/40). Note: This endpoint is only
            available for Dropbox Business apps.

            on error:DeleteError throws exception DeleteErrorException
            */
        void permanentlyDelete(const DeleteArg& );
        void permanentlyDelete_Async(
            const DeleteArg&,
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('properties/add')


            Add custom properties to a file using a filled property template.
            See properties/template/add to create new property templates.

            on error:AddPropertiesError throws exception AddPropertiesErrorException
            */
        void propertiesAdd(const PropertyGroupWithPath& );
        void propertiesAdd_Async(
            const PropertyGroupWithPath&,
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('properties/overwrite')


            Overwrite custom properties from a specified template associated
            with a file.

            on error:InvalidPropertyGroupError throws exception InvalidPropertyGroupErrorException
            */
        void propertiesOverwrite(const PropertyGroupWithPath& );
        void propertiesOverwrite_Async(
            const PropertyGroupWithPath&,
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('properties/remove')


            Remove all custom properties from a specified template associated
            with a file. To remove specific property key value pairs, see
            :meth:`properties_update`. To update a property template, see
            properties/template/update. Property templates can't be removed once
            created.

            on error:RemovePropertiesError throws exception RemovePropertiesErrorException
            */
        void propertiesRemove(const RemovePropertiesArg& );
        void propertiesRemove_Async(
            const RemovePropertiesArg&,
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('properties/template/get')


            Get the schema for a specified template.

            on error:PropertyTemplateError throws exception PropertyTemplateErrorException
            */
        std::unique_ptr<properties::GetPropertyTemplateResult> propertiesTemplateGet(const properties::GetPropertyTemplateArg& );
        void propertiesTemplateGet_Async(
            const properties::GetPropertyTemplateArg&,
            std::function<void(std::unique_ptr<properties::GetPropertyTemplateResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('properties/template/list')


            Get the property template identifiers for a user. To get the schema
            of each template use :meth:`properties_template_get`.

            on error:PropertyTemplateError throws exception PropertyTemplateErrorException
            */
        std::unique_ptr<properties::ListPropertyTemplateIds> propertiesTemplateList();
        void propertiesTemplateList_Async(
            std::function<void(std::unique_ptr<properties::ListPropertyTemplateIds>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('properties/update')


            Add, update or remove custom properties from a specified template
            associated with a file. Fields that already exist and not described
            in the request will not be modified.

            on error:UpdatePropertiesError throws exception UpdatePropertiesErrorException
            */
        void propertiesUpdate(const UpdatePropertyGroupArg& );
        void propertiesUpdate_Async(
            const UpdatePropertyGroupArg&,
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('restore')


            Restore a file to a specific revision

            on error:RestoreError throws exception RestoreErrorException
            */
        std::unique_ptr<FileMetadata> restore(const RestoreArg& );
        void restore_Async(
            const RestoreArg&,
            std::function<void(std::unique_ptr<FileMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('save_url')


            Save a specified URL into a file in user's Dropbox. If the given
            path already exists, the file will be renamed to avoid the conflict
            (e.g. myfile (1).txt).

            on error:SaveUrlError throws exception SaveUrlErrorException
            */
        std::unique_ptr<SaveUrlResult> saveUrl(const SaveUrlArg& );
        void saveUrl_Async(
            const SaveUrlArg&,
            std::function<void(std::unique_ptr<SaveUrlResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('save_url/check_job_status')


            Check the status of a :meth:`save_url` job.

            on error:PollError throws exception PollErrorException
            */
        std::unique_ptr<SaveUrlJobStatus> saveUrlCheckJobStatus(const async::PollArg& );
        void saveUrlCheckJobStatus_Async(
            const async::PollArg&,
            std::function<void(std::unique_ptr<SaveUrlJobStatus>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('search')


            Searches for files and folders. Note: Recent changes may not
            immediately be reflected in search results due to a short delay in
            indexing.

            on error:SearchError throws exception SearchErrorException
            */
        std::unique_ptr<SearchResult> search(const SearchArg& );
        void search_Async(
            const SearchArg&,
            std::function<void(std::unique_ptr<SearchResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('upload')


            Create a new file with the contents provided in the request. Do not
            use this to upload a file larger than 150 MB. Instead, create an
            upload session with :meth:`upload_session_start`.

            on error:UploadError throws exception UploadErrorException
            */
        std::unique_ptr<FileMetadata> upload(const CommitInfo& , QIODevice* readFrom);
        void upload_Async(
            const CommitInfo&,
            QIODevice* data,
            std::function<void(std::unique_ptr<FileMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('upload_session/append')


            Append more data to an upload session. A single request should not
            upload more than 150 MB of file contents.

            on error:UploadSessionLookupError throws exception UploadSessionLookupErrorException
            */
        void uploadSessionAppend(const UploadSessionCursor& , QIODevice* readFrom);
        void uploadSessionAppend_Async(
            const UploadSessionCursor&,
            QIODevice* data,
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('upload_session/append_v2')


            Append more data to an upload session. When the parameter close is
            set, this call will close the session. A single request should not
            upload more than 150 MB of file contents.

            on error:UploadSessionLookupError throws exception UploadSessionLookupErrorException
            */
        void uploadSessionAppendV2(const UploadSessionAppendArg& , QIODevice* readFrom);
        void uploadSessionAppendV2_Async(
            const UploadSessionAppendArg&,
            QIODevice* data,
            std::function<void()> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('upload_session/finish')


            Finish an upload session and save the uploaded data to the given
            file path. A single request should not upload more than 150 MB of
            file contents.

            on error:UploadSessionFinishError throws exception UploadSessionFinishErrorException
            */
        std::unique_ptr<FileMetadata> uploadSessionFinish(const UploadSessionFinishArg& , QIODevice* readFrom);
        void uploadSessionFinish_Async(
            const UploadSessionFinishArg&,
            QIODevice* data,
            std::function<void(std::unique_ptr<FileMetadata>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('upload_session/finish_batch')


            This route helps you commit many files at once into a user's
            Dropbox. Use :meth:`upload_session_start` and
            :meth:`upload_session_append_v2` to upload file contents. We
            recommend uploading many files in parallel to increase throughput.
            Once the file contents have been uploaded, rather than calling
            :meth:`upload_session_finish`, use this route to finish all your
            upload sessions in a single request. ``UploadSessionStartArg.close``
            or ``UploadSessionAppendArg.close`` needs to be true for last
            :meth:`upload_session_start` or :meth:`upload_session_append_v2`
            call. This route will return job_id immediately and do the async
            commit job in background. We have another route
            :meth:`upload_session_finish_batch_check` to check the job status.
            For the same account, this route should be executed serially. That
            means you should not start next job before current job finishes.
            Also we only allow up to 1000 entries in a single request

            */
        std::unique_ptr<async::LaunchEmptyResult> uploadSessionFinishBatch(const UploadSessionFinishBatchArg& );
        void uploadSessionFinishBatch_Async(
            const UploadSessionFinishBatchArg&,
            std::function<void(std::unique_ptr<async::LaunchEmptyResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('upload_session/finish_batch/check')


            Returns the status of an asynchronous job for
            :meth:`upload_session_finish_batch`. If success, it returns list of
            result for each entry

            on error:PollError throws exception PollErrorException
            */
        std::unique_ptr<UploadSessionFinishBatchJobStatus> uploadSessionFinishBatchCheck(const async::PollArg& );
        void uploadSessionFinishBatchCheck_Async(
            const async::PollArg&,
            std::function<void(std::unique_ptr<UploadSessionFinishBatchJobStatus>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

            /**
            ApiRoute('upload_session/start')


            Upload sessions allow you to upload a single file using multiple
            requests. This call starts a new upload session with the given data.
            You can then use :meth:`upload_session_append_v2` to add more data
            and :meth:`upload_session_finish` to save all the data to a file in
            Dropbox. A single request should not upload more than 150 MB of file
            contents.

            */
        std::unique_ptr<UploadSessionStartResult> uploadSessionStart(const UploadSessionStartArg& , QIODevice* readFrom);
        void uploadSessionStart_Async(
            const UploadSessionStartArg&,
            QIODevice* data,
            std::function<void(std::unique_ptr<UploadSessionStartResult>)> completed_callback = nullptr,
            std::function<void(std::unique_ptr<DropboxException>)> failed_callback = nullptr);

    protected:
    };//FilesRoutes

}//files
}//dropboxQt
