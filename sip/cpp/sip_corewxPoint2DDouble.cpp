/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-eac351f5cca7 on Wed Nov 10 15:32:07 2010
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     Licence:   wxWindows license
 */

#include "sipAPI_core.h"

#line 22 "sip/gen/geometry.sip"
    #include <wx/geometry.h>
#line 15 "sip_corewxPoint2DDouble.cpp"

#line 22 "sip/gen/gdicmn.sip"
    #include <wx/gdicmn.h>
#line 19 "sip_corewxPoint2DDouble.cpp"


PyDoc_STRVAR(doc_wxPoint2DDouble_GetFloor, "Point2D.GetFloor() -> (int, int)");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetFloor(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetFloor(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        wxInt32 x;
        wxInt32 y;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B", &sipSelf, sipType_wxPoint2DDouble, &sipCpp))
        {
            try
            {
            sipCpp->GetFloor(&x,&y);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipBuildResult(0,"(ii)",x,y);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetFloor, doc_wxPoint2DDouble_GetFloor);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_GetRounded, "Point2D.GetRounded() -> (int, int)");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetRounded(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetRounded(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        wxInt32 x;
        wxInt32 y;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B", &sipSelf, sipType_wxPoint2DDouble, &sipCpp))
        {
            try
            {
            sipCpp->GetRounded(&x,&y);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipBuildResult(0,"(ii)",x,y);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetRounded, doc_wxPoint2DDouble_GetRounded);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_GetVectorLength, "Point2D.GetVectorLength() -> float");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetVectorLength(PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetVectorLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxPoint2DDouble *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPoint2DDouble, &sipCpp))
        {
            wxDouble sipRes;

            try
            {
            sipRes = sipCpp->GetVectorLength();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetVectorLength, doc_wxPoint2DDouble_GetVectorLength);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_GetVectorAngle, "Point2D.GetVectorAngle() -> float");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetVectorAngle(PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetVectorAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxPoint2DDouble *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPoint2DDouble, &sipCpp))
        {
            wxDouble sipRes;

            try
            {
            sipRes = sipCpp->GetVectorAngle();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetVectorAngle, doc_wxPoint2DDouble_GetVectorAngle);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_SetVectorLength, "Point2D.SetVectorLength(float)");

extern "C" {static PyObject *meth_wxPoint2DDouble_SetVectorLength(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_SetVectorLength(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        wxDouble length;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_length,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bd", &sipSelf, sipType_wxPoint2DDouble, &sipCpp, &length))
        {
            try
            {
            sipCpp->SetVectorLength(length);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_SetVectorLength, doc_wxPoint2DDouble_SetVectorLength);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_SetVectorAngle, "Point2D.SetVectorAngle(float)");

extern "C" {static PyObject *meth_wxPoint2DDouble_SetVectorAngle(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_SetVectorAngle(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        wxDouble degrees;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_degrees,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bd", &sipSelf, sipType_wxPoint2DDouble, &sipCpp, &degrees))
        {
            try
            {
            sipCpp->SetVectorAngle(degrees);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_SetVectorAngle, doc_wxPoint2DDouble_SetVectorAngle);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_Normalize, "Point2D.Normalize()");

extern "C" {static PyObject *meth_wxPoint2DDouble_Normalize(PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_Normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        wxPoint2DDouble *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPoint2DDouble, &sipCpp))
        {
            try
            {
            sipCpp->Normalize();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_Normalize, doc_wxPoint2DDouble_Normalize);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_GetDistance, "Point2D.GetDistance(Point2D) -> float");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetDistance(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetDistance(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_wxPoint2DDouble, &sipCpp, sipType_wxPoint2DDouble, &pt))
        {
            wxDouble sipRes;

            try
            {
            sipRes = sipCpp->GetDistance(*pt);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetDistance, doc_wxPoint2DDouble_GetDistance);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_GetDistanceSquare, "Point2D.GetDistanceSquare(Point2D) -> float");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetDistanceSquare(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetDistanceSquare(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_wxPoint2DDouble, &sipCpp, sipType_wxPoint2DDouble, &pt))
        {
            wxDouble sipRes;

            try
            {
            sipRes = sipCpp->GetDistanceSquare(*pt);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetDistanceSquare, doc_wxPoint2DDouble_GetDistanceSquare);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_GetDotProduct, "Point2D.GetDotProduct(Point2D) -> float");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetDotProduct(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetDotProduct(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * vec;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_vec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_wxPoint2DDouble, &sipCpp, sipType_wxPoint2DDouble, &vec))
        {
            wxDouble sipRes;

            try
            {
            sipRes = sipCpp->GetDotProduct(*vec);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetDotProduct, doc_wxPoint2DDouble_GetDotProduct);

    return NULL;
}


PyDoc_STRVAR(doc_wxPoint2DDouble_GetCrossProduct, "Point2D.GetCrossProduct(Point2D) -> float");

extern "C" {static PyObject *meth_wxPoint2DDouble_GetCrossProduct(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint2DDouble_GetCrossProduct(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * vec;
        wxPoint2DDouble *sipCpp;

        static const char *sipKwdList[] = {
            sipName_vec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_wxPoint2DDouble, &sipCpp, sipType_wxPoint2DDouble, &vec))
        {
            wxDouble sipRes;

            try
            {
            sipRes = sipCpp->GetCrossProduct(*vec);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_GetCrossProduct, doc_wxPoint2DDouble_GetCrossProduct);

    return NULL;
}


extern "C" {static PyObject *slot_wxPoint2DDouble___add__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt1;
        const wxPoint2DDouble * pt2;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_wxPoint2DDouble, &pt1, sipType_wxPoint2DDouble, &pt2))
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble((*pt1 + *pt2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxPoint2DDouble___sub__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt1;
        const wxPoint2DDouble * pt2;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_wxPoint2DDouble, &pt1, sipType_wxPoint2DDouble, &pt2))
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble((*pt1 - *pt2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxPoint2DDouble___mul__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt1;
        const wxPoint2DDouble * pt2;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_wxPoint2DDouble, &pt1, sipType_wxPoint2DDouble, &pt2))
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble((*pt1 * *pt2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }

    {
        wxDouble n;
        const wxPoint2DDouble * pt;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &n, sipType_wxPoint2DDouble, &pt))
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble((n * *pt));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }

    {
        const wxPoint2DDouble * pt;
        wxDouble n;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_wxPoint2DDouble, &pt, &n))
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble((*pt * n));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxPoint2DDouble___div__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt1;
        const wxPoint2DDouble * pt2;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_wxPoint2DDouble, &pt1, sipType_wxPoint2DDouble, &pt2))
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble((*pt1 / *pt2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }

    {
        const wxPoint2DDouble * pt;
        wxDouble n;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_wxPoint2DDouble, &pt, &n))
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble((*pt / n));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI__core,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_wxPoint2DDouble___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint2DDouble));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPoint2DDouble, &pt))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->wxPoint2DDouble::operator!=(*pt);
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

    return sipPySlotExtend(&sipModuleAPI__core,ne_slot,sipType_wxPoint2DDouble,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_wxPoint2DDouble___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint2DDouble));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPoint2DDouble, &pt))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->wxPoint2DDouble::operator==(*pt);
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

    return sipPySlotExtend(&sipModuleAPI__core,eq_slot,sipType_wxPoint2DDouble,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_wxPoint2DDouble___idiv__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxPoint2DDouble)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint2DDouble));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPoint2DDouble, &pt))
        {
            try
            {
            sipCpp->wxPoint2DDouble::operator/=(*pt);
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


extern "C" {static PyObject *slot_wxPoint2DDouble___imul__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxPoint2DDouble)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint2DDouble));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPoint2DDouble, &pt))
        {
            try
            {
            sipCpp->wxPoint2DDouble::operator*=(*pt);
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


extern "C" {static PyObject *slot_wxPoint2DDouble___isub__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxPoint2DDouble)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint2DDouble));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPoint2DDouble, &pt))
        {
            try
            {
            sipCpp->wxPoint2DDouble::operator-=(*pt);
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


extern "C" {static PyObject *slot_wxPoint2DDouble___iadd__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint2DDouble___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxPoint2DDouble)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint2DDouble));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const wxPoint2DDouble * pt;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_wxPoint2DDouble, &pt))
        {
            try
            {
            sipCpp->wxPoint2DDouble::operator+=(*pt);
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


extern "C" {static PyObject *slot_wxPoint2DDouble___neg__(PyObject *);}
static PyObject *slot_wxPoint2DDouble___neg__(PyObject *sipSelf)
{
    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint2DDouble));

    if (!sipCpp)
        return 0;


    {
        {
            wxPoint2DDouble *sipRes;

            try
            {
            sipRes = new wxPoint2DDouble(-(*sipCpp));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewType(sipRes,sipType_wxPoint2DDouble,NULL);
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxPoint2DDouble(void *, const sipTypeDef *);}
static void *cast_wxPoint2DDouble(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_wxPoint2DDouble)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPoint2DDouble(void *, int);}
static void release_wxPoint2DDouble(void *sipCppV,int)
{
    delete reinterpret_cast<wxPoint2DDouble *>(sipCppV);
}


extern "C" {static void assign_wxPoint2DDouble(void *, SIP_SSIZE_T, const void *);}
static void assign_wxPoint2DDouble(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<wxPoint2DDouble *>(sipDst)[sipDstIdx] = *reinterpret_cast<const wxPoint2DDouble *>(sipSrc);
}


extern "C" {static void *array_wxPoint2DDouble(SIP_SSIZE_T);}
static void *array_wxPoint2DDouble(SIP_SSIZE_T sipNrElem)
{
    return new wxPoint2DDouble[sipNrElem];
}


extern "C" {static void *copy_wxPoint2DDouble(const void *, SIP_SSIZE_T);}
static void *copy_wxPoint2DDouble(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new wxPoint2DDouble(reinterpret_cast<const wxPoint2DDouble *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPoint2DDouble(sipSimpleWrapper *);}
static void dealloc_wxPoint2DDouble(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_wxPoint2DDouble(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_wxPoint2DDouble(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxPoint2DDouble(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    wxPoint2DDouble *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            try
            {
            sipCpp = new wxPoint2DDouble();
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
        wxDouble x;
        wxDouble y;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "dd", &x, &y))
        {
            try
            {
            sipCpp = new wxPoint2DDouble(x,y);
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
        const wxPoint2DDouble * pt;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_wxPoint2DDouble, &pt))
        {
            try
            {
            sipCpp = new wxPoint2DDouble(*pt);
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
            sipCpp = new wxPoint2DDouble(*pt);
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

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxPoint2DDouble[] = {
    {(void *)slot_wxPoint2DDouble___add__, add_slot},
    {(void *)slot_wxPoint2DDouble___sub__, sub_slot},
    {(void *)slot_wxPoint2DDouble___mul__, mul_slot},
    {(void *)slot_wxPoint2DDouble___div__, div_slot},
    {(void *)slot_wxPoint2DDouble___ne__, ne_slot},
    {(void *)slot_wxPoint2DDouble___eq__, eq_slot},
    {(void *)slot_wxPoint2DDouble___idiv__, idiv_slot},
    {(void *)slot_wxPoint2DDouble___imul__, imul_slot},
    {(void *)slot_wxPoint2DDouble___isub__, isub_slot},
    {(void *)slot_wxPoint2DDouble___iadd__, iadd_slot},
    {(void *)slot_wxPoint2DDouble___neg__, neg_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxPoint2DDouble[] = {
    {SIP_MLNAME_CAST(sipName_GetCrossProduct), (PyCFunction)meth_wxPoint2DDouble_GetCrossProduct, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetCrossProduct)},
    {SIP_MLNAME_CAST(sipName_GetDistance), (PyCFunction)meth_wxPoint2DDouble_GetDistance, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetDistance)},
    {SIP_MLNAME_CAST(sipName_GetDistanceSquare), (PyCFunction)meth_wxPoint2DDouble_GetDistanceSquare, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetDistanceSquare)},
    {SIP_MLNAME_CAST(sipName_GetDotProduct), (PyCFunction)meth_wxPoint2DDouble_GetDotProduct, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetDotProduct)},
    {SIP_MLNAME_CAST(sipName_GetFloor), (PyCFunction)meth_wxPoint2DDouble_GetFloor, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetFloor)},
    {SIP_MLNAME_CAST(sipName_GetRounded), (PyCFunction)meth_wxPoint2DDouble_GetRounded, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetRounded)},
    {SIP_MLNAME_CAST(sipName_GetVectorAngle), meth_wxPoint2DDouble_GetVectorAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetVectorAngle)},
    {SIP_MLNAME_CAST(sipName_GetVectorLength), meth_wxPoint2DDouble_GetVectorLength, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_GetVectorLength)},
    {SIP_MLNAME_CAST(sipName_Normalize), meth_wxPoint2DDouble_Normalize, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_Normalize)},
    {SIP_MLNAME_CAST(sipName_SetVectorAngle), (PyCFunction)meth_wxPoint2DDouble_SetVectorAngle, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_SetVectorAngle)},
    {SIP_MLNAME_CAST(sipName_SetVectorLength), (PyCFunction)meth_wxPoint2DDouble_SetVectorLength, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint2DDouble_SetVectorLength)}
};


