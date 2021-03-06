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

#ifndef __GENERATED_cls_OutOfRangeException_hd4da4fc9__
#define __GENERATED_cls_OutOfRangeException_hd4da4fc9__

#include <cls/OutOfRangeException.fw.h>
#include <cls/LogicException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 227 */
FORWARD_DECLARE_CLASS(OutOfRangeException);
extern const ObjectStaticCallbacks cw_OutOfRangeException;
class c_OutOfRangeException : public c_LogicException {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(OutOfRangeException, OutOfRangeException)

  // DECLARE_STATIC_PROP_OPS
  public:

  // DECLARE_COMMON_INVOKE
  static const int s_call_info_table = 0;
  static const int s_call_info_index = 0;

  public:
};
ObjectData *coo_OutOfRangeException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_OutOfRangeException_hd4da4fc9__
