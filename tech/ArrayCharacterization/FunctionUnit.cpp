/*******************************************************************************
* Copyright (c) 2012-2013, The Microsystems Design Labratory (MDL)
* Department of Computer Science and Engineering, The Pennsylvania State University
* Exascale Computing Lab, Hewlett-Packard Company
* All rights reserved.
* 
* This source code is part of NVSim - An area, timing and power model for both 
* volatile (e.g., SRAM, DRAM) and non-volatile memory (e.g., PCRAM, STT-RAM, ReRAM, 
* SLC NAND Flash). The source code is free and you can redistribute and/or modify it
* by providing that the following conditions are met:
* 
*  1) Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
* 
*  2) Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
* 
* Author list: 
*   Cong Xu	    ( Email: czx102 at psu dot edu 
*                     Website: http://www.cse.psu.edu/~czx102/ )
*   Xiangyu Dong    ( Email: xydong at cse dot psu dot edu
*                     Website: http://www.cse.psu.edu/~xydong/ )
*******************************************************************************/


#include "FunctionUnit.h"

FunctionUnit::FunctionUnit() {
	height = width = 0;
	area = 0;
	readLatency = writeLatency = 0;
	readDynamicEnergy = writeDynamicEnergy = 0;
	leakage = 0;

	resetLatency = setLatency = 0;
    refreshLatency = 0;
	resetDynamicEnergy = setDynamicEnergy = 0;
    refreshDynamicEnergy = 0;
	cellReadEnergy = 0;
	cellSetEnergy = cellResetEnergy = 0;
}

FunctionUnit::~FunctionUnit() {
	// TODO Auto-generated destructor stub
}

void FunctionUnit::PrintProperty() {
	cout << "Area = " << height*1e6 << "um x " << width*1e6 << "um = " << area*1e6 << "mm^2" << endl;
	cout << "Timing:" << endl;
	cout << " -  Read Latency = " << readLatency*1e9 << "ns" << endl;
	cout << " - Write Latency = " << writeLatency*1e9 << "ns" << endl;
	cout << "Power:" << endl;
	cout << " -  Read Dynamic Energy = " << readDynamicEnergy*1e12 << "pJ" << endl;
	cout << " - Write Dynamic Energy = " << writeDynamicEnergy*1e12 << "pJ" << endl;
	cout << " - Leakage Power = " << leakage*1e3 << "mW" << endl;
}
