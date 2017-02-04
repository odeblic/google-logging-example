#include <glog/logging.h>
#include <gflags/gflags.h>

int main(int argc, char* argv[])
{
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::SetLogDestination(google::ERROR, "./errors.log");

  int x = 0;

  CHECK_NE(1, 2) << ": The world must be ending!";

  LOG(INFO)    << "This is a log with level INFO    (line no " << ++x << ")";
  LOG(WARNING) << "This is a log with level WARNING (line no " << ++x << ")";
  //LOG(ERROR)   << "This is a log with level ERROR   (line no " << ++x << ")";
  //LOG(FATAL)   << "This is a log with level FATAL   (line no " << ++x << ")";

  VLOG(1) << "I'm printed when you run the program with --v=1 or higher";
  VLOG(2) << "I'm printed when you run the program with --v=2 or higher";

  DLOG(INFO)   << "Found cookies";

  LOG_IF(INFO, x < 10) << "x is quite small";

  return 0;
}

