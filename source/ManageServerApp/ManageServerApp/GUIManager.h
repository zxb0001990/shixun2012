#pragma once
#include <boost/thread.hpp>
class GUIManager
{
private:
	boost::thread* m_thread;
public:
	GUIManager(void);
	~GUIManager(void);
};