extern "C" {static PyObject *varget_wxPoint2DDouble_m_x(void *, PyObject *);}
static PyObject *varget_wxPoint2DDouble_m_x(void *sipSelf, PyObject *)
{
    wxDouble sipVal;
    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipSelf);

    sipVal = sipCpp->m_x;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_wxPoint2DDouble_m_x(void *, PyObject *, PyObject *);}
static int varset_wxPoint2DDouble_m_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    wxDouble sipVal;
    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->m_x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxPoint2DDouble_m_y(void *, PyObject *);}
static PyObject *varget_wxPoint2DDouble_m_y(void *sipSelf, PyObject *)
{
    wxDouble sipVal;
    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipSelf);

    sipVal = sipCpp->m_y;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_wxPoint2DDouble_m_y(void *, PyObject *, PyObject *);}
static int varset_wxPoint2DDouble_m_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    wxDouble sipVal;
    wxPoint2DDouble *sipCpp = reinterpret_cast<wxPoint2DDouble *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->m_y = sipVal;

    return 0;
}

sipVariableDef variables_wxPoint2DDouble[] = {
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_wxPoint2DDouble_m_x, (PyMethodDef *)varset_wxPoint2DDouble_m_x, NULL, NULL},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_wxPoint2DDouble_m_y, (PyMethodDef *)varset_wxPoint2DDouble_m_y, NULL, NULL},
};

PyDoc_STRVAR(doc_wxPoint2DDouble, "\1Point2D()\n"
    "Point2D(float, float)\n"
    "Point2D(Point2D)\n"
    "Point2D(Point)");


sipClassTypeDef sipTypeDef__core_wxPoint2DDouble = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxPoint2DDouble,
        {0}
    },
    {
        sipNameNr_Point2D,
        {0, 0, 1},
        11, methods_wxPoint2DDouble,
        0, 0,
        2, variables_wxPoint2DDouble,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxPoint2DDouble,
    -1,
    -1,
    0,
    slots_wxPoint2DDouble,
    init_wxPoint2DDouble,
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
    dealloc_wxPoint2DDouble,
    assign_wxPoint2DDouble,
    array_wxPoint2DDouble,
    copy_wxPoint2DDouble,
    release_wxPoint2DDouble,
    cast_wxPoint2DDouble,
    0,
    0,
    0
};
