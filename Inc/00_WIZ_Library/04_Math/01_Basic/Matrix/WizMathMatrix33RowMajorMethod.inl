#ifndef __WIZ_MATH_MATRIX33_ROWMAJOR_METHOD_INL__SHANHAOBO_19800429__
#define __WIZ_MATH_MATRIX33_ROWMAJOR_METHOD_INL__SHANHAOBO_19800429__

#include "./WizMathMatrix33RowMajorMethod.hpp"

namespace Wiz
{
    namespace Matrix33
    {
        namespace RowMajor
        {
            namespace Method
            {
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                MatrixT& Type<MatrixT>::FromElement(tMatrixOut outMat, tElementIn inEle)
                {
                    outMat.e00 = inEle;
                    outMat.e01 = inEle;
                    outMat.e02 = inEle;

                    outMat.e10 = inEle;
                    outMat.e11 = inEle;
                    outMat.e12 = inEle;

                    outMat.e20 = inEle;
                    outMat.e21 = inEle;
                    outMat.e22 = inEle;

                    return outMat;
                }
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>template<class Matrix22T>
                MatrixT& Type<MatrixT>::FromMatrix22(tMatrixOut outMat, const Matrix22T& inMat)
                {
                    outMat.e00 = inMat.e00;
                    outMat.e01 = inMat.e01;

                    outMat.e10 = inMat.e10;
                    outMat.e11 = inMat.e11;

                    return outMat;
                }
                template<class MatrixT>template<class Matrix22T>
                Matrix22T& Type<MatrixT>::ToMatrix22(Matrix22T& outMat, tMatrixIn inMat)
                {
                    outMat.e00 = inMat.e00;
                    outMat.e01 = inMat.e01;

                    outMat.e10 = inMat.e10;
                    outMat.e11 = inMat.e11;

                    return outMat;
                }

                template<class MatrixT>template<class Matrix33T>
                MatrixT& Type<MatrixT>::FromMatrix33(tMatrixOut outMat, const Matrix33T& inMat)
                {
                    outMat.e00 = inMat.e00;
                    outMat.e01 = inMat.e01;
                    outMat.e02 = inMat.e02;

                    outMat.e10 = inMat.e10;
                    outMat.e11 = inMat.e11;
                    outMat.e12 = inMat.e12;

                    outMat.e20 = inMat.e20;
                    outMat.e21 = inMat.e21;
                    outMat.e22 = inMat.e22;

                    return outMat;
                }
                template<class MatrixT>template<class Matrix33T>
                Matrix33T& Type<MatrixT>::ToMatrix33(Matrix33T& outMat, tMatrixIn inMat)
                {
                    outMat.e00 = inMat.e00;
                    outMat.e01 = inMat.e01;
                    outMat.e02 = inMat.e02;

                    outMat.e10 = inMat.e10;
                    outMat.e11 = inMat.e11;
                    outMat.e12 = inMat.e12;

                    outMat.e20 = inMat.e20;
                    outMat.e21 = inMat.e21;
                    outMat.e22 = inMat.e22;

                    return outMat;
                }

                template<class MatrixT>template<class Matrix44T>
                MatrixT& Type<MatrixT>::FromMatrix44(tMatrixOut outMat, const Matrix44T& inMat)
                {
                    outMat.e00 = inMat.e00;
                    outMat.e01 = inMat.e01;
                    outMat.e02 = inMat.e02;

                    outMat.e10 = inMat.e10;
                    outMat.e11 = inMat.e11;
                    outMat.e12 = inMat.e12;

                    outMat.e20 = inMat.e20;
                    outMat.e21 = inMat.e21;
                    outMat.e22 = inMat.e22;

                    return outMat;
                }
                template<class MatrixT>template<class Matrix44T>
                Matrix44T& Type<MatrixT>::ToMatrix44(Matrix44T& outMat, tMatrixIn inMat)
                {
                    outMat.e00 = inMat.e00;
                    outMat.e01 = inMat.e01;
                    outMat.e02 = inMat.e02;

                    outMat.e10 = inMat.e10;
                    outMat.e11 = inMat.e11;
                    outMat.e12 = inMat.e12;

                    outMat.e20 = inMat.e20;
                    outMat.e21 = inMat.e21;
                    outMat.e22 = inMat.e22;

                    return outMat;
                }
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                MatrixT& Type<MatrixT>::Add(tMatrixOut outMat, tMatrixIn inMat1, tMatrixIn inMat2)
                {
                    outMat.e00 = inMat1.e00 + inMat2.e00;
                    outMat.e01 = inMat1.e01 + inMat2.e01;
                    outMat.e02 = inMat1.e02 + inMat2.e02;

                    outMat.e10 = inMat1.e10 + inMat2.e10;
                    outMat.e11 = inMat1.e11 + inMat2.e11;
                    outMat.e12 = inMat1.e12 + inMat2.e12;

                    outMat.e20 = inMat1.e20 + inMat2.e20;
                    outMat.e21 = inMat1.e21 + inMat2.e21;
                    outMat.e22 = inMat1.e22 + inMat2.e22;

                    return outMat;
                }

