// Copyright (C) 2023 Intel Corporation                                          
//                                                                               
// Permission is hereby granted, free of charge, to any person obtaining a copy  
// of this software and associated documentation files (the "Software"),         
// to deal in the Software without restriction, including without limitation     
// the rights to use, copy, modify, merge, publish, distribute, sublicense,      
// and/or sell copies of the Software, and to permit persons to whom             
// the Software is furnished to do so, subject to the following conditions:      
//                                                                               
// The above copyright notice and this permission notice shall be included       
// in all copies or substantial portions of the Software.                        
//                                                                               
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS       
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL      
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES             
// OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,      
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE            
// OR OTHER DEALINGS IN THE SOFTWARE.                                            
//                                                                               
// SPDX-License-Identifier: MIT

#include "tdx_basic_types.h"

#include "fv_utils.h"

// Auto-generated CPUID constraint function
bool_t ia32_cpuid_constrain_autogen(uint32_t leaf, uint32_t subleaf, uint32_t eax, uint32_t ebx, uint32_t ecx, uint32_t edx) {
  switch (leaf) {
    case 0x0:
      return (
        ((eax & 0xffffffff) == 0x23) &&
        ((ebx & 0xffffffff) == 0x756e6547) &&
        ((ecx & 0xffffffff) == 0x6c65746e) &&
        ((edx & 0xffffffff) == 0x49656e69)
      );
    case 0x1:
      return (
        ((eax & 0xc000) == 0x0) &&
        ((eax & 0xf0000000) == 0x0) &&
        ((ebx & 0xff) == 0x0) &&
        ((ebx & 0xff00) == 0x8) &&
        ((ecx & 0x1) == 0x1) &&
        ((ecx & 0x2) == 0x1) &&
        ((ecx & 0x4) == 0x1) &&
        ((ecx & 0x10) == 0x1) &&
        ((ecx & 0x20) == 0x0) &&
        ((ecx & 0x40) == 0x0) &&
        ((ecx & 0x200) == 0x1) &&
        ((ecx & 0x2000) == 0x1) &&
        ((ecx & 0x8000) == 0x1) &&
        ((ecx & 0x10000) == 0x0) &&
        ((ecx & 0x20000) == 0x1) &&
        ((ecx & 0x80000) == 0x1) &&
        ((ecx & 0x100000) == 0x1) &&
        ((ecx & 0x200000) == 0x1) &&
        ((ecx & 0x400000) == 0x1) &&
        ((ecx & 0x800000) == 0x1) &&
        ((ecx & 0x2000000) == 0x1) &&
        ((ecx & 0x4000000) == 0x1) &&
        ((ecx & 0x40000000) == 0x1) &&
        ((ecx & 0x80000000) == 0x1) &&
        ((edx & 0x1) == 0x1) &&
        ((edx & 0x2) == 0x1) &&
        ((edx & 0x4) == 0x1) &&
        ((edx & 0x8) == 0x1) &&
        ((edx & 0x10) == 0x1) &&
        ((edx & 0x20) == 0x1) &&
        ((edx & 0x40) == 0x1) &&
        ((edx & 0x80) == 0x1) &&
        ((edx & 0x100) == 0x1) &&
        ((edx & 0x200) == 0x1) &&
        ((edx & 0x400) == 0x0) &&
        ((edx & 0x800) == 0x1) &&
        ((edx & 0x1000) == 0x1) &&
        ((edx & 0x2000) == 0x1) &&
        ((edx & 0x4000) == 0x1) &&
        ((edx & 0x8000) == 0x1) &&
        ((edx & 0x10000) == 0x1) &&
        ((edx & 0x20000) == 0x0) &&
        ((edx & 0x80000) == 0x1) &&
        ((edx & 0x100000) == 0x0) &&
        ((edx & 0x200000) == 0x1) &&
        ((edx & 0x800000) == 0x1) &&
        ((edx & 0x1000000) == 0x1) &&
        ((edx & 0x2000000) == 0x1) &&
        ((edx & 0x4000000) == 0x1) &&
        ((edx & 0x40000000) == 0x0)
      );
    case 0x3:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x4:
      switch (subleaf) {
        case 0x0:
          return (
            ((eax & 0x3c00) == 0x0) &&
            ((ebx & 0xfff) == 0x3F) &&
            ((edx & 0x4) == 0x0)
          );
        case 0x1:
          return (
            ((eax & 0x3c00) == 0x0) &&
            ((ebx & 0xfff) == 0x3F) &&
            ((edx & 0x4) == 0x0)
          );
        case 0x2:
          return (
            ((eax & 0x3c00) == 0x0) &&
            ((ebx & 0xfff) == 0x3F) &&
            ((edx & 0x4) == 0x0)
          );
        case 0x3:
          return (
            ((eax & 0x3c00) == 0x0) &&
            ((ebx & 0xfff) == 0x3F) &&
            ((edx & 0xfffffff8) == 0x0)
          );
        case 0x4:
          return (
            ((eax & 0x1f) == 0x0) &&
            ((eax & 0xe0) == 0x0) &&
            ((eax & 0x100) == 0x0) &&
            ((eax & 0x200) == 0x0) &&
            ((eax & 0x3c00) == 0x0) &&
            ((eax & 0x3ffc000) == 0x0) &&
            ((eax & 0xfc000000) == 0x0) &&
            ((ebx & 0xfff) == 0x0) &&
            ((ebx & 0x3ff000) == 0x0) &&
            ((ebx & 0xffc00000) == 0x0) &&
            ((ecx & 0xffffffff) == 0x0) &&
            ((edx & 0x1) == 0x0) &&
            ((edx & 0x2) == 0x0) &&
            ((edx & 0x4) == 0x0) &&
            ((edx & 0xfffffff8) == 0x0)
          );
        default:
          break;
        }
    case 0x5:
      return (
        ((eax & 0xffff0000) == 0x0) &&
        ((ebx & 0xffff0000) == 0x0) &&
        ((ecx & 0xfffffffc) == 0x0)
      );
    case 0x7:
      switch (subleaf) {
        case 0x0:
          return (
            ((eax & 0xffffffff) == 0x2) &&
            ((ebx & 0x1) == 0x1) &&
            ((ebx & 0x2) == 0x0) &&
            ((ebx & 0x4) == 0x0) &&
            ((ebx & 0x40) == 0x1) &&
            ((ebx & 0x80) == 0x1) &&
            ((ebx & 0x400) == 0x1) &&
            ((ebx & 0x2000) == 0x1) &&
            ((ebx & 0x4000) == 0x0) &&
            ((ebx & 0x40000) == 0x1) &&
            ((ebx & 0x100000) == 0x1) &&
            ((ebx & 0x400000) == 0x0) &&
            ((ebx & 0x800000) == 0x1) &&
            ((ebx & 0x1000000) == 0x1) &&
            ((ebx & 0x20000000) == 0x1) &&
            ((ecx & 0x8000) == 0x0) &&
            ((ecx & 0x3e0000) == 0x0) &&
            ((ecx & 0x1000000) == 0x1) &&
            ((ecx & 0x4000000) == 0x0) &&
            ((ecx & 0x8000000) == 0x1) &&
            ((ecx & 0x10000000) == 0x1) &&
            ((ecx & 0x20000000) == 0x0) &&
            ((ecx & 0x40000000) == 0x0) &&
            ((edx & 0x1) == 0x0) &&
            ((edx & 0x2) == 0x0) &&
            ((edx & 0x40) == 0x0) &&
            ((edx & 0x80) == 0x0) &&
            ((edx & 0x200) == 0x0) &&
            ((edx & 0x400) == 0x1) &&
            ((edx & 0x800) == 0x0) &&
            ((edx & 0x1000) == 0x0) &&
            ((edx & 0x2000) == 0x0) &&
            ((edx & 0x8000) == 0x0) &&
            ((edx & 0x20000) == 0x0) &&
            ((edx & 0x200000) == 0x0) &&
            ((edx & 0x4000000) == 0x1) &&
            ((edx & 0x8000000) == 0x1) &&
            ((edx & 0x10000000) == 0x1) &&
            ((edx & 0x20000000) == 0x1) &&
            ((edx & 0x40000000) == 0x1) &&
            ((edx & 0x80000000) == 0x1)
          );
        case 0x1:
          return (
            ((eax & 0x1) == 0x0) &&
            ((eax & 0x2) == 0x0) &&
            ((eax & 0x4) == 0x0) &&
            ((eax & 0x8) == 0x0) &&
            ((eax & 0x80) == 0x0) &&
            ((eax & 0x200) == 0x0) &&
            ((eax & 0x1e000) == 0x0) &&
            ((eax & 0x20000) == 0x0) &&
            ((eax & 0x40000) == 0x0) &&
            ((eax & 0x80000) == 0x0) &&
            ((eax & 0x100000) == 0x0) &&
            ((eax & 0x200000) == 0x0) &&
            ((eax & 0x400000) == 0x0) &&
            ((eax & 0x800000) == 0x0) &&
            ((eax & 0x1000000) == 0x0) &&
            ((eax & 0x2000000) == 0x0) &&
            ((eax & 0x8000000) == 0x0) &&
            ((eax & 0x10000000) == 0x0) &&
            ((eax & 0x20000000) == 0x0) &&
            ((eax & 0x40000000) == 0x0) &&
            ((eax & 0x80000000) == 0x0) &&
            ((ebx & 0x1) == 0x0) &&
            ((ebx & 0x2) == 0x0) &&
            ((ebx & 0xffffffc) == 0x0) &&
            ((ebx & 0x10000000) == 0x0) &&
            ((ebx & 0x20000000) == 0x0) &&
            ((ebx & 0x40000000) == 0x0) &&
            ((ebx & 0x80000000) == 0x0) &&
            ((ecx & 0x1) == 0x0) &&
            ((ecx & 0x2) == 0x0) &&
            ((ecx & 0x4) == 0x0) &&
            ((ecx & 0x8) == 0x0) &&
            ((ecx & 0x10) == 0x0) &&
            ((ecx & 0x20) == 0x0) &&
            ((ecx & 0xffffffc0) == 0x0) &&
            ((edx & 0x1) == 0x0) &&
            ((edx & 0x2) == 0x0) &&
            ((edx & 0x4) == 0x0) &&
            ((edx & 0x8) == 0x0) &&
            ((edx & 0x40) == 0x0) &&
            ((edx & 0x80) == 0x0) &&
            ((edx & 0x100) == 0x0) &&
            ((edx & 0x200) == 0x0) &&
            ((edx & 0x800) == 0x0) &&
            ((edx & 0x1000) == 0x0) &&
            ((edx & 0x2000) == 0x0) &&
            ((edx & 0x4000) == 0x0) &&
            ((edx & 0x8000) == 0x0) &&
            ((edx & 0x10000) == 0x0) &&
            ((edx & 0x20000) == 0x0) &&
            ((edx & 0x40000) == 0x0) &&
            ((edx & 0x80000) == 0x0) &&
            ((edx & 0x100000) == 0x0) &&
            ((edx & 0x200000) == 0x0) &&
            ((edx & 0x400000) == 0x0) &&
            ((edx & 0x800000) == 0x0) &&
            ((edx & 0x1f000000) == 0x0) &&
            ((edx & 0x20000000) == 0x0) &&
            ((edx & 0x40000000) == 0x0) &&
            ((edx & 0x80000000) == 0x0)
          );
        case 0x2:
          return (
            ((eax & 0xffffffff) == 0x0) &&
            ((ebx & 0xffffffff) == 0x0) &&
            ((ecx & 0xffffffff) == 0x0) &&
            ((edx & 0x1) == 0x1) &&
            ((edx & 0x2) == 0x1) &&
            ((edx & 0x4) == 0x1) &&
            ((edx & 0x10) == 0x1) &&
            ((edx & 0x40) == 0x0) &&
            ((edx & 0xff80) == 0x0) &&
            ((edx & 0x10000) == 0x0) &&
            ((edx & 0x20000) == 0x0) &&
            ((edx & 0xfffc0000) == 0x0)
          );
        default:
          break;
        }
    case 0x8:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0xa:
      return (
        ((edx & 0x2000) == 0x0) &&
        ((edx & 0x4000) == 0x0) &&
        ((edx & 0x8000) == 0x1) &&
        ((edx & 0xffff0000) == 0x0)
      );
    case 0xb:
      switch (subleaf) {
        case 0x0:
          return (
            ((eax & 0x1f) == 0) &&
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xff) == 0) &&
            ((ecx & 0xff00) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        case 0x1:
          return (
            ((eax & 0x1f) == 0) &&
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xff) == 0) &&
            ((ecx & 0xff00) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        case 0x2:
          return (
            ((eax & 0x1f) == 0) &&
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xff) == 0) &&
            ((ecx & 0xff00) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        default:
          break;
        }
    case 0xd:
      switch (subleaf) {
        case 0x0:
          return (
            ((eax & 0x1) == 0x1) &&
            ((eax & 0x2) == 0x1) &&
            ((eax & 0x8) == 0x0) &&
            ((eax & 0x10) == 0x0) &&
            ((eax & 0x100) == 0x0) &&
            ((eax & 0x1fc00) == 0x0) &&
            ((eax & 0x80000) == 0x0) &&
            ((eax & 0xfff00000) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x1:
          return (
            ((eax & 0x1) == 0x1) &&
            ((eax & 0x2) == 0x1) &&
            ((eax & 0x4) == 0x1) &&
            ((eax & 0x8) == 0x1) &&
            ((eax & 0xffffffe0) == 0x0) &&
            ((ecx & 0xff) == 0x0) &&
            ((ecx & 0x200) == 0x0) &&
            ((ecx & 0x400) == 0x0) &&
            ((ecx & 0x2000) == 0x0) &&
            ((ecx & 0x10000) == 0x0) &&
            ((ecx & 0xfffe0000) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x2:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x3:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x4:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x5:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x6:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x7:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x8:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x9:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0xa:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0xb:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0xc:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0xd:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0xe:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0xf:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x10:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x11:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x12:
          return (
            ((edx & 0xffffffff) == 0x0)
          );
        default:
          break;
        }
    case 0xe:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x11:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x12:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x13:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x14:
      switch (subleaf) {
        case 0x0:
          return (
            ((ebx & 0xfffffe00) == 0x0) &&
            ((ecx & 0x7ffffff0) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x1:
          return (
            ((eax & 0xfff8) == 0x0) &&
            ((ecx & 0xffffffff) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        default:
          break;
        }
    case 0x15:
      return (
        ((eax & 0xffffffff) == 0x1) &&
        ((ecx & 0xffffffff) == 0x017D7840) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x19:
      return (
        ((eax & 0x8) == 0x0) &&
        ((eax & 0xfffffff0) == 0x0) &&
        ((ebx & 0x2) == 0x0) &&
        ((ebx & 0x8) == 0x0) &&
        ((ebx & 0x10) == 0x0) &&
        ((ebx & 0xffffffe0) == 0x0) &&
        ((ecx & 0x1) == 0x0) &&
        ((ecx & 0xfffffffc) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x1a:
      return (
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x1c:
    case 0x1d:
      switch (subleaf) {
        case 0x0:
        case 0x1:
        default:
          break;
        }
    case 0x1e:
    case 0x1f:
      switch (subleaf) {
        case 0x0:
          return (
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        case 0x1:
          return (
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        case 0x2:
          return (
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        case 0x3:
          return (
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        case 0x4:
          return (
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        case 0x5:
          return (
            ((eax & 0xffffffe0) == 0) &&
            ((ebx & 0xffff0000) == 0) &&
            ((ecx & 0xffff0000) == 0) &&
            ((edx & 0xffffffff) == 0)
          );
        default:
          break;
        }
    case 0x20:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x21:
      switch (subleaf) {
        case 0x0:
          return (
            ((eax & 0xffffffff) == 0x00000000) &&
            ((ebx & 0xffffffff) == 0x65746E49) &&
            ((ecx & 0xffffffff) == 0x20202020) &&
            ((edx & 0xffffffff) == 0x5844546C)
          );
        default:
          break;
        }
    case 0x22:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x23:
      switch (subleaf) {
        case 0x0:
          return (
            ((eax & 0x30) == 0x0) &&
            ((eax & 0xffffffc0) == 0x0) &&
            ((ecx & 0xffffffff) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x1:
          return (
            ((ecx & 0xffffffff) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x2:
          return (
            ((eax & 0xffffffff) == 0x0) &&
            ((ebx & 0xffffffff) == 0x0) &&
            ((ecx & 0xffffffff) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x3:
          return (
            ((ebx & 0xffffffff) == 0x0) &&
            ((ecx & 0xffffffff) == 0x0) &&
            ((edx & 0xffffffff) == 0x0)
          );
        case 0x4:
        case 0x5:
        default:
          break;
        }
    case 0x24:
    case 0x80000000:
      return (
        ((eax & 0xffffffff) == 0x80000008) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    case 0x80000001:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0x1) == 0x1) &&
        ((ecx & 0x1e) == 0x0) &&
        ((ecx & 0x20) == 0x1) &&
        ((ecx & 0xc0) == 0x0) &&
        ((ecx & 0x100) == 0x1) &&
        ((ecx & 0xfffffe00) == 0x0) &&
        ((edx & 0x7ff) == 0x0) &&
        ((edx & 0xff000) == 0x0) &&
        ((edx & 0x100000) == 0x1) &&
        ((edx & 0x3e00000) == 0x0) &&
        ((edx & 0x4000000) == 0x1) &&
        ((edx & 0x8000000) == 0x1) &&
        ((edx & 0x10000000) == 0x0) &&
        ((edx & 0x20000000) == 0x1) &&
        ((edx & 0xc0000000) == 0x0)
      );
    case 0x80000007:
      return (
        ((eax & 0xffffffff) == 0x0) &&
        ((ebx & 0xffffffff) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xff) == 0x0) &&
        ((edx & 0x100) == 0x1) &&
        ((edx & 0xfffffe00) == 0x0)
      );
    case 0x80000008:
      return (
        ((eax & 0xff) == 0x34) &&
        ((eax & 0xffff0000) == 0x0) &&
        ((ebx & 0x1ff) == 0x0) &&
        ((ebx & 0xfffffc00) == 0x0) &&
        ((ecx & 0xffffffff) == 0x0) &&
        ((edx & 0xffffffff) == 0x0)
      );
    default:
      break;
  }
  // TDXFV_ASSERT(false);
  return false;
}
