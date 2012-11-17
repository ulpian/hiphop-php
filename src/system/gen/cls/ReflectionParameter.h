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

#ifndef __GENERATED_cls_ReflectionParameter_h781370c5__
#define __GENERATED_cls_ReflectionParameter_h781370c5__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

FORWARD_DECLARE_CLASS(ReflectionFunctionAbstract);

/* SRC: classes/reflection.php line 37 */
FORWARD_DECLARE_CLASS(ReflectionParameter);
extern const ObjectStaticCallbacks cw_ReflectionParameter;
class c_ReflectionParameter : public ExtObjectData {
  public:

  // Properties
  Variant m_info;

  // Destructor
  ~c_ReflectionParameter() NEVER_INLINE {}
  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionParameter, ReflectionParameter, ObjectData)
  static const ClassPropTable os_prop_table;
  c_ReflectionParameter(const ObjectStaticCallbacks *cb = &cw_ReflectionParameter) : ExtObjectData(cb), m_info(Variant::nullInit) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_func, Variant v_param);
  public: c_ReflectionParameter *create(CVarRef v_func, CVarRef v_param);
  public: String t___tostring();
  public: static Variant t_export(CVarRef v_func, CVarRef v_param, CVarRef v_ret = false_varNR);
  public: Variant t_getname();
  public: bool t_ispassedbyreference();
  public: Variant t_getdeclaringclass();
  public: p_ReflectionFunctionAbstract t_getdeclaringfunction();
  public: Variant t_getclass();
  public: Variant t_gettypehinttext();
  public: bool t_isarray();
  public: bool t_allowsnull();
  public: bool t_isoptional();
  public: bool t_isdefaultvalueavailable();
  public: Variant t_getdefaultvalue();
  public: Variant t_getdefaultvaluetext();
  public: Variant t_getposition();
  public: Variant t_getattribute(CVarRef v_name);
  public: Variant t_getattributes();
  public: Variant t_getattributerecursive(CVarRef v_name);
  public: Variant t_getattributesrecursive();
  public: static void t_collectattributes(VRefParam rv_attrs, CVarRef v_class, CVarRef v_function_name, CVarRef v_index);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
  DECLARE_METHOD_INVOKE_HELPERS(ispassedbyreference);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringclass);
  DECLARE_METHOD_INVOKE_HELPERS(getdeclaringfunction);
  DECLARE_METHOD_INVOKE_HELPERS(getclass);
  DECLARE_METHOD_INVOKE_HELPERS(gettypehinttext);
  DECLARE_METHOD_INVOKE_HELPERS(isarray);
  DECLARE_METHOD_INVOKE_HELPERS(allowsnull);
  DECLARE_METHOD_INVOKE_HELPERS(isoptional);
  DECLARE_METHOD_INVOKE_HELPERS(isdefaultvalueavailable);
  DECLARE_METHOD_INVOKE_HELPERS(getdefaultvalue);
  DECLARE_METHOD_INVOKE_HELPERS(getdefaultvaluetext);
  DECLARE_METHOD_INVOKE_HELPERS(getposition);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  DECLARE_METHOD_INVOKE_HELPERS(getattributes);
  DECLARE_METHOD_INVOKE_HELPERS(getattributerecursive);
  DECLARE_METHOD_INVOKE_HELPERS(getattributesrecursive);
  DECLARE_METHOD_INVOKE_HELPERS(collectattributes);
};
ObjectData *coo_ReflectionParameter() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionParameter_h781370c5__
