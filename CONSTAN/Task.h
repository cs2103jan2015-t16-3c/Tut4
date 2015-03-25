#include "time.h"
#include <string>

using namespace std;

const string DEFAULT_TASK_NAME = "No task name specified";
const string DEFAULT_START_TIME = "No start time specified";
const string DEFAULT_END_TIME = "No end time specified";

class Task {
private:
	string _taskName;
	string _startDate;
	string _startTime;
	string _endDate;
	string _endTime;
//	bool _isComplete;
	string _priority;

public:
	Task();
	Task(string taskName, string startTime, string endTime, string priority);
	~Task();
	void setTaskName(string taskName);
	string getTaskName();
	void setStartTime(string startTime);
	string getStartTime();
	void setEndTime(string endTime);
	string getEndTime();
	void setPriority(string priority);
	string getPriority();
	void setCompletionStatus(bool isComplete);
	bool getCompletionStatus();
};