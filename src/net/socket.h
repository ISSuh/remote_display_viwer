/**
 *
 *  Copyright:  Copyright (c) 2020, ISSuh
 *
 */

#ifndef SRC_NET_SOCKET_H_
#define SRC_NET_SOCKET_H_

#include<arpa/inet.h>
#include<sys/socket.h>

namespace rdv {

class Socket {
 public:
  Socket() {}
  ~Socket() {}

 private:
  int sockfd;
};

}  // namespace rdv

#endif  // SRC_NET_SOCKET_H_
