/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-eac351f5cca7 on Wed Nov 10 15:32:07 2010
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     Licence:   wxWindows license
 */

#include "sipAPI_core.h"

#line 404 "sip/gen/gdicmn.sip"
    #include <wx/gdicmn.h>
#line 15 "sip_corewxRealPoint.cpp"

#line 22 "sip/gen/gdicmn.sip"
    #include <wx/gdicmn.h>
#line 19 "sip_corewxRealPoint.cpp"
#line 119 "sip/gen/gdicmn.sip"
    #include <wx/gdicmn.h>
#line 22 "sip_corewxRealPoint.cpp"


extern "C" {static PyObject *slot_wxRealPoint___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * p2;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxRealPoint, &p2))
        {
            bool sipRes;

            try
            {
            sipRes = operator==((*sipCpp), *p2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,eq_slot,sipType_wxRealPoint,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_wxRealPoint___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * p2;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxRealPoint, &p2))
        {
            bool sipRes;

            try
            {
            sipRes = operator!=((*sipCpp), *p2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,ne_slot,sipType_wxRealPoint,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_wxRealPoint___add__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * p1;
        const wxRealPoint * p2;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_wxRealPoint, &p1, sipType_wxRealPoint, &p2))
        {
            wxRealPoint *sipRes;

            try
            {
            sipRes = new wxRealPoint((*p1 + *p2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___sub__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * p1;
        const wxRealPoint * p2;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_wxRealPoint, &p1, sipType_wxRealPoint, &p2))
        {
            wxRealPoint *sipRes;

            try
            {
            sipRes = new wxRealPoint((*p1 - *p2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___mul__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * s;
        double i;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_wxRealPoint, &s, &i))
        {
            wxRealPoint *sipRes;

            try
            {
            sipRes = new wxRealPoint((*s * i));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,NULL);
        }
    }

    {
        double i;
        const wxRealPoint * s;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &i, sipType_wxRealPoint, &s))
        {
            wxRealPoint *sipRes;

            try
            {
            sipRes = new wxRealPoint((i * *s));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___div__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * s;
        int i;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9i", sipType_wxRealPoint, &s, &i))
        {
            wxRealPoint *sipRes;

            try
            {
            sipRes = new wxRealPoint((*s / i));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxRealPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxRealPoint___isub__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxRealPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxRealPoint, &pt))
        {
            try
            {
            sipCpp->wxRealPoint::operator-=(*pt);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const wxSize * sz;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxSize, &sz))
        {
            try
            {
            sipCpp->wxRealPoint::operator-=(*sz);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_wxRealPoint___iadd__(PyObject *,PyObject *);}
static PyObject *slot_wxRealPoint___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxRealPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxRealPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxRealPoint * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxRealPoint, &pt))
        {
            try
            {
            sipCpp->wxRealPoint::operator+=(*pt);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const wxSize * sz;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxSize, &sz))
        {
            try
            {
            sipCpp->wxRealPoint::operator+=(*sz);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxRealPoint(void *, const sipTypeDef *);}
static void *cast_wxRealPoint(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_wxRealPoint)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxRealPoint(void *, int);}
static void release_wxRealPoint(void *sipCppV,int)
{
    delete reinterpret_cast<wxRealPoint *>(sipCppV);
}


extern "C" {static void assign_wxRealPoint(void *, SIP_SSIZE_T, const void *);}
static void assign_wxRealPoint(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<wxRealPoint *>(sipDst)[sipDstIdx] = *reinterpret_cast<const wxRealPoint *>(sipSrc);
}


extern "C" {static void *array_wxRealPoint(SIP_SSIZE_T);}
static void *array_wxRealPoint(SIP_SSIZE_T sipNrElem)
{
    return new wxRealPoint[sipNrElem];
}


extern "C" {static void *copy_wxRealPoint(const void *, SIP_SSIZE_T);}
static void *copy_wxRealPoint(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new wxRealPoint(reinterpret_cast<const wxRealPoint *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxRealPoint(sipSimpleWrapper *);}
static void dealloc_wxRealPoint(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_wxRealPoint(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_wxRealPoint(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxRealPoint(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    wxRealPoint *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            try
            {
            sipCpp = new wxRealPoint();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipCpp;
        }
    }

    {
        double x;
        double y;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "dd", &x, &y))
        {
            try
            {
            sipCpp = new wxRealPoint(x,y);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipCpp;
        }
    }

    {
        const wxPoint * pt;
        int ptState = 0;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_wxPoint, &pt, &ptState))
        {
            try
            {
            sipCpp = new wxRealPoint(*pt);
            }
            catch (...)
            {
            sipReleaseType(const_cast<wxPoint *>(pt),sipType_wxPoint,ptState);
                sipRaiseUnknownException();
                return NULL;
            }
            sipReleaseType(const_cast<wxPoint *>(pt),sipType_wxPoint,ptState);

            return sipCpp;
        }
    }

    {
        const wxRealPoint * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_wxRealPoint, &a0))
        {
            try
            {
            sipCpp = new wxRealPoint(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxRealPoint[] = {
    {(void *)slot_wxRealPoint___eq__, eq_slot},
    {(void *)slot_wxRealPoint___ne__, ne_slot},
    {(void *)slot_wxRealPoint___add__, add_slot},
    {(void *)slot_wxRealPoint___sub__, sub_slot},
    {(void *)slot_wxRealPoint___mul__, mul_slot},
    {(void *)slot_wxRealPoint___div__, div_slot},
    {(void *)slot_wxRealPoint___isub__, isub_slot},
    {(void *)slot_wxRealPoint___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


extern "C" {static PyObject *varget_wxRealPoint_x(void *, PyObject *);}
static PyObject *varget_wxRealPoint_x(void *sipSelf, PyObject *)
{
    double sipVal;
    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipSelf);

    sipVal = sipCpp->x;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_wxRealPoint_x(void *, PyObject *, PyObject *);}
static int varset_wxRealPoint_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    double sipVal;
    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxRealPoint_y(void *, PyObject *);}
static PyObject *varget_wxRealPoint_y(void *sipSelf, PyObject *)
{
    double sipVal;
    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipSelf);

    sipVal = sipCpp->y;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_wxRealPoint_y(void *, PyObject *, PyObject *);}
static int varset_wxRealPoint_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    double sipVal;
    wxRealPoint *sipCpp = reinterpret_cast<wxRealPoint *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_wxRealPoint[] = {
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_wxRealPoint_x, (PyMethodDef *)varset_wxRealPoint_x, NULL, NULL},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_wxRealPoint_y, (PyMethodDef *)varset_wxRealPoint_y, NULL, NULL},
};

PyDoc_STRVAR(doc_wxRealPoint, "\1RealPoint()\n"
    "RealPoint(float, float)\n"
    "RealPoint(Point)\n"
    "RealPoint(RealPoint)");


sipClassTypeDef sipTypeDef__core_wxRealPoint = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxRealPoint,
        {0}
    },
    {
        sipNameNr_RealPoint,
        {0, 0, 1},
        0, 0,
        0, 0,
        2, variables_wxRealPoint,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxRealPoint,
    -1,
    -1,
    0,
    slots_wxRealPoint,
    init_wxRealPoint,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_wxRealPoint,
    assign_wxRealPoint,
    array_wxRealPoint,
    copy_wxRealPoint,
    release_wxRealPoint,
    cast_wxRealPoint,
    0,
    0,
    0
};
