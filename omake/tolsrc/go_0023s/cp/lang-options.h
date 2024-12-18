/* Definitions for switches for C++.
   Copyright (C) 1995, 1996, 1997, 1998, 1999, 2000
   Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

DEFINE_LANG_NAME ("C++")
     
/* This is the contribution to the `documented_lang_options' array in
   toplev.c for g++.  */

  { "-faccess-control", "" },
  { "-fno-access-control", 
    N_("Do not obey access control semantics") },
  { "-falt-external-templates", 
    N_("Change when template instances are emitted") },
  { "-fno-alt-external-templates", "" },
  { "-fansi-overloading", "" },
  { "-fno-ansi-overloading", "" },
  { "-fcheck-new", 
    N_("Check the return value of new") },
  { "-fno-check-new", "" },
  { "-fconserve-space", 
    N_("Reduce size of object files") },
  { "-fno-conserve-space", "" },
  { "-fconst-strings", "" },
  { "-fno-const-strings", 
    N_("Make string literals `char[]' instead of `const char[]'") },
  { "-fdefault-inline", "" },
  { "-fdump-translation-unit-", 
    N_("Dump the entire translation unit to a file") },
  { "-fno-default-inline", 
    N_("Do not inline member functions by default") },
  { "-frtti", "" },
  { "-fno-rtti", 
    N_("Do not generate run time type descriptor information") },
  { "-felide-constructors", "" },
  { "-fno-elide-constructors", "" },
  { "-fenforce-eh-specs", "" },
  { "-fno-enforce-eh-specs", 
    N_("Do not generate code to check exception specifications") },
  { "-fexternal-templates", "" },
  { "-fno-external-templates", "" },
  { "-ffor-scope", "" },
  { "-fno-for-scope", 
    N_("Scope of for-init-statement vars extends outside") },
  { "-fgnu-keywords", "" },
  { "-fno-gnu-keywords", 
    N_("Do not recognize GNU defined keywords") },
  { "-fhandle-exceptions", "" },
  { "-fno-handle-exceptions", "" },
  { "-fhuge-objects", 
    N_("Enable support for huge objects") },
  { "-fno-huge-objects", "" },
  { "-fimplement-inlines", "" },
  { "-fno-implement-inlines", 
    N_("Export functions even if they can be inlined") },
  { "-fimplicit-templates", "" },
  { "-fno-implicit-templates", 
    N_("Only emit explicit template instatiations") },
  { "-fimplicit-inline-templates", "" },
  { "-fno-implicit-inline-templates", 
    N_("Only emit explicit instatiations of inline templates") },
  { "-finit-priority", "" },
  { "-fno-init-priority", "" },
  { "-fmemoize-lookups", "" },
  { "-fno-memoize-lookups", "" },
  { "-fms-extensions", 
    N_("Don't pedwarn about uses of Microsoft extensions") },
  { "-fno-ms-extensions", "" },
  { "-foperator-names", 
    N_("Recognize and/bitand/bitor/compl/not/or/xor") },
  { "-fno-operator-names", "" },
  { "-foptional-diags", "" },
  { "-fno-optional-diags", 
    N_("Disable optional diagnostics") },
  { "-fpermissive", 
    N_("Downgrade conformance errors to warnings") },
  { "-fno-permissive", "" },
  { "-frepo", 
    N_("Enable automatic template instantiation") },
  { "-fno-repo", "" },
  { "-fsave-memoized", "" },
  { "-fno-save-memoized", "" },
  { "-fstats", 
    N_("Display statistics accumulated during compilation") },
  { "-fno-stats", "" },
  { "-ftemplate-depth-", 
    N_("Specify maximum template instantiation depth") },
  { "-fuse-cxa-atexit", 
    N_("Use __cxa_atexit to register destructors") },
  { "-fno-use-cxa-atexit", "" },
  { "-fvtable-gc", 
    N_("Discard unused virtual functions") },
  { "-fno-vtable-gc", "" },
  { "-fvtable-thunks", 
    N_("Implement vtables using thunks") },
  { "-fno-vtable-thunks", "" },
  { "-fweak", 
    N_("Emit common-like symbols as weak symbols") },
  { "-fno-weak", "" },
  { "-fxref", 
    N_("Emit cross referencing information") },
  { "-fno-xref", "" },

  { "-Wreturn-type", 
    N_("Warn about inconsistent return types") },
  { "-Wno-return-type", "" },
  { "-Woverloaded-virtual", 
    N_("Warn about overloaded virtual function names") },
  { "-Wno-overloaded-virtual", "" },
  { "-Wctor-dtor-privacy", "" },
  { "-Wno-ctor-dtor-privacy", 
    N_("Don't warn when all ctors/dtors are private") },
  { "-Wnon-virtual-dtor", 
    N_("Warn about non virtual destructors") },
  { "-Wno-non-virtual-dtor", "" },
  { "-Wextern-inline", 
    N_("Warn when a function is declared extern, then inline") },
  { "-Wno-extern-inline", "" },
  { "-Wreorder", 
    N_("Warn when the compiler reorders code") },
  { "-Wno-reorder", "" },
  { "-Wsynth", 
    N_("Warn when synthesis behavior differs from Cfront") },
  { "-Wno-synth", "" },
  { "-Wpmf-conversions", "" },
  { "-Wno-pmf-conversions", 
    N_("Don't warn when type converting pointers to member functions") },
  { "-Weffc++", 
    N_("Warn about violations of Effective C++ style rules") },
  { "-Wno-effc++", "" },
  { "-Wsign-promo", 
    N_("Warn when overload promotes from unsigned to signed") },
  { "-Wno-sign-promo", "" },
  { "-Wold-style-cast", 
    N_("Warn if a C style cast is used in a program") },
  { "-Wno-old-style-cast", "" },
  { "-Wnon-template-friend", "" }, 
  { "-Wno-non-template-friend", 
    N_("Don't warn when non-templatized friend functions are declared within a template") },
  { "-Wdeprecated", "" },
  { "-Wno-deprecated", 
    N_("Don't announce deprecation of compiler features") },
