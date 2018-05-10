#pragma once
#include "stdafx.h"

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "mswsock.lib")
#pragma comment(lib, "Winmm.lib")

// C++ 라이르러리들 http://ko.cppreference.com/w/cpp/header

/*
기본 winsock 헤더 2.2 버전.
*/
#include <Ws2tcpip.h>
#include <winsock2.h>

/*
MS 의 winsock 확장
*/
#include <mswsock.h>
#include <Mmsystem.h>
#include <Ws2spi.h>
#include <Mstcpip.h>

/*
윈도우용 헤더
c++ 입출력
입출력.
기본 C라이브러리.
기본 C 입출력
이식성을 위한 자료형변환
*/
#include <windows.h>
#include <iostream>
#include <io.h>
#include <cstdlib>
#include <stdio.h>
#include <cstdint>

/*
오류출력
파일제어
알고리즘 stl 함수들.
함수 객체용
*/
#include <assert.h> 
#include <fcntl.h>
#include <algorithm>  
#include <functional>

/*
쓰레드 라이브러리
뮤텍스 라이브러리
고수준 메모리 관리 라이브러리
*/
#include <thread>
#include <mutex>
#include <memory>

/*
문자열 관련
*/
#include <string>
#include <tchar.h>

/*
시간
랜덤
런타임 자료형 정보 유틸.
*/
#include <ctime>
#include <random>
#include <typeinfo>    //typeinfo


// TODO: 공용 매크로
//#define CONTEXT_SWITCH     std::this_thread::sleep_for(std::chrono::nanoseconds(1))
#if _DEBUG
#define CONTEXT_SWITCH	 Sleep(1)
#else
#define CONTEXT_SWITCH		::SwitchToThread()
#endif

typedef void(*Function)(void *);

//기타 유틸
//CSV와 XML 파서 유틸.
#include "./Util/csv_parser/csv_parser.hpp"
#include "./Util/tinyXml/tinyxml.h"

// TODO: 필수 헤더 파일
//-------------------------------------------------------------------//
/*
윈속 초기화
타입 정의
할당,해제 재정의, 문자열 변환, 기타 재정의 매크로.
*/
#include "./Net/WinSocket.h"
#include "./Util/Type.h"
#include "./Util/Util.h"
/*
게임 객체 사용을 통일시킴. 이름, 작업을 두어서 만듬.
싱글턴 패턴을 위함.
난수 메이커.
*/
#include "./Util/GameObject.h"
#include "./Util/Singleton.h"
#include "./Util/RandomMT.h"

/*
시간 관련
로그 관련
경고 및 예외 발생장치.
*/
#include "./Util/Clock.h"
#include "./Util/Logger.h"
#include "./Util/Assert.h"

/*
컨테이너 사용 재정의
쓰레드 재정의및 쓰레드 관리자 
접근제한 재정의 및 관리자 
쓰레드 작업 큐관련. 
작업 관리 노드및 관리자.
*/
#include "./Util/Table.h"
#include "./Util/Thread.h"
#include "./Util/Lock.h"
#include "./Util/ThreadJobQueue.h"
#include "./Util/Task.h"

/*
메모리 누수 탐지
메모리 단편화 수습 힙.
크래쉬 덤프 파일 생성.
*/
#include "./Util/MemoryLeak.h"
#include "./Util/Memory_LowFragmentationHeap.h"
#include "./Util/Minidump.h"

/*
SMTP로 메일링.
Config파일로 설정 부르기.
컴퓨터 상태 모니터링. CPU 사용량, 프로세스 메모리 사용량. 물리 메모리 사용량.
프로그램 유효성 확인.
*/
#include "./Util/SMTPMail.h"
#include "./Util/Config.h"
#include "./Util/Monitoring.h"
#include "./util/ProgramValidation.h"

//패킷들
/*
패킷쓰기 위한 스트림 클래스.
패킷 헤더.
패킷 클래스
패킷 분석
패킷 제작
패키징.
패킷 암호화
*/
#include "./Net/Packet/Stream.h"
#include "./Net/Packet/PacketHeader.h"
#include "./Net/Packet/PacketClass.h"
#include "./Net/Packet/PacketAnalyzer.h"
#include "./Net/Packet/PacketFactory.h"
#include "./Net/Packet/Package.h"
#include "./Net/Packet/PacketObfuscation.h"

//컨텐츠 관련
/*
프로그램 로직을 이걸로 짜도록함.
*/
#include "./Contents/ContentsProcess.h"

//서버
/*
기본 세션 객체
세션 관리자.
기본 서버 객체
*/
#include "./Net/Session.h"
#include "./Net/SessionManager.h"
#include "./Net/Server.h"

/*
IOCP서버 객체
IOCP세션 객체
세션 관찰.
*/
#include "./Net/Iocp/IOCPServer.h"
#include "./Net/Iocp/IOCPSession.h"
#include "./Net/SessionMonitor.h"

//터미널
/*
서버간 연결을 위한 터미널 객체 및 세션, 관리자.
*/
#include "./Net/Terminal/TerminalSession.h"
#include "./Net/Terminal/Terminal.h"
#include "./Net/Terminal/TerminalManager.h"

//DB
//MySQL로 변형해야함.
#include "./Database/ADODatabase.h"
#include "./Database/Query.h"
#include "./Database/DBManager.h"

// 전역 변수
#include "Shutdown.h"
