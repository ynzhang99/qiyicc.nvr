// This autogenerated skeleton file illustrates one way to adapt a synchronous
// interface into an asynchronous interface. You should copy it to another
// filename to avoid overwriting it and rewrite as asynchronous any functions
// that would otherwise introduce unwanted latency.

#include "nvrWebService.h"
#include <thrift/protocol/TBinaryProtocol.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::async;

using namespace  ::com::nvr::thrift;

class nvrWebServiceAsyncHandler : public nvrWebServiceCobSvIf {
 public:
  nvrWebServiceAsyncHandler() {
    syncHandler_ = std::auto_ptr<nvrWebServiceHandler>(new nvrWebServiceHandler);
    // Your initialization goes here
  }
  virtual ~nvrWebServiceAsyncHandler();

  void notice(::apache::thrift::stdcxx::function<void(int32_t const& _return)> cob, const std::string& cmd, const std::string& jsonObject) {
    int32_t _return = 0;
    _return = syncHandler_->notice(cmd, jsonObject);
    return cob(_return);
  }

 protected:
  std::auto_ptr<nvrWebServiceHandler> syncHandler_;
};

