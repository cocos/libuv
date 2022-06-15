#ifdef __cplusplus
extern "C" {
#endif

#include <bits/alltypes.h>
#include <features.h>
#include <ifaddrs.h>
#include <signal.h>
#include <sys/epoll.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <unistd.h>

#include <assert.h>
#include "platform-nx/cocos/network/SocketApiNxImpl.h"

#define CC_ASSERT(cond) assert(cond)

int chmod(const char*, mode_t) {
    CC_ASSERT(0);
    return 0;
}
int getrusage(int, struct rusage*) {
    CC_ASSERT(0);
    return 0;
}

int futimens(int, const struct timespec[2]) {
    CC_ASSERT(0);
    return 0;
}

int eventfd(unsigned int initval, int flags) {
    return eventFd(initval, flags);
}
int chown(const char*, uid_t, gid_t) {
    CC_ASSERT(0);
    return 0;
}

int fchmod(int, mode_t) {
    CC_ASSERT(0);
    return 0;
}
int fchown(int, uid_t, gid_t) {
    CC_ASSERT(0);
    return 0;
}
int lchown(const char*, uid_t, gid_t) {
    CC_ASSERT(0);
    return 0;
}
int link(const char*, const char*) {
    CC_ASSERT(0);
    return 0;
}
int symlink(const char*, const char*) {
    CC_ASSERT(0);
    return 0;
}
int fstatfs(int, struct statfs*) {
    CC_ASSERT(0);
    return 0;
}
int fdatasync(int) {
    CC_ASSERT(0);
    return 0;
}
int utimensat(int, const char*, const struct timespec[2], int) {
    CC_ASSERT(0);
    return 0;
}
int lstat(const char* __restrict, struct stat* __restrict) {
    CC_ASSERT(0);
    return 0;
}
ssize_t readv(int, const struct iovec*, int) {
    CC_ASSERT(0);
    return 0;
}
ssize_t readlink(const char* path, char* buffer, size_t n) {
    n = snprintf(buffer, n, "%s", path);
    return n;
}
int fsync(int) {
    CC_ASSERT(0);
    return 0;
}
char* mkdtemp(char*) {
    CC_ASSERT(0);
    return 0;
}
char* realpath(const char* __restrict, char* __restrict) {
    CC_ASSERT(0);
    return 0;
}
int statfs(const char*, struct statfs*) {
    CC_ASSERT(0);
    return 0;
}

void* dlsym(void* __restrict, const char* __restrict) {
    CC_ASSERT(0);
    return 0;
}
char* dlerror(void) {
    CC_ASSERT(0);
    return 0;
}
long pathconf(const char*, int) {
    CC_ASSERT(0);
    return 0;
}
ssize_t writev(int, const struct iovec*, int) {
    CC_ASSERT(0);
    return 0;
}
int pipe2(int fd[2], int flags) {
    initSocket();
    return _pipe2(fd, flags);
}
int epoll_create(int fdCounts) {
    return epollCreate(fdCounts);
}
int epoll_create1(int) {
    return -1;
}
int epoll_ctl(int epfd, int op, int fd, struct epoll_event* event) {
    return epollCtl(epfd, op, fd, event);
}
int epoll_wait(int epfd, struct epoll_event* events, int maxevents, int timeout) {
    return epollWait(epfd, events, maxevents, timeout);
}
int epoll_pwait(int, struct epoll_event*, int, int, const sigset_t*) {
    CC_ASSERT(0);
    return 0;
}
int getifaddrs(struct ifaddrs**) {
    return -1;
}
void freeifaddrs(struct ifaddrs*) {
    CC_ASSERT(0);
}
long syscall(long, ...) {
    CC_ASSERT(0);
    return 0;
}
int sigemptyset(sigset_t*) {
    //not impl
    return 0;
}
int sigfillset(sigset_t*) {
    //not impl
    return 0;
}
int pthread_condattr_setclock(pthread_condattr_t*, clockid_t) {
    //not impl
    return 0;
}
ssize_t sendfile(int, int, off_t*, size_t) {
    CC_ASSERT(0);
    return 0;
}
int pthread_sigmask(int, const sigset_t* __restrict, sigset_t* __restrict) {
    //not impl
    return 0;
}
int sigaddset(sigset_t*, int) {
    //not impl
    return 0;
}
int sigaction(int, const struct sigaction* __restrict, struct sigaction* __restrict) {
    //not impl
    return 0;
}
int pthread_atfork(void (*)(void), void (*)(void), void (*)(void)) {
    //not impl
    return 0;
}
int inotify_rm_watch(int, int) {
    CC_ASSERT(0);
    return 0;
}
int accept4(int socket, struct sockaddr* addr, socklen_t* addrlen, int) {
    return accept(socket, addr, addrlen);
}
int recvmsg(int, void*, int) {
    CC_ASSERT(0);
    return 0;
}
int sendmsg(int, void*, int) {
    CC_ASSERT(0);
    return 0;
}
int getpagesize() {
    CC_ASSERT(0);
    return 0;
}
int getrlimit(int, struct rlimit*) {
    return -1;
}
#ifdef __cplusplus
}
#endif