                template<class MatrixT>
                MatrixT& Type<MatrixT>::Subtract(tMatrixOut outMat, tMatrixIn inMat1, tMatrixIn inMat2)
                {
                    outMat.e00 = inMat1.e00 - inMat2.e00;
                    outMat.e01 = inMat1.e01 - inMat2.e01;
                    outMat.e02 = inMat1.e02 - inMat2.e02;

                    outMat.e10 = inMat1.e10 - inMat2.e10;
                    outMat.e11 = inMat1.e11 - inMat2.e11;
                    outMat.e12 = inMat1.e12 - inMat2.e12;

                    outMat.e20 = inMat1.e20 - inMat2.e20;
                    outMat.e21 = inMat1.e21 - inMat2.e21;
                    outMat.e22 = inMat1.e22 - inMat2.e22;

                    return outMat;
                }

                template<class MatrixT>
                MatrixT& Type<MatrixT>::Multiply(tMatrixOut outMat, tMatrixIn inMat1, tElementIn inEle)
                {
                    outMat.e00 = inMat1.e00 * inEle;
                    outMat.e01 = inMat1.e01 * inEle;
                    outMat.e02 = inMat1.e02 * inEle;

                    outMat.e10 = inMat1.e10 * inEle;
                    outMat.e11 = inMat1.e11 * inEle;
                    outMat.e12 = inMat1.e12 * inEle;

                    outMat.e20 = inMat1.e20 * inEle;
                    outMat.e21 = inMat1.e21 * inEle;
                    outMat.e22 = inMat1.e22 * inEle;

                    return outMat;
                }

