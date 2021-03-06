#include <curl/curl.h>

/* CURLE_* */
/* 7.15.0 */
#ifndef CURLE_TFTP_NOTFOUND
#define CURLE_TFTP_NOTFOUND 68
#endif
/* 7.20.0 */
#ifndef CURLE_RTSP_CSEQ_ERROR
#define CURLE_RTSP_CSEQ_ERROR 85
#endif
/* 7.20.0 */
#ifndef CURLE_FTP_PRET_FAILED
#define CURLE_FTP_PRET_FAILED 84
#endif
/* 7.21.5 */
#ifndef CURLE_UNKNOWN_OPTION
#define CURLE_UNKNOWN_OPTION 48
#endif
/* 7.24.0 */
#ifndef CURLE_FTP_ACCEPT_FAILED
#define CURLE_FTP_ACCEPT_FAILED 10
#endif
/* 7.16.3 */
#ifndef CURLE_UPLOAD_FAILED
#define CURLE_UPLOAD_FAILED 25
#endif
/* 7.12.0 */
#ifndef CURLE_INTERFACE_FAILED
#define CURLE_INTERFACE_FAILED 45
#endif
/* 7.17.0 */
#ifndef CURLE_REMOTE_FILE_EXISTS
#define CURLE_REMOTE_FILE_EXISTS 73
#endif
/* 7.21.5 */
#ifndef CURLE_NOT_BUILT_IN
#define CURLE_NOT_BUILT_IN 4
#endif
/* 7.21.0 */
#ifndef CURLE_FTP_BAD_FILE_LIST
#define CURLE_FTP_BAD_FILE_LIST 87
#endif
/* 7.12.3 */
#ifndef CURLE_SSL_ENGINE_INITFAILED
#define CURLE_SSL_ENGINE_INITFAILED 66
#endif
/* 7.12.3 */
#ifndef CURLE_SEND_FAIL_REWIND
#define CURLE_SEND_FAIL_REWIND 65
#endif
/* 7.19.0 */
#ifndef CURLE_SSL_ISSUER_ERROR
#define CURLE_SSL_ISSUER_ERROR 83
#endif
/* 7.16.1 */
#ifndef CURLE_SSL_SHUTDOWN_FAILED
#define CURLE_SSL_SHUTDOWN_FAILED 80
#endif
/* 7.24.0 */
#ifndef CURLE_FTP_ACCEPT_TIMEOUT
#define CURLE_FTP_ACCEPT_TIMEOUT 12
#endif
/* 7.17.0 */
#ifndef CURLE_FTP_COULDNT_SET_TYPE
#define CURLE_FTP_COULDNT_SET_TYPE 17
#endif
/* 7.13.1 */
#ifndef CURLE_LOGIN_DENIED
#define CURLE_LOGIN_DENIED 67
#endif
/* 7.16.0 */
#ifndef CURLE_SSL_CACERT_BADFILE
#define CURLE_SSL_CACERT_BADFILE 77
#endif
/* 7.16.1 */
#ifndef CURLE_REMOTE_FILE_NOT_FOUND
#define CURLE_REMOTE_FILE_NOT_FOUND 78
#endif
/* 7.15.0 */
#ifndef CURLE_TFTP_UNKNOWNID
#define CURLE_TFTP_UNKNOWNID 72
#endif
/* 7.17.0 */
#ifndef CURLE_REMOTE_DISK_FULL
#define CURLE_REMOTE_DISK_FULL 70
#endif
/* 7.17.0 */
#ifndef CURLE_REMOTE_ACCESS_DENIED
#define CURLE_REMOTE_ACCESS_DENIED 9
#endif
/* 7.15.0 */
#ifndef CURLE_TFTP_PERM
#define CURLE_TFTP_PERM 69
#endif
/* 7.21.0 */
#ifndef CURLE_CHUNK_FAILED
#define CURLE_CHUNK_FAILED 88
#endif
/* 7.15.4 */
#ifndef CURLE_CONV_REQD
#define CURLE_CONV_REQD 76
#endif
/* 7.16.1 */
#ifndef CURLE_SSH
#define CURLE_SSH 79
#endif
/* 7.18.2 */
#ifndef CURLE_AGAIN
#define CURLE_AGAIN 81
#endif
/* 7.19.0 */
#ifndef CURLE_SSL_CRL_BADFILE
#define CURLE_SSL_CRL_BADFILE 82
#endif
/* 7.15.0 */
#ifndef CURLE_TFTP_ILLEGAL
#define CURLE_TFTP_ILLEGAL 71
#endif
/* 7.17.0 */
#ifndef CURLE_QUOTE_ERROR
#define CURLE_QUOTE_ERROR 21
#endif
/* 7.20.0 */
#ifndef CURLE_RTSP_SESSION_ERROR
#define CURLE_RTSP_SESSION_ERROR 86
#endif
/* 7.17.1 */
#ifndef CURLE_PEER_FAILED_VERIFICATION
#define CURLE_PEER_FAILED_VERIFICATION 51
#endif
/* 7.17.0 */
#ifndef CURLE_USE_SSL_FAILED
#define CURLE_USE_SSL_FAILED 64
#endif
/* 7.15.0 */
#ifndef CURLE_TFTP_NOSUCHUSER
#define CURLE_TFTP_NOSUCHUSER 74
#endif
/* 7.17.0 */
#ifndef CURLE_RANGE_ERROR
#define CURLE_RANGE_ERROR 33
#endif
/* 7.15.4 */
#ifndef CURLE_CONV_FAILED
#define CURLE_CONV_FAILED 75
#endif


