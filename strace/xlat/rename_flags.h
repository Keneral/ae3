/* Generated by ./xlat/gen.sh from ./xlat/rename_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat rename_flags in mpers mode

#else

static
const struct xlat rename_flags[] = {
#if defined(RENAME_NOREPLACE) || (defined(HAVE_DECL_RENAME_NOREPLACE) && HAVE_DECL_RENAME_NOREPLACE)
  XLAT(RENAME_NOREPLACE),
#endif
#if defined(RENAME_EXCHANGE) || (defined(HAVE_DECL_RENAME_EXCHANGE) && HAVE_DECL_RENAME_EXCHANGE)
  XLAT(RENAME_EXCHANGE),
#endif
#if defined(RENAME_WHITEOUT) || (defined(HAVE_DECL_RENAME_WHITEOUT) && HAVE_DECL_RENAME_WHITEOUT)
  XLAT(RENAME_WHITEOUT),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
