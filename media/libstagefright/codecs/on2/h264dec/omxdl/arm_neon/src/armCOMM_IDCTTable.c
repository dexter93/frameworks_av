/*
 * Copyright (C) 2007-2008 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
/**
 * 
 * File Name:  armCOMM_IDCTTable.c
 * OpenMAX DL: v1.0.2
 * Revision:   12290
 * Date:       Wednesday, April 9, 2008
 * 
 * 
 * 
 *   
 * File: armCOMM_IDCTTable.c
 * Brief: Defines Tables used in IDCT computation
 *
 */

#include "armCOMM_IDCTTable.h"

     /*  Table of s(u)*A(u)*A(v)/16 at Q15
      *  s(u)=1.0 0 <= u <= 5
      *  s(6)=2.0
      *  s(7)=4.0
      *  A(0) = 2*sqrt(2)
      *  A(u) = 4*cos(u*pi/16)  for (u!=0)
	  */
	  
__align(4) const OMX_U16 armCOMM_IDCTPreScale [64] =
{
    0x4000, 0x58c5, 0x539f, 0x4b42, 0x4000, 0x3249, 0x4546, 0x46a1,
    0x58c5, 0x7b21, 0x73fc, 0x6862, 0x58c5, 0x45bf, 0x6016, 0x61f8,
    0x539f, 0x73fc, 0x6d41, 0x6254, 0x539f, 0x41b3, 0x5a82, 0x5c48,
    0x4b42, 0x6862, 0x6254, 0x587e, 0x4b42, 0x3b21, 0x5175, 0x530d,
    0x4000, 0x58c5, 0x539f, 0x4b42, 0x4000, 0x3249, 0x4546, 0x46a1,
    0x3249, 0x45bf, 0x41b3, 0x3b21, 0x3249, 0x2782, 0x366d, 0x377e,
    0x22a3, 0x300b, 0x2d41, 0x28ba, 0x22a3, 0x1b37, 0x257e, 0x263a,
    0x11a8, 0x187e, 0x1712, 0x14c3, 0x11a8, 0x0de0, 0x131d, 0x137d    
};
    /* Above array armCOMM_IDCTPreScale,  in Q23 format */
const OMX_U32 armCOMM_IDCTPreScaleU32 [64] =
{
    0x400000, 0x58c543, 0x539eba, 0x4b418c, 0x400000, 0x3248d4, 0x4545ea, 0x46a157,
    0x58c543, 0x7b20d8, 0x73fbfc, 0x686214, 0x58c543, 0x45bf1f, 0x6015a5, 0x61f78b,
    0x539eba, 0x73fbfc, 0x6d413d, 0x6253a6, 0x539eba, 0x41b328, 0x5a827a, 0x5c4869,
    0x4b418c, 0x686214, 0x6253a6, 0x587de3, 0x4b418c, 0x3b20d8, 0x5174e0, 0x530d69,
    0x400000, 0x58c543, 0x539eba, 0x4b418c, 0x400000, 0x3248d4, 0x4545ea, 0x46a157,
    0x3248d4, 0x45bf1f, 0x41b328, 0x3b20d8, 0x3248d4, 0x27821d, 0x366d72, 0x377e6b,
    0x22a2f5, 0x300ad3, 0x2d413d, 0x28ba70, 0x22a2f5, 0x1b36b9, 0x257d86, 0x26398d,
    0x11a856, 0x187de3, 0x17121a, 0x14c35a, 0x11a856, 0x0ddf9b, 0x131cc7, 0x137ca2
};
   
const OMX_U16 armCOMM_IDCTCoef [4] =
{
    0x5a82, /* InvSqrt2 */
    0x30fc, /* SinPIBy8 */
    0x7642, /* CosPIBy8 */
    0x0000    
};