/* CURLOPT_* */
/* 7.16.2 */
#ifndef CURLOPT_HTTP_TRANSFER_DECODING
#define CURLOPT_HTTP_TRANSFER_DECODING CURLOPTTYPE_LONG
#endif
/* 7.20.0 */
#ifndef CURLOPT_INTERLEAVEDATA
#define CURLOPT_INTERLEAVEDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.1 */
#ifndef CURLOPT_SSH_PUBLIC_KEYFILE
#define CURLOPT_SSH_PUBLIC_KEYFILE CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.1 */
#ifndef CURLOPT_FTP_SSL_CCC
#define CURLOPT_FTP_SSL_CCC CURLOPTTYPE_LONG
#endif
/* 7.16.2 */
#ifndef CURLOPT_TIMEOUT_MS
#define CURLOPT_TIMEOUT_MS CURLOPTTYPE_LONG
#endif
/* 7.15.2 */
#ifndef CURLOPT_LOCALPORT
#define CURLOPT_LOCALPORT CURLOPTTYPE_LONG
#endif
/* 7.19.1 */
#ifndef CURLOPT_PROXYUSERNAME
#define CURLOPT_PROXYUSERNAME CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.21.0 */
#ifndef CURLOPT_CHUNK_END_FUNCTION
#define CURLOPT_CHUNK_END_FUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.25.0 */
#ifndef CURLOPT_TCP_KEEPINTVL
#define CURLOPT_TCP_KEEPINTVL CURLOPTTYPE_LONG
#endif
/* 7.25.0 */
#ifndef CURLOPT_TCP_KEEPALIVE
#define CURLOPT_TCP_KEEPALIVE CURLOPTTYPE_LONG
#endif
/* 7.15.4 */
#ifndef CURLOPT_CONV_FROM_UTF8_FUNCTION
#define CURLOPT_CONV_FROM_UTF8_FUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_RTSP_SESSION_ID
#define CURLOPT_RTSP_SESSION_ID CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.21.0 */
#ifndef CURLOPT_FNMATCH_FUNCTION
#define CURLOPT_FNMATCH_FUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.16.2 */
#ifndef CURLOPT_HTTP_CONTENT_DECODING
#define CURLOPT_HTTP_CONTENT_DECODING CURLOPTTYPE_LONG
#endif
/* 7.16.0 */
#ifndef CURLOPT_SOCKOPTDATA
#define CURLOPT_SOCKOPTDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.14.1 */
#ifndef CURLOPT_IGNORE_CONTENT_LENGTH
#define CURLOPT_IGNORE_CONTENT_LENGTH CURLOPTTYPE_LONG
#endif
/* 7.12.3 */
#ifndef CURLOPT_IOCTLFUNCTION
#define CURLOPT_IOCTLFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.21.6 */
#ifndef CURLOPT_TRANSFER_ENCODING
#define CURLOPT_TRANSFER_ENCODING CURLOPTTYPE_LONG
#endif
/* 7.19.6 */
#ifndef CURLOPT_SSH_KNOWNHOSTS
#define CURLOPT_SSH_KNOWNHOSTS CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_RTSP_SERVER_CSEQ
#define CURLOPT_RTSP_SERVER_CSEQ CURLOPTTYPE_LONG
#endif
/* 7.16.0 */
#ifndef CURLOPT_SOCKOPTFUNCTION
#define CURLOPT_SOCKOPTFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.15.5 */
#ifndef CURLOPT_MAX_RECV_SPEED_LARGE
#define CURLOPT_MAX_RECV_SPEED_LARGE CURLOPTTYPE_OFF_T
#endif
/* 7.20.0 */
#ifndef CURLOPT_MAIL_FROM
#define CURLOPT_MAIL_FROM CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.21.0 */
#ifndef CURLOPT_WILDCARDMATCH
#define CURLOPT_WILDCARDMATCH CURLOPTTYPE_LONG
#endif
/* 7.15.4 */
#ifndef CURLOPT_CONV_TO_NETWORK_FUNCTION
#define CURLOPT_CONV_TO_NETWORK_FUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.21.6 */
#ifndef CURLOPT_ACCEPT_ENCODING
#define CURLOPT_ACCEPT_ENCODING CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.15.2 */
#ifndef CURLOPT_CONNECT_ONLY
#define CURLOPT_CONNECT_ONLY CURLOPTTYPE_LONG
#endif
/* 7.22.0 */
#ifndef CURLOPT_GSSAPI_DELEGATION
#define CURLOPT_GSSAPI_DELEGATION CURLOPTTYPE_LONG
#endif
/* 7.15.1 */
#ifndef CURLOPT_FTP_FILEMETHOD
#define CURLOPT_FTP_FILEMETHOD CURLOPTTYPE_LONG
#endif
/* 7.21.7 */
#ifndef CURLOPT_CLOSESOCKETFUNCTION
#define CURLOPT_CLOSESOCKETFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.25.0 */
#ifndef CURLOPT_TCP_KEEPIDLE
#define CURLOPT_TCP_KEEPIDLE CURLOPTTYPE_LONG
#endif
/* 7.20.0 */
#ifndef CURLOPT_RTSP_CLIENT_CSEQ
#define CURLOPT_RTSP_CLIENT_CSEQ CURLOPTTYPE_LONG
#endif
/* 7.21.0 */
#ifndef CURLOPT_CHUNK_BGN_FUNCTION
#define CURLOPT_CHUNK_BGN_FUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.17.0 */
#ifndef CURLOPT_USE_SSL
#define CURLOPT_USE_SSL CURLOPTTYPE_LONG
#endif
/* 7.19.4 */
#ifndef CURLOPT_PROTOCOLS
#define CURLOPT_PROTOCOLS CURLOPTTYPE_LONG
#endif
/* 7.19.6 */
#ifndef CURLOPT_SSH_KEYFUNCTION
#define CURLOPT_SSH_KEYFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_RTSPHEADER
#define CURLOPT_RTSPHEADER CURLOPT_HTTPHEADER
#endif
/* 7.19.0 */
#ifndef CURLOPT_CRLFILE
#define CURLOPT_CRLFILE CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.17.1 */
#ifndef CURLOPT_OPENSOCKETFUNCTION
#define CURLOPT_OPENSOCKETFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.19.1 */
#ifndef CURLOPT_PASSWORD
#define CURLOPT_PASSWORD CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.19.0 */
#ifndef CURLOPT_ISSUERCERT
#define CURLOPT_ISSUERCERT CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.25.0 */
#ifndef CURLOPT_MAIL_AUTH
#define CURLOPT_MAIL_AUTH CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.19.1 */
#ifndef CURLOPT_USERNAME
#define CURLOPT_USERNAME CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.12.2 */
#ifndef CURLOPT_FTPSSLAUTH
#define CURLOPT_FTPSSLAUTH CURLOPTTYPE_LONG
#endif
/* 7.19.1 */
#ifndef CURLOPT_PROXYPASSWORD
#define CURLOPT_PROXYPASSWORD CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.21.0 */
#ifndef CURLOPT_CHUNK_DATA
#define CURLOPT_CHUNK_DATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.4 */
#ifndef CURLOPT_NEW_DIRECTORY_PERMS
#define CURLOPT_NEW_DIRECTORY_PERMS CURLOPTTYPE_LONG
#endif
/* 7.18.0 */
#ifndef CURLOPT_SEEKFUNCTION
#define CURLOPT_SEEKFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.19.4 */
#ifndef CURLOPT_NOPROXY
#define CURLOPT_NOPROXY CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_RTSP_REQUEST
#define CURLOPT_RTSP_REQUEST CURLOPTTYPE_LONG
#endif
/* 7.17.1 */
#ifndef CURLOPT_OPENSOCKETDATA
#define CURLOPT_OPENSOCKETDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.19.1 */
#ifndef CURLOPT_CERTINFO
#define CURLOPT_CERTINFO CURLOPTTYPE_LONG
#endif
/* 7.21.4 */
#ifndef CURLOPT_TLSAUTH_TYPE
#define CURLOPT_TLSAUTH_TYPE CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.18.0 */
#ifndef CURLOPT_PROXY_TRANSFER_MODE
#define CURLOPT_PROXY_TRANSFER_MODE CURLOPTTYPE_LONG
#endif
/* 7.15.4 */
#ifndef CURLOPT_CONV_FROM_NETWORK_FUNCTION
#define CURLOPT_CONV_FROM_NETWORK_FUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.17.1 */
#ifndef CURLOPT_COPYPOSTFIELDS
#define CURLOPT_COPYPOSTFIELDS CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.17.0 */
#ifndef CURLOPT_APPEND
#define CURLOPT_APPEND CURLOPTTYPE_LONG
#endif
/* 7.15.5 */
#ifndef CURLOPT_FTP_ALTERNATIVE_TO_USER
#define CURLOPT_FTP_ALTERNATIVE_TO_USER CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.14.1 */
#ifndef CURLOPT_COOKIELIST
#define CURLOPT_COOKIELIST CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_RTSP_STREAM_URI
#define CURLOPT_RTSP_STREAM_URI CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.2 */
#ifndef CURLOPT_CONNECTTIMEOUT_MS
#define CURLOPT_CONNECTTIMEOUT_MS CURLOPTTYPE_LONG
#endif
/* 7.19.0 */
#ifndef CURLOPT_ADDRESS_SCOPE
#define CURLOPT_ADDRESS_SCOPE CURLOPTTYPE_LONG
#endif
/* 7.12.3 */
#ifndef CURLOPT_IOCTLDATA
#define CURLOPT_IOCTLDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_INTERLEAVEFUNCTION
#define CURLOPT_INTERLEAVEFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.21.4 */
#ifndef CURLOPT_TLSAUTH_PASSWORD
#define CURLOPT_TLSAUTH_PASSWORD CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.17.0 */
#ifndef CURLOPT_DIRLISTONLY
#define CURLOPT_DIRLISTONLY CURLOPTTYPE_LONG
#endif
/* 7.16.1 */
#ifndef CURLOPT_SSH_AUTH_TYPES
#define CURLOPT_SSH_AUTH_TYPES CURLOPTTYPE_LONG
#endif
/* 7.19.4 */
#ifndef CURLOPT_SOCKS5_GSSAPI_SERVICE
#define CURLOPT_SOCKS5_GSSAPI_SERVICE CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.21.3 */
#ifndef CURLOPT_RESOLVE
#define CURLOPT_RESOLVE CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.21.4 */
#ifndef CURLOPT_TLSAUTH_USERNAME
#define CURLOPT_TLSAUTH_USERNAME CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.13.0 */
#ifndef CURLOPT_FTP_ACCOUNT
#define CURLOPT_FTP_ACCOUNT CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_FTP_USE_PRET
#define CURLOPT_FTP_USE_PRET CURLOPTTYPE_LONG
#endif
/* 7.19.4 */
#ifndef CURLOPT_REDIR_PROTOCOLS
#define CURLOPT_REDIR_PROTOCOLS CURLOPTTYPE_LONG
#endif
/* 7.16.1 */
#ifndef CURLOPT_SSH_PRIVATE_KEYFILE
#define CURLOPT_SSH_PRIVATE_KEYFILE CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_MAIL_RCPT
#define CURLOPT_MAIL_RCPT CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.17.0 */
#ifndef CURLOPT_KEYPASSWD
#define CURLOPT_KEYPASSWD CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.0 */
#ifndef CURLOPT_SSL_SESSIONID_CACHE
#define CURLOPT_SSL_SESSIONID_CACHE CURLOPTTYPE_LONG
#endif
/* 7.17.1 */
#ifndef CURLOPT_SSH_HOST_PUBLIC_KEY_MD5
#define CURLOPT_SSH_HOST_PUBLIC_KEY_MD5 CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.4 */
#ifndef CURLOPT_KRBLEVEL
#define CURLOPT_KRBLEVEL CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.4 */
#ifndef CURLOPT_NEW_FILE_PERMS
#define CURLOPT_NEW_FILE_PERMS CURLOPTTYPE_LONG
#endif
/* 7.15.5 */
#ifndef CURLOPT_MAX_SEND_SPEED_LARGE
#define CURLOPT_MAX_SEND_SPEED_LARGE CURLOPTTYPE_OFF_T
#endif
/* 7.15.2 */
#ifndef CURLOPT_LOCALPORTRANGE
#define CURLOPT_LOCALPORTRANGE CURLOPTTYPE_LONG
#endif
/* 7.18.0 */
#ifndef CURLOPT_SEEKDATA
#define CURLOPT_SEEKDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.19.4 */
#ifndef CURLOPT_TFTP_BLKSIZE
#define CURLOPT_TFTP_BLKSIZE CURLOPTTYPE_LONG
#endif
/* 7.19.1 */
#ifndef CURLOPT_POSTREDIR
#define CURLOPT_POSTREDIR CURLOPTTYPE_LONG
#endif
/* 7.25.0 */
#ifndef CURLOPT_SSL_OPTIONS
#define CURLOPT_SSL_OPTIONS CURLOPTTYPE_LONG
#endif
/* 7.21.7 */
#ifndef CURLOPT_CLOSESOCKETDATA
#define CURLOPT_CLOSESOCKETDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.20.0 */
#ifndef CURLOPT_SERVER_RESPONSE_TIMEOUT
#define CURLOPT_SERVER_RESPONSE_TIMEOUT CURLOPT_FTP_RESPONSE_TIMEOUT
#endif
/* 7.20.0 */
#ifndef CURLOPT_RTSP_TRANSPORT
#define CURLOPT_RTSP_TRANSPORT CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.19.6 */
#ifndef CURLOPT_SSH_KEYDATA
#define CURLOPT_SSH_KEYDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.15.0 */
#ifndef CURLOPT_FTP_SKIP_PASV_IP
#define CURLOPT_FTP_SKIP_PASV_IP CURLOPTTYPE_LONG
#endif
/* 7.24.0 */
#ifndef CURLOPT_DNS_SERVERS
#define CURLOPT_DNS_SERVERS CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.21.0 */
#ifndef CURLOPT_FNMATCH_DATA
#define CURLOPT_FNMATCH_DATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.19.4 */
#ifndef CURLOPT_SOCKS5_GSSAPI_NEC
#define CURLOPT_SOCKS5_GSSAPI_NEC CURLOPTTYPE_LONG
#endif
/* 7.24.0 */
#ifndef CURLOPT_ACCEPTTIMEOUT_MS
#define CURLOPT_ACCEPTTIMEOUT_MS CURLOPTTYPE_LONG
#endif

  /* three convenient "aliases" that follow the name scheme better */
