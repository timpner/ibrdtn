/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package de.tubs.ibr.dtn.swig;

public class NativeSessionException {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected NativeSessionException(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(NativeSessionException obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        swigJNI.delete_NativeSessionException(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public NativeSessionException(SWIGTYPE_p_string what) {
    this(swigJNI.new_NativeSessionException__SWIG_0(SWIGTYPE_p_string.getCPtr(what)), true);
  }

  public NativeSessionException() {
    this(swigJNI.new_NativeSessionException__SWIG_1(), true);
  }

}
