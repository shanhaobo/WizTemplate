#ifndef __WIZ_MATH_MATRIX33_ROWMAJOR_METHOD_HPP__SHANHAOBO_19800429__
#define __WIZ_MATH_MATRIX33_ROWMAJOR_METHOD_HPP__SHANHAOBO_19800429__

#include "../../Utils/WizMathUtils.hpp"

#include "./WizMathMatrix33Base.hpp"
#include "../Vector/WizMathVector3.hpp"
#include "./WizMathMatrix22RowMajorMethod.hpp"

namespace Wiz
{
    namespace Matrix33
    {
        namespace RowMajor
        {
            /*
            **
            **   ��0��   ��1��   ��2��
            **   e00,    e01,    e02;      /// ��0��(Row0)
            **   e10,    e11,    e12;      /// ��1��(Row1)
            **   e20,    e21,    e22;      /// ��2��(Row2)
            **
            **/
            namespace Method
            {
                template<class MatrixT>
                struct Type 
                {
                    ////////////////////////////////////////////////////////////////
                    typedef MatrixT                                             tMatrix;
                    typedef typename tMatrix::tElement                          tElement;
                    typedef Type<tMatrix>                                       tThis;
                    typedef ::Wiz::Vector2::Type<tElement>                      tVector2;
                    typedef ::Wiz::Vector3::Type<tElement>                      tVector3;
                    typedef ::Wiz::Matrix22::RowMajor::Method::Type<tMatrix>    tMatrix22;
                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static tMatrix& FromElement(tMatrixOut outMat, tElementIn inEle);
                    ////////////////////////////////////////////////////////////////
                    template<class Matrix22T>
                    WIZ_INLINE static tMatrix& FromMatrix22(tMatrixOut outMat, const Matrix22T& inMat);
                    template<class Matrix22T>
                    WIZ_INLINE static Matrix22T& ToMatrix22(Matrix22T& outMat, tMatrixIn inMat);

                    template<class Matrix33T>
                    WIZ_INLINE static tMatrix& FromMatrix33(tMatrixOut outMat, const Matrix33T& inMat);
                    template<class Matrix33T>
                    WIZ_INLINE static Matrix33T& ToMatrix33(Matrix33T& outMat, tMatrixIn inMat);

                    template<class Matrix44T>
                    WIZ_INLINE static tMatrix& FromMatrix44(tMatrixOut outMat, const Matrix44T& inMat);
                    template<class Matrix44T>
                    WIZ_INLINE static Matrix44T& ToMatrix44(Matrix44T& outMat, tMatrixIn inMat);
                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static tMatrix& Add(tMatrixOut outMat, tMatrixIn inMat1, tMatrixIn inMat2);
                    WIZ_INLINE static tMatrix& AddAssign(tMatrixIO ioMat, tMatrixIn inMat)
                    {
                        return tMatrix::Add(ioMat, ioMat, inMat);
                    }

                    WIZ_INLINE static tMatrix& Subtract(tMatrixOut outMat, tMatrixIn inMat1, tMatrixIn inMat2);
                    WIZ_INLINE static tMatrix& SubtractAssign(tMatrixIO ioMat, tMatrixIn inMat)
                    {
                        return tMatrix::Subtract(ioMat, ioMat, inMat);
                    }

                    WIZ_INLINE static tMatrix& Multiply(tMatrixOut outMat, tMatrixIn inMat1, tElementIn inEle);
                    WIZ_INLINE static tMatrix& MultiplyAssign(tMatrixIO ioMat, tElementIn inEle)
                    {
                        return tMatrix::Multiply(ioMat, ioMat, inEle);
                    }

                    WIZ_INLINE static tMatrix& Multiply(tMatrixOut outMat, tMatrixIn inMat1, tMatrixIn inMat2);
                    WIZ_INLINE static tMatrix& MultiplyAssign(tMatrixIO ioMat, tMatrixIn inMat)
                    {
                        return tMatrix::Multiply(ioMat, ioMat, inMat);
                    }

                    WIZ_INLINE static tVector3& Multiply(tVector3& outVec3, const tVector3& inVec3, tMatrixIn inMat);
                    WIZ_INLINE static tVector3& MultiplyAssign(tVector3& ioVec3, tMatrixIn inMat)
                    {
                        return tMatrix::Multiply(ioVec3, ioVec3, inMat);
                    }
                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static ::Wiz::Bool::type IsEqual(tMatrixIn inMat1, tMatrixIn inMat2);
                    WIZ_INLINE static ::Wiz::Bool::type NotEqual(tMatrixIn inMat1, tMatrixIn inMat2)
                    {
                        return  IsEqual(inMat1, inMat2) == ::Wiz::Bool::False;
                    }
                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static tElement Determinant
                        (
                        tElementIn inE00, tElementIn inE01, tElementIn inE02,
                        tElementIn inE10, tElementIn inE11, tElementIn inE12,
                        tElementIn inE20, tElementIn inE21, tElementIn inE22
                        );
                    WIZ_INLINE static tElement Determinant(tMatrixIn inMat)
                    {
                        return Determinant
                            (
                            inMat.e00, inMat.e01, inMat.e02,
                            inMat.e10, inMat.e11, inMat.e12,
                            inMat.e20, inMat.e21, inMat.e22
                            );
                    }
                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static ::Wiz::Bool::type Invert(tMatrixOut outMat, tMatrixIn inMat);
                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static tMatrix& Transpose(tMatrixOut outMat, tMatrixIn inMat);
                    WIZ_INLINE static tMatrix& Transpose(tMatrixIO ioMat);
                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static tMatrix& Identity(tMatrixIO ioMat);
                    WIZ_INLINE static tMatrix& Zero(tMatrixIO ioMat);
                    ////////////////////////////////////////////////////////////////

                    ////////////////////////////////////////////////////////////////
                    WIZ_INLINE static tMatrix& Negative(tMatrixOut outMat, tMatrixIn inMat);
                    ////////////////////////////////////////////////////////////////
                }; /// end of struct Type
            } /// end of namespace Method
        } /// end of namespace RowMajor
    } /// end of namespace Matrix33
} /// end of namespace Wiz

#include "./WizMathMatrix33RowMajorMethod.inl"

#endif /*__WIZ_MATH_MATRIX33_ROWMAJOR_METHOD_HPP__SHANHAOBO_19800429__*/