#define CURLOPT_WRITEDATA CURLOPT_FILE
#define CURLOPT_READDATA  CURLOPT_INFILE
#define CURLOPT_HEADERDATA CURLOPT_WRITEHEADER
#define CURLOPT_RTSPHEADER CURLOPT_HTTPHEADER

/* CURLMOPT_* */
/* 7.15.4 */
#ifndef CURLMOPT_SOCKETFUNCTION
#define CURLMOPT_SOCKETFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.16.3 */
#ifndef CURLMOPT_MAXCONNECTS
#define CURLMOPT_MAXCONNECTS CURLOPTTYPE_LONG
#endif
/* 7.16.0 */
#ifndef CURLMOPT_TIMERFUNCTION
#define CURLMOPT_TIMERFUNCTION CURLOPTTYPE_FUNCTIONPOINT
#endif
/* 7.16.0 */
#ifndef CURLMOPT_TIMERDATA
#define CURLMOPT_TIMERDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.15.4 */
#ifndef CURLMOPT_SOCKETDATA
#define CURLMOPT_SOCKETDATA CURLOPTTYPE_OBJECTPOINT
#endif
/* 7.16.0 */
#ifndef CURLMOPT_PIPELINING
#define CURLMOPT_PIPELINING CURLOPTTYPE_LONG
#endif

