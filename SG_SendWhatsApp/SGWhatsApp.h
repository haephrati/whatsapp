#pragma once

#define GROUP_API_URL			L"http://api.whatsmate.net/v3/whatsapp/group/text/message/12"
#define IMAGE_SINGLE_API_URL	L"http://api.whatsmate.net/v3/whatsapp/group/image/message/12"
#define GROUP_API_SERVER		L"api.whatsmate.net"
#define GROUP_API_PATH          L"/v3/whatsapp/group/text/message/12"

class SGWhatsApp
{
public:
	SGWhatsApp();
	~SGWhatsApp();
	bool SendGroupMessage(LPCTSTR ClientID, LPCTSTR ClientSecret,LPCTSTR groupAdmin, LPCTSTR groupName, LPCTSTR message);
};

