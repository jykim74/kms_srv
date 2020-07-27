#ifndef KMS_DEFINE_H
#define KMS_DEFINE_H

#define JS_KMS_OK               0

#define JS_KMS_ERROR_SYSTEM                 1000
#define JS_KMS_ERROR_NO_OBJECT              1001
#define JS_KMS_ERROR_FAIL_GET_VALUE         1002
#define JS_KMS_ERROR_FAIL_DESTROY_OBJECT    1003
#define JS_KMS_ERROR_FAIL_GEN_KEY           1004
#define JS_KMS_ERROR_NO_PAYLOAD             1005
#define JS_KMS_ERROR_NOT_SUPPORT_PARAM      1006
#define JS_KMS_ERROR_INVALID_VALUE          1007
#define JS_KMS_ERROR_NOT_ACTIVATE           1008

const char *getErrorMsg( int nNum );

#endif // KMS_DEFINE_H
