#ifndef ERRNO_H
#define ERRNO_H

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int errno;

#define EPERM		 1	/* Operation not permitted */
#define ENOENT		 2	/* No such file or directory */
#define ESRCH		 3	/* No such process */
#define EINTR		 4	/* Interrupted system call */
#define EIO		 5	/* Input/output error */
#define ENXIO		 6	/* Device not configured */
#define E2BIG		 7	/* Argument list too long */
#define ENOEXEC		 8	/* Exec format error */
#define EBADF		 9	/* Bad file descriptor */
#define ECHILD		10	/* No child processes */
#define EDEADLK		11	/* Resource deadlock avoided */
#define ENOMEM		12	/* Cannot allocate memory */
#define EACCES		13	/* Permission denied */
#define EFAULT		14	/* Bad address */
#define ENOTBLK		15	/* Block device required */
#define EBUSY		16	/* Device busy */
#define EEXIST		17	/* File exists */
#define EXDEV		18	/* Cross-device link */
#define ENODEV		19	/* Operation not supported by device */
#define ENOTDIR		20	/* Not a directory */
#define EISDIR		21	/* Is a directory */
#define EINVAL		22	/* Invalid argument */
#define ENFILE		23	/* File table overflow */
#define EMFILE		24	/* Too many open files */
#define ENOTTY		25	/* Not a typewriter */
#define ETXTBSY		26	/* Text file busy */
#define EFBIG		27	/* File too large */
#define ENOSPC		28	/* No space left on device */
#define ESPIPE		29	/* Illegal seek */
#define EROFS		30	/* Read-only file system */
#define EMLINK		31	/* Too many links */
#define EPIPE		32	/* Broken pipe */
#define EDOM		33	/* Numerical argument out of domain */
#define ERANGE		34	/* Result too large */
#define EAGAIN		35	/* Resource temporarily unavailable */
#define EWOULDBLOCK	EAGAIN	/* Operation would block */
#define EINPROGRESS	36	/* Operation now in progress */
#define EALREADY	37	/* Operation already in progress */
#define ENOTSOCK	38	/* Socket operation on non-socket */
#define EDESTADDRREQ	39	/* Destination address required */
#define EMSGSIZE	40	/* Message too long */
#define EPROTOTYPE	41	/* Protocol wrong type for socket */
#define ENOPROTOOPT	42	/* Protocol not available */
#define EPROTONOSUPPORT	43	/* Protocol not supported */
#define ESOCKTNOSUPPORT	44	/* Socket type not supported */
#define EOPNOTSUPP	45	/* Operation not supported */
#define EPFNOSUPPORT	46	/* Protocol family not supported */
#define EAFNOSUPPORT	47	/* Address family not supported by protocol family */
#define EADDRINUSE	48	/* Address already in use */
#define EADDRNOTAVAIL	49	/* Can't assign requested address */
#define ENETDOWN	50	/* Network is down */
#define ENETUNREACH	51	/* Network is unreachable */
#define ENETRESET	52	/* Network dropped connection on reset */
#define ECONNABORTED	53	/* Software caused connection abort */
#define ECONNRESET	54	/* Connection reset by peer */
#define ENOBUFS		55	/* No buffer space available */
#define EISCONN		56	/* Socket is already connected */
#define ENOTCONN	57	/* Socket is not connected */
#define ESHUTDOWN	58	/* Can't send after socket shutdown */
#define ETOOMANYREFS	59	/* Too many references: can't splice */
#define ETIMEDOUT	60	/* Connection timed out */
#define ECONNREFUSED	61	/* Connection refused */
#define ELOOP		62	/* Too many levels of symbolic links */
#define ENAMETOOLONG	63	/* File name too long */
#define EHOSTDOWN	64	/* Host is down */
#define EHOSTUNREACH	65	/* No route to host */
#define ENOTEMPTY	66	/* Directory not empty */
#define EPROCLIM	67	/* Too many processes */
#define EUSERS		68	/* Too many users */
#define EDQUOT		69	/* Disc quota exceeded */
#define ESTALE		70	/* Stale NFS file handle */
#define EREMOTE		71	/* Too many levels of remote in path */
#define EBADRPC		72	/* RPC struct is bad */
#define ERPCMISMATCH	73	/* RPC version wrong */
#define EPROGUNAVAIL	74	/* RPC prog. not avail */
#define EPROGMISMATCH	75	/* Program version wrong */
#define EPROCUNAVAIL	76	/* Bad procedure for program */
#define ENOLCK		77	/* No locks available */
#define ENOSYS		78	/* Function not implemented */
#define EFTYPE		79	/* Inappropriate file type or format */
#define EAUTH		80	/* Authentication error */
#define ENEEDAUTH	81	/* Need authenticator */
#define EIDRM		82	/* Identifier removed */
#define ENOMSG		83	/* No message of desired type */
#define EILSEQ		84	/* Illegal byte sequence */
#define ERESTART	85	/* Interrupted system call should be restarted */
#define ESTRPIPE	86	/* Streams pipe error */
#define EUSERS		87	/* Too many users */
#define ENOLCK		88	/* No locks available */
#define ENOSTR		89	/* Device not a stream */
#define ENODATA		90	/* No data available */
#define ETIME		91	/* Timer expired */
#define ENOSR		92	/* Out of streams resources */
#define ENOMSG		93	/* No message of the desired type */
#define EPROTO		94	/* Protocol error */
#define EBADMSG		95	/* Bad message */
#define EREMCHG		96	/* Remote address changed */
#define EBADRPC		97	/* RPC structure is bad */
#define ERPCMISMATCH	98	/* RPC version wrong */
#define EPROGUNAVAIL	99	/* RPC program not available */
#define EPROGMISMATCH	100	/* RPC program version wrong */
#define EPROCUNAVAIL	101	/* RPC bad procedure for program */
#define EBADF		102	/* File descriptor in bad state */
#define EBADMSG		103	/* Bad message */
#define EDEADLOCK	104	/* Resource deadlock would occur */
#define EBFONT		105	/* Bad font file format */
#define ENOSTR		106	/* Device not a stream */
#define ENODATA		107	/* No data available */
#define ETIME		108	/* Timer expired */
#define ENOSR		109	/* Out of streams resources */
#define ERESTART	110	/* Interrupted system call should be restarted */
#define ESTRPIPE	111	/* Streams pipe error */
#define ELOOP		112	/* Too many levels of symbolic links */
#define EUSERS		113	/* Too many users */
#define ENOLCK		114	/* No locks available */
#define ENOSYS		115	/* Function not implemented */
#define EFTYPE		116	/* Inappropriate file type or format */
#define EAUTH		117	/* Authentication error */
#define ENEEDAUTH	118	/* Need authenticator */
#define EIDRM		119	/* Identifier removed */
#define ENOMSG		120	/* No message of desired type */
#define EILSEQ		121	/* Illegal byte sequence */
#define ERESTART	122	/* Interrupted system call should be restarted */
#define ESTRPIPE	123	/* Streams pipe error */
#define EUSERS		124	/* Too many users */
#define ENOLCK		125	/* No locks available */
#define ENOSTR		126	/* Device not a stream */
#define ENODATA		127	/* No data available */
#define ETIME		128	/* Timer expired */
#define ENOSR		129	/* Out of streams resources */
#define ENOMSG		130	/* No message of the desired type */
#define EPROTO		131	/* Protocol error */
#define EBADMSG		132	/* Bad message */
#define EREMCHG		133	/* Remote address changed */
#define EBADRPC		134	/* RPC structure is bad */
#define ERPCMISMATCH	135	/* RPC version wrong */
#define EPROGUNAVAIL	136	/* RPC program not available */
#define EPROGMISMATCH	137	/* RPC program version wrong */
#define EPROCUNAVAIL	138	/* RPC bad procedure for program */
#define EBADF		139	/* File descriptor in bad state */
#define EBADMSG		140	/* Bad message */
#define EDEADLOCK	141	/* Resource deadlock would occur */
#define EBFONT		142	/* Bad font file format */
#define ENOSTR		143	/* Device not a stream */
#define ENODATA		144	/* No data available */
#define ETIME		145	/* Timer expired */
#define ENOSR		146	/* Out of streams resources */
#define ERESTART	147	/* Interrupted system call should be restarted */
#define ESTRPIPE	148	/* Streams pipe error */
#define ELOOP		149	/* Too many levels of symbolic links */
#define EUSERS		150	/* Too many users */
#define ENOLCK		151	/* No locks available */
#define ENOSYS		152	/* Function not implemented */
#define EFTYPE		153	/* Inappropriate file type or format */
#define EAUTH		154	/* Authentication error */
#define ENEEDAUTH	155	/* Need authenticator */
#define EIDRM		156	/* Identifier removed */
#define ENOMSG		157	/* No message of desired type */
#define EILSEQ		158	/* Illegal byte sequence */
#define ERESTART	159	/* Interrupted system call should be restarted */
#define ESTRPIPE	160	/* Streams pipe error */
#define EUSERS		161	/* Too many users */
#define ENOLCK		162	/* No locks available */
#define ENOSTR		163	/* Device not a stream */
#define ENODATA		164	/* No data available */
#define ETIME		165	/* Timer expired */
#define ENOSR		166	/* Out of streams resources */
#define ENOMSG		167	/* No message of the desired type */
#define EPROTO		168	/* Protocol error */
#define EBADMSG		169	/* Bad message */
#define EREMCHG		170	/* Remote address changed */
#define EBADRPC		171	/* RPC structure is bad */
#define ERPCMISMATCH	172	/* RPC version wrong */
#define EPROGUNAVAIL	173	/* RPC program not available */
#define EPROGMISMATCH	174	/* RPC program version wrong */
#define EPROCUNAVAIL	175	/* RPC bad procedure for program */
#define EBADF		176	/* File descriptor in bad state */
#define EBADMSG		177	/* Bad message */
#define EDEADLOCK	178	/* Resource deadlock would occur */
#define EBFONT		179	/* Bad font file format */
#define ENOSTR		180	/* Device not a stream */
#define ENODATA		181	/* No data available */
#define ETIME		182	/* Timer expired */
#define ENOSR		183	/* Out of streams resources */
#define ERESTART	184	/* Interrupted system call should be restarted */
#define ESTRPIPE	185	/* Streams pipe error */
#define ELOOP		186	/* Too many levels of symbolic links */
#define EUSERS		187	/* Too many users */
#define ENOLCK		188	/* No locks available */
#define ENOSYS		189	/* Function not implemented */
#define EFTYPE		190	/* Inappropriate file type or format */
#define EAUTH		191	/* Authentication error */
#define ENEEDAUTH	192	/* Need authenticator */
#define EIDRM		193	/* Identifier removed */
#define ENOMSG		194	/* No message of desired type */
#define EILSEQ		195	/* Illegal byte sequence */
#define ERESTART	196	/* Interrupted system call should be restarted */
#define ESTRPIPE	197	/* Streams pipe error */
#define EUSERS		198	/* Too many users */
#define ENOLCK		199	/* No locks available */
#define ENOSYS		200	/* Function not implemented */
#define EFTYPE		201	/* Inappropriate file type or format */
#define EAUTH		202	/* Authentication error */
#define ENEEDAUTH	203	/* Need authenticator */
#define EIDRM		204	/* Identifier removed */
#define ENOMSG		205	/* No message of desired type */
#define EILSEQ		206	/* Illegal byte sequence */
#define ERESTART	207	/* Interrupted system call should be restarted */
#define ESTRPIPE	208	/* Streams pipe error */
#define EUSERS		209	/* Too many users */
#define ENOLCK		210	/* No locks available */
#define ENOSYS		211	/* Function not implemented */
#define EFTYPE		212	/* Inappropriate file type or format */
#define EAUTH		213	/* Authentication error */
#define ENEEDAUTH	214	/* Need authenticator */
#define EIDRM		215	/* Identifier removed */
#define ENOMSG		216	/* No message of desired type */
#define EILSEQ		217	/* Illegal byte sequence */
#define ERESTART	218	/* Interrupted system call should be restarted */
#define ESTRPIPE	219	/* Streams pipe error */
#define EUSERS		220	/* Too many users */
#define ENOLCK		221	/* No locks available */
#define ENOSYS		222	/* Function not implemented */
#define EFTYPE		223	/* Inappropriate file type or format */
#define EAUTH		224	/* Authentication error */
#define ENEEDAUTH	225	/* Need authenticator */
#define EIDRM		226	/* Identifier removed */
#define ENOMSG		227	/* No message of desired type */
#define EILSEQ		228	/* Illegal byte sequence */
#define ERESTART	229	/* Interrupted system call should be restarted */
#define ESTRPIPE	230	/* Streams pipe error */
#define EUSERS		231	/* Too many users */
#define ENOLCK		232	/* No locks available */
#define ENOSYS		233	/* Function not implemented */
#define EFTYPE		234	/* Inappropriate file type or format */
#define EAUTH		235	/* Authentication error */
#define ENEEDAUTH	236	/* Need authenticator */
#define EIDRM		237	/* Identifier removed */
#define ENOMSG		238	/* No message of desired type */
#define EILSEQ		239	/* Illegal byte sequence */
#define ERESTART	240	/* Interrupted system call should be restarted */
#define ESTRPIPE	241	/* Streams pipe error */
#define EUSERS		242	/* Too many users */
#define ENOLCK		243	/* No locks available */
#define ENOSYS		244	/* Function not implemented */
#define EFTYPE		245	/* Inappropriate file type or format */
#define EAUTH		246	/* Authentication error */
#define ENEEDAUTH	247	/* Need authenticator */
#define EIDRM		248	/* Identifier removed */
#define ENOMSG		249	/* No message of desired type */
#define EILSEQ		250	/* Illegal byte sequence */
#define ERESTART	251	/* Interrupted system call should be restarted */
#define ESTRPIPE	252	/* Streams pipe error */
#define EUSERS		253	/* Too many users */
#define ENOLCK		254	/* No locks available */
#define ENOSYS		255	/* Function not implemented */
#define EFTYPE		256	/* Inappropriate file type or format */
#define EAUTH		257	/* Authentication error */
#define ENEEDAUTH	258	/* Need authenticator */
#define EIDRM		259	/* Identifier removed */
#define ENOMSG		260	/* No message of desired type */
#define EILSEQ		261	/* Illegal byte sequence */
#define ERESTART	262	/* Interrupted system call should be restarted */
#define ESTRPIPE	263	/* Streams pipe error */
#define EUSERS		264	/* Too many users */
#define ENOLCK		265	/* No locks available */
#define ENOSYS		266	/* Function not implemented */
#define EFTYPE		267	/* Inappropriate file type or format */
#define EAUTH		268	/* Authentication error */
#define ENEEDAUTH	269	/* Need authenticator */
#define EIDRM		270	/* Identifier removed */
#define ENOMSG		271	/* No message of desired type */
#define EILSEQ		272	/* Illegal byte sequence */
#define ERESTART	273	/* Interrupted system call should be restarted */
#define ESTRPIPE	274	/* Streams pipe error */
#define EUSERS		275	/* Too many users */
#define ENOLCK		276	/* No locks available */
#define ENOSYS		277	/* Function not implemented */
#define EFTYPE		278	/* Inappropriate file type or format */
#define EAUTH		279	/* Authentication error */
#define ENEEDAUTH	280	/* Need authenticator */
#define EIDRM		281	/* Identifier removed */
#define ENOMSG		282	/* No message of desired type */
#define EILSEQ		283	/* Illegal byte sequence */
#define ERESTART	284	/* Interrupted system call should be restarted */
#define ESTRPIPE	285	/* Streams pipe error */
#define EUSERS		286	/* Too many users */
#define ENOLCK		287	/* No locks available */
#define ENOSYS		288	/* Function not implemented */
#define EFTYPE		289	/* Inappropriate file type or format */
#define EAUTH		290	/* Authentication error */
#define ENEEDAUTH	291	/* Need authenticator */
#define EIDRM		292	/* Identifier removed */
#define ENOMSG		293	/* No message of desired type */
#define EILSEQ		294	/* Illegal byte sequence */
#define ERESTART	295	/* Interrupted system call should be restarted */
#define ESTRPIPE	296	/* Streams pipe error */
#define EUSERS		297	/* Too many users */
#define ENOLCK		298	/* No locks available */
#define ENOSYS		299	/* Function not implemented */
#define EFTYPE		300	/* Inappropriate file type or format */
#define EAUTH		301	/* Authentication error */
#define ENEEDAUTH	302	/* Need authenticator */
#define EIDRM		303	/* Identifier removed */
#define ENOMSG		304	/* No message of desired type */
#define EILSEQ		305	/* Illegal byte sequence */
#define ERESTART	306	/* Interrupted system call should be restarted */
#define ESTRPIPE	307	/* Streams pipe error */
#define EUSERS		308	/* Too many users */
#define ENOLCK		309	/* No locks available */
#define ENOSYS		310	/* Function not implemented */
#define EFTYPE		311	/* Inappropriate file type or format */
#define EAUTH		312	/* Authentication error */
#define ENEEDAUTH	313	/* Need authenticator */
#define EIDRM		314	/* Identifier removed */
#define ENOMSG		315	/* No message of desired type */
#define EILSEQ		316	/* Illegal byte sequence */
#define ERESTART	317	/* Interrupted system call should be restarted */
#define ESTRPIPE	318	/* Streams pipe error */
#define EUSERS		319	/* Too many users */
#define ENOLCK		320	/* No locks available */
#define ENOSYS		321	/* Function not implemented */
#define EFTYPE		322	/* Inappropriate file type or format */
#define EAUTH		323	/* Authentication error */
#define ENEEDAUTH	324	/* Need authenticator */
#define EIDRM		325	/* Identifier removed */
#define ENOMSG		326	/* No message of desired type */
#define EILSEQ		327	/* Illegal byte sequence */
#define ERESTART	328	/* Interrupted system call should be restarted */
#define ESTRPIPE	329	/* Streams pipe error */
#define EUSERS		330	/* Too many users */
#define ENOLCK		331	/* No locks available */
#define ENOSYS		332	/* Function not implemented */
#define EFTYPE		333	/* Inappropriate file type or format */
#define EAUTH		334	/* Authentication error */
#define ENEEDAUTH	335	/* Need authenticator */
#define EIDRM		336	/* Identifier removed */
#define ENOMSG		337	/* No message of desired type */
#define EILSEQ		338	/* Illegal byte sequence */
#define ERESTART	339	/* Interrupted system call should be restarted */
#define ESTRPIPE	340	/* Streams pipe error */
#define EUSERS		341	/* Too many users */
#define ENOLCK		342	/* No locks available */
#define ENOSYS		343	/* Function not implemented */
#define EFTYPE		344	/* Inappropriate file type or format */
#define EAUTH		345	/* Authentication error */
#define ENEEDAUTH	346	/* Need authenticator */
#define EIDRM		347	/* Identifier removed */
#define ENOMSG		348	/* No message of desired type */
#define EILSEQ		349	/* Illegal byte sequence */
#define ERESTART	350	/* Interrupted system call should be restarted */
#define ESTRPIPE	351	/* Streams pipe error */
#define EUSERS		352	/* Too many users */
#define ENOLCK		353	/* No locks available */
#define ENOSYS		354	/* Function not implemented */
#define EFTYPE		355	/* Inappropriate file type or format */
#define EAUTH		356	/* Authentication error */
#define ENEEDAUTH	357	/* Need authenticator */
#define EIDRM		358	/* Identifier removed */
#define ENOMSG		359	/* No message of desired type */
#define EILSEQ		360	/* Illegal byte sequence */
#define ERESTART	361	/* Interrupted system call should be restarted */
#define ESTRPIPE	362	/* Streams pipe error */
#define EUSERS		363	/* Too many users */
#define ENOLCK		364	/* No locks available */
#define ENOSYS		365	/* Function not implemented */
#define EFTYPE		366	/* Inappropriate file type or format */
#define EAUTH		367	/* Authentication error */
#define ENEEDAUTH	368	/* Need authenticator */
#define EIDRM		369	/* Identifier removed */
#define ENOMSG		370	/* No message of desired type */
#define EILSEQ		371	/* Illegal byte sequence */
#define ERESTART	372	/* Interrupted system call should be restarted */
#define ESTRPIPE	373	/* Streams pipe error */
#define EUSERS		374	/* Too many users */
#define ENOLCK		375	/* No locks available */
#define ENOSYS		376	/* Function not implemented */
#define EFTYPE		377	/* Inappropriate file type or format */
#define EAUTH		378	/* Authentication error */
#define ENEEDAUTH	379	/* Need authenticator */
#define EIDRM		380	/* Identifier removed */
#define ENOMSG		381	/* No message of desired type */
#define EILSEQ		382	/* Illegal byte sequence */
#define ERESTART	383	/* Interrupted system call should be restarted */
#define ESTRPIPE	384	/* Streams pipe error */
#define EUSERS		385	/* Too many users */
#define ENOLCK		386	/* No locks available */
#define ENOSYS		387	/* Function not implemented */
#define EFTYPE		388	/* Inappropriate file type or format */
#define EAUTH		389	/* Authentication error */
#define ENEEDAUTH	390	/* Need authenticator */
#define EIDRM		391	/* Identifier removed */
#define ENOMSG		392	/* No message of desired type */
#define EILSEQ		393	/* Illegal byte sequence */
#define ERESTART	394	/* Interrupted system call should be restarted */
#define ESTRPIPE	395	/* Streams pipe error */
#define EUSERS		396	/* Too many users */
#define ENOLCK		397	/* No locks available */
#define ENOSYS		398	/* Function not implemented */
#define EFTYPE		399	/* Inappropriate file type or format */
#define EAUTH		400	/* Authentication error */
