#ifndef VIDEOHANDER_H
#define VIDEOHANDER_H

#include <winsock2.h>

class VideoHander
{
public:
	/*
	 * 与服务器TCP三次握手完成后的回调
	 * @sock socket的句柄
	*/
	void AfterConnectDone(const SOCKET *sock);

	/*
	 * @sock   socket的句柄
	 * @buf    需要发送的数据buffer地址
	 * @len    需要发送的数据的len长度
	 * @return 返回send系统调用的结果
	*/
	int OnDataToSend(const SOCKET *sock, const char *buf, int len);

	/*
	 * 与服务器TCP四次握手断链接前的回调
	 * @sock socket的句柄
	*/
	void BeforeDisconnect(const SOCKET *sock);

	VideoHander();
	~VideoHander();
};

#endif
