/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "nvrWebService.h"
#include "thrift/async/TAsyncChannel.h"

namespace com { namespace nvr { namespace thrift {


nvrWebService_notice_args::~nvrWebService_notice_args() throw() {
}


uint32_t nvrWebService_notice_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->cmd);
          this->__isset.cmd = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->jsonObject);
          this->__isset.jsonObject = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t nvrWebService_notice_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("nvrWebService_notice_args");

  xfer += oprot->writeFieldBegin("cmd", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->cmd);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("jsonObject", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->jsonObject);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


nvrWebService_notice_pargs::~nvrWebService_notice_pargs() throw() {
}


uint32_t nvrWebService_notice_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("nvrWebService_notice_pargs");

  xfer += oprot->writeFieldBegin("cmd", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->cmd)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("jsonObject", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString((*(this->jsonObject)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


nvrWebService_notice_result::~nvrWebService_notice_result() throw() {
}


uint32_t nvrWebService_notice_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->success);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t nvrWebService_notice_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("nvrWebService_notice_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_I32, 0);
    xfer += oprot->writeI32(this->success);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


nvrWebService_notice_presult::~nvrWebService_notice_presult() throw() {
}


uint32_t nvrWebService_notice_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32((*(this->success)));
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t nvrWebService_notice_presult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("nvrWebService_notice_presult");

  xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_I32, 0);
  xfer += oprot->writeI32((*(this->success)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

int32_t nvrWebServiceClient::notice(const std::string& cmd, const std::string& jsonObject)
{
  send_notice(cmd, jsonObject);
  return recv_notice();
}

void nvrWebServiceClient::send_notice(const std::string& cmd, const std::string& jsonObject)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("notice", ::apache::thrift::protocol::T_CALL, cseqid);

  nvrWebService_notice_pargs args;
  args.cmd = &cmd;
  args.jsonObject = &jsonObject;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

int32_t nvrWebServiceClient::recv_notice()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("notice") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  int32_t _return;
  nvrWebService_notice_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    return _return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "notice failed: unknown result");
}

bool nvrWebServiceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void nvrWebServiceProcessor::process_notice(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("nvrWebService.notice", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "nvrWebService.notice");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "nvrWebService.notice");
  }

  nvrWebService_notice_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "nvrWebService.notice", bytes);
  }

  nvrWebService_notice_result result;
  try {
    result.success = iface_->notice(args.cmd, args.jsonObject);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "nvrWebService.notice");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("notice", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "nvrWebService.notice");
  }

  oprot->writeMessageBegin("notice", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "nvrWebService.notice", bytes);
  }
}

::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > nvrWebServiceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< nvrWebServiceIfFactory > cleanup(handlerFactory_);
  ::apache::thrift::stdcxx::shared_ptr< nvrWebServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > processor(new nvrWebServiceProcessor(handler));
  return processor;
}

int32_t nvrWebServiceConcurrentClient::notice(const std::string& cmd, const std::string& jsonObject)
{
  int32_t seqid = send_notice(cmd, jsonObject);
  return recv_notice(seqid);
}

int32_t nvrWebServiceConcurrentClient::send_notice(const std::string& cmd, const std::string& jsonObject)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("notice", ::apache::thrift::protocol::T_CALL, cseqid);

  nvrWebService_notice_pargs args;
  args.cmd = &cmd;
  args.jsonObject = &jsonObject;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

int32_t nvrWebServiceConcurrentClient::recv_notice(const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("notice") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      int32_t _return;
      nvrWebService_notice_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        sentry.commit();
        return _return;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "notice failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

void nvrWebServiceCobClient::notice(::apache::thrift::stdcxx::function<void(nvrWebServiceCobClient* client)> cob, const std::string& cmd, const std::string& jsonObject)
{
  send_notice(cmd, jsonObject);
  channel_->sendAndRecvMessage(::apache::thrift::stdcxx::bind(cob, this), otrans_.get(), itrans_.get());
}

void nvrWebServiceCobClient::send_notice(const std::string& cmd, const std::string& jsonObject)
{
  int32_t cseqid = 0;
  otrans_->resetBuffer();
  oprot_->writeMessageBegin("notice", ::apache::thrift::protocol::T_CALL, cseqid);

  nvrWebService_notice_pargs args;
  args.cmd = &cmd;
  args.jsonObject = &jsonObject;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

int32_t nvrWebServiceCobClient::recv_notice()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;
  bool completed = false;

  try {
    iprot_->readMessageBegin(fname, mtype, rseqid);
    if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
      ::apache::thrift::TApplicationException x;
      x.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(true);
      throw x;
    }
    if (mtype != ::apache::thrift::protocol::T_REPLY) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    if (fname.compare("notice") != 0) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    int32_t _return;
    nvrWebService_notice_presult result;
    result.success = &_return;
    result.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();

    if (result.__isset.success) {
      completed = true;
      completed__(true);
      return _return;
    }
    completed = true;
    completed__(true);
    throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "notice failed: unknown result");
  } catch (...) {
    if (!completed) {
      completed__(false);
    }
    throw;
  }
}

void nvrWebServiceAsyncProcessor::dispatchCall(::apache::thrift::stdcxx::function<void(bool ok)> cob, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return cob(true);
  }
  (this->*(pfn->second))(cob, seqid, iprot, oprot);
  return;
}

void nvrWebServiceAsyncProcessor::process_notice(::apache::thrift::stdcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot)
{
  nvrWebService_notice_args args;
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("nvrWebService.notice", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "nvrWebService.notice");

  try {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->preRead(ctx, "nvrWebService.notice");
    }
    args.read(iprot);
    iprot->readMessageEnd();
    uint32_t bytes = iprot->getTransport()->readEnd();
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->postRead(ctx, "nvrWebService.notice", bytes);
    }
  }
  catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "nvrWebService.notice");
    }
    return cob(false);
  }
  freer.unregister();
  void (nvrWebServiceAsyncProcessor::*return_fn)(::apache::thrift::stdcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const int32_t& _return) =
    &nvrWebServiceAsyncProcessor::return_notice;
  iface_->notice(
      ::apache::thrift::stdcxx::bind(return_fn, this, cob, seqid, oprot, ctx, ::apache::thrift::stdcxx::placeholders::_1),
      args.cmd,
      args.jsonObject);
}

void nvrWebServiceAsyncProcessor::return_notice(::apache::thrift::stdcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const int32_t& _return)
{
  nvrWebService_notice_presult result;
  result.success = const_cast<int32_t*>(&_return);
  result.__isset.success = true;

  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("nvrWebService.notice", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "nvrWebService.notice");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "nvrWebService.notice");
  }

  oprot->writeMessageBegin("notice", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  uint32_t bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();
  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "nvrWebService.notice", bytes);
  }
  return cob(true);
}

::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::async::TAsyncProcessor > nvrWebServiceAsyncProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< nvrWebServiceCobSvIfFactory > cleanup(handlerFactory_);
  ::apache::thrift::stdcxx::shared_ptr< nvrWebServiceCobSvIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::async::TAsyncProcessor > processor(new nvrWebServiceAsyncProcessor(handler));
  return processor;
}

}}} // namespace

