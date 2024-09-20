#include <stddef.h>
#include <stdio.h>

struct addrinfo {
  int ai_flags;             // AI_PASSIVE, AI_CANONAME, etc
  int ai_family;            // AF_INET, AF_INET6, AF_UNSPEC
  int ai_socktype;          // SOCK_STREAM, SOCK_DGRAM
  int ai_protocol;          // Use 0 for any
  size_t ai_addrlen;        // Size of ai_addr in bytes
  struct sockaddr *ai_addr; // struct sockaddr_in or sockaddr_in6
  char *ai_canonname;       // Cannocical name
  struct addrinfo *ai_next; // Next node of the linked list
};

struct sockaddr {
  unsigned short sa_family; // AF_xxx
  char sa_data[14];         // 14 bytes fo PROTOCOL address
};