/* CURLM_* */
/* 7.15.4 */
#ifndef CURLM_UNKNOWN_OPTION
#define CURLM_UNKNOWN_OPTION -1
#endif
/* 7.15.5 */
#ifndef CURLM_CALL_MULTI_SOCKET
#define CURLM_CALL_MULTI_SOCKET -1
#endif
/* 7.15.4 */
#ifndef CURLM_BAD_SOCKET
#define CURLM_BAD_SOCKET -1
#endif

/* CURLFTP_* */
/* 7.19.4 */
#ifndef CURLFTP_CREATE_DIR
#define CURLFTP_CREATE_DIR -1
#endif
/* 7.19.4 */
#ifndef CURLFTP_CREATE_DIR_NONE
#define CURLFTP_CREATE_DIR_NONE -1
#endif
/* 7.19.4 */
#ifndef CURLFTP_CREATE_DIR_RETRY
#define CURLFTP_CREATE_DIR_RETRY -1
#endif

/* CURLPROXY_* */
/* 7.18.0 */
#ifndef CURLPROXY_SOCKS4A
#define CURLPROXY_SOCKS4A 6
#endif
/* 7.19.4 */
#ifndef CURLPROXY_HTTP_1_0
#define CURLPROXY_HTTP_1_0 1
#endif
/* 7.18.0 */
#ifndef CURLPROXY_SOCKS5_HOSTNAME
#define CURLPROXY_SOCKS5_HOSTNAME 7
#endif

