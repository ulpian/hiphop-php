/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_BadMethodCallException_h6cc6f685__
#define __GENERATED_cls_BadMethodCallException_h6cc6f685__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/BadFunctionCallException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 220 */
FORWARD_DECLARE_CLASS(BadMethodCallException);
extern const ObjectStaticCallbacks cw_BadMethodCallException;
class c_BadMethodCallException : public c_BadFunctionCallException {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(BadMethodCallException, BadMethodCallException)
  c_BadMethodCallException(const ObjectStaticCallbacks *cb = &cw_BadMethodCallException) : c_BadFunctionCallException(cb) {
    if (!hhvm) setAttribute(NoDestructor);
  }
};
ObjectData *coo_BadMethodCallException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_BadMethodCallException_h6cc6f685__
