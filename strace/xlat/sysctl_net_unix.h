/* Generated by ./xlat/gen.sh from ./xlat/sysctl_net_unix.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat sysctl_net_unix in mpers mode

#else

static
const struct xlat sysctl_net_unix[] = {
#if defined(NET_UNIX_DESTROY_DELAY) || (defined(HAVE_DECL_NET_UNIX_DESTROY_DELAY) && HAVE_DECL_NET_UNIX_DESTROY_DELAY)
  XLAT(NET_UNIX_DESTROY_DELAY),
#endif
#if defined(NET_UNIX_DELETE_DELAY) || (defined(HAVE_DECL_NET_UNIX_DELETE_DELAY) && HAVE_DECL_NET_UNIX_DELETE_DELAY)
  XLAT(NET_UNIX_DELETE_DELAY),
#endif
#if defined(NET_UNIX_MAX_DGRAM_QLEN) || (defined(HAVE_DECL_NET_UNIX_MAX_DGRAM_QLEN) && HAVE_DECL_NET_UNIX_MAX_DGRAM_QLEN)
  XLAT(NET_UNIX_MAX_DGRAM_QLEN),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
