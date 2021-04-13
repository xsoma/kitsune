#pragma once

#include <Windows.h>
#include <memory>
#include <iosfwd>
#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <string.h>
#include <vector>
#include <TlHelp32.h>
#include <WinInet.h>

//using namespace std;

#pragma comment(lib, "wininet.lib")

//[enc_string_enable /]

#define HOST			"kitsunesquad.online"
#define PATH			"/webpanel/"

#define HOST_GATE		"gate.php?serial="
#define HOST_KEY_GATE	"license-success-ok-"

#define HOST_CHECK		"check.php?serial="
#define HOST_KEY_CHECK	"VEJWRWCUCKEYZFPV-"

#define CHEAT_VERSION	"14"

class CLicense
{
private:
	std::string	GetUrlData(std::string url );
	std::string	StringToHex( const std::string input );
	std::string	GetHashText( const void * data , const size_t data_size );

	std::string	GetHwUID();
	DWORD	GetVolumeID();
	std::string	GetCompUserName( bool User );
	std::string	GetSerialKey();
	std::string	GetHashSerialKey();

public:

	std::string	GetSerial();
	std::string	GetSerial64();
	std::string  GetIP(std::string hostname );
	std::string GetUserDayCount();
	bool	CheckLicenseURL(std::string URL , std::string GATE , std::string KEY );
	bool	CheckLicense();
};

std::string base64_encode( char const* bytes_to_encode , unsigned int in_len );