/* CURL_READFUNC_PAUSE             7.18.0 */
#ifndef CURL_READFUNC_PAUSE
#define CURL_READFUNC_PAUSE 0x10000001
#endif

/* CURLPAUSE_* 7.18.0 */
#ifndef CURLPAUSE_ALL
#define CURLPAUSE_RECV      (1<<0)
#define CURLPAUSE_RECV_CONT (0)

#define CURLPAUSE_SEND      (1<<2)
#define CURLPAUSE_SEND_CONT (0)

#define CURLPAUSE_ALL       (CURLPAUSE_RECV|CURLPAUSE_SEND)
#define CURLPAUSE_CONT      (CURLPAUSE_RECV_CONT|CURLPAUSE_SEND_CONT)
#endif

/* CURL_VERSION_* */
#ifndef CURL_VERSION_IDN
#define CURL_VERSION_IDN       (1<<10)
#endif
#ifndef CURL_VERSION_SSPI
#define CURL_VERSION_SSPI      (1<<11)
#endif
#ifndef CURL_VERSION_CONV
#define CURL_VERSION_CONV      (1<<12)
#endif
#ifndef CURL_VERSION_CURLDEBUG
#define CURL_VERSION_CURLDEBUG (1<<13)
#endif
#ifndef CURL_VERSION_TLSAUTH_SRP
#define CURL_VERSION_TLSAUTH_SRP (1<<14)
#endif
#ifndef CURL_VERSION_NTLM_WB
#define CURL_VERSION_NTLM_WB   (1<<15)
#endif

