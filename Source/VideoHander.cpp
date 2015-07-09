#include "VideoHander.h"
#include <assert.h>

VideoHander::VideoHander()
{
}

VideoHander::~VideoHander()
{
}

void VideoHander::AfterConnectDone(const SOCKET *sock)
{
	// TODO TCP三次握手成功后，可以用这个socket阻塞地收发一些数据
}

void VideoHander::BeforeDisconnect(const SOCKET *sock)
{
	// TODO 在断链接前做一些收尾工作，此时socket还可以使用
}

int VideoHander::OnDataToSend(const SOCKET *sock, const char *buf, int len)
{
	assert(*sock != NULL);
	
	// 发送编码音视频数据到服务器

	return send(*sock, buf, len, 0);
}


