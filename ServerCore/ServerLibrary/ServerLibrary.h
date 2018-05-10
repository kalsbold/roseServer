#pragma once
#include "stdafx.h"

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "mswsock.lib")
#pragma comment(lib, "Winmm.lib")

// C++ ���̸������� http://ko.cppreference.com/w/cpp/header

/*
�⺻ winsock ��� 2.2 ����.
*/
#include <Ws2tcpip.h>
#include <winsock2.h>

/*
MS �� winsock Ȯ��
*/
#include <mswsock.h>
#include <Mmsystem.h>
#include <Ws2spi.h>
#include <Mstcpip.h>

/*
������� ���
c++ �����
�����.
�⺻ C���̺귯��.
�⺻ C �����
�̽ļ��� ���� �ڷ�����ȯ
*/
#include <windows.h>
#include <iostream>
#include <io.h>
#include <cstdlib>
#include <stdio.h>
#include <cstdint>

/*
�������
��������
�˰��� stl �Լ���.
�Լ� ��ü��
*/
#include <assert.h> 
#include <fcntl.h>
#include <algorithm>  
#include <functional>

/*
������ ���̺귯��
���ؽ� ���̺귯��
����� �޸� ���� ���̺귯��
*/
#include <thread>
#include <mutex>
#include <memory>

/*
���ڿ� ����
*/
#include <string>
#include <tchar.h>

/*
�ð�
����
��Ÿ�� �ڷ��� ���� ��ƿ.
*/
#include <ctime>
#include <random>
#include <typeinfo>    //typeinfo


// TODO: ���� ��ũ��
//#define CONTEXT_SWITCH     std::this_thread::sleep_for(std::chrono::nanoseconds(1))
#if _DEBUG
#define CONTEXT_SWITCH	 Sleep(1)
#else
#define CONTEXT_SWITCH		::SwitchToThread()
#endif

typedef void(*Function)(void *);

//��Ÿ ��ƿ
//CSV�� XML �ļ� ��ƿ.
#include "./Util/csv_parser/csv_parser.hpp"
#include "./Util/tinyXml/tinyxml.h"

// TODO: �ʼ� ��� ����
//-------------------------------------------------------------------//
/*
���� �ʱ�ȭ
Ÿ�� ����
�Ҵ�,���� ������, ���ڿ� ��ȯ, ��Ÿ ������ ��ũ��.
*/
#include "./Net/WinSocket.h"
#include "./Util/Type.h"
#include "./Util/Util.h"
/*
���� ��ü ����� ���Ͻ�Ŵ. �̸�, �۾��� �ξ ����.
�̱��� ������ ����.
���� ����Ŀ.
*/
#include "./Util/GameObject.h"
#include "./Util/Singleton.h"
#include "./Util/RandomMT.h"

/*
�ð� ����
�α� ����
��� �� ���� �߻���ġ.
*/
#include "./Util/Clock.h"
#include "./Util/Logger.h"
#include "./Util/Assert.h"

/*
�����̳� ��� ������
������ �����ǹ� ������ ������ 
�������� ������ �� ������ 
������ �۾� ť����. 
�۾� ���� ���� ������.
*/
#include "./Util/Table.h"
#include "./Util/Thread.h"
#include "./Util/Lock.h"
#include "./Util/ThreadJobQueue.h"
#include "./Util/Task.h"

/*
�޸� ���� Ž��
�޸� ����ȭ ���� ��.
ũ���� ���� ���� ����.
*/
#include "./Util/MemoryLeak.h"
#include "./Util/Memory_LowFragmentationHeap.h"
#include "./Util/Minidump.h"

/*
SMTP�� ���ϸ�.
Config���Ϸ� ���� �θ���.
��ǻ�� ���� ����͸�. CPU ��뷮, ���μ��� �޸� ��뷮. ���� �޸� ��뷮.
���α׷� ��ȿ�� Ȯ��.
*/
#include "./Util/SMTPMail.h"
#include "./Util/Config.h"
#include "./Util/Monitoring.h"
#include "./util/ProgramValidation.h"

//��Ŷ��
/*
��Ŷ���� ���� ��Ʈ�� Ŭ����.
��Ŷ ���.
��Ŷ Ŭ����
��Ŷ �м�
��Ŷ ����
��Ű¡.
��Ŷ ��ȣȭ
*/
#include "./Net/Packet/Stream.h"
#include "./Net/Packet/PacketHeader.h"
#include "./Net/Packet/PacketClass.h"
#include "./Net/Packet/PacketAnalyzer.h"
#include "./Net/Packet/PacketFactory.h"
#include "./Net/Packet/Package.h"
#include "./Net/Packet/PacketObfuscation.h"

//������ ����
/*
���α׷� ������ �̰ɷ� ¥������.
*/
#include "./Contents/ContentsProcess.h"

//����
/*
�⺻ ���� ��ü
���� ������.
�⺻ ���� ��ü
*/
#include "./Net/Session.h"
#include "./Net/SessionManager.h"
#include "./Net/Server.h"

/*
IOCP���� ��ü
IOCP���� ��ü
���� ����.
*/
#include "./Net/Iocp/IOCPServer.h"
#include "./Net/Iocp/IOCPSession.h"
#include "./Net/SessionMonitor.h"

//�͹̳�
/*
������ ������ ���� �͹̳� ��ü �� ����, ������.
*/
#include "./Net/Terminal/TerminalSession.h"
#include "./Net/Terminal/Terminal.h"
#include "./Net/Terminal/TerminalManager.h"

//DB
//MySQL�� �����ؾ���.
#include "./Database/ADODatabase.h"
#include "./Database/Query.h"
#include "./Database/DBManager.h"

// ���� ����
#include "Shutdown.h"
