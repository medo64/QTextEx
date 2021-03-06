#pragma once

#include <QString>
#include "storage/fileitem.h"

class Deletion {

    public:
        static bool deleteFile(FileItem* file);
        static bool overwriteFile(FileItem* file);
        static bool recycleFile(FileItem* file);
        static bool deleteFolder(FolderItem* folder);
        static bool overwriteFolder(FolderItem* folder);
        static bool recycleFolder(FolderItem* folder);

};