/* CURLINFO_* */
/* 7.19.4 */
#ifndef CURLINFO_CONDITION_UNMET
#define CURLINFO_CONDITION_UNMET CURLINFO_LONG
#endif
/* 7.21.0 */
#ifndef CURLINFO_LOCAL_PORT
#define CURLINFO_LOCAL_PORT CURLINFO_LONG
#endif
/* 7.12.3 */
#ifndef CURLINFO_NUM_CONNECTS
#define CURLINFO_NUM_CONNECTS CURLINFO_LONG
#endif
/* 7.12.1 */
#ifndef CURLINFO_SSL_DATA_OUT
#define CURLINFO_SSL_DATA_OUT 6
#endif
/* 7.20.0 */
#ifndef CURLINFO_RTSP_SESSION_ID
#define CURLINFO_RTSP_SESSION_ID CURLINFO_STRING
#endif
/* 7.12.3 */
#ifndef CURLINFO_SSL_ENGINES
#define CURLINFO_SSL_ENGINES CURLINFO_SLIST
#endif
/* 7.15.2 */
#ifndef CURLINFO_LASTSOCKET
#define CURLINFO_LASTSOCKET CURLINFO_LONG
#endif
/* 7.19.0 */
#ifndef CURLINFO_APPCONNECT_TIME
#define CURLINFO_APPCONNECT_TIME CURLINFO_DOUBLE
#endif
/* 7.15.4 */
#ifndef CURLINFO_FTP_ENTRY_PATH
#define CURLINFO_FTP_ENTRY_PATH CURLINFO_STRING
#endif
/* 7.12.3 */
#ifndef CURLINFO_SLIST
#define CURLINFO_SLIST 0x400000
#endif
/* 7.14.1 */
#ifndef CURLINFO_COOKIELIST
#define CURLINFO_COOKIELIST CURLINFO_SLIST
#endif
/* 7.12.2 */
#ifndef CURLINFO_OS_ERRNO
#define CURLINFO_OS_ERRNO CURLINFO_LONG
#endif
/* 7.20.0 */
#ifndef CURLINFO_RTSP_SERVER_CSEQ
#define CURLINFO_RTSP_SERVER_CSEQ CURLINFO_LONG
#endif
/* 7.19.0 */
#ifndef CURLINFO_PRIMARY_IP
#define CURLINFO_PRIMARY_IP CURLINFO_STRING
#endif
/* 7.20.0 */
#ifndef CURLINFO_RTSP_CSEQ_RECV
#define CURLINFO_RTSP_CSEQ_RECV CURLINFO_LONG
#endif
/* 7.21.0 */
#ifndef CURLINFO_PRIMARY_PORT
#define CURLINFO_PRIMARY_PORT CURLINFO_LONG
#endif
/* 7.18.2 */
#ifndef CURLINFO_REDIRECT_URL
#define CURLINFO_REDIRECT_URL CURLINFO_STRING
#endif
/* 7.12.1 */
#ifndef CURLINFO_SSL_DATA_IN
#define CURLINFO_SSL_DATA_IN 5
#endif
/* 7.19.1 */
#ifndef CURLINFO_CERTINFO
#define CURLINFO_CERTINFO CURLINFO_SLIST
#endif
/* 7.21.0 */
#ifndef CURLINFO_LOCAL_IP
#define CURLINFO_LOCAL_IP CURLINFO_STRING
#endif
/* 7.20.0 */
#ifndef CURLINFO_RTSP_CLIENT_CSEQ
#define CURLINFO_RTSP_CLIENT_CSEQ CURLINFO_LONG
#endif
/* 7.18.0 */
#ifndef CURL_WRITEFUNC_PAUSE
#define CURL_WRITEFUNC_PAUSE 0x10000001
#endif
