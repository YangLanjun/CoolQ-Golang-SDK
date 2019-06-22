#include <stdint.h>
#include <stdlib.h>

#define CQEVENT extern int32_t __stdcall

#define CQAPI(RetType, Name, ...)                            \
    RetType(__stdcall *Name##_Ptr)(int32_t ac, __VA_ARGS__); \
    RetType Name(__VA_ARGS__)

extern char *__stdcall AppInfo();
//events
CQEVENT Initialize(int32_t p0);
CQEVENT EVENT_ON_ENABLE();

//apis
CQAPI(int32_t, CQ_addLog, int32_t priority, char *type, char *content);
CQAPI(int32_t, CQ_sendPrivateMsg, int64_t QQ, char *msg);
CQAPI(int32_t, CQ_sendGroupMsg, int64_t GroupNum, char *msg);
CQAPI(int32_t, CQ_sendDiscussMsg, int64_t DiscussNum, char *msg);
CQAPI(int32_t, CQ_sendLike, int64_t QQ);
CQAPI(int32_t, CQ_sendLikeV2, int64_t QQ, int32_t times);
CQAPI(char *, CQ_getCookies);
CQAPI(char *, CQ_getRecord, char *file, char *outformat);
CQAPI(int32_t, CQ_getCsrfToken);
CQAPI(char *, CQ_getAppDirectory);
CQAPI(int64_t, CQ_getLoginQQ);
CQAPI(char *, CQ_getLoginNick);
CQAPI(int32_t, CQ_setGroupKick, int64_t GroupNum, int64_t QQID, int32_t RejectNextTime);
CQAPI(int32_t, CQ_setGroupBan, int64_t GroupNum, int64_t QQ, int64_t BanTime);
CQAPI(int32_t, CQ_setGroupAdmin, int64_t GroupNum, int64_t QQID, int32_t SetAdmin);
CQAPI(int32_t, CQ_setGroupSpecialTitle, int64_t GroupNum, int64_t QQID, char *Title, int64_t TimeOut);
CQAPI(int32_t, CQ_setGroupWholeBan, int64_t GroupNum, int32_t SetBan);
CQAPI(int32_t, CQ_setGroupAnonymousBan, int64_t GroupNum, char *匿名, int64_t BanTime);
CQAPI(int32_t, CQ_setGroupAnonymous, int64_t GroupNum, int32_t 开启匿名);
CQAPI(int32_t, CQ_setGroupCard, int64_t GroupNum, int64_t QQID, char *新名片_昵称);
CQAPI(int32_t, CQ_setGroupLeave, int64_t GroupNum, int32_t 是否解散);
CQAPI(int32_t, CQ_setDiscussLeave, int64_t DiscussNum);
CQAPI(int32_t, CQ_setFriendAddRequest, char *请求反馈标识, int32_t FbType, char *remark);
CQAPI(int32_t, CQ_setGroupAddRequest, char *请求反馈标识, int32_t ReqType, int32_t FbType);
CQAPI(int32_t, CQ_setGroupAddRequestV2, char *请求反馈标识, int32_t ReqType, int32_t FbType, char *reason);
CQAPI(int32_t, CQ_setFatal, char *errmsg);
CQAPI(char *, CQ_getGroupMemberInfo, int64_t GroupNum, int64_t QQID);
CQAPI(char *, CQ_getGroupMemberInfoV2, int64_t GroupNum, int64_t QQID, int32_t 不使用缓存);
CQAPI(char *, CQ_getStrangerInfo, int64_t QQID, int32_t 不使用缓存);
CQAPI(char *, CQ_getGroupMemberList, int64_t GroupNum);
CQAPI(char *, CQ_getGroupList, int32_t AuthCode);
CQAPI(int32_t, CQ_deleteMsg, int64_t MsgId);