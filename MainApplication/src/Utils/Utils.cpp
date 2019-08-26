#include "../../include/Utils.h"
#include <string.h>
#include <iostream>
using namespace std;

const char* Utils::getFileName(const char* pFilePath)
{
    const char* pFileName = strrchr(pFilePath,'/');

    if (NULL != pFileName) {
        pFileName += 1;
    } else {
        pFileName = pFilePath;
    }
    return pFileName;
}
