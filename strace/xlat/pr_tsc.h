/* Generated by ./xlat/gen.sh from ./xlat/pr_tsc.in; do not edit. */
#if !(defined(PR_TSC_ENABLE) || (defined(HAVE_DECL_PR_TSC_ENABLE) && HAVE_DECL_PR_TSC_ENABLE))
# define PR_TSC_ENABLE 1
#endif
#if !(defined(PR_TSC_SIGSEGV) || (defined(HAVE_DECL_PR_TSC_SIGSEGV) && HAVE_DECL_PR_TSC_SIGSEGV))
# define PR_TSC_SIGSEGV 2
#endif

#ifdef IN_MPERS

# error static const struct xlat pr_tsc in mpers mode

#else

static
const struct xlat pr_tsc[] = {
 XLAT(PR_TSC_ENABLE),
 XLAT(PR_TSC_SIGSEGV),
 XLAT_END
};

#endif /* !IN_MPERS */