                template<class MatrixT>
                MatrixT& Type<MatrixT>::Multiply(tMatrixOut outMat, tMatrixIn inMat1, tMatrixIn inMat2)
                {
                    tElement const le00 = inMat1.e00 * inMat2.e00 + inMat1.e01 * inMat2.e10 + inMat1.e02 * inMat2.e20;
                    tElement const le01 = inMat1.e00 * inMat2.e01 + inMat1.e01 * inMat2.e11 + inMat1.e02 * inMat2.e21;
                    tElement const le02 = inMat1.e00 * inMat2.e02 + inMat1.e01 * inMat2.e12 + inMat1.e02 * inMat2.e22;

                    tElement const le10 = inMat1.e10 * inMat2.e00 + inMat1.e11 * inMat2.e10 + inMat1.e12 * inMat2.e20;
                    tElement const le11 = inMat1.e10 * inMat2.e01 + inMat1.e11 * inMat2.e11 + inMat1.e12 * inMat2.e21;
                    tElement const le12 = inMat1.e10 * inMat2.e02 + inMat1.e11 * inMat2.e12 + inMat1.e12 * inMat2.e22;

                    tElement const le20 = inMat1.e20 * inMat2.e00 + inMat1.e21 * inMat2.e10 + inMat1.e22 * inMat2.e20;
                    tElement const le21 = inMat1.e20 * inMat2.e01 + inMat1.e21 * inMat2.e11 + inMat1.e22 * inMat2.e21;
                    tElement const le22 = inMat1.e20 * inMat2.e02 + inMat1.e21 * inMat2.e12 + inMat1.e22 * inMat2.e22;

                    outMat.e00 = le00;
                    outMat.e01 = le01;
                    outMat.e02 = le02;

                    outMat.e10 = le10;
                    outMat.e11 = le11;
                    outMat.e12 = le12;

                    outMat.e20 = le20;
                    outMat.e21 = le21;
                    outMat.e22 = le22;

                    return outMat;
                }
                template<class MatrixT>
                ::Wiz::Vector3::Type<typename MatrixT::tElement>& Type<MatrixT>::Multiply(tVector3& outVec3, const tVector3& inVec3, tMatrixIn inMat)
                {
                    tElement const lx = inVec3.x * inMat.e00 + inVec3.y * inMat.e10 + inVec3.z * inMat.e20;
                    tElement const ly = inVec3.x * inMat.e01 + inVec3.y * inMat.e11 + inVec3.z * inMat.e21;
                    tElement const lz = inVec3.x * inMat.e02 + inVec3.y * inMat.e12 + inVec3.z * inMat.e22;

                    outVec3.x = lx;
                    outVec3.y = ly;
                    outVec3.z = lz;

                    return outVec3;
                }
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                ::Wiz::Bool::type Type<MatrixT>::IsEqual(tMatrixIn inMat1, tMatrixIn inMat2)
                {
                    return
                        ::Wiz::IsEqual(inMat1.e00, inMat2.e00) &&
                        ::Wiz::IsEqual(inMat1.e01, inMat2.e01) &&
                        ::Wiz::IsEqual(inMat1.e02, inMat2.e02) &&
                        ::Wiz::IsEqual(inMat1.e10, inMat2.e10) &&
                        ::Wiz::IsEqual(inMat1.e11, inMat2.e11) &&
                        ::Wiz::IsEqual(inMat1.e12, inMat2.e12) &&
                        ::Wiz::IsEqual(inMat1.e20, inMat2.e20) &&
                        ::Wiz::IsEqual(inMat1.e21, inMat2.e21) &&
                        ::Wiz::IsEqual(inMat1.e22, inMat2.e22);
                }
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                typename MatrixT::tElement Type<MatrixT>::Determinant
                    (
                    tElementIn inE00, tElementIn inE01, tElementIn inE02,
                    tElementIn inE10, tElementIn inE11, tElementIn inE12,
                    tElementIn inE20, tElementIn inE21, tElementIn inE22
                    )
                {
                    return
                        inE00 * tMatrix22::Determinant(inE11, inE12, inE21, inE22) -
                        inE01 * tMatrix22::Determinant(inE10, inE12, inE20, inE22) +
                        inE02 * tMatrix22::Determinant(inE10, inE11, inE20, inE21);
                }
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                ::Wiz::Bool::type Type<MatrixT>::Invert(tMatrixOut outMat, tMatrixIn inMat)
                {
                    tElement t;

                    ////////////////////////////////////////////////////////////
                    tElement le00 =  tMatrix22::Determinant
                        (
                        inMat.e11, inMat.e12,
                        inMat.e21, inMat.e22
                        );
                    tElement le10 = -tMatrix22::Determinant
                        (
                        inMat.e10, inMat.e12,
                        inMat.e20, inMat.e22
                        );
                    tElement le20 =  tMatrix22::Determinant
                        (
                        inMat.e10, inMat.e11,
                        inMat.e20, inMat.e21
                        );

                    /// ����ʽ
                    t = le00 * inMat.e00 + le10 * inMat.e01 + le20 * inMat.e02;
                    if (::Wiz::IsZero(t))
                    {
                        return ::Wiz::Bool::False;
                    }
                    t = 1 / t;

                    le00 *= t;
                    le10 *= t;
                    le20 *= t;

                    ////////////////////////////////////////////////////////////
                    tElement const le01 = -tMatrix22::Determinant(
                        inMat.e01, inMat.e02,
                        inMat.e21, inMat.e22
                        ) * t;
                    tElement const le11 =  tMatrix22::Determinant(
                        inMat.e00, inMat.e02,
                        inMat.e20, inMat.e22
                        ) * t;
                    tElement const le21 = -tMatrix22::Determinant(
                        inMat.e00, inMat.e01,
                        inMat.e20, inMat.e21
                        ) * t;

                    ////////////////////////////////////////////////////////////
                    tElement const le02 =  tMatrix22::Determinant(
                        inMat.e01, inMat.e02,
                        inMat.e11, inMat.e12
                        ) * t;
                    tElement const le12 = -tMatrix22::Determinant(
                        inMat.e00, inMat.e02,
                        inMat.e10, inMat.e12
                        ) * t;
                    tElement const le22 =  tMatrix22::Determinant(
                        inMat.e00, inMat.e01,
                        inMat.e10, inMat.e11
                        ) * t;

                    ////////////////////////////////////////////////////////////

                    outMat.e00 = le00;
                    outMat.e01 = le01;
                    outMat.e02 = le02;

                    outMat.e10 = le10;
                    outMat.e11 = le11;
                    outMat.e12 = le12;

                    outMat.e20 = le20;
                    outMat.e21 = le21;
                    outMat.e22 = le22;

                    return ::Wiz::Bool::True;
                }
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                MatrixT& Type<MatrixT>::Transpose(tMatrixOut outMat, tMatrixIn inMat)
                {
                    tElement const le00 = inMat.e00;
                    tElement const le01 = inMat.e10;
                    tElement const le02 = inMat.e20;

                    tElement const le10 = inMat.e01;
                    tElement const le11 = inMat.e11;
                    tElement const le12 = inMat.e21;

                    tElement const le20 = inMat.e02;
                    tElement const le21 = inMat.e12;
                    tElement const le22 = inMat.e22;

                    outMat.e00 = le00;
                    outMat.e01 = le01;
                    outMat.e02 = le02;

                    outMat.e10 = le10;
                    outMat.e11 = le11;
                    outMat.e12 = le12;

                    outMat.e20 = le20;
                    outMat.e21 = le21;
                    outMat.e22 = le22;

                    return outMat;
                }
                template<class MatrixT>
                MatrixT& Type<MatrixT>::Transpose(tMatrixIO ioMat)
                {
                    ::Wiz::Swap(ioMat.e01, ioMat.e10);
                    ::Wiz::Swap(ioMat.e02, ioMat.e20);
                    ::Wiz::Swap(ioMat.e12, ioMat.e21);

                    return ioMat;
                }
                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                MatrixT& Type<MatrixT>::Identity(tMatrixIO ioMat)
                {
                    ioMat.e00 = 1; ioMat.e01 = 0; ioMat.e02 = 0;
                    ioMat.e10 = 0; ioMat.e11 = 1; ioMat.e12 = 0;
                    ioMat.e20 = 0; ioMat.e21 = 0; ioMat.e22 = 1;

                    return ioMat;
                }
                template<class MatrixT>
                MatrixT& Type<MatrixT>::Zero(tMatrixIO ioMat)
                {
                    ioMat.e00 = 0; ioMat.e01 = 0; ioMat.e02 = 0;
                    ioMat.e10 = 0; ioMat.e11 = 0; ioMat.e12 = 0;
                    ioMat.e20 = 0; ioMat.e21 = 0; ioMat.e22 = 0;

                    return ioMat;
                }
                ////////////////////////////////////////////////////////////////

                ////////////////////////////////////////////////////////////////
                template<class MatrixT>
                MatrixT& Type<MatrixT>::Negative(tMatrixOut outMat, tMatrixIn inMat)
                {
                    outMat.e00 = -inMat.e00;
                    outMat.e01 = -inMat.e01;
                    outMat.e02 = -inMat.e02;

                    outMat.e10 = -inMat.e10;
                    outMat.e11 = -inMat.e11;
                    outMat.e12 = -inMat.e12;

                    outMat.e20 = -inMat.e20;
                    outMat.e21 = -inMat.e21;
                    outMat.e22 = -inMat.e22;

                    return outMat;
                }
                ////////////////////////////////////////////////////////////////
            } /// end of namespace Method
        } /// end of namespace RowMajor
    } /// end of namespace Matrix33
} /// end of namespace Wiz

#endif /*__WIZ_MATH_MATRIX33_ROWMAJOR_METHOD_INL__SHANHAOBO_19800429__*/

