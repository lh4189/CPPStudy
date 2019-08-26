#ifndef __UTILS_H__
#define __UTILS_H__

#include <string>
#include "stdio.h"

#define LOG_TAG "CppX"
using namespace std;
void LOGI(string msg);
void LOGE();


#define GET_FILENAME Utils::getFileName

#define LOGI(format,args...) printf("["LOG_TAG " ] " "[I  ]" "%s:%d %s() " format "\n", GET_FILENAME(__FILE__),__LINE__, __FUNCTION__, ##args)
#define LOGE(format,args...) printf("["LOG_TAG " ] " "[I  ]" "%s:%d %s() " format "\n", GET_FILENAME(__FILE__),__LINE__, __FUNCTION__, ##args)

class Utils{
public:
    static const char* getFileName(const char* pFilePath);

};

#endif // __UTILS_H__
