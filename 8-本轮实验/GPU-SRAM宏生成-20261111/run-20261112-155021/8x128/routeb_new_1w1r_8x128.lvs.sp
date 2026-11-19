**************************************************
* OpenRAM generated memory.
* Words: 128
* Data bits: 8
* Banks: 1
* Column mux: 1:1
* Trimmed: False
* LVS: True
**************************************************
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

* SPICE3 file created from sky130_fd_bd_sram__openram_dff.ext - technology: EFS8A

.subckt sky130_fd_bd_sram__openram_dff D Q CLK VDD GND
X1000 a_511_725# a_n8_115# VDD VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1001 a_353_115# CLK a_11_624# GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1002 a_353_725# a_203_89# a_11_624# VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1003 a_11_624# a_203_89# a_161_115# GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1004 a_11_624# CLK a_161_725# VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1005 GND Q a_703_115# GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1006 VDD Q a_703_725# VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1007 a_203_89# CLK GND GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1008 a_203_89# CLK VDD VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1009 a_161_115# D GND GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1010 a_161_725# D VDD VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1011 GND a_11_624# a_n8_115# GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1012 a_703_115# a_203_89# ON GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1013 VDD a_11_624# a_n8_115# VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1014 a_703_725# CLK ON VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1015 Q ON VDD VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1016 Q ON GND GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1017 ON a_203_89# a_511_725# VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1018 ON CLK a_511_115# GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1019 GND a_n8_115# a_353_115# GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X1020 VDD a_n8_115# a_353_725# VDD sky130_fd_pr__pfet_01v8 W=3u L=0.15u m=1
X1021 a_511_115# a_n8_115# GND GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
.ends

.SUBCKT routeb_new_1w1r_8x128_data_dff
+ din_0 din_1 din_2 din_3 din_4 din_5 din_6 din_7 dout_0 dout_1 dout_2
+ dout_3 dout_4 dout_5 dout_6 dout_7 clk vdd gnd
* INPUT : din_0 
* INPUT : din_1 
* INPUT : din_2 
* INPUT : din_3 
* INPUT : din_4 
* INPUT : din_5 
* INPUT : din_6 
* INPUT : din_7 
* OUTPUT: dout_0 
* OUTPUT: dout_1 
* OUTPUT: dout_2 
* OUTPUT: dout_3 
* OUTPUT: dout_4 
* OUTPUT: dout_5 
* OUTPUT: dout_6 
* OUTPUT: dout_7 
* INPUT : clk 
* POWER : vdd 
* GROUND: gnd 
* rows: 1 cols: 8
Xdff_r0_c0
+ din_0 dout_0 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r0_c1
+ din_1 dout_1 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r0_c2
+ din_2 dout_2 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r0_c3
+ din_3 dout_3 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r0_c4
+ din_4 dout_4 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r0_c5
+ din_5 dout_5 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r0_c6
+ din_6 dout_6 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r0_c7
+ din_7 dout_7 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
.ENDS routeb_new_1w1r_8x128_data_dff

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=23 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=23 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

.SUBCKT routeb_new_1w1r_8x128_pinv_8
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 42
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=23 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=23 w=2.0u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_8

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=8 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=8 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

.SUBCKT routeb_new_1w1r_8x128_pinv_7
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 14
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=8 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=8 w=2.0u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_7

.SUBCKT routeb_new_1w1r_8x128_pdriver_1
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* sizes: [14, 42]
Xbuf_inv1
+ A Zb1_int vdd gnd
+ routeb_new_1w1r_8x128_pinv_7
Xbuf_inv2
+ Zb1_int Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_8
.ENDS routeb_new_1w1r_8x128_pdriver_1

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=1 w=0.74 l=0.15 pd=1.78 ps=1.78 as=0.28u ad=0.28u

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=1 w=0.74 l=0.15 pd=1.78 ps=1.78 as=0.28u ad=0.28u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=1 w=1.12 l=0.15 pd=2.54 ps=2.54 as=0.42u ad=0.42u

.SUBCKT routeb_new_1w1r_8x128_pnand2_0
+ A B Z vdd gnd
* INPUT : A 
* INPUT : B 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpnand2_pmos1 vdd A Z vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpnand2_pmos2 Z B vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpnand2_nmos1 Z B net1 gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
Xpnand2_nmos2 net1 A gnd gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
.ENDS routeb_new_1w1r_8x128_pnand2_0

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=7 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=7 w=1.68 l=0.15 pd=3.66 ps=3.66 as=0.63u ad=0.63u

.SUBCKT routeb_new_1w1r_8x128_pinv_1
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 12
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=7 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=7 w=1.68u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_1

.SUBCKT routeb_new_1w1r_8x128_pdriver
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* sizes: [12]
Xbuf_inv1
+ A Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_1
.ENDS routeb_new_1w1r_8x128_pdriver

.SUBCKT routeb_new_1w1r_8x128_pnand2
+ A B Z vdd gnd
* INPUT : A 
* INPUT : B 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpnand2_pmos1 vdd A Z vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpnand2_pmos2 Z B vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpnand2_nmos1 Z B net1 gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
Xpnand2_nmos2 net1 A gnd gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
.ENDS routeb_new_1w1r_8x128_pnand2

.SUBCKT routeb_new_1w1r_8x128_pand2
+ A B Z vdd gnd
* INPUT : A 
* INPUT : B 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 12
Xpand2_nand
+ A B zb_int vdd gnd
+ routeb_new_1w1r_8x128_pnand2
Xpand2_inv
+ zb_int Z vdd gnd
+ routeb_new_1w1r_8x128_pdriver
.ENDS routeb_new_1w1r_8x128_pand2

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=1 w=0.74 l=0.15 pd=1.78 ps=1.78 as=0.28u ad=0.28u

.SUBCKT routeb_new_1w1r_8x128_pnand3
+ A B C Z vdd gnd
* INPUT : A 
* INPUT : B 
* INPUT : C 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpnand3_pmos1 vdd A Z vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpnand3_pmos2 Z B vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpnand3_pmos3 Z C vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpnand3_nmos1 Z C net1 gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
Xpnand3_nmos2 net1 B net2 gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
Xpnand3_nmos3 net2 A gnd gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
.ENDS routeb_new_1w1r_8x128_pnand3

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=9 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=9 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

.SUBCKT routeb_new_1w1r_8x128_pinv_9
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 16
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=9 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=9 w=2.0u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_9

.SUBCKT routeb_new_1w1r_8x128_pdriver_2
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* sizes: [16]
Xbuf_inv1
+ A Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_9
.ENDS routeb_new_1w1r_8x128_pdriver_2

.SUBCKT routeb_new_1w1r_8x128_pand3
+ A B C Z vdd gnd
* INPUT : A 
* INPUT : B 
* INPUT : C 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 16
Xpand3_nand
+ A B C zb_int vdd gnd
+ routeb_new_1w1r_8x128_pnand3
Xpand3_inv
+ zb_int Z vdd gnd
+ routeb_new_1w1r_8x128_pdriver_2
.ENDS routeb_new_1w1r_8x128_pand3

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=1 w=1.12 l=0.15 pd=2.54 ps=2.54 as=0.42u ad=0.42u

* spice ptx X{0} {1} sky130_fd_pr__special_nfet_01v8 m=1 w=0.36 l=0.15 pd=1.02 ps=1.02 as=0.14u ad=0.14u

.SUBCKT routeb_new_1w1r_8x128_pinv_11
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__special_nfet_01v8 m=1 w=0.36u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_11

.SUBCKT routeb_new_1w1r_8x128_pinv_12
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__special_nfet_01v8 m=1 w=0.36u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_12

.SUBCKT routeb_new_1w1r_8x128_delay_chain
+ in out vdd gnd
* INPUT : in 
* OUTPUT: out 
* POWER : vdd 
* GROUND: gnd 
* fanouts: [4, 4, 4, 4, 4, 4, 4, 4, 4]
Xdinv0
+ in dout_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_0_0
+ dout_1 n_0_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_0_1
+ dout_1 n_0_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_0_2
+ dout_1 n_0_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_0_3
+ dout_1 n_0_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv1
+ dout_1 dout_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_1_0
+ dout_2 n_1_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_1_1
+ dout_2 n_1_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_1_2
+ dout_2 n_1_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_1_3
+ dout_2 n_1_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv2
+ dout_2 dout_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_2_0
+ dout_3 n_2_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_2_1
+ dout_3 n_2_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_2_2
+ dout_3 n_2_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_2_3
+ dout_3 n_2_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv3
+ dout_3 dout_4 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_3_0
+ dout_4 n_3_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_3_1
+ dout_4 n_3_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_3_2
+ dout_4 n_3_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_3_3
+ dout_4 n_3_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv4
+ dout_4 dout_5 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_4_0
+ dout_5 n_4_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_4_1
+ dout_5 n_4_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_4_2
+ dout_5 n_4_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_4_3
+ dout_5 n_4_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv5
+ dout_5 dout_6 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_5_0
+ dout_6 n_5_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_5_1
+ dout_6 n_5_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_5_2
+ dout_6 n_5_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_5_3
+ dout_6 n_5_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv6
+ dout_6 dout_7 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_6_0
+ dout_7 n_6_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_6_1
+ dout_7 n_6_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_6_2
+ dout_7 n_6_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_6_3
+ dout_7 n_6_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv7
+ dout_7 dout_8 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_7_0
+ dout_8 n_7_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_7_1
+ dout_8 n_7_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_7_2
+ dout_8 n_7_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_7_3
+ dout_8 n_7_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdinv8
+ dout_8 out vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_8_0
+ out n_8_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_8_1
+ out n_8_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_8_2
+ out n_8_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
Xdload_8_3
+ out n_8_3 vdd gnd
+ routeb_new_1w1r_8x128_pinv_12
.ENDS routeb_new_1w1r_8x128_delay_chain

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=3 w=1.68 l=0.15 pd=3.66 ps=3.66 as=0.63u ad=0.63u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=3 w=1.68 l=0.15 pd=3.66 ps=3.66 as=0.63u ad=0.63u

.SUBCKT routeb_new_1w1r_8x128_pinv_0
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 4
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=3 w=1.68u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=3 w=1.68u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_0

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=2 w=0.74 l=0.15 pd=1.78 ps=1.78 as=0.28u ad=0.28u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=2 w=1.26 l=0.15 pd=2.82 ps=2.82 as=0.47u ad=0.47u

.SUBCKT routeb_new_1w1r_8x128_pinv
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 2
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=2 w=1.26u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=2 w=0.74u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv

.SUBCKT routeb_new_1w1r_8x128_dff_buf_0
+ D Q Qb clk vdd gnd
* INPUT : D 
* OUTPUT: Q 
* OUTPUT: Qb 
* INPUT : clk 
* POWER : vdd 
* GROUND: gnd 
* inv1: 2 inv2: 4
Xdff_buf_dff
+ D qint clk vdd gnd
+ sky130_fd_bd_sram__openram_dff
Xdff_buf_inv1
+ qint Qb vdd gnd
+ routeb_new_1w1r_8x128_pinv
Xdff_buf_inv2
+ Qb Q vdd gnd
+ routeb_new_1w1r_8x128_pinv_0
.ENDS routeb_new_1w1r_8x128_dff_buf_0

.SUBCKT routeb_new_1w1r_8x128_dff_buf_array
+ din_0 dout_0 dout_bar_0 clk vdd gnd
* INPUT : din_0 
* OUTPUT: dout_0 
* OUTPUT: dout_bar_0 
* INPUT : clk 
* POWER : vdd 
* GROUND: gnd 
* rows: 1 cols: 1
* inv1: 2 inv2: 4
Xdff_r0_c0
+ din_0 dout_0 dout_bar_0 clk vdd gnd
+ routeb_new_1w1r_8x128_dff_buf_0
.ENDS routeb_new_1w1r_8x128_dff_buf_array

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=5 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=5 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

.SUBCKT routeb_new_1w1r_8x128_pinv_5
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 9
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=5 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=5 w=2.0u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_5

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=2 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=2 w=1.26 l=0.15 pd=2.82 ps=2.82 as=0.47u ad=0.47u

.SUBCKT routeb_new_1w1r_8x128_pinv_4
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 3
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=2 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=2 w=1.26u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_4

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=16 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=16 w=2.0 l=0.15 pd=4.30 ps=4.30 as=0.75u ad=0.75u

.SUBCKT routeb_new_1w1r_8x128_pinv_6
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 28
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=16 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=16 w=2.0u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_6

.SUBCKT routeb_new_1w1r_8x128_pinv_3
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__special_nfet_01v8 m=1 w=0.36u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_3

.SUBCKT routeb_new_1w1r_8x128_pdriver_0
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* sizes: [1, 3, 9, 28]
Xbuf_inv1
+ A Zb1_int vdd gnd
+ routeb_new_1w1r_8x128_pinv_3
Xbuf_inv2
+ Zb1_int Zb2_int vdd gnd
+ routeb_new_1w1r_8x128_pinv_4
Xbuf_inv3
+ Zb2_int Zb3_int vdd gnd
+ routeb_new_1w1r_8x128_pinv_5
Xbuf_inv4
+ Zb3_int Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_6
.ENDS routeb_new_1w1r_8x128_pdriver_0

.SUBCKT routeb_new_1w1r_8x128_pdriver_4
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* sizes: [1, 3]
Xbuf_inv1
+ A Zb1_int vdd gnd
+ routeb_new_1w1r_8x128_pinv_3
Xbuf_inv2
+ Zb1_int Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_4
.ENDS routeb_new_1w1r_8x128_pdriver_4

.SUBCKT routeb_new_1w1r_8x128_control_logic_w
+ csb clk rbl_bl w_en p_en_bar wl_en clk_buf vdd gnd
* INPUT : csb 
* INPUT : clk 
* INPUT : rbl_bl 
* OUTPUT: w_en 
* OUTPUT: p_en_bar 
* OUTPUT: wl_en 
* OUTPUT: clk_buf 
* POWER : vdd 
* GROUND: gnd 
* num_rows: 128
* words_per_row: 1
* word_size 8
Xctrl_dffs
+ csb cs_bar cs clk_buf vdd gnd
+ routeb_new_1w1r_8x128_dff_buf_array
Xclkbuf
+ clk clk_buf vdd gnd
+ routeb_new_1w1r_8x128_pdriver_0
Xinv_clk_bar
+ clk_buf clk_bar vdd gnd
+ routeb_new_1w1r_8x128_pinv_11
Xand2_gated_clk_bar
+ clk_bar cs gated_clk_bar vdd gnd
+ routeb_new_1w1r_8x128_pand2
Xand2_gated_clk_buf
+ clk_buf cs gated_clk_buf vdd gnd
+ routeb_new_1w1r_8x128_pand2
Xbuf_wl_en
+ gated_clk_bar wl_en vdd gnd
+ routeb_new_1w1r_8x128_pdriver_1
Xrbl_bl_delay_inv
+ rbl_bl_delay rbl_bl_delay_bar vdd gnd
+ routeb_new_1w1r_8x128_pinv_11
Xw_en_and
+ cs rbl_bl_delay_bar gated_clk_bar w_en vdd gnd
+ routeb_new_1w1r_8x128_pand3
Xdelay_chain
+ rbl_bl rbl_bl_delay vdd gnd
+ routeb_new_1w1r_8x128_delay_chain
Xnand_p_en_bar
+ gated_clk_buf rbl_bl_delay p_en_bar_unbuf vdd gnd
+ routeb_new_1w1r_8x128_pnand2_0
Xbuf_p_en_bar
+ p_en_bar_unbuf p_en_bar vdd gnd
+ routeb_new_1w1r_8x128_pdriver_4
.ENDS routeb_new_1w1r_8x128_control_logic_w

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=5 w=1.68 l=0.15 pd=3.66 ps=3.66 as=0.63u ad=0.63u

.SUBCKT routeb_new_1w1r_8x128_pinv_10
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 8
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=5 w=2.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=5 w=1.68u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_10

.SUBCKT routeb_new_1w1r_8x128_pdriver_3
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* sizes: [8]
Xbuf_inv1
+ A Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_10
.ENDS routeb_new_1w1r_8x128_pdriver_3

.SUBCKT routeb_new_1w1r_8x128_pand3_0
+ A B C Z vdd gnd
* INPUT : A 
* INPUT : B 
* INPUT : C 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 8
Xpand3_nand
+ A B C zb_int vdd gnd
+ routeb_new_1w1r_8x128_pnand3
Xpand3_inv
+ zb_int Z vdd gnd
+ routeb_new_1w1r_8x128_pdriver_3
.ENDS routeb_new_1w1r_8x128_pand3_0

.SUBCKT routeb_new_1w1r_8x128_control_logic_r
+ csb clk rbl_bl s_en p_en_bar wl_en clk_buf vdd gnd
* INPUT : csb 
* INPUT : clk 
* INPUT : rbl_bl 
* OUTPUT: s_en 
* OUTPUT: p_en_bar 
* OUTPUT: wl_en 
* OUTPUT: clk_buf 
* POWER : vdd 
* GROUND: gnd 
* num_rows: 128
* words_per_row: 1
* word_size 8
Xctrl_dffs
+ csb cs_bar cs clk_buf vdd gnd
+ routeb_new_1w1r_8x128_dff_buf_array
Xclkbuf
+ clk clk_buf vdd gnd
+ routeb_new_1w1r_8x128_pdriver_0
Xinv_clk_bar
+ clk_buf clk_bar vdd gnd
+ routeb_new_1w1r_8x128_pinv_11
Xand2_gated_clk_bar
+ clk_bar cs gated_clk_bar vdd gnd
+ routeb_new_1w1r_8x128_pand2
Xand2_gated_clk_buf
+ clk_buf cs gated_clk_buf vdd gnd
+ routeb_new_1w1r_8x128_pand2
Xbuf_wl_en
+ gated_clk_bar wl_en vdd gnd
+ routeb_new_1w1r_8x128_pdriver_1
Xbuf_s_en_and
+ rbl_bl_delay gated_clk_bar cs s_en vdd gnd
+ routeb_new_1w1r_8x128_pand3_0
Xdelay_chain
+ rbl_bl rbl_bl_delay vdd gnd
+ routeb_new_1w1r_8x128_delay_chain
Xnand_p_en_bar
+ gated_clk_buf rbl_bl_delay p_en_bar_unbuf vdd gnd
+ routeb_new_1w1r_8x128_pnand2_0
Xbuf_p_en_bar
+ p_en_bar_unbuf p_en_bar vdd gnd
+ routeb_new_1w1r_8x128_pdriver_4
.ENDS routeb_new_1w1r_8x128_control_logic_r

.SUBCKT routeb_new_1w1r_8x128_row_addr_dff
+ din_0 din_1 din_2 din_3 din_4 din_5 din_6 dout_0 dout_1 dout_2 dout_3
+ dout_4 dout_5 dout_6 clk vdd gnd
* INPUT : din_0 
* INPUT : din_1 
* INPUT : din_2 
* INPUT : din_3 
* INPUT : din_4 
* INPUT : din_5 
* INPUT : din_6 
* OUTPUT: dout_0 
* OUTPUT: dout_1 
* OUTPUT: dout_2 
* OUTPUT: dout_3 
* OUTPUT: dout_4 
* OUTPUT: dout_5 
* OUTPUT: dout_6 
* INPUT : clk 
* POWER : vdd 
* GROUND: gnd 
* rows: 7 cols: 1
Xdff_r0_c0
+ din_0 dout_0 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r1_c0
+ din_1 dout_1 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r2_c0
+ din_2 dout_2 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r3_c0
+ din_3 dout_3 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r4_c0
+ din_4 dout_4 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r5_c0
+ din_5 dout_5 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
Xdff_r6_c0
+ din_6 dout_6 CLK VDD GND
+ sky130_fd_bd_sram__openram_dff
.ENDS routeb_new_1w1r_8x128_row_addr_dff

* spice ptx X{0} {1} sky130_fd_pr__nfet_01v8 m=1 w=0.74 l=0.15 pd=1.78 ps=1.78 as=0.28u ad=0.28u

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=1 w=3.0 l=0.15 pd=6.30 ps=6.30 as=1.12u ad=1.12u

.SUBCKT routeb_new_1w1r_8x128_pinv_dec_0
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 2
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=3.0u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__nfet_01v8 m=1 w=0.74u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_dec_0
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

* NGSPICE file created from sky130_fd_bd_sram__openram_dp_nand2_dec.ext - technology: EFS8A


* Top level circuit sky130_fd_bd_sram__openram_dp_nand2_dec
.subckt sky130_fd_bd_sram__openram_dp_nand2_dec A B Z VDD GND

X1001 Z B VDD VDD sky130_fd_pr__pfet_01v8 W=1.12u L=0.15u m=1
X1002 VDD A Z VDD sky130_fd_pr__pfet_01v8 W=1.12u L=0.15u m=1
X1000 Z A a_n722_276# GND sky130_fd_pr__nfet_01v8 W=0.74u L=0.15u m=1
X1003 a_n722_276# B GND GND sky130_fd_pr__nfet_01v8 W=0.74u L=0.15u m=1
.ends


.SUBCKT routeb_new_1w1r_8x128_wordline_driver
+ A B Z vdd gnd
* INPUT : A 
* INPUT : B 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* cols: 8
Xwld_nand
+ A B zb_int vdd gnd
+ sky130_fd_bd_sram__openram_dp_nand2_dec
Xwl_driver
+ zb_int Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec_0
.ENDS routeb_new_1w1r_8x128_wordline_driver

.SUBCKT routeb_new_1w1r_8x128_wordline_driver_array
+ in_0 in_1 in_2 in_3 in_4 in_5 in_6 in_7 in_8 in_9 in_10 in_11 in_12
+ in_13 in_14 in_15 in_16 in_17 in_18 in_19 in_20 in_21 in_22 in_23
+ in_24 in_25 in_26 in_27 in_28 in_29 in_30 in_31 in_32 in_33 in_34
+ in_35 in_36 in_37 in_38 in_39 in_40 in_41 in_42 in_43 in_44 in_45
+ in_46 in_47 in_48 in_49 in_50 in_51 in_52 in_53 in_54 in_55 in_56
+ in_57 in_58 in_59 in_60 in_61 in_62 in_63 in_64 in_65 in_66 in_67
+ in_68 in_69 in_70 in_71 in_72 in_73 in_74 in_75 in_76 in_77 in_78
+ in_79 in_80 in_81 in_82 in_83 in_84 in_85 in_86 in_87 in_88 in_89
+ in_90 in_91 in_92 in_93 in_94 in_95 in_96 in_97 in_98 in_99 in_100
+ in_101 in_102 in_103 in_104 in_105 in_106 in_107 in_108 in_109 in_110
+ in_111 in_112 in_113 in_114 in_115 in_116 in_117 in_118 in_119 in_120
+ in_121 in_122 in_123 in_124 in_125 in_126 in_127 wl_0 wl_1 wl_2 wl_3
+ wl_4 wl_5 wl_6 wl_7 wl_8 wl_9 wl_10 wl_11 wl_12 wl_13 wl_14 wl_15
+ wl_16 wl_17 wl_18 wl_19 wl_20 wl_21 wl_22 wl_23 wl_24 wl_25 wl_26
+ wl_27 wl_28 wl_29 wl_30 wl_31 wl_32 wl_33 wl_34 wl_35 wl_36 wl_37
+ wl_38 wl_39 wl_40 wl_41 wl_42 wl_43 wl_44 wl_45 wl_46 wl_47 wl_48
+ wl_49 wl_50 wl_51 wl_52 wl_53 wl_54 wl_55 wl_56 wl_57 wl_58 wl_59
+ wl_60 wl_61 wl_62 wl_63 wl_64 wl_65 wl_66 wl_67 wl_68 wl_69 wl_70
+ wl_71 wl_72 wl_73 wl_74 wl_75 wl_76 wl_77 wl_78 wl_79 wl_80 wl_81
+ wl_82 wl_83 wl_84 wl_85 wl_86 wl_87 wl_88 wl_89 wl_90 wl_91 wl_92
+ wl_93 wl_94 wl_95 wl_96 wl_97 wl_98 wl_99 wl_100 wl_101 wl_102 wl_103
+ wl_104 wl_105 wl_106 wl_107 wl_108 wl_109 wl_110 wl_111 wl_112 wl_113
+ wl_114 wl_115 wl_116 wl_117 wl_118 wl_119 wl_120 wl_121 wl_122 wl_123
+ wl_124 wl_125 wl_126 wl_127 en vdd gnd
* INPUT : in_0 
* INPUT : in_1 
* INPUT : in_2 
* INPUT : in_3 
* INPUT : in_4 
* INPUT : in_5 
* INPUT : in_6 
* INPUT : in_7 
* INPUT : in_8 
* INPUT : in_9 
* INPUT : in_10 
* INPUT : in_11 
* INPUT : in_12 
* INPUT : in_13 
* INPUT : in_14 
* INPUT : in_15 
* INPUT : in_16 
* INPUT : in_17 
* INPUT : in_18 
* INPUT : in_19 
* INPUT : in_20 
* INPUT : in_21 
* INPUT : in_22 
* INPUT : in_23 
* INPUT : in_24 
* INPUT : in_25 
* INPUT : in_26 
* INPUT : in_27 
* INPUT : in_28 
* INPUT : in_29 
* INPUT : in_30 
* INPUT : in_31 
* INPUT : in_32 
* INPUT : in_33 
* INPUT : in_34 
* INPUT : in_35 
* INPUT : in_36 
* INPUT : in_37 
* INPUT : in_38 
* INPUT : in_39 
* INPUT : in_40 
* INPUT : in_41 
* INPUT : in_42 
* INPUT : in_43 
* INPUT : in_44 
* INPUT : in_45 
* INPUT : in_46 
* INPUT : in_47 
* INPUT : in_48 
* INPUT : in_49 
* INPUT : in_50 
* INPUT : in_51 
* INPUT : in_52 
* INPUT : in_53 
* INPUT : in_54 
* INPUT : in_55 
* INPUT : in_56 
* INPUT : in_57 
* INPUT : in_58 
* INPUT : in_59 
* INPUT : in_60 
* INPUT : in_61 
* INPUT : in_62 
* INPUT : in_63 
* INPUT : in_64 
* INPUT : in_65 
* INPUT : in_66 
* INPUT : in_67 
* INPUT : in_68 
* INPUT : in_69 
* INPUT : in_70 
* INPUT : in_71 
* INPUT : in_72 
* INPUT : in_73 
* INPUT : in_74 
* INPUT : in_75 
* INPUT : in_76 
* INPUT : in_77 
* INPUT : in_78 
* INPUT : in_79 
* INPUT : in_80 
* INPUT : in_81 
* INPUT : in_82 
* INPUT : in_83 
* INPUT : in_84 
* INPUT : in_85 
* INPUT : in_86 
* INPUT : in_87 
* INPUT : in_88 
* INPUT : in_89 
* INPUT : in_90 
* INPUT : in_91 
* INPUT : in_92 
* INPUT : in_93 
* INPUT : in_94 
* INPUT : in_95 
* INPUT : in_96 
* INPUT : in_97 
* INPUT : in_98 
* INPUT : in_99 
* INPUT : in_100 
* INPUT : in_101 
* INPUT : in_102 
* INPUT : in_103 
* INPUT : in_104 
* INPUT : in_105 
* INPUT : in_106 
* INPUT : in_107 
* INPUT : in_108 
* INPUT : in_109 
* INPUT : in_110 
* INPUT : in_111 
* INPUT : in_112 
* INPUT : in_113 
* INPUT : in_114 
* INPUT : in_115 
* INPUT : in_116 
* INPUT : in_117 
* INPUT : in_118 
* INPUT : in_119 
* INPUT : in_120 
* INPUT : in_121 
* INPUT : in_122 
* INPUT : in_123 
* INPUT : in_124 
* INPUT : in_125 
* INPUT : in_126 
* INPUT : in_127 
* OUTPUT: wl_0 
* OUTPUT: wl_1 
* OUTPUT: wl_2 
* OUTPUT: wl_3 
* OUTPUT: wl_4 
* OUTPUT: wl_5 
* OUTPUT: wl_6 
* OUTPUT: wl_7 
* OUTPUT: wl_8 
* OUTPUT: wl_9 
* OUTPUT: wl_10 
* OUTPUT: wl_11 
* OUTPUT: wl_12 
* OUTPUT: wl_13 
* OUTPUT: wl_14 
* OUTPUT: wl_15 
* OUTPUT: wl_16 
* OUTPUT: wl_17 
* OUTPUT: wl_18 
* OUTPUT: wl_19 
* OUTPUT: wl_20 
* OUTPUT: wl_21 
* OUTPUT: wl_22 
* OUTPUT: wl_23 
* OUTPUT: wl_24 
* OUTPUT: wl_25 
* OUTPUT: wl_26 
* OUTPUT: wl_27 
* OUTPUT: wl_28 
* OUTPUT: wl_29 
* OUTPUT: wl_30 
* OUTPUT: wl_31 
* OUTPUT: wl_32 
* OUTPUT: wl_33 
* OUTPUT: wl_34 
* OUTPUT: wl_35 
* OUTPUT: wl_36 
* OUTPUT: wl_37 
* OUTPUT: wl_38 
* OUTPUT: wl_39 
* OUTPUT: wl_40 
* OUTPUT: wl_41 
* OUTPUT: wl_42 
* OUTPUT: wl_43 
* OUTPUT: wl_44 
* OUTPUT: wl_45 
* OUTPUT: wl_46 
* OUTPUT: wl_47 
* OUTPUT: wl_48 
* OUTPUT: wl_49 
* OUTPUT: wl_50 
* OUTPUT: wl_51 
* OUTPUT: wl_52 
* OUTPUT: wl_53 
* OUTPUT: wl_54 
* OUTPUT: wl_55 
* OUTPUT: wl_56 
* OUTPUT: wl_57 
* OUTPUT: wl_58 
* OUTPUT: wl_59 
* OUTPUT: wl_60 
* OUTPUT: wl_61 
* OUTPUT: wl_62 
* OUTPUT: wl_63 
* OUTPUT: wl_64 
* OUTPUT: wl_65 
* OUTPUT: wl_66 
* OUTPUT: wl_67 
* OUTPUT: wl_68 
* OUTPUT: wl_69 
* OUTPUT: wl_70 
* OUTPUT: wl_71 
* OUTPUT: wl_72 
* OUTPUT: wl_73 
* OUTPUT: wl_74 
* OUTPUT: wl_75 
* OUTPUT: wl_76 
* OUTPUT: wl_77 
* OUTPUT: wl_78 
* OUTPUT: wl_79 
* OUTPUT: wl_80 
* OUTPUT: wl_81 
* OUTPUT: wl_82 
* OUTPUT: wl_83 
* OUTPUT: wl_84 
* OUTPUT: wl_85 
* OUTPUT: wl_86 
* OUTPUT: wl_87 
* OUTPUT: wl_88 
* OUTPUT: wl_89 
* OUTPUT: wl_90 
* OUTPUT: wl_91 
* OUTPUT: wl_92 
* OUTPUT: wl_93 
* OUTPUT: wl_94 
* OUTPUT: wl_95 
* OUTPUT: wl_96 
* OUTPUT: wl_97 
* OUTPUT: wl_98 
* OUTPUT: wl_99 
* OUTPUT: wl_100 
* OUTPUT: wl_101 
* OUTPUT: wl_102 
* OUTPUT: wl_103 
* OUTPUT: wl_104 
* OUTPUT: wl_105 
* OUTPUT: wl_106 
* OUTPUT: wl_107 
* OUTPUT: wl_108 
* OUTPUT: wl_109 
* OUTPUT: wl_110 
* OUTPUT: wl_111 
* OUTPUT: wl_112 
* OUTPUT: wl_113 
* OUTPUT: wl_114 
* OUTPUT: wl_115 
* OUTPUT: wl_116 
* OUTPUT: wl_117 
* OUTPUT: wl_118 
* OUTPUT: wl_119 
* OUTPUT: wl_120 
* OUTPUT: wl_121 
* OUTPUT: wl_122 
* OUTPUT: wl_123 
* OUTPUT: wl_124 
* OUTPUT: wl_125 
* OUTPUT: wl_126 
* OUTPUT: wl_127 
* INPUT : en 
* POWER : vdd 
* GROUND: gnd 
* rows: 128 cols: 8
Xwl_driver_and0
+ in_0 en wl_0 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and1
+ in_1 en wl_1 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and2
+ in_2 en wl_2 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and3
+ in_3 en wl_3 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and4
+ in_4 en wl_4 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and5
+ in_5 en wl_5 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and6
+ in_6 en wl_6 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and7
+ in_7 en wl_7 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and8
+ in_8 en wl_8 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and9
+ in_9 en wl_9 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and10
+ in_10 en wl_10 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and11
+ in_11 en wl_11 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and12
+ in_12 en wl_12 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and13
+ in_13 en wl_13 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and14
+ in_14 en wl_14 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and15
+ in_15 en wl_15 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and16
+ in_16 en wl_16 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and17
+ in_17 en wl_17 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and18
+ in_18 en wl_18 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and19
+ in_19 en wl_19 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and20
+ in_20 en wl_20 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and21
+ in_21 en wl_21 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and22
+ in_22 en wl_22 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and23
+ in_23 en wl_23 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and24
+ in_24 en wl_24 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and25
+ in_25 en wl_25 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and26
+ in_26 en wl_26 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and27
+ in_27 en wl_27 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and28
+ in_28 en wl_28 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and29
+ in_29 en wl_29 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and30
+ in_30 en wl_30 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and31
+ in_31 en wl_31 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and32
+ in_32 en wl_32 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and33
+ in_33 en wl_33 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and34
+ in_34 en wl_34 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and35
+ in_35 en wl_35 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and36
+ in_36 en wl_36 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and37
+ in_37 en wl_37 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and38
+ in_38 en wl_38 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and39
+ in_39 en wl_39 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and40
+ in_40 en wl_40 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and41
+ in_41 en wl_41 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and42
+ in_42 en wl_42 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and43
+ in_43 en wl_43 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and44
+ in_44 en wl_44 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and45
+ in_45 en wl_45 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and46
+ in_46 en wl_46 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and47
+ in_47 en wl_47 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and48
+ in_48 en wl_48 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and49
+ in_49 en wl_49 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and50
+ in_50 en wl_50 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and51
+ in_51 en wl_51 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and52
+ in_52 en wl_52 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and53
+ in_53 en wl_53 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and54
+ in_54 en wl_54 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and55
+ in_55 en wl_55 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and56
+ in_56 en wl_56 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and57
+ in_57 en wl_57 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and58
+ in_58 en wl_58 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and59
+ in_59 en wl_59 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and60
+ in_60 en wl_60 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and61
+ in_61 en wl_61 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and62
+ in_62 en wl_62 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and63
+ in_63 en wl_63 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and64
+ in_64 en wl_64 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and65
+ in_65 en wl_65 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and66
+ in_66 en wl_66 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and67
+ in_67 en wl_67 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and68
+ in_68 en wl_68 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and69
+ in_69 en wl_69 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and70
+ in_70 en wl_70 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and71
+ in_71 en wl_71 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and72
+ in_72 en wl_72 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and73
+ in_73 en wl_73 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and74
+ in_74 en wl_74 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and75
+ in_75 en wl_75 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and76
+ in_76 en wl_76 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and77
+ in_77 en wl_77 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and78
+ in_78 en wl_78 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and79
+ in_79 en wl_79 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and80
+ in_80 en wl_80 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and81
+ in_81 en wl_81 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and82
+ in_82 en wl_82 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and83
+ in_83 en wl_83 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and84
+ in_84 en wl_84 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and85
+ in_85 en wl_85 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and86
+ in_86 en wl_86 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and87
+ in_87 en wl_87 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and88
+ in_88 en wl_88 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and89
+ in_89 en wl_89 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and90
+ in_90 en wl_90 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and91
+ in_91 en wl_91 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and92
+ in_92 en wl_92 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and93
+ in_93 en wl_93 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and94
+ in_94 en wl_94 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and95
+ in_95 en wl_95 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and96
+ in_96 en wl_96 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and97
+ in_97 en wl_97 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and98
+ in_98 en wl_98 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and99
+ in_99 en wl_99 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and100
+ in_100 en wl_100 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and101
+ in_101 en wl_101 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and102
+ in_102 en wl_102 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and103
+ in_103 en wl_103 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and104
+ in_104 en wl_104 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and105
+ in_105 en wl_105 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and106
+ in_106 en wl_106 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and107
+ in_107 en wl_107 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and108
+ in_108 en wl_108 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and109
+ in_109 en wl_109 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and110
+ in_110 en wl_110 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and111
+ in_111 en wl_111 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and112
+ in_112 en wl_112 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and113
+ in_113 en wl_113 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and114
+ in_114 en wl_114 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and115
+ in_115 en wl_115 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and116
+ in_116 en wl_116 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and117
+ in_117 en wl_117 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and118
+ in_118 en wl_118 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and119
+ in_119 en wl_119 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and120
+ in_120 en wl_120 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and121
+ in_121 en wl_121 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and122
+ in_122 en wl_122 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and123
+ in_123 en wl_123 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and124
+ in_124 en wl_124 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and125
+ in_125 en wl_125 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and126
+ in_126 en wl_126 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
Xwl_driver_and127
+ in_127 en wl_127 vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver
.ENDS routeb_new_1w1r_8x128_wordline_driver_array

.SUBCKT routeb_new_1w1r_8x128_and2_dec_0
+ A B Z vdd gnd
* INPUT : A 
* INPUT : B 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 2
Xpand2_dec_nand
+ A B zb_int vdd gnd
+ sky130_fd_bd_sram__openram_dp_nand2_dec
Xpand2_dec_inv
+ zb_int Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec_0
.ENDS routeb_new_1w1r_8x128_and2_dec_0
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

* NGSPICE file created from sky130_fd_bd_sram__openram_dp_nand3_dec.ext - technology: EFS8A


* Top level circuit sky130_fd_bd_sram__openram_dp_nand3_dec
.subckt sky130_fd_bd_sram__openram_dp_nand3_dec A B C Z VDD GND

X1001 Z A a_n346_328# GND sky130_fd_pr__nfet_01v8 W=0.74u L=0.15u m=1
X1002 a_n346_256# C GND GND sky130_fd_pr__nfet_01v8 W=0.74u L=0.15u m=1
X1003 a_n346_328# B a_n346_256# GND sky130_fd_pr__nfet_01v8 W=0.74u L=0.15u m=1
X1000 Z B VDD VDD sky130_fd_pr__pfet_01v8 W=1.12u L=0.15u m=1
X1004 Z A VDD VDD sky130_fd_pr__pfet_01v8 W=1.12u L=0.15u m=1
X1005 Z C VDD VDD sky130_fd_pr__pfet_01v8 W=1.12u L=0.15u m=1
.ends


.SUBCKT routeb_new_1w1r_8x128_pinv_dec
+ A Z vdd gnd
* INPUT : A 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpinv_pmos Z A vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=1.12u l=0.15u
Xpinv_nmos Z A gnd gnd sky130_fd_pr__special_nfet_01v8 m=1 w=0.36u l=0.15u
.ENDS routeb_new_1w1r_8x128_pinv_dec

.SUBCKT routeb_new_1w1r_8x128_and3_dec
+ A B C Z vdd gnd
* INPUT : A 
* INPUT : B 
* INPUT : C 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpand3_dec_nand
+ A B C zb_int vdd gnd
+ sky130_fd_bd_sram__openram_dp_nand3_dec
Xpand3_dec_inv
+ zb_int Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec
.ENDS routeb_new_1w1r_8x128_and3_dec

.SUBCKT routeb_new_1w1r_8x128_hierarchical_predecode3x8
+ in_0 in_1 in_2 out_0 out_1 out_2 out_3 out_4 out_5 out_6 out_7 vdd gnd
* INPUT : in_0 
* INPUT : in_1 
* INPUT : in_2 
* OUTPUT: out_0 
* OUTPUT: out_1 
* OUTPUT: out_2 
* OUTPUT: out_3 
* OUTPUT: out_4 
* OUTPUT: out_5 
* OUTPUT: out_6 
* OUTPUT: out_7 
* POWER : vdd 
* GROUND: gnd 
Xpre_inv_0
+ in_0 inbar_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec
Xpre_inv_1
+ in_1 inbar_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec
Xpre_inv_2
+ in_2 inbar_2 vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec
XXpre3x8_and_0
+ inbar_0 inbar_1 inbar_2 out_0 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XXpre3x8_and_1
+ in_0 inbar_1 inbar_2 out_1 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XXpre3x8_and_2
+ inbar_0 in_1 inbar_2 out_2 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XXpre3x8_and_3
+ in_0 in_1 inbar_2 out_3 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XXpre3x8_and_4
+ inbar_0 inbar_1 in_2 out_4 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XXpre3x8_and_5
+ in_0 inbar_1 in_2 out_5 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XXpre3x8_and_6
+ inbar_0 in_1 in_2 out_6 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XXpre3x8_and_7
+ in_0 in_1 in_2 out_7 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
.ENDS routeb_new_1w1r_8x128_hierarchical_predecode3x8

.SUBCKT routeb_new_1w1r_8x128_and2_dec
+ A B Z vdd gnd
* INPUT : A 
* INPUT : B 
* OUTPUT: Z 
* POWER : vdd 
* GROUND: gnd 
* size: 1
Xpand2_dec_nand
+ A B zb_int vdd gnd
+ sky130_fd_bd_sram__openram_dp_nand2_dec
Xpand2_dec_inv
+ zb_int Z vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec
.ENDS routeb_new_1w1r_8x128_and2_dec

.SUBCKT routeb_new_1w1r_8x128_hierarchical_predecode2x4
+ in_0 in_1 out_0 out_1 out_2 out_3 vdd gnd
* INPUT : in_0 
* INPUT : in_1 
* OUTPUT: out_0 
* OUTPUT: out_1 
* OUTPUT: out_2 
* OUTPUT: out_3 
* POWER : vdd 
* GROUND: gnd 
Xpre_inv_0
+ in_0 inbar_0 vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec
Xpre_inv_1
+ in_1 inbar_1 vdd gnd
+ routeb_new_1w1r_8x128_pinv_dec
XXpre2x4_and_0
+ inbar_0 inbar_1 out_0 vdd gnd
+ routeb_new_1w1r_8x128_and2_dec
XXpre2x4_and_1
+ in_0 inbar_1 out_1 vdd gnd
+ routeb_new_1w1r_8x128_and2_dec
XXpre2x4_and_2
+ inbar_0 in_1 out_2 vdd gnd
+ routeb_new_1w1r_8x128_and2_dec
XXpre2x4_and_3
+ in_0 in_1 out_3 vdd gnd
+ routeb_new_1w1r_8x128_and2_dec
.ENDS routeb_new_1w1r_8x128_hierarchical_predecode2x4

.SUBCKT routeb_new_1w1r_8x128_hierarchical_decoder
+ addr_0 addr_1 addr_2 addr_3 addr_4 addr_5 addr_6 decode_0 decode_1
+ decode_2 decode_3 decode_4 decode_5 decode_6 decode_7 decode_8
+ decode_9 decode_10 decode_11 decode_12 decode_13 decode_14 decode_15
+ decode_16 decode_17 decode_18 decode_19 decode_20 decode_21 decode_22
+ decode_23 decode_24 decode_25 decode_26 decode_27 decode_28 decode_29
+ decode_30 decode_31 decode_32 decode_33 decode_34 decode_35 decode_36
+ decode_37 decode_38 decode_39 decode_40 decode_41 decode_42 decode_43
+ decode_44 decode_45 decode_46 decode_47 decode_48 decode_49 decode_50
+ decode_51 decode_52 decode_53 decode_54 decode_55 decode_56 decode_57
+ decode_58 decode_59 decode_60 decode_61 decode_62 decode_63 decode_64
+ decode_65 decode_66 decode_67 decode_68 decode_69 decode_70 decode_71
+ decode_72 decode_73 decode_74 decode_75 decode_76 decode_77 decode_78
+ decode_79 decode_80 decode_81 decode_82 decode_83 decode_84 decode_85
+ decode_86 decode_87 decode_88 decode_89 decode_90 decode_91 decode_92
+ decode_93 decode_94 decode_95 decode_96 decode_97 decode_98 decode_99
+ decode_100 decode_101 decode_102 decode_103 decode_104 decode_105
+ decode_106 decode_107 decode_108 decode_109 decode_110 decode_111
+ decode_112 decode_113 decode_114 decode_115 decode_116 decode_117
+ decode_118 decode_119 decode_120 decode_121 decode_122 decode_123
+ decode_124 decode_125 decode_126 decode_127 vdd gnd
* INPUT : addr_0 
* INPUT : addr_1 
* INPUT : addr_2 
* INPUT : addr_3 
* INPUT : addr_4 
* INPUT : addr_5 
* INPUT : addr_6 
* OUTPUT: decode_0 
* OUTPUT: decode_1 
* OUTPUT: decode_2 
* OUTPUT: decode_3 
* OUTPUT: decode_4 
* OUTPUT: decode_5 
* OUTPUT: decode_6 
* OUTPUT: decode_7 
* OUTPUT: decode_8 
* OUTPUT: decode_9 
* OUTPUT: decode_10 
* OUTPUT: decode_11 
* OUTPUT: decode_12 
* OUTPUT: decode_13 
* OUTPUT: decode_14 
* OUTPUT: decode_15 
* OUTPUT: decode_16 
* OUTPUT: decode_17 
* OUTPUT: decode_18 
* OUTPUT: decode_19 
* OUTPUT: decode_20 
* OUTPUT: decode_21 
* OUTPUT: decode_22 
* OUTPUT: decode_23 
* OUTPUT: decode_24 
* OUTPUT: decode_25 
* OUTPUT: decode_26 
* OUTPUT: decode_27 
* OUTPUT: decode_28 
* OUTPUT: decode_29 
* OUTPUT: decode_30 
* OUTPUT: decode_31 
* OUTPUT: decode_32 
* OUTPUT: decode_33 
* OUTPUT: decode_34 
* OUTPUT: decode_35 
* OUTPUT: decode_36 
* OUTPUT: decode_37 
* OUTPUT: decode_38 
* OUTPUT: decode_39 
* OUTPUT: decode_40 
* OUTPUT: decode_41 
* OUTPUT: decode_42 
* OUTPUT: decode_43 
* OUTPUT: decode_44 
* OUTPUT: decode_45 
* OUTPUT: decode_46 
* OUTPUT: decode_47 
* OUTPUT: decode_48 
* OUTPUT: decode_49 
* OUTPUT: decode_50 
* OUTPUT: decode_51 
* OUTPUT: decode_52 
* OUTPUT: decode_53 
* OUTPUT: decode_54 
* OUTPUT: decode_55 
* OUTPUT: decode_56 
* OUTPUT: decode_57 
* OUTPUT: decode_58 
* OUTPUT: decode_59 
* OUTPUT: decode_60 
* OUTPUT: decode_61 
* OUTPUT: decode_62 
* OUTPUT: decode_63 
* OUTPUT: decode_64 
* OUTPUT: decode_65 
* OUTPUT: decode_66 
* OUTPUT: decode_67 
* OUTPUT: decode_68 
* OUTPUT: decode_69 
* OUTPUT: decode_70 
* OUTPUT: decode_71 
* OUTPUT: decode_72 
* OUTPUT: decode_73 
* OUTPUT: decode_74 
* OUTPUT: decode_75 
* OUTPUT: decode_76 
* OUTPUT: decode_77 
* OUTPUT: decode_78 
* OUTPUT: decode_79 
* OUTPUT: decode_80 
* OUTPUT: decode_81 
* OUTPUT: decode_82 
* OUTPUT: decode_83 
* OUTPUT: decode_84 
* OUTPUT: decode_85 
* OUTPUT: decode_86 
* OUTPUT: decode_87 
* OUTPUT: decode_88 
* OUTPUT: decode_89 
* OUTPUT: decode_90 
* OUTPUT: decode_91 
* OUTPUT: decode_92 
* OUTPUT: decode_93 
* OUTPUT: decode_94 
* OUTPUT: decode_95 
* OUTPUT: decode_96 
* OUTPUT: decode_97 
* OUTPUT: decode_98 
* OUTPUT: decode_99 
* OUTPUT: decode_100 
* OUTPUT: decode_101 
* OUTPUT: decode_102 
* OUTPUT: decode_103 
* OUTPUT: decode_104 
* OUTPUT: decode_105 
* OUTPUT: decode_106 
* OUTPUT: decode_107 
* OUTPUT: decode_108 
* OUTPUT: decode_109 
* OUTPUT: decode_110 
* OUTPUT: decode_111 
* OUTPUT: decode_112 
* OUTPUT: decode_113 
* OUTPUT: decode_114 
* OUTPUT: decode_115 
* OUTPUT: decode_116 
* OUTPUT: decode_117 
* OUTPUT: decode_118 
* OUTPUT: decode_119 
* OUTPUT: decode_120 
* OUTPUT: decode_121 
* OUTPUT: decode_122 
* OUTPUT: decode_123 
* OUTPUT: decode_124 
* OUTPUT: decode_125 
* OUTPUT: decode_126 
* OUTPUT: decode_127 
* POWER : vdd 
* GROUND: gnd 
Xpre_0
+ addr_0 addr_1 out_0 out_1 out_2 out_3 vdd gnd
+ routeb_new_1w1r_8x128_hierarchical_predecode2x4
Xpre_1
+ addr_2 addr_3 out_4 out_5 out_6 out_7 vdd gnd
+ routeb_new_1w1r_8x128_hierarchical_predecode2x4
Xpre3x8_0
+ addr_4 addr_5 addr_6 out_8 out_9 out_10 out_11 out_12 out_13 out_14
+ out_15 vdd gnd
+ routeb_new_1w1r_8x128_hierarchical_predecode3x8
XDEC_AND_0
+ out_0 out_4 out_8 decode_0 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_16
+ out_0 out_4 out_9 decode_16 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_32
+ out_0 out_4 out_10 decode_32 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_48
+ out_0 out_4 out_11 decode_48 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_64
+ out_0 out_4 out_12 decode_64 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_80
+ out_0 out_4 out_13 decode_80 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_96
+ out_0 out_4 out_14 decode_96 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_112
+ out_0 out_4 out_15 decode_112 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_4
+ out_0 out_5 out_8 decode_4 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_20
+ out_0 out_5 out_9 decode_20 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_36
+ out_0 out_5 out_10 decode_36 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_52
+ out_0 out_5 out_11 decode_52 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_68
+ out_0 out_5 out_12 decode_68 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_84
+ out_0 out_5 out_13 decode_84 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_100
+ out_0 out_5 out_14 decode_100 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_116
+ out_0 out_5 out_15 decode_116 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_8
+ out_0 out_6 out_8 decode_8 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_24
+ out_0 out_6 out_9 decode_24 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_40
+ out_0 out_6 out_10 decode_40 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_56
+ out_0 out_6 out_11 decode_56 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_72
+ out_0 out_6 out_12 decode_72 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_88
+ out_0 out_6 out_13 decode_88 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_104
+ out_0 out_6 out_14 decode_104 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_120
+ out_0 out_6 out_15 decode_120 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_12
+ out_0 out_7 out_8 decode_12 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_28
+ out_0 out_7 out_9 decode_28 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_44
+ out_0 out_7 out_10 decode_44 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_60
+ out_0 out_7 out_11 decode_60 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_76
+ out_0 out_7 out_12 decode_76 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_92
+ out_0 out_7 out_13 decode_92 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_108
+ out_0 out_7 out_14 decode_108 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_124
+ out_0 out_7 out_15 decode_124 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_1
+ out_1 out_4 out_8 decode_1 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_17
+ out_1 out_4 out_9 decode_17 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_33
+ out_1 out_4 out_10 decode_33 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_49
+ out_1 out_4 out_11 decode_49 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_65
+ out_1 out_4 out_12 decode_65 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_81
+ out_1 out_4 out_13 decode_81 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_97
+ out_1 out_4 out_14 decode_97 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_113
+ out_1 out_4 out_15 decode_113 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_5
+ out_1 out_5 out_8 decode_5 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_21
+ out_1 out_5 out_9 decode_21 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_37
+ out_1 out_5 out_10 decode_37 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_53
+ out_1 out_5 out_11 decode_53 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_69
+ out_1 out_5 out_12 decode_69 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_85
+ out_1 out_5 out_13 decode_85 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_101
+ out_1 out_5 out_14 decode_101 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_117
+ out_1 out_5 out_15 decode_117 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_9
+ out_1 out_6 out_8 decode_9 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_25
+ out_1 out_6 out_9 decode_25 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_41
+ out_1 out_6 out_10 decode_41 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_57
+ out_1 out_6 out_11 decode_57 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_73
+ out_1 out_6 out_12 decode_73 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_89
+ out_1 out_6 out_13 decode_89 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_105
+ out_1 out_6 out_14 decode_105 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_121
+ out_1 out_6 out_15 decode_121 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_13
+ out_1 out_7 out_8 decode_13 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_29
+ out_1 out_7 out_9 decode_29 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_45
+ out_1 out_7 out_10 decode_45 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_61
+ out_1 out_7 out_11 decode_61 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_77
+ out_1 out_7 out_12 decode_77 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_93
+ out_1 out_7 out_13 decode_93 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_109
+ out_1 out_7 out_14 decode_109 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_125
+ out_1 out_7 out_15 decode_125 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_2
+ out_2 out_4 out_8 decode_2 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_18
+ out_2 out_4 out_9 decode_18 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_34
+ out_2 out_4 out_10 decode_34 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_50
+ out_2 out_4 out_11 decode_50 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_66
+ out_2 out_4 out_12 decode_66 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_82
+ out_2 out_4 out_13 decode_82 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_98
+ out_2 out_4 out_14 decode_98 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_114
+ out_2 out_4 out_15 decode_114 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_6
+ out_2 out_5 out_8 decode_6 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_22
+ out_2 out_5 out_9 decode_22 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_38
+ out_2 out_5 out_10 decode_38 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_54
+ out_2 out_5 out_11 decode_54 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_70
+ out_2 out_5 out_12 decode_70 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_86
+ out_2 out_5 out_13 decode_86 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_102
+ out_2 out_5 out_14 decode_102 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_118
+ out_2 out_5 out_15 decode_118 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_10
+ out_2 out_6 out_8 decode_10 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_26
+ out_2 out_6 out_9 decode_26 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_42
+ out_2 out_6 out_10 decode_42 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_58
+ out_2 out_6 out_11 decode_58 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_74
+ out_2 out_6 out_12 decode_74 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_90
+ out_2 out_6 out_13 decode_90 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_106
+ out_2 out_6 out_14 decode_106 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_122
+ out_2 out_6 out_15 decode_122 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_14
+ out_2 out_7 out_8 decode_14 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_30
+ out_2 out_7 out_9 decode_30 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_46
+ out_2 out_7 out_10 decode_46 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_62
+ out_2 out_7 out_11 decode_62 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_78
+ out_2 out_7 out_12 decode_78 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_94
+ out_2 out_7 out_13 decode_94 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_110
+ out_2 out_7 out_14 decode_110 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_126
+ out_2 out_7 out_15 decode_126 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_3
+ out_3 out_4 out_8 decode_3 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_19
+ out_3 out_4 out_9 decode_19 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_35
+ out_3 out_4 out_10 decode_35 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_51
+ out_3 out_4 out_11 decode_51 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_67
+ out_3 out_4 out_12 decode_67 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_83
+ out_3 out_4 out_13 decode_83 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_99
+ out_3 out_4 out_14 decode_99 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_115
+ out_3 out_4 out_15 decode_115 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_7
+ out_3 out_5 out_8 decode_7 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_23
+ out_3 out_5 out_9 decode_23 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_39
+ out_3 out_5 out_10 decode_39 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_55
+ out_3 out_5 out_11 decode_55 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_71
+ out_3 out_5 out_12 decode_71 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_87
+ out_3 out_5 out_13 decode_87 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_103
+ out_3 out_5 out_14 decode_103 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_119
+ out_3 out_5 out_15 decode_119 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_11
+ out_3 out_6 out_8 decode_11 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_27
+ out_3 out_6 out_9 decode_27 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_43
+ out_3 out_6 out_10 decode_43 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_59
+ out_3 out_6 out_11 decode_59 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_75
+ out_3 out_6 out_12 decode_75 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_91
+ out_3 out_6 out_13 decode_91 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_107
+ out_3 out_6 out_14 decode_107 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_123
+ out_3 out_6 out_15 decode_123 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_15
+ out_3 out_7 out_8 decode_15 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_31
+ out_3 out_7 out_9 decode_31 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_47
+ out_3 out_7 out_10 decode_47 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_63
+ out_3 out_7 out_11 decode_63 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_79
+ out_3 out_7 out_12 decode_79 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_95
+ out_3 out_7 out_13 decode_95 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_111
+ out_3 out_7 out_14 decode_111 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
XDEC_AND_127
+ out_3 out_7 out_15 decode_127 vdd gnd
+ routeb_new_1w1r_8x128_and3_dec
.ENDS routeb_new_1w1r_8x128_hierarchical_decoder

.SUBCKT routeb_new_1w1r_8x128_port_address_0
+ addr_0 addr_1 addr_2 addr_3 addr_4 addr_5 addr_6 wl_en wl_0 wl_1 wl_2
+ wl_3 wl_4 wl_5 wl_6 wl_7 wl_8 wl_9 wl_10 wl_11 wl_12 wl_13 wl_14 wl_15
+ wl_16 wl_17 wl_18 wl_19 wl_20 wl_21 wl_22 wl_23 wl_24 wl_25 wl_26
+ wl_27 wl_28 wl_29 wl_30 wl_31 wl_32 wl_33 wl_34 wl_35 wl_36 wl_37
+ wl_38 wl_39 wl_40 wl_41 wl_42 wl_43 wl_44 wl_45 wl_46 wl_47 wl_48
+ wl_49 wl_50 wl_51 wl_52 wl_53 wl_54 wl_55 wl_56 wl_57 wl_58 wl_59
+ wl_60 wl_61 wl_62 wl_63 wl_64 wl_65 wl_66 wl_67 wl_68 wl_69 wl_70
+ wl_71 wl_72 wl_73 wl_74 wl_75 wl_76 wl_77 wl_78 wl_79 wl_80 wl_81
+ wl_82 wl_83 wl_84 wl_85 wl_86 wl_87 wl_88 wl_89 wl_90 wl_91 wl_92
+ wl_93 wl_94 wl_95 wl_96 wl_97 wl_98 wl_99 wl_100 wl_101 wl_102 wl_103
+ wl_104 wl_105 wl_106 wl_107 wl_108 wl_109 wl_110 wl_111 wl_112 wl_113
+ wl_114 wl_115 wl_116 wl_117 wl_118 wl_119 wl_120 wl_121 wl_122 wl_123
+ wl_124 wl_125 wl_126 wl_127 rbl_wl vdd gnd
* INPUT : addr_0 
* INPUT : addr_1 
* INPUT : addr_2 
* INPUT : addr_3 
* INPUT : addr_4 
* INPUT : addr_5 
* INPUT : addr_6 
* INPUT : wl_en 
* OUTPUT: wl_0 
* OUTPUT: wl_1 
* OUTPUT: wl_2 
* OUTPUT: wl_3 
* OUTPUT: wl_4 
* OUTPUT: wl_5 
* OUTPUT: wl_6 
* OUTPUT: wl_7 
* OUTPUT: wl_8 
* OUTPUT: wl_9 
* OUTPUT: wl_10 
* OUTPUT: wl_11 
* OUTPUT: wl_12 
* OUTPUT: wl_13 
* OUTPUT: wl_14 
* OUTPUT: wl_15 
* OUTPUT: wl_16 
* OUTPUT: wl_17 
* OUTPUT: wl_18 
* OUTPUT: wl_19 
* OUTPUT: wl_20 
* OUTPUT: wl_21 
* OUTPUT: wl_22 
* OUTPUT: wl_23 
* OUTPUT: wl_24 
* OUTPUT: wl_25 
* OUTPUT: wl_26 
* OUTPUT: wl_27 
* OUTPUT: wl_28 
* OUTPUT: wl_29 
* OUTPUT: wl_30 
* OUTPUT: wl_31 
* OUTPUT: wl_32 
* OUTPUT: wl_33 
* OUTPUT: wl_34 
* OUTPUT: wl_35 
* OUTPUT: wl_36 
* OUTPUT: wl_37 
* OUTPUT: wl_38 
* OUTPUT: wl_39 
* OUTPUT: wl_40 
* OUTPUT: wl_41 
* OUTPUT: wl_42 
* OUTPUT: wl_43 
* OUTPUT: wl_44 
* OUTPUT: wl_45 
* OUTPUT: wl_46 
* OUTPUT: wl_47 
* OUTPUT: wl_48 
* OUTPUT: wl_49 
* OUTPUT: wl_50 
* OUTPUT: wl_51 
* OUTPUT: wl_52 
* OUTPUT: wl_53 
* OUTPUT: wl_54 
* OUTPUT: wl_55 
* OUTPUT: wl_56 
* OUTPUT: wl_57 
* OUTPUT: wl_58 
* OUTPUT: wl_59 
* OUTPUT: wl_60 
* OUTPUT: wl_61 
* OUTPUT: wl_62 
* OUTPUT: wl_63 
* OUTPUT: wl_64 
* OUTPUT: wl_65 
* OUTPUT: wl_66 
* OUTPUT: wl_67 
* OUTPUT: wl_68 
* OUTPUT: wl_69 
* OUTPUT: wl_70 
* OUTPUT: wl_71 
* OUTPUT: wl_72 
* OUTPUT: wl_73 
* OUTPUT: wl_74 
* OUTPUT: wl_75 
* OUTPUT: wl_76 
* OUTPUT: wl_77 
* OUTPUT: wl_78 
* OUTPUT: wl_79 
* OUTPUT: wl_80 
* OUTPUT: wl_81 
* OUTPUT: wl_82 
* OUTPUT: wl_83 
* OUTPUT: wl_84 
* OUTPUT: wl_85 
* OUTPUT: wl_86 
* OUTPUT: wl_87 
* OUTPUT: wl_88 
* OUTPUT: wl_89 
* OUTPUT: wl_90 
* OUTPUT: wl_91 
* OUTPUT: wl_92 
* OUTPUT: wl_93 
* OUTPUT: wl_94 
* OUTPUT: wl_95 
* OUTPUT: wl_96 
* OUTPUT: wl_97 
* OUTPUT: wl_98 
* OUTPUT: wl_99 
* OUTPUT: wl_100 
* OUTPUT: wl_101 
* OUTPUT: wl_102 
* OUTPUT: wl_103 
* OUTPUT: wl_104 
* OUTPUT: wl_105 
* OUTPUT: wl_106 
* OUTPUT: wl_107 
* OUTPUT: wl_108 
* OUTPUT: wl_109 
* OUTPUT: wl_110 
* OUTPUT: wl_111 
* OUTPUT: wl_112 
* OUTPUT: wl_113 
* OUTPUT: wl_114 
* OUTPUT: wl_115 
* OUTPUT: wl_116 
* OUTPUT: wl_117 
* OUTPUT: wl_118 
* OUTPUT: wl_119 
* OUTPUT: wl_120 
* OUTPUT: wl_121 
* OUTPUT: wl_122 
* OUTPUT: wl_123 
* OUTPUT: wl_124 
* OUTPUT: wl_125 
* OUTPUT: wl_126 
* OUTPUT: wl_127 
* OUTPUT: rbl_wl 
* POWER : vdd 
* GROUND: gnd 
Xrow_decoder
+ addr_0 addr_1 addr_2 addr_3 addr_4 addr_5 addr_6 dec_out_0 dec_out_1
+ dec_out_2 dec_out_3 dec_out_4 dec_out_5 dec_out_6 dec_out_7 dec_out_8
+ dec_out_9 dec_out_10 dec_out_11 dec_out_12 dec_out_13 dec_out_14
+ dec_out_15 dec_out_16 dec_out_17 dec_out_18 dec_out_19 dec_out_20
+ dec_out_21 dec_out_22 dec_out_23 dec_out_24 dec_out_25 dec_out_26
+ dec_out_27 dec_out_28 dec_out_29 dec_out_30 dec_out_31 dec_out_32
+ dec_out_33 dec_out_34 dec_out_35 dec_out_36 dec_out_37 dec_out_38
+ dec_out_39 dec_out_40 dec_out_41 dec_out_42 dec_out_43 dec_out_44
+ dec_out_45 dec_out_46 dec_out_47 dec_out_48 dec_out_49 dec_out_50
+ dec_out_51 dec_out_52 dec_out_53 dec_out_54 dec_out_55 dec_out_56
+ dec_out_57 dec_out_58 dec_out_59 dec_out_60 dec_out_61 dec_out_62
+ dec_out_63 dec_out_64 dec_out_65 dec_out_66 dec_out_67 dec_out_68
+ dec_out_69 dec_out_70 dec_out_71 dec_out_72 dec_out_73 dec_out_74
+ dec_out_75 dec_out_76 dec_out_77 dec_out_78 dec_out_79 dec_out_80
+ dec_out_81 dec_out_82 dec_out_83 dec_out_84 dec_out_85 dec_out_86
+ dec_out_87 dec_out_88 dec_out_89 dec_out_90 dec_out_91 dec_out_92
+ dec_out_93 dec_out_94 dec_out_95 dec_out_96 dec_out_97 dec_out_98
+ dec_out_99 dec_out_100 dec_out_101 dec_out_102 dec_out_103 dec_out_104
+ dec_out_105 dec_out_106 dec_out_107 dec_out_108 dec_out_109
+ dec_out_110 dec_out_111 dec_out_112 dec_out_113 dec_out_114
+ dec_out_115 dec_out_116 dec_out_117 dec_out_118 dec_out_119
+ dec_out_120 dec_out_121 dec_out_122 dec_out_123 dec_out_124
+ dec_out_125 dec_out_126 dec_out_127 vdd gnd
+ routeb_new_1w1r_8x128_hierarchical_decoder
Xwordline_driver
+ dec_out_0 dec_out_1 dec_out_2 dec_out_3 dec_out_4 dec_out_5 dec_out_6
+ dec_out_7 dec_out_8 dec_out_9 dec_out_10 dec_out_11 dec_out_12
+ dec_out_13 dec_out_14 dec_out_15 dec_out_16 dec_out_17 dec_out_18
+ dec_out_19 dec_out_20 dec_out_21 dec_out_22 dec_out_23 dec_out_24
+ dec_out_25 dec_out_26 dec_out_27 dec_out_28 dec_out_29 dec_out_30
+ dec_out_31 dec_out_32 dec_out_33 dec_out_34 dec_out_35 dec_out_36
+ dec_out_37 dec_out_38 dec_out_39 dec_out_40 dec_out_41 dec_out_42
+ dec_out_43 dec_out_44 dec_out_45 dec_out_46 dec_out_47 dec_out_48
+ dec_out_49 dec_out_50 dec_out_51 dec_out_52 dec_out_53 dec_out_54
+ dec_out_55 dec_out_56 dec_out_57 dec_out_58 dec_out_59 dec_out_60
+ dec_out_61 dec_out_62 dec_out_63 dec_out_64 dec_out_65 dec_out_66
+ dec_out_67 dec_out_68 dec_out_69 dec_out_70 dec_out_71 dec_out_72
+ dec_out_73 dec_out_74 dec_out_75 dec_out_76 dec_out_77 dec_out_78
+ dec_out_79 dec_out_80 dec_out_81 dec_out_82 dec_out_83 dec_out_84
+ dec_out_85 dec_out_86 dec_out_87 dec_out_88 dec_out_89 dec_out_90
+ dec_out_91 dec_out_92 dec_out_93 dec_out_94 dec_out_95 dec_out_96
+ dec_out_97 dec_out_98 dec_out_99 dec_out_100 dec_out_101 dec_out_102
+ dec_out_103 dec_out_104 dec_out_105 dec_out_106 dec_out_107
+ dec_out_108 dec_out_109 dec_out_110 dec_out_111 dec_out_112
+ dec_out_113 dec_out_114 dec_out_115 dec_out_116 dec_out_117
+ dec_out_118 dec_out_119 dec_out_120 dec_out_121 dec_out_122
+ dec_out_123 dec_out_124 dec_out_125 dec_out_126 dec_out_127 wl_0 wl_1
+ wl_2 wl_3 wl_4 wl_5 wl_6 wl_7 wl_8 wl_9 wl_10 wl_11 wl_12 wl_13 wl_14
+ wl_15 wl_16 wl_17 wl_18 wl_19 wl_20 wl_21 wl_22 wl_23 wl_24 wl_25
+ wl_26 wl_27 wl_28 wl_29 wl_30 wl_31 wl_32 wl_33 wl_34 wl_35 wl_36
+ wl_37 wl_38 wl_39 wl_40 wl_41 wl_42 wl_43 wl_44 wl_45 wl_46 wl_47
+ wl_48 wl_49 wl_50 wl_51 wl_52 wl_53 wl_54 wl_55 wl_56 wl_57 wl_58
+ wl_59 wl_60 wl_61 wl_62 wl_63 wl_64 wl_65 wl_66 wl_67 wl_68 wl_69
+ wl_70 wl_71 wl_72 wl_73 wl_74 wl_75 wl_76 wl_77 wl_78 wl_79 wl_80
+ wl_81 wl_82 wl_83 wl_84 wl_85 wl_86 wl_87 wl_88 wl_89 wl_90 wl_91
+ wl_92 wl_93 wl_94 wl_95 wl_96 wl_97 wl_98 wl_99 wl_100 wl_101 wl_102
+ wl_103 wl_104 wl_105 wl_106 wl_107 wl_108 wl_109 wl_110 wl_111 wl_112
+ wl_113 wl_114 wl_115 wl_116 wl_117 wl_118 wl_119 wl_120 wl_121 wl_122
+ wl_123 wl_124 wl_125 wl_126 wl_127 wl_en vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver_array
Xrbl_driver
+ wl_en vdd rbl_wl vdd gnd
+ routeb_new_1w1r_8x128_and2_dec_0
.ENDS routeb_new_1w1r_8x128_port_address_0
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

.SUBCKT sky130_fd_bd_sram__openram_dp_cell_dummy BL0 BR0 BL1 BR1 WL0 WL1 VDD GND

* Bitcell Core
X1 1 GND GND GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X2 1 WL1 BL1 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X3 2 GND GND GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X4 2 WL1 BR1 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X5 3 GND GND GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X6 3 WL0 BL0 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X7 4 GND GND GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X8 4 WL0 BR0 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1

* tap under poly
X9 GND GND BL1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1
X10 GND GND BR1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1

* drainOnly NMOS
X11 GND GND BL1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1
X12 GND GND BR1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1

.ENDS

.SUBCKT routeb_new_1w1r_8x128_dummy_array
+ bl_0_0 bl_1_0 br_0_0 br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2
+ br_0_2 br_1_2 bl_0_3 bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4
+ bl_0_5 bl_1_5 br_0_5 br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7
+ br_0_7 br_1_7 wl_0_0 wl_1_0 vdd gnd
* INOUT : bl_0_0 
* INOUT : bl_1_0 
* INOUT : br_0_0 
* INOUT : br_1_0 
* INOUT : bl_0_1 
* INOUT : bl_1_1 
* INOUT : br_0_1 
* INOUT : br_1_1 
* INOUT : bl_0_2 
* INOUT : bl_1_2 
* INOUT : br_0_2 
* INOUT : br_1_2 
* INOUT : bl_0_3 
* INOUT : bl_1_3 
* INOUT : br_0_3 
* INOUT : br_1_3 
* INOUT : bl_0_4 
* INOUT : bl_1_4 
* INOUT : br_0_4 
* INOUT : br_1_4 
* INOUT : bl_0_5 
* INOUT : bl_1_5 
* INOUT : br_0_5 
* INOUT : br_1_5 
* INOUT : bl_0_6 
* INOUT : bl_1_6 
* INOUT : br_0_6 
* INOUT : br_1_6 
* INOUT : bl_0_7 
* INOUT : bl_1_7 
* INOUT : br_0_7 
* INOUT : br_1_7 
* INPUT : wl_0_0 
* INPUT : wl_1_0 
* POWER : vdd 
* GROUND: gnd 
Xbit_r0_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xbit_r0_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xbit_r0_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xbit_r0_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xbit_r0_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xbit_r0_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xbit_r0_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xbit_r0_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
.ENDS routeb_new_1w1r_8x128_dummy_array
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

* Ingore first line
.SUBCKT sky130_fd_bd_sram__openram_dp_cell_replica BL0 BR0 BL1 BR1 WL0 WL1 VDD GND

* Bitcell Core
X0 Q WL1 BL1 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X1 GND VDD Q GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X2 GND VDD Q GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X3 BL0 WL0 Q GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X4 VDD WL1 BR1 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X5 GND Q VDD GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X6 GND Q VDD GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X7 BR0 WL0 VDD GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X8 VDD Q VDD VDD sky130_fd_pr__special_pfet_pass W=0.14u L=0.15u m=1
X9 Q VDD VDD VDD sky130_fd_pr__special_pfet_pass W=0.14u L=0.15u m=1

* tap under poly
X10 GND GND BL1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1
X11 GND GND BR1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1

* drainOnly PMOS
X12 Q WL0 Q VDD sky130_fd_pr__special_pfet_pass w=0.07u l=0.15u m=1
X13 VDD WL1 VDD VDD sky130_fd_pr__special_pfet_pass w=0.07u l=0.15u m=1

* drainOnly NMOS
X14 GND GND BL1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1
X15 GND GND BR1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1

.ENDS

.SUBCKT routeb_new_1w1r_8x128_replica_column_0
+ bl_0_0 bl_1_0 br_0_0 br_1_0 wl_0_0 wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2
+ wl_0_3 wl_1_3 wl_0_4 wl_1_4 wl_0_5 wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7
+ wl_0_8 wl_1_8 wl_0_9 wl_1_9 wl_0_10 wl_1_10 wl_0_11 wl_1_11 wl_0_12
+ wl_1_12 wl_0_13 wl_1_13 wl_0_14 wl_1_14 wl_0_15 wl_1_15 wl_0_16
+ wl_1_16 wl_0_17 wl_1_17 wl_0_18 wl_1_18 wl_0_19 wl_1_19 wl_0_20
+ wl_1_20 wl_0_21 wl_1_21 wl_0_22 wl_1_22 wl_0_23 wl_1_23 wl_0_24
+ wl_1_24 wl_0_25 wl_1_25 wl_0_26 wl_1_26 wl_0_27 wl_1_27 wl_0_28
+ wl_1_28 wl_0_29 wl_1_29 wl_0_30 wl_1_30 wl_0_31 wl_1_31 wl_0_32
+ wl_1_32 wl_0_33 wl_1_33 wl_0_34 wl_1_34 wl_0_35 wl_1_35 wl_0_36
+ wl_1_36 wl_0_37 wl_1_37 wl_0_38 wl_1_38 wl_0_39 wl_1_39 wl_0_40
+ wl_1_40 wl_0_41 wl_1_41 wl_0_42 wl_1_42 wl_0_43 wl_1_43 wl_0_44
+ wl_1_44 wl_0_45 wl_1_45 wl_0_46 wl_1_46 wl_0_47 wl_1_47 wl_0_48
+ wl_1_48 wl_0_49 wl_1_49 wl_0_50 wl_1_50 wl_0_51 wl_1_51 wl_0_52
+ wl_1_52 wl_0_53 wl_1_53 wl_0_54 wl_1_54 wl_0_55 wl_1_55 wl_0_56
+ wl_1_56 wl_0_57 wl_1_57 wl_0_58 wl_1_58 wl_0_59 wl_1_59 wl_0_60
+ wl_1_60 wl_0_61 wl_1_61 wl_0_62 wl_1_62 wl_0_63 wl_1_63 wl_0_64
+ wl_1_64 wl_0_65 wl_1_65 wl_0_66 wl_1_66 wl_0_67 wl_1_67 wl_0_68
+ wl_1_68 wl_0_69 wl_1_69 wl_0_70 wl_1_70 wl_0_71 wl_1_71 wl_0_72
+ wl_1_72 wl_0_73 wl_1_73 wl_0_74 wl_1_74 wl_0_75 wl_1_75 wl_0_76
+ wl_1_76 wl_0_77 wl_1_77 wl_0_78 wl_1_78 wl_0_79 wl_1_79 wl_0_80
+ wl_1_80 wl_0_81 wl_1_81 wl_0_82 wl_1_82 wl_0_83 wl_1_83 wl_0_84
+ wl_1_84 wl_0_85 wl_1_85 wl_0_86 wl_1_86 wl_0_87 wl_1_87 wl_0_88
+ wl_1_88 wl_0_89 wl_1_89 wl_0_90 wl_1_90 wl_0_91 wl_1_91 wl_0_92
+ wl_1_92 wl_0_93 wl_1_93 wl_0_94 wl_1_94 wl_0_95 wl_1_95 wl_0_96
+ wl_1_96 wl_0_97 wl_1_97 wl_0_98 wl_1_98 wl_0_99 wl_1_99 wl_0_100
+ wl_1_100 wl_0_101 wl_1_101 wl_0_102 wl_1_102 wl_0_103 wl_1_103
+ wl_0_104 wl_1_104 wl_0_105 wl_1_105 wl_0_106 wl_1_106 wl_0_107
+ wl_1_107 wl_0_108 wl_1_108 wl_0_109 wl_1_109 wl_0_110 wl_1_110
+ wl_0_111 wl_1_111 wl_0_112 wl_1_112 wl_0_113 wl_1_113 wl_0_114
+ wl_1_114 wl_0_115 wl_1_115 wl_0_116 wl_1_116 wl_0_117 wl_1_117
+ wl_0_118 wl_1_118 wl_0_119 wl_1_119 wl_0_120 wl_1_120 wl_0_121
+ wl_1_121 wl_0_122 wl_1_122 wl_0_123 wl_1_123 wl_0_124 wl_1_124
+ wl_0_125 wl_1_125 wl_0_126 wl_1_126 wl_0_127 wl_1_127 wl_0_128
+ wl_1_128 wl_0_129 wl_1_129 vdd gnd
* OUTPUT: bl_0_0 
* OUTPUT: bl_1_0 
* OUTPUT: br_0_0 
* OUTPUT: br_1_0 
* INPUT : wl_0_0 
* INPUT : wl_1_0 
* INPUT : wl_0_1 
* INPUT : wl_1_1 
* INPUT : wl_0_2 
* INPUT : wl_1_2 
* INPUT : wl_0_3 
* INPUT : wl_1_3 
* INPUT : wl_0_4 
* INPUT : wl_1_4 
* INPUT : wl_0_5 
* INPUT : wl_1_5 
* INPUT : wl_0_6 
* INPUT : wl_1_6 
* INPUT : wl_0_7 
* INPUT : wl_1_7 
* INPUT : wl_0_8 
* INPUT : wl_1_8 
* INPUT : wl_0_9 
* INPUT : wl_1_9 
* INPUT : wl_0_10 
* INPUT : wl_1_10 
* INPUT : wl_0_11 
* INPUT : wl_1_11 
* INPUT : wl_0_12 
* INPUT : wl_1_12 
* INPUT : wl_0_13 
* INPUT : wl_1_13 
* INPUT : wl_0_14 
* INPUT : wl_1_14 
* INPUT : wl_0_15 
* INPUT : wl_1_15 
* INPUT : wl_0_16 
* INPUT : wl_1_16 
* INPUT : wl_0_17 
* INPUT : wl_1_17 
* INPUT : wl_0_18 
* INPUT : wl_1_18 
* INPUT : wl_0_19 
* INPUT : wl_1_19 
* INPUT : wl_0_20 
* INPUT : wl_1_20 
* INPUT : wl_0_21 
* INPUT : wl_1_21 
* INPUT : wl_0_22 
* INPUT : wl_1_22 
* INPUT : wl_0_23 
* INPUT : wl_1_23 
* INPUT : wl_0_24 
* INPUT : wl_1_24 
* INPUT : wl_0_25 
* INPUT : wl_1_25 
* INPUT : wl_0_26 
* INPUT : wl_1_26 
* INPUT : wl_0_27 
* INPUT : wl_1_27 
* INPUT : wl_0_28 
* INPUT : wl_1_28 
* INPUT : wl_0_29 
* INPUT : wl_1_29 
* INPUT : wl_0_30 
* INPUT : wl_1_30 
* INPUT : wl_0_31 
* INPUT : wl_1_31 
* INPUT : wl_0_32 
* INPUT : wl_1_32 
* INPUT : wl_0_33 
* INPUT : wl_1_33 
* INPUT : wl_0_34 
* INPUT : wl_1_34 
* INPUT : wl_0_35 
* INPUT : wl_1_35 
* INPUT : wl_0_36 
* INPUT : wl_1_36 
* INPUT : wl_0_37 
* INPUT : wl_1_37 
* INPUT : wl_0_38 
* INPUT : wl_1_38 
* INPUT : wl_0_39 
* INPUT : wl_1_39 
* INPUT : wl_0_40 
* INPUT : wl_1_40 
* INPUT : wl_0_41 
* INPUT : wl_1_41 
* INPUT : wl_0_42 
* INPUT : wl_1_42 
* INPUT : wl_0_43 
* INPUT : wl_1_43 
* INPUT : wl_0_44 
* INPUT : wl_1_44 
* INPUT : wl_0_45 
* INPUT : wl_1_45 
* INPUT : wl_0_46 
* INPUT : wl_1_46 
* INPUT : wl_0_47 
* INPUT : wl_1_47 
* INPUT : wl_0_48 
* INPUT : wl_1_48 
* INPUT : wl_0_49 
* INPUT : wl_1_49 
* INPUT : wl_0_50 
* INPUT : wl_1_50 
* INPUT : wl_0_51 
* INPUT : wl_1_51 
* INPUT : wl_0_52 
* INPUT : wl_1_52 
* INPUT : wl_0_53 
* INPUT : wl_1_53 
* INPUT : wl_0_54 
* INPUT : wl_1_54 
* INPUT : wl_0_55 
* INPUT : wl_1_55 
* INPUT : wl_0_56 
* INPUT : wl_1_56 
* INPUT : wl_0_57 
* INPUT : wl_1_57 
* INPUT : wl_0_58 
* INPUT : wl_1_58 
* INPUT : wl_0_59 
* INPUT : wl_1_59 
* INPUT : wl_0_60 
* INPUT : wl_1_60 
* INPUT : wl_0_61 
* INPUT : wl_1_61 
* INPUT : wl_0_62 
* INPUT : wl_1_62 
* INPUT : wl_0_63 
* INPUT : wl_1_63 
* INPUT : wl_0_64 
* INPUT : wl_1_64 
* INPUT : wl_0_65 
* INPUT : wl_1_65 
* INPUT : wl_0_66 
* INPUT : wl_1_66 
* INPUT : wl_0_67 
* INPUT : wl_1_67 
* INPUT : wl_0_68 
* INPUT : wl_1_68 
* INPUT : wl_0_69 
* INPUT : wl_1_69 
* INPUT : wl_0_70 
* INPUT : wl_1_70 
* INPUT : wl_0_71 
* INPUT : wl_1_71 
* INPUT : wl_0_72 
* INPUT : wl_1_72 
* INPUT : wl_0_73 
* INPUT : wl_1_73 
* INPUT : wl_0_74 
* INPUT : wl_1_74 
* INPUT : wl_0_75 
* INPUT : wl_1_75 
* INPUT : wl_0_76 
* INPUT : wl_1_76 
* INPUT : wl_0_77 
* INPUT : wl_1_77 
* INPUT : wl_0_78 
* INPUT : wl_1_78 
* INPUT : wl_0_79 
* INPUT : wl_1_79 
* INPUT : wl_0_80 
* INPUT : wl_1_80 
* INPUT : wl_0_81 
* INPUT : wl_1_81 
* INPUT : wl_0_82 
* INPUT : wl_1_82 
* INPUT : wl_0_83 
* INPUT : wl_1_83 
* INPUT : wl_0_84 
* INPUT : wl_1_84 
* INPUT : wl_0_85 
* INPUT : wl_1_85 
* INPUT : wl_0_86 
* INPUT : wl_1_86 
* INPUT : wl_0_87 
* INPUT : wl_1_87 
* INPUT : wl_0_88 
* INPUT : wl_1_88 
* INPUT : wl_0_89 
* INPUT : wl_1_89 
* INPUT : wl_0_90 
* INPUT : wl_1_90 
* INPUT : wl_0_91 
* INPUT : wl_1_91 
* INPUT : wl_0_92 
* INPUT : wl_1_92 
* INPUT : wl_0_93 
* INPUT : wl_1_93 
* INPUT : wl_0_94 
* INPUT : wl_1_94 
* INPUT : wl_0_95 
* INPUT : wl_1_95 
* INPUT : wl_0_96 
* INPUT : wl_1_96 
* INPUT : wl_0_97 
* INPUT : wl_1_97 
* INPUT : wl_0_98 
* INPUT : wl_1_98 
* INPUT : wl_0_99 
* INPUT : wl_1_99 
* INPUT : wl_0_100 
* INPUT : wl_1_100 
* INPUT : wl_0_101 
* INPUT : wl_1_101 
* INPUT : wl_0_102 
* INPUT : wl_1_102 
* INPUT : wl_0_103 
* INPUT : wl_1_103 
* INPUT : wl_0_104 
* INPUT : wl_1_104 
* INPUT : wl_0_105 
* INPUT : wl_1_105 
* INPUT : wl_0_106 
* INPUT : wl_1_106 
* INPUT : wl_0_107 
* INPUT : wl_1_107 
* INPUT : wl_0_108 
* INPUT : wl_1_108 
* INPUT : wl_0_109 
* INPUT : wl_1_109 
* INPUT : wl_0_110 
* INPUT : wl_1_110 
* INPUT : wl_0_111 
* INPUT : wl_1_111 
* INPUT : wl_0_112 
* INPUT : wl_1_112 
* INPUT : wl_0_113 
* INPUT : wl_1_113 
* INPUT : wl_0_114 
* INPUT : wl_1_114 
* INPUT : wl_0_115 
* INPUT : wl_1_115 
* INPUT : wl_0_116 
* INPUT : wl_1_116 
* INPUT : wl_0_117 
* INPUT : wl_1_117 
* INPUT : wl_0_118 
* INPUT : wl_1_118 
* INPUT : wl_0_119 
* INPUT : wl_1_119 
* INPUT : wl_0_120 
* INPUT : wl_1_120 
* INPUT : wl_0_121 
* INPUT : wl_1_121 
* INPUT : wl_0_122 
* INPUT : wl_1_122 
* INPUT : wl_0_123 
* INPUT : wl_1_123 
* INPUT : wl_0_124 
* INPUT : wl_1_124 
* INPUT : wl_0_125 
* INPUT : wl_1_125 
* INPUT : wl_0_126 
* INPUT : wl_1_126 
* INPUT : wl_0_127 
* INPUT : wl_1_127 
* INPUT : wl_0_128 
* INPUT : wl_1_128 
* INPUT : wl_0_129 
* INPUT : wl_1_129 
* POWER : vdd 
* GROUND: gnd 
Xrbc_0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
Xrbc_1
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_2
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_3
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_4
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_5
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_6
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_7
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_8
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_9
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_10
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_11
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_12
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_13
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_14
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_15
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_16
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_17
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_18
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_19
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_20
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_21
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_22
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_23
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_24
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_25
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_26
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_27
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_28
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_29
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_30
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_31
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_32
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_33
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_34
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_35
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_36
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_37
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_38
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_39
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_40
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_41
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_42
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_43
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_44
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_45
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_46
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_47
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_48
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_49
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_50
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_51
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_52
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_53
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_54
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_55
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_56
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_57
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_58
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_59
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_60
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_61
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_62
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_63
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_64
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_65
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_66
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_67
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_68
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_69
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_70
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_71
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_72
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_73
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_74
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_75
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_76
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_77
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_78
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_79
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_80
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_81
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_82
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_83
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_84
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_85
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_86
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_87
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_88
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_89
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_90
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_91
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_92
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_93
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_94
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_95
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_96
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_97
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_98
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_99
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_100
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_101
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_102
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_103
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_104
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_105
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_106
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_107
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_108
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_109
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_110
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_111
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_112
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_113
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_114
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_115
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_116
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_117
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_118
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_119
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_120
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_121
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_122
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_123
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_124
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_125
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_126
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_127
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_128
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_128 wl_1_128 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_129
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_129 wl_1_129 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
.ENDS routeb_new_1w1r_8x128_replica_column_0

.SUBCKT routeb_new_1w1r_8x128_replica_column
+ bl_0_0 bl_1_0 br_0_0 br_1_0 wl_0_0 wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2
+ wl_0_3 wl_1_3 wl_0_4 wl_1_4 wl_0_5 wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7
+ wl_0_8 wl_1_8 wl_0_9 wl_1_9 wl_0_10 wl_1_10 wl_0_11 wl_1_11 wl_0_12
+ wl_1_12 wl_0_13 wl_1_13 wl_0_14 wl_1_14 wl_0_15 wl_1_15 wl_0_16
+ wl_1_16 wl_0_17 wl_1_17 wl_0_18 wl_1_18 wl_0_19 wl_1_19 wl_0_20
+ wl_1_20 wl_0_21 wl_1_21 wl_0_22 wl_1_22 wl_0_23 wl_1_23 wl_0_24
+ wl_1_24 wl_0_25 wl_1_25 wl_0_26 wl_1_26 wl_0_27 wl_1_27 wl_0_28
+ wl_1_28 wl_0_29 wl_1_29 wl_0_30 wl_1_30 wl_0_31 wl_1_31 wl_0_32
+ wl_1_32 wl_0_33 wl_1_33 wl_0_34 wl_1_34 wl_0_35 wl_1_35 wl_0_36
+ wl_1_36 wl_0_37 wl_1_37 wl_0_38 wl_1_38 wl_0_39 wl_1_39 wl_0_40
+ wl_1_40 wl_0_41 wl_1_41 wl_0_42 wl_1_42 wl_0_43 wl_1_43 wl_0_44
+ wl_1_44 wl_0_45 wl_1_45 wl_0_46 wl_1_46 wl_0_47 wl_1_47 wl_0_48
+ wl_1_48 wl_0_49 wl_1_49 wl_0_50 wl_1_50 wl_0_51 wl_1_51 wl_0_52
+ wl_1_52 wl_0_53 wl_1_53 wl_0_54 wl_1_54 wl_0_55 wl_1_55 wl_0_56
+ wl_1_56 wl_0_57 wl_1_57 wl_0_58 wl_1_58 wl_0_59 wl_1_59 wl_0_60
+ wl_1_60 wl_0_61 wl_1_61 wl_0_62 wl_1_62 wl_0_63 wl_1_63 wl_0_64
+ wl_1_64 wl_0_65 wl_1_65 wl_0_66 wl_1_66 wl_0_67 wl_1_67 wl_0_68
+ wl_1_68 wl_0_69 wl_1_69 wl_0_70 wl_1_70 wl_0_71 wl_1_71 wl_0_72
+ wl_1_72 wl_0_73 wl_1_73 wl_0_74 wl_1_74 wl_0_75 wl_1_75 wl_0_76
+ wl_1_76 wl_0_77 wl_1_77 wl_0_78 wl_1_78 wl_0_79 wl_1_79 wl_0_80
+ wl_1_80 wl_0_81 wl_1_81 wl_0_82 wl_1_82 wl_0_83 wl_1_83 wl_0_84
+ wl_1_84 wl_0_85 wl_1_85 wl_0_86 wl_1_86 wl_0_87 wl_1_87 wl_0_88
+ wl_1_88 wl_0_89 wl_1_89 wl_0_90 wl_1_90 wl_0_91 wl_1_91 wl_0_92
+ wl_1_92 wl_0_93 wl_1_93 wl_0_94 wl_1_94 wl_0_95 wl_1_95 wl_0_96
+ wl_1_96 wl_0_97 wl_1_97 wl_0_98 wl_1_98 wl_0_99 wl_1_99 wl_0_100
+ wl_1_100 wl_0_101 wl_1_101 wl_0_102 wl_1_102 wl_0_103 wl_1_103
+ wl_0_104 wl_1_104 wl_0_105 wl_1_105 wl_0_106 wl_1_106 wl_0_107
+ wl_1_107 wl_0_108 wl_1_108 wl_0_109 wl_1_109 wl_0_110 wl_1_110
+ wl_0_111 wl_1_111 wl_0_112 wl_1_112 wl_0_113 wl_1_113 wl_0_114
+ wl_1_114 wl_0_115 wl_1_115 wl_0_116 wl_1_116 wl_0_117 wl_1_117
+ wl_0_118 wl_1_118 wl_0_119 wl_1_119 wl_0_120 wl_1_120 wl_0_121
+ wl_1_121 wl_0_122 wl_1_122 wl_0_123 wl_1_123 wl_0_124 wl_1_124
+ wl_0_125 wl_1_125 wl_0_126 wl_1_126 wl_0_127 wl_1_127 wl_0_128
+ wl_1_128 wl_0_129 wl_1_129 vdd gnd
* OUTPUT: bl_0_0 
* OUTPUT: bl_1_0 
* OUTPUT: br_0_0 
* OUTPUT: br_1_0 
* INPUT : wl_0_0 
* INPUT : wl_1_0 
* INPUT : wl_0_1 
* INPUT : wl_1_1 
* INPUT : wl_0_2 
* INPUT : wl_1_2 
* INPUT : wl_0_3 
* INPUT : wl_1_3 
* INPUT : wl_0_4 
* INPUT : wl_1_4 
* INPUT : wl_0_5 
* INPUT : wl_1_5 
* INPUT : wl_0_6 
* INPUT : wl_1_6 
* INPUT : wl_0_7 
* INPUT : wl_1_7 
* INPUT : wl_0_8 
* INPUT : wl_1_8 
* INPUT : wl_0_9 
* INPUT : wl_1_9 
* INPUT : wl_0_10 
* INPUT : wl_1_10 
* INPUT : wl_0_11 
* INPUT : wl_1_11 
* INPUT : wl_0_12 
* INPUT : wl_1_12 
* INPUT : wl_0_13 
* INPUT : wl_1_13 
* INPUT : wl_0_14 
* INPUT : wl_1_14 
* INPUT : wl_0_15 
* INPUT : wl_1_15 
* INPUT : wl_0_16 
* INPUT : wl_1_16 
* INPUT : wl_0_17 
* INPUT : wl_1_17 
* INPUT : wl_0_18 
* INPUT : wl_1_18 
* INPUT : wl_0_19 
* INPUT : wl_1_19 
* INPUT : wl_0_20 
* INPUT : wl_1_20 
* INPUT : wl_0_21 
* INPUT : wl_1_21 
* INPUT : wl_0_22 
* INPUT : wl_1_22 
* INPUT : wl_0_23 
* INPUT : wl_1_23 
* INPUT : wl_0_24 
* INPUT : wl_1_24 
* INPUT : wl_0_25 
* INPUT : wl_1_25 
* INPUT : wl_0_26 
* INPUT : wl_1_26 
* INPUT : wl_0_27 
* INPUT : wl_1_27 
* INPUT : wl_0_28 
* INPUT : wl_1_28 
* INPUT : wl_0_29 
* INPUT : wl_1_29 
* INPUT : wl_0_30 
* INPUT : wl_1_30 
* INPUT : wl_0_31 
* INPUT : wl_1_31 
* INPUT : wl_0_32 
* INPUT : wl_1_32 
* INPUT : wl_0_33 
* INPUT : wl_1_33 
* INPUT : wl_0_34 
* INPUT : wl_1_34 
* INPUT : wl_0_35 
* INPUT : wl_1_35 
* INPUT : wl_0_36 
* INPUT : wl_1_36 
* INPUT : wl_0_37 
* INPUT : wl_1_37 
* INPUT : wl_0_38 
* INPUT : wl_1_38 
* INPUT : wl_0_39 
* INPUT : wl_1_39 
* INPUT : wl_0_40 
* INPUT : wl_1_40 
* INPUT : wl_0_41 
* INPUT : wl_1_41 
* INPUT : wl_0_42 
* INPUT : wl_1_42 
* INPUT : wl_0_43 
* INPUT : wl_1_43 
* INPUT : wl_0_44 
* INPUT : wl_1_44 
* INPUT : wl_0_45 
* INPUT : wl_1_45 
* INPUT : wl_0_46 
* INPUT : wl_1_46 
* INPUT : wl_0_47 
* INPUT : wl_1_47 
* INPUT : wl_0_48 
* INPUT : wl_1_48 
* INPUT : wl_0_49 
* INPUT : wl_1_49 
* INPUT : wl_0_50 
* INPUT : wl_1_50 
* INPUT : wl_0_51 
* INPUT : wl_1_51 
* INPUT : wl_0_52 
* INPUT : wl_1_52 
* INPUT : wl_0_53 
* INPUT : wl_1_53 
* INPUT : wl_0_54 
* INPUT : wl_1_54 
* INPUT : wl_0_55 
* INPUT : wl_1_55 
* INPUT : wl_0_56 
* INPUT : wl_1_56 
* INPUT : wl_0_57 
* INPUT : wl_1_57 
* INPUT : wl_0_58 
* INPUT : wl_1_58 
* INPUT : wl_0_59 
* INPUT : wl_1_59 
* INPUT : wl_0_60 
* INPUT : wl_1_60 
* INPUT : wl_0_61 
* INPUT : wl_1_61 
* INPUT : wl_0_62 
* INPUT : wl_1_62 
* INPUT : wl_0_63 
* INPUT : wl_1_63 
* INPUT : wl_0_64 
* INPUT : wl_1_64 
* INPUT : wl_0_65 
* INPUT : wl_1_65 
* INPUT : wl_0_66 
* INPUT : wl_1_66 
* INPUT : wl_0_67 
* INPUT : wl_1_67 
* INPUT : wl_0_68 
* INPUT : wl_1_68 
* INPUT : wl_0_69 
* INPUT : wl_1_69 
* INPUT : wl_0_70 
* INPUT : wl_1_70 
* INPUT : wl_0_71 
* INPUT : wl_1_71 
* INPUT : wl_0_72 
* INPUT : wl_1_72 
* INPUT : wl_0_73 
* INPUT : wl_1_73 
* INPUT : wl_0_74 
* INPUT : wl_1_74 
* INPUT : wl_0_75 
* INPUT : wl_1_75 
* INPUT : wl_0_76 
* INPUT : wl_1_76 
* INPUT : wl_0_77 
* INPUT : wl_1_77 
* INPUT : wl_0_78 
* INPUT : wl_1_78 
* INPUT : wl_0_79 
* INPUT : wl_1_79 
* INPUT : wl_0_80 
* INPUT : wl_1_80 
* INPUT : wl_0_81 
* INPUT : wl_1_81 
* INPUT : wl_0_82 
* INPUT : wl_1_82 
* INPUT : wl_0_83 
* INPUT : wl_1_83 
* INPUT : wl_0_84 
* INPUT : wl_1_84 
* INPUT : wl_0_85 
* INPUT : wl_1_85 
* INPUT : wl_0_86 
* INPUT : wl_1_86 
* INPUT : wl_0_87 
* INPUT : wl_1_87 
* INPUT : wl_0_88 
* INPUT : wl_1_88 
* INPUT : wl_0_89 
* INPUT : wl_1_89 
* INPUT : wl_0_90 
* INPUT : wl_1_90 
* INPUT : wl_0_91 
* INPUT : wl_1_91 
* INPUT : wl_0_92 
* INPUT : wl_1_92 
* INPUT : wl_0_93 
* INPUT : wl_1_93 
* INPUT : wl_0_94 
* INPUT : wl_1_94 
* INPUT : wl_0_95 
* INPUT : wl_1_95 
* INPUT : wl_0_96 
* INPUT : wl_1_96 
* INPUT : wl_0_97 
* INPUT : wl_1_97 
* INPUT : wl_0_98 
* INPUT : wl_1_98 
* INPUT : wl_0_99 
* INPUT : wl_1_99 
* INPUT : wl_0_100 
* INPUT : wl_1_100 
* INPUT : wl_0_101 
* INPUT : wl_1_101 
* INPUT : wl_0_102 
* INPUT : wl_1_102 
* INPUT : wl_0_103 
* INPUT : wl_1_103 
* INPUT : wl_0_104 
* INPUT : wl_1_104 
* INPUT : wl_0_105 
* INPUT : wl_1_105 
* INPUT : wl_0_106 
* INPUT : wl_1_106 
* INPUT : wl_0_107 
* INPUT : wl_1_107 
* INPUT : wl_0_108 
* INPUT : wl_1_108 
* INPUT : wl_0_109 
* INPUT : wl_1_109 
* INPUT : wl_0_110 
* INPUT : wl_1_110 
* INPUT : wl_0_111 
* INPUT : wl_1_111 
* INPUT : wl_0_112 
* INPUT : wl_1_112 
* INPUT : wl_0_113 
* INPUT : wl_1_113 
* INPUT : wl_0_114 
* INPUT : wl_1_114 
* INPUT : wl_0_115 
* INPUT : wl_1_115 
* INPUT : wl_0_116 
* INPUT : wl_1_116 
* INPUT : wl_0_117 
* INPUT : wl_1_117 
* INPUT : wl_0_118 
* INPUT : wl_1_118 
* INPUT : wl_0_119 
* INPUT : wl_1_119 
* INPUT : wl_0_120 
* INPUT : wl_1_120 
* INPUT : wl_0_121 
* INPUT : wl_1_121 
* INPUT : wl_0_122 
* INPUT : wl_1_122 
* INPUT : wl_0_123 
* INPUT : wl_1_123 
* INPUT : wl_0_124 
* INPUT : wl_1_124 
* INPUT : wl_0_125 
* INPUT : wl_1_125 
* INPUT : wl_0_126 
* INPUT : wl_1_126 
* INPUT : wl_0_127 
* INPUT : wl_1_127 
* INPUT : wl_0_128 
* INPUT : wl_1_128 
* INPUT : wl_0_129 
* INPUT : wl_1_129 
* POWER : vdd 
* GROUND: gnd 
Xrbc_0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_1
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_2
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_3
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_4
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_5
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_6
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_7
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_8
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_9
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_10
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_11
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_12
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_13
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_14
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_15
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_16
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_17
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_18
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_19
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_20
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_21
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_22
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_23
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_24
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_25
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_26
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_27
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_28
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_29
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_30
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_31
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_32
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_33
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_34
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_35
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_36
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_37
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_38
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_39
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_40
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_41
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_42
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_43
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_44
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_45
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_46
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_47
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_48
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_49
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_50
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_51
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_52
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_53
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_54
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_55
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_56
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_57
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_58
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_59
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_60
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_61
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_62
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_63
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_64
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_65
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_66
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_67
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_68
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_69
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_70
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_71
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_72
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_73
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_74
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_75
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_76
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_77
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_78
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_79
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_80
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_81
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_82
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_83
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_84
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_85
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_86
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_87
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_88
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_89
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_90
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_91
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_92
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_93
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_94
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_95
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_96
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_97
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_98
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_99
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_100
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_101
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_102
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_103
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_104
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_105
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_106
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_107
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_108
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_109
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_110
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_111
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_112
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_113
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_114
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_115
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_116
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_117
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_118
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_119
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_120
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_121
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_122
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_123
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_124
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_125
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_126
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_127
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_128
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_128 wl_1_128 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_replica
Xrbc_129
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_129 wl_1_129 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell_dummy
.ENDS routeb_new_1w1r_8x128_replica_column
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

.SUBCKT sky130_fd_bd_sram__openram_dp_cell BL0 BR0 BL1 BR1 WL0 WL1 VDD GND

X0 Q WL1 BL1 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X4 Q_bar WL1 BR1 GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1

X3 BL0 WL0 Q GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X7 BR0 WL0 Q_bar GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1

* Bitcell Core
X1 GND Q_bar Q GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X2 GND Q_bar Q GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X9 Q Q_bar VDD VDD sky130_fd_pr__special_pfet_pass W=0.14u L=0.15u m=1

X5 GND Q Q_bar GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X6 GND Q Q_bar GND sky130_fd_pr__special_nfet_latch W=0.21u L=0.15u m=1
X8 VDD Q Q_bar VDD sky130_fd_pr__special_pfet_pass W=0.14u L=0.15u m=1

* tap under poly
X10 GND GND BL1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1
X11 GND GND BR1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1

* drainOnly PMOS
X12 Q_bar WL1 Q_bar VDD sky130_fd_pr__special_pfet_pass W=0.07u L=0.15u m=1
X13 Q WL0 Q VDD sky130_fd_pr__special_pfet_pass W=0.07u L=0.15u m=1

* drainOnly NMOS
X14 GND GND BL1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1
X15 GND GND BR1 GND sky130_fd_pr__special_nfet_latch w=0.21u l=0.08u m=1


.ENDS

.SUBCKT routeb_new_1w1r_8x128_bitcell_array
+ bl_0_0 bl_1_0 br_0_0 br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2
+ br_0_2 br_1_2 bl_0_3 bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4
+ bl_0_5 bl_1_5 br_0_5 br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7
+ br_0_7 br_1_7 wl_0_0 wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3
+ wl_0_4 wl_1_4 wl_0_5 wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8
+ wl_0_9 wl_1_9 wl_0_10 wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13
+ wl_1_13 wl_0_14 wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17
+ wl_1_17 wl_0_18 wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21
+ wl_1_21 wl_0_22 wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25
+ wl_1_25 wl_0_26 wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29
+ wl_1_29 wl_0_30 wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33
+ wl_1_33 wl_0_34 wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37
+ wl_1_37 wl_0_38 wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41
+ wl_1_41 wl_0_42 wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45
+ wl_1_45 wl_0_46 wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49
+ wl_1_49 wl_0_50 wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53
+ wl_1_53 wl_0_54 wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57
+ wl_1_57 wl_0_58 wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61
+ wl_1_61 wl_0_62 wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65
+ wl_1_65 wl_0_66 wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69
+ wl_1_69 wl_0_70 wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73
+ wl_1_73 wl_0_74 wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77
+ wl_1_77 wl_0_78 wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81
+ wl_1_81 wl_0_82 wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85
+ wl_1_85 wl_0_86 wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89
+ wl_1_89 wl_0_90 wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93
+ wl_1_93 wl_0_94 wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97
+ wl_1_97 wl_0_98 wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101
+ wl_1_101 wl_0_102 wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104
+ wl_0_105 wl_1_105 wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108
+ wl_1_108 wl_0_109 wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111
+ wl_0_112 wl_1_112 wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115
+ wl_1_115 wl_0_116 wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118
+ wl_0_119 wl_1_119 wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122
+ wl_1_122 wl_0_123 wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125
+ wl_0_126 wl_1_126 wl_0_127 wl_1_127 vdd gnd
* INOUT : bl_0_0 
* INOUT : bl_1_0 
* INOUT : br_0_0 
* INOUT : br_1_0 
* INOUT : bl_0_1 
* INOUT : bl_1_1 
* INOUT : br_0_1 
* INOUT : br_1_1 
* INOUT : bl_0_2 
* INOUT : bl_1_2 
* INOUT : br_0_2 
* INOUT : br_1_2 
* INOUT : bl_0_3 
* INOUT : bl_1_3 
* INOUT : br_0_3 
* INOUT : br_1_3 
* INOUT : bl_0_4 
* INOUT : bl_1_4 
* INOUT : br_0_4 
* INOUT : br_1_4 
* INOUT : bl_0_5 
* INOUT : bl_1_5 
* INOUT : br_0_5 
* INOUT : br_1_5 
* INOUT : bl_0_6 
* INOUT : bl_1_6 
* INOUT : br_0_6 
* INOUT : br_1_6 
* INOUT : bl_0_7 
* INOUT : bl_1_7 
* INOUT : br_0_7 
* INOUT : br_1_7 
* INPUT : wl_0_0 
* INPUT : wl_1_0 
* INPUT : wl_0_1 
* INPUT : wl_1_1 
* INPUT : wl_0_2 
* INPUT : wl_1_2 
* INPUT : wl_0_3 
* INPUT : wl_1_3 
* INPUT : wl_0_4 
* INPUT : wl_1_4 
* INPUT : wl_0_5 
* INPUT : wl_1_5 
* INPUT : wl_0_6 
* INPUT : wl_1_6 
* INPUT : wl_0_7 
* INPUT : wl_1_7 
* INPUT : wl_0_8 
* INPUT : wl_1_8 
* INPUT : wl_0_9 
* INPUT : wl_1_9 
* INPUT : wl_0_10 
* INPUT : wl_1_10 
* INPUT : wl_0_11 
* INPUT : wl_1_11 
* INPUT : wl_0_12 
* INPUT : wl_1_12 
* INPUT : wl_0_13 
* INPUT : wl_1_13 
* INPUT : wl_0_14 
* INPUT : wl_1_14 
* INPUT : wl_0_15 
* INPUT : wl_1_15 
* INPUT : wl_0_16 
* INPUT : wl_1_16 
* INPUT : wl_0_17 
* INPUT : wl_1_17 
* INPUT : wl_0_18 
* INPUT : wl_1_18 
* INPUT : wl_0_19 
* INPUT : wl_1_19 
* INPUT : wl_0_20 
* INPUT : wl_1_20 
* INPUT : wl_0_21 
* INPUT : wl_1_21 
* INPUT : wl_0_22 
* INPUT : wl_1_22 
* INPUT : wl_0_23 
* INPUT : wl_1_23 
* INPUT : wl_0_24 
* INPUT : wl_1_24 
* INPUT : wl_0_25 
* INPUT : wl_1_25 
* INPUT : wl_0_26 
* INPUT : wl_1_26 
* INPUT : wl_0_27 
* INPUT : wl_1_27 
* INPUT : wl_0_28 
* INPUT : wl_1_28 
* INPUT : wl_0_29 
* INPUT : wl_1_29 
* INPUT : wl_0_30 
* INPUT : wl_1_30 
* INPUT : wl_0_31 
* INPUT : wl_1_31 
* INPUT : wl_0_32 
* INPUT : wl_1_32 
* INPUT : wl_0_33 
* INPUT : wl_1_33 
* INPUT : wl_0_34 
* INPUT : wl_1_34 
* INPUT : wl_0_35 
* INPUT : wl_1_35 
* INPUT : wl_0_36 
* INPUT : wl_1_36 
* INPUT : wl_0_37 
* INPUT : wl_1_37 
* INPUT : wl_0_38 
* INPUT : wl_1_38 
* INPUT : wl_0_39 
* INPUT : wl_1_39 
* INPUT : wl_0_40 
* INPUT : wl_1_40 
* INPUT : wl_0_41 
* INPUT : wl_1_41 
* INPUT : wl_0_42 
* INPUT : wl_1_42 
* INPUT : wl_0_43 
* INPUT : wl_1_43 
* INPUT : wl_0_44 
* INPUT : wl_1_44 
* INPUT : wl_0_45 
* INPUT : wl_1_45 
* INPUT : wl_0_46 
* INPUT : wl_1_46 
* INPUT : wl_0_47 
* INPUT : wl_1_47 
* INPUT : wl_0_48 
* INPUT : wl_1_48 
* INPUT : wl_0_49 
* INPUT : wl_1_49 
* INPUT : wl_0_50 
* INPUT : wl_1_50 
* INPUT : wl_0_51 
* INPUT : wl_1_51 
* INPUT : wl_0_52 
* INPUT : wl_1_52 
* INPUT : wl_0_53 
* INPUT : wl_1_53 
* INPUT : wl_0_54 
* INPUT : wl_1_54 
* INPUT : wl_0_55 
* INPUT : wl_1_55 
* INPUT : wl_0_56 
* INPUT : wl_1_56 
* INPUT : wl_0_57 
* INPUT : wl_1_57 
* INPUT : wl_0_58 
* INPUT : wl_1_58 
* INPUT : wl_0_59 
* INPUT : wl_1_59 
* INPUT : wl_0_60 
* INPUT : wl_1_60 
* INPUT : wl_0_61 
* INPUT : wl_1_61 
* INPUT : wl_0_62 
* INPUT : wl_1_62 
* INPUT : wl_0_63 
* INPUT : wl_1_63 
* INPUT : wl_0_64 
* INPUT : wl_1_64 
* INPUT : wl_0_65 
* INPUT : wl_1_65 
* INPUT : wl_0_66 
* INPUT : wl_1_66 
* INPUT : wl_0_67 
* INPUT : wl_1_67 
* INPUT : wl_0_68 
* INPUT : wl_1_68 
* INPUT : wl_0_69 
* INPUT : wl_1_69 
* INPUT : wl_0_70 
* INPUT : wl_1_70 
* INPUT : wl_0_71 
* INPUT : wl_1_71 
* INPUT : wl_0_72 
* INPUT : wl_1_72 
* INPUT : wl_0_73 
* INPUT : wl_1_73 
* INPUT : wl_0_74 
* INPUT : wl_1_74 
* INPUT : wl_0_75 
* INPUT : wl_1_75 
* INPUT : wl_0_76 
* INPUT : wl_1_76 
* INPUT : wl_0_77 
* INPUT : wl_1_77 
* INPUT : wl_0_78 
* INPUT : wl_1_78 
* INPUT : wl_0_79 
* INPUT : wl_1_79 
* INPUT : wl_0_80 
* INPUT : wl_1_80 
* INPUT : wl_0_81 
* INPUT : wl_1_81 
* INPUT : wl_0_82 
* INPUT : wl_1_82 
* INPUT : wl_0_83 
* INPUT : wl_1_83 
* INPUT : wl_0_84 
* INPUT : wl_1_84 
* INPUT : wl_0_85 
* INPUT : wl_1_85 
* INPUT : wl_0_86 
* INPUT : wl_1_86 
* INPUT : wl_0_87 
* INPUT : wl_1_87 
* INPUT : wl_0_88 
* INPUT : wl_1_88 
* INPUT : wl_0_89 
* INPUT : wl_1_89 
* INPUT : wl_0_90 
* INPUT : wl_1_90 
* INPUT : wl_0_91 
* INPUT : wl_1_91 
* INPUT : wl_0_92 
* INPUT : wl_1_92 
* INPUT : wl_0_93 
* INPUT : wl_1_93 
* INPUT : wl_0_94 
* INPUT : wl_1_94 
* INPUT : wl_0_95 
* INPUT : wl_1_95 
* INPUT : wl_0_96 
* INPUT : wl_1_96 
* INPUT : wl_0_97 
* INPUT : wl_1_97 
* INPUT : wl_0_98 
* INPUT : wl_1_98 
* INPUT : wl_0_99 
* INPUT : wl_1_99 
* INPUT : wl_0_100 
* INPUT : wl_1_100 
* INPUT : wl_0_101 
* INPUT : wl_1_101 
* INPUT : wl_0_102 
* INPUT : wl_1_102 
* INPUT : wl_0_103 
* INPUT : wl_1_103 
* INPUT : wl_0_104 
* INPUT : wl_1_104 
* INPUT : wl_0_105 
* INPUT : wl_1_105 
* INPUT : wl_0_106 
* INPUT : wl_1_106 
* INPUT : wl_0_107 
* INPUT : wl_1_107 
* INPUT : wl_0_108 
* INPUT : wl_1_108 
* INPUT : wl_0_109 
* INPUT : wl_1_109 
* INPUT : wl_0_110 
* INPUT : wl_1_110 
* INPUT : wl_0_111 
* INPUT : wl_1_111 
* INPUT : wl_0_112 
* INPUT : wl_1_112 
* INPUT : wl_0_113 
* INPUT : wl_1_113 
* INPUT : wl_0_114 
* INPUT : wl_1_114 
* INPUT : wl_0_115 
* INPUT : wl_1_115 
* INPUT : wl_0_116 
* INPUT : wl_1_116 
* INPUT : wl_0_117 
* INPUT : wl_1_117 
* INPUT : wl_0_118 
* INPUT : wl_1_118 
* INPUT : wl_0_119 
* INPUT : wl_1_119 
* INPUT : wl_0_120 
* INPUT : wl_1_120 
* INPUT : wl_0_121 
* INPUT : wl_1_121 
* INPUT : wl_0_122 
* INPUT : wl_1_122 
* INPUT : wl_0_123 
* INPUT : wl_1_123 
* INPUT : wl_0_124 
* INPUT : wl_1_124 
* INPUT : wl_0_125 
* INPUT : wl_1_125 
* INPUT : wl_0_126 
* INPUT : wl_1_126 
* INPUT : wl_0_127 
* INPUT : wl_1_127 
* POWER : vdd 
* GROUND: gnd 
* rows: 128 cols: 8
Xbit_r0_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c0
+ bl_0_0 br_0_0 bl_1_0 br_1_0 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r0_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c1
+ bl_0_1 br_0_1 bl_1_1 br_1_1 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r0_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c2
+ bl_0_2 br_0_2 bl_1_2 br_1_2 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r0_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c3
+ bl_0_3 br_0_3 bl_1_3 br_1_3 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r0_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c4
+ bl_0_4 br_0_4 bl_1_4 br_1_4 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r0_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c5
+ bl_0_5 br_0_5 bl_1_5 br_1_5 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r0_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c6
+ bl_0_6 br_0_6 bl_1_6 br_1_6 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r0_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_0 wl_1_0 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r1_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_1 wl_1_1 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r2_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_2 wl_1_2 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r3_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_3 wl_1_3 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r4_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_4 wl_1_4 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r5_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_5 wl_1_5 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r6_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_6 wl_1_6 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r7_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_7 wl_1_7 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r8_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_8 wl_1_8 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r9_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_9 wl_1_9 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r10_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_10 wl_1_10 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r11_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_11 wl_1_11 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r12_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_12 wl_1_12 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r13_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_13 wl_1_13 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r14_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_14 wl_1_14 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r15_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_15 wl_1_15 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r16_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_16 wl_1_16 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r17_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_17 wl_1_17 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r18_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_18 wl_1_18 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r19_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_19 wl_1_19 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r20_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_20 wl_1_20 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r21_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_21 wl_1_21 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r22_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_22 wl_1_22 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r23_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_23 wl_1_23 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r24_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_24 wl_1_24 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r25_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_25 wl_1_25 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r26_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_26 wl_1_26 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r27_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_27 wl_1_27 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r28_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_28 wl_1_28 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r29_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_29 wl_1_29 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r30_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_30 wl_1_30 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r31_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_31 wl_1_31 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r32_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_32 wl_1_32 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r33_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_33 wl_1_33 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r34_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_34 wl_1_34 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r35_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_35 wl_1_35 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r36_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_36 wl_1_36 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r37_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_37 wl_1_37 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r38_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_38 wl_1_38 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r39_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_39 wl_1_39 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r40_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_40 wl_1_40 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r41_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_41 wl_1_41 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r42_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_42 wl_1_42 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r43_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_43 wl_1_43 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r44_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_44 wl_1_44 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r45_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_45 wl_1_45 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r46_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_46 wl_1_46 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r47_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_47 wl_1_47 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r48_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_48 wl_1_48 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r49_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_49 wl_1_49 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r50_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_50 wl_1_50 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r51_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_51 wl_1_51 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r52_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_52 wl_1_52 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r53_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_53 wl_1_53 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r54_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_54 wl_1_54 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r55_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_55 wl_1_55 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r56_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_56 wl_1_56 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r57_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_57 wl_1_57 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r58_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_58 wl_1_58 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r59_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_59 wl_1_59 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r60_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_60 wl_1_60 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r61_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_61 wl_1_61 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r62_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_62 wl_1_62 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r63_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_63 wl_1_63 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r64_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_64 wl_1_64 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r65_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_65 wl_1_65 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r66_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_66 wl_1_66 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r67_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_67 wl_1_67 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r68_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_68 wl_1_68 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r69_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_69 wl_1_69 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r70_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_70 wl_1_70 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r71_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_71 wl_1_71 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r72_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_72 wl_1_72 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r73_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_73 wl_1_73 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r74_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_74 wl_1_74 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r75_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_75 wl_1_75 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r76_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_76 wl_1_76 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r77_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_77 wl_1_77 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r78_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_78 wl_1_78 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r79_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_79 wl_1_79 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r80_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_80 wl_1_80 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r81_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_81 wl_1_81 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r82_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_82 wl_1_82 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r83_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_83 wl_1_83 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r84_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_84 wl_1_84 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r85_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_85 wl_1_85 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r86_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_86 wl_1_86 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r87_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_87 wl_1_87 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r88_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_88 wl_1_88 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r89_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_89 wl_1_89 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r90_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_90 wl_1_90 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r91_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_91 wl_1_91 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r92_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_92 wl_1_92 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r93_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_93 wl_1_93 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r94_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_94 wl_1_94 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r95_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_95 wl_1_95 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r96_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_96 wl_1_96 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r97_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_97 wl_1_97 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r98_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_98 wl_1_98 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r99_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_99 wl_1_99 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r100_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_100 wl_1_100 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r101_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_101 wl_1_101 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r102_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_102 wl_1_102 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r103_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_103 wl_1_103 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r104_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_104 wl_1_104 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r105_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_105 wl_1_105 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r106_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_106 wl_1_106 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r107_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_107 wl_1_107 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r108_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_108 wl_1_108 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r109_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_109 wl_1_109 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r110_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_110 wl_1_110 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r111_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_111 wl_1_111 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r112_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_112 wl_1_112 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r113_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_113 wl_1_113 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r114_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_114 wl_1_114 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r115_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_115 wl_1_115 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r116_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_116 wl_1_116 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r117_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_117 wl_1_117 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r118_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_118 wl_1_118 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r119_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_119 wl_1_119 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r120_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_120 wl_1_120 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r121_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_121 wl_1_121 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r122_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_122 wl_1_122 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r123_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_123 wl_1_123 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r124_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_124 wl_1_124 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r125_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_125 wl_1_125 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r126_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_126 wl_1_126 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
Xbit_r127_c7
+ bl_0_7 br_0_7 bl_1_7 br_1_7 wl_0_127 wl_1_127 vdd gnd
+ sky130_fd_bd_sram__openram_dp_cell
.ENDS routeb_new_1w1r_8x128_bitcell_array

.SUBCKT routeb_new_1w1r_8x128_replica_bitcell_array
+ rbl_bl_0_0 rbl_bl_1_0 rbl_br_0_0 rbl_br_1_0 bl_0_0 bl_1_0 br_0_0
+ br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2 br_0_2 br_1_2 bl_0_3
+ bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4 bl_0_5 bl_1_5 br_0_5
+ br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7 br_0_7 br_1_7
+ rbl_bl_0_1 rbl_bl_1_1 rbl_br_0_1 rbl_br_1_1 rbl_wl_0_0 rbl_wl_0_1
+ wl_0_0 wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3 wl_0_4 wl_1_4
+ wl_0_5 wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8 wl_0_9 wl_1_9
+ wl_0_10 wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13 wl_1_13
+ wl_0_14 wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17 wl_1_17
+ wl_0_18 wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21 wl_1_21
+ wl_0_22 wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25 wl_1_25
+ wl_0_26 wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29 wl_1_29
+ wl_0_30 wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33 wl_1_33
+ wl_0_34 wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37 wl_1_37
+ wl_0_38 wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41 wl_1_41
+ wl_0_42 wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45 wl_1_45
+ wl_0_46 wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49 wl_1_49
+ wl_0_50 wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53 wl_1_53
+ wl_0_54 wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57 wl_1_57
+ wl_0_58 wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61 wl_1_61
+ wl_0_62 wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65 wl_1_65
+ wl_0_66 wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69 wl_1_69
+ wl_0_70 wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73 wl_1_73
+ wl_0_74 wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77 wl_1_77
+ wl_0_78 wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81 wl_1_81
+ wl_0_82 wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85 wl_1_85
+ wl_0_86 wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89 wl_1_89
+ wl_0_90 wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93 wl_1_93
+ wl_0_94 wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97 wl_1_97
+ wl_0_98 wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101 wl_1_101
+ wl_0_102 wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104 wl_0_105
+ wl_1_105 wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108 wl_1_108
+ wl_0_109 wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111 wl_0_112
+ wl_1_112 wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115 wl_1_115
+ wl_0_116 wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118 wl_0_119
+ wl_1_119 wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122 wl_1_122
+ wl_0_123 wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125 wl_0_126
+ wl_1_126 wl_0_127 wl_1_127 rbl_wl_1_0 rbl_wl_1_1 vdd gnd
* INOUT : rbl_bl_0_0 
* INOUT : rbl_bl_1_0 
* INOUT : rbl_br_0_0 
* INOUT : rbl_br_1_0 
* INOUT : bl_0_0 
* INOUT : bl_1_0 
* INOUT : br_0_0 
* INOUT : br_1_0 
* INOUT : bl_0_1 
* INOUT : bl_1_1 
* INOUT : br_0_1 
* INOUT : br_1_1 
* INOUT : bl_0_2 
* INOUT : bl_1_2 
* INOUT : br_0_2 
* INOUT : br_1_2 
* INOUT : bl_0_3 
* INOUT : bl_1_3 
* INOUT : br_0_3 
* INOUT : br_1_3 
* INOUT : bl_0_4 
* INOUT : bl_1_4 
* INOUT : br_0_4 
* INOUT : br_1_4 
* INOUT : bl_0_5 
* INOUT : bl_1_5 
* INOUT : br_0_5 
* INOUT : br_1_5 
* INOUT : bl_0_6 
* INOUT : bl_1_6 
* INOUT : br_0_6 
* INOUT : br_1_6 
* INOUT : bl_0_7 
* INOUT : bl_1_7 
* INOUT : br_0_7 
* INOUT : br_1_7 
* INOUT : rbl_bl_0_1 
* INOUT : rbl_bl_1_1 
* INOUT : rbl_br_0_1 
* INOUT : rbl_br_1_1 
* INPUT : rbl_wl_0_0 
* INPUT : rbl_wl_0_1 
* INPUT : wl_0_0 
* INPUT : wl_1_0 
* INPUT : wl_0_1 
* INPUT : wl_1_1 
* INPUT : wl_0_2 
* INPUT : wl_1_2 
* INPUT : wl_0_3 
* INPUT : wl_1_3 
* INPUT : wl_0_4 
* INPUT : wl_1_4 
* INPUT : wl_0_5 
* INPUT : wl_1_5 
* INPUT : wl_0_6 
* INPUT : wl_1_6 
* INPUT : wl_0_7 
* INPUT : wl_1_7 
* INPUT : wl_0_8 
* INPUT : wl_1_8 
* INPUT : wl_0_9 
* INPUT : wl_1_9 
* INPUT : wl_0_10 
* INPUT : wl_1_10 
* INPUT : wl_0_11 
* INPUT : wl_1_11 
* INPUT : wl_0_12 
* INPUT : wl_1_12 
* INPUT : wl_0_13 
* INPUT : wl_1_13 
* INPUT : wl_0_14 
* INPUT : wl_1_14 
* INPUT : wl_0_15 
* INPUT : wl_1_15 
* INPUT : wl_0_16 
* INPUT : wl_1_16 
* INPUT : wl_0_17 
* INPUT : wl_1_17 
* INPUT : wl_0_18 
* INPUT : wl_1_18 
* INPUT : wl_0_19 
* INPUT : wl_1_19 
* INPUT : wl_0_20 
* INPUT : wl_1_20 
* INPUT : wl_0_21 
* INPUT : wl_1_21 
* INPUT : wl_0_22 
* INPUT : wl_1_22 
* INPUT : wl_0_23 
* INPUT : wl_1_23 
* INPUT : wl_0_24 
* INPUT : wl_1_24 
* INPUT : wl_0_25 
* INPUT : wl_1_25 
* INPUT : wl_0_26 
* INPUT : wl_1_26 
* INPUT : wl_0_27 
* INPUT : wl_1_27 
* INPUT : wl_0_28 
* INPUT : wl_1_28 
* INPUT : wl_0_29 
* INPUT : wl_1_29 
* INPUT : wl_0_30 
* INPUT : wl_1_30 
* INPUT : wl_0_31 
* INPUT : wl_1_31 
* INPUT : wl_0_32 
* INPUT : wl_1_32 
* INPUT : wl_0_33 
* INPUT : wl_1_33 
* INPUT : wl_0_34 
* INPUT : wl_1_34 
* INPUT : wl_0_35 
* INPUT : wl_1_35 
* INPUT : wl_0_36 
* INPUT : wl_1_36 
* INPUT : wl_0_37 
* INPUT : wl_1_37 
* INPUT : wl_0_38 
* INPUT : wl_1_38 
* INPUT : wl_0_39 
* INPUT : wl_1_39 
* INPUT : wl_0_40 
* INPUT : wl_1_40 
* INPUT : wl_0_41 
* INPUT : wl_1_41 
* INPUT : wl_0_42 
* INPUT : wl_1_42 
* INPUT : wl_0_43 
* INPUT : wl_1_43 
* INPUT : wl_0_44 
* INPUT : wl_1_44 
* INPUT : wl_0_45 
* INPUT : wl_1_45 
* INPUT : wl_0_46 
* INPUT : wl_1_46 
* INPUT : wl_0_47 
* INPUT : wl_1_47 
* INPUT : wl_0_48 
* INPUT : wl_1_48 
* INPUT : wl_0_49 
* INPUT : wl_1_49 
* INPUT : wl_0_50 
* INPUT : wl_1_50 
* INPUT : wl_0_51 
* INPUT : wl_1_51 
* INPUT : wl_0_52 
* INPUT : wl_1_52 
* INPUT : wl_0_53 
* INPUT : wl_1_53 
* INPUT : wl_0_54 
* INPUT : wl_1_54 
* INPUT : wl_0_55 
* INPUT : wl_1_55 
* INPUT : wl_0_56 
* INPUT : wl_1_56 
* INPUT : wl_0_57 
* INPUT : wl_1_57 
* INPUT : wl_0_58 
* INPUT : wl_1_58 
* INPUT : wl_0_59 
* INPUT : wl_1_59 
* INPUT : wl_0_60 
* INPUT : wl_1_60 
* INPUT : wl_0_61 
* INPUT : wl_1_61 
* INPUT : wl_0_62 
* INPUT : wl_1_62 
* INPUT : wl_0_63 
* INPUT : wl_1_63 
* INPUT : wl_0_64 
* INPUT : wl_1_64 
* INPUT : wl_0_65 
* INPUT : wl_1_65 
* INPUT : wl_0_66 
* INPUT : wl_1_66 
* INPUT : wl_0_67 
* INPUT : wl_1_67 
* INPUT : wl_0_68 
* INPUT : wl_1_68 
* INPUT : wl_0_69 
* INPUT : wl_1_69 
* INPUT : wl_0_70 
* INPUT : wl_1_70 
* INPUT : wl_0_71 
* INPUT : wl_1_71 
* INPUT : wl_0_72 
* INPUT : wl_1_72 
* INPUT : wl_0_73 
* INPUT : wl_1_73 
* INPUT : wl_0_74 
* INPUT : wl_1_74 
* INPUT : wl_0_75 
* INPUT : wl_1_75 
* INPUT : wl_0_76 
* INPUT : wl_1_76 
* INPUT : wl_0_77 
* INPUT : wl_1_77 
* INPUT : wl_0_78 
* INPUT : wl_1_78 
* INPUT : wl_0_79 
* INPUT : wl_1_79 
* INPUT : wl_0_80 
* INPUT : wl_1_80 
* INPUT : wl_0_81 
* INPUT : wl_1_81 
* INPUT : wl_0_82 
* INPUT : wl_1_82 
* INPUT : wl_0_83 
* INPUT : wl_1_83 
* INPUT : wl_0_84 
* INPUT : wl_1_84 
* INPUT : wl_0_85 
* INPUT : wl_1_85 
* INPUT : wl_0_86 
* INPUT : wl_1_86 
* INPUT : wl_0_87 
* INPUT : wl_1_87 
* INPUT : wl_0_88 
* INPUT : wl_1_88 
* INPUT : wl_0_89 
* INPUT : wl_1_89 
* INPUT : wl_0_90 
* INPUT : wl_1_90 
* INPUT : wl_0_91 
* INPUT : wl_1_91 
* INPUT : wl_0_92 
* INPUT : wl_1_92 
* INPUT : wl_0_93 
* INPUT : wl_1_93 
* INPUT : wl_0_94 
* INPUT : wl_1_94 
* INPUT : wl_0_95 
* INPUT : wl_1_95 
* INPUT : wl_0_96 
* INPUT : wl_1_96 
* INPUT : wl_0_97 
* INPUT : wl_1_97 
* INPUT : wl_0_98 
* INPUT : wl_1_98 
* INPUT : wl_0_99 
* INPUT : wl_1_99 
* INPUT : wl_0_100 
* INPUT : wl_1_100 
* INPUT : wl_0_101 
* INPUT : wl_1_101 
* INPUT : wl_0_102 
* INPUT : wl_1_102 
* INPUT : wl_0_103 
* INPUT : wl_1_103 
* INPUT : wl_0_104 
* INPUT : wl_1_104 
* INPUT : wl_0_105 
* INPUT : wl_1_105 
* INPUT : wl_0_106 
* INPUT : wl_1_106 
* INPUT : wl_0_107 
* INPUT : wl_1_107 
* INPUT : wl_0_108 
* INPUT : wl_1_108 
* INPUT : wl_0_109 
* INPUT : wl_1_109 
* INPUT : wl_0_110 
* INPUT : wl_1_110 
* INPUT : wl_0_111 
* INPUT : wl_1_111 
* INPUT : wl_0_112 
* INPUT : wl_1_112 
* INPUT : wl_0_113 
* INPUT : wl_1_113 
* INPUT : wl_0_114 
* INPUT : wl_1_114 
* INPUT : wl_0_115 
* INPUT : wl_1_115 
* INPUT : wl_0_116 
* INPUT : wl_1_116 
* INPUT : wl_0_117 
* INPUT : wl_1_117 
* INPUT : wl_0_118 
* INPUT : wl_1_118 
* INPUT : wl_0_119 
* INPUT : wl_1_119 
* INPUT : wl_0_120 
* INPUT : wl_1_120 
* INPUT : wl_0_121 
* INPUT : wl_1_121 
* INPUT : wl_0_122 
* INPUT : wl_1_122 
* INPUT : wl_0_123 
* INPUT : wl_1_123 
* INPUT : wl_0_124 
* INPUT : wl_1_124 
* INPUT : wl_0_125 
* INPUT : wl_1_125 
* INPUT : wl_0_126 
* INPUT : wl_1_126 
* INPUT : wl_0_127 
* INPUT : wl_1_127 
* INPUT : rbl_wl_1_0 
* INPUT : rbl_wl_1_1 
* POWER : vdd 
* GROUND: gnd 
* rows: 128 cols: 8
* rbl: [1, 1] left_rbl: [0] right_rbl: [1]
Xbitcell_array
+ bl_0_0 bl_1_0 br_0_0 br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2
+ br_0_2 br_1_2 bl_0_3 bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4
+ bl_0_5 bl_1_5 br_0_5 br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7
+ br_0_7 br_1_7 wl_0_0 wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3
+ wl_0_4 wl_1_4 wl_0_5 wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8
+ wl_0_9 wl_1_9 wl_0_10 wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13
+ wl_1_13 wl_0_14 wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17
+ wl_1_17 wl_0_18 wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21
+ wl_1_21 wl_0_22 wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25
+ wl_1_25 wl_0_26 wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29
+ wl_1_29 wl_0_30 wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33
+ wl_1_33 wl_0_34 wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37
+ wl_1_37 wl_0_38 wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41
+ wl_1_41 wl_0_42 wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45
+ wl_1_45 wl_0_46 wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49
+ wl_1_49 wl_0_50 wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53
+ wl_1_53 wl_0_54 wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57
+ wl_1_57 wl_0_58 wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61
+ wl_1_61 wl_0_62 wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65
+ wl_1_65 wl_0_66 wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69
+ wl_1_69 wl_0_70 wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73
+ wl_1_73 wl_0_74 wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77
+ wl_1_77 wl_0_78 wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81
+ wl_1_81 wl_0_82 wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85
+ wl_1_85 wl_0_86 wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89
+ wl_1_89 wl_0_90 wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93
+ wl_1_93 wl_0_94 wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97
+ wl_1_97 wl_0_98 wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101
+ wl_1_101 wl_0_102 wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104
+ wl_0_105 wl_1_105 wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108
+ wl_1_108 wl_0_109 wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111
+ wl_0_112 wl_1_112 wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115
+ wl_1_115 wl_0_116 wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118
+ wl_0_119 wl_1_119 wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122
+ wl_1_122 wl_0_123 wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125
+ wl_0_126 wl_1_126 wl_0_127 wl_1_127 vdd gnd
+ routeb_new_1w1r_8x128_bitcell_array
Xreplica_col_0
+ rbl_bl_0_0 rbl_bl_1_0 rbl_br_0_0 rbl_br_1_0 rbl_wl_0_0 rbl_wl_0_1
+ wl_0_0 wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3 wl_0_4 wl_1_4
+ wl_0_5 wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8 wl_0_9 wl_1_9
+ wl_0_10 wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13 wl_1_13
+ wl_0_14 wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17 wl_1_17
+ wl_0_18 wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21 wl_1_21
+ wl_0_22 wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25 wl_1_25
+ wl_0_26 wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29 wl_1_29
+ wl_0_30 wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33 wl_1_33
+ wl_0_34 wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37 wl_1_37
+ wl_0_38 wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41 wl_1_41
+ wl_0_42 wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45 wl_1_45
+ wl_0_46 wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49 wl_1_49
+ wl_0_50 wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53 wl_1_53
+ wl_0_54 wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57 wl_1_57
+ wl_0_58 wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61 wl_1_61
+ wl_0_62 wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65 wl_1_65
+ wl_0_66 wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69 wl_1_69
+ wl_0_70 wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73 wl_1_73
+ wl_0_74 wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77 wl_1_77
+ wl_0_78 wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81 wl_1_81
+ wl_0_82 wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85 wl_1_85
+ wl_0_86 wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89 wl_1_89
+ wl_0_90 wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93 wl_1_93
+ wl_0_94 wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97 wl_1_97
+ wl_0_98 wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101 wl_1_101
+ wl_0_102 wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104 wl_0_105
+ wl_1_105 wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108 wl_1_108
+ wl_0_109 wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111 wl_0_112
+ wl_1_112 wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115 wl_1_115
+ wl_0_116 wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118 wl_0_119
+ wl_1_119 wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122 wl_1_122
+ wl_0_123 wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125 wl_0_126
+ wl_1_126 wl_0_127 wl_1_127 rbl_wl_1_0 rbl_wl_1_1 vdd gnd
+ routeb_new_1w1r_8x128_replica_column
Xreplica_col_1
+ rbl_bl_0_1 rbl_bl_1_1 rbl_br_0_1 rbl_br_1_1 rbl_wl_0_0 rbl_wl_0_1
+ wl_0_0 wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3 wl_0_4 wl_1_4
+ wl_0_5 wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8 wl_0_9 wl_1_9
+ wl_0_10 wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13 wl_1_13
+ wl_0_14 wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17 wl_1_17
+ wl_0_18 wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21 wl_1_21
+ wl_0_22 wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25 wl_1_25
+ wl_0_26 wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29 wl_1_29
+ wl_0_30 wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33 wl_1_33
+ wl_0_34 wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37 wl_1_37
+ wl_0_38 wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41 wl_1_41
+ wl_0_42 wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45 wl_1_45
+ wl_0_46 wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49 wl_1_49
+ wl_0_50 wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53 wl_1_53
+ wl_0_54 wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57 wl_1_57
+ wl_0_58 wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61 wl_1_61
+ wl_0_62 wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65 wl_1_65
+ wl_0_66 wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69 wl_1_69
+ wl_0_70 wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73 wl_1_73
+ wl_0_74 wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77 wl_1_77
+ wl_0_78 wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81 wl_1_81
+ wl_0_82 wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85 wl_1_85
+ wl_0_86 wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89 wl_1_89
+ wl_0_90 wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93 wl_1_93
+ wl_0_94 wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97 wl_1_97
+ wl_0_98 wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101 wl_1_101
+ wl_0_102 wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104 wl_0_105
+ wl_1_105 wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108 wl_1_108
+ wl_0_109 wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111 wl_0_112
+ wl_1_112 wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115 wl_1_115
+ wl_0_116 wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118 wl_0_119
+ wl_1_119 wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122 wl_1_122
+ wl_0_123 wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125 wl_0_126
+ wl_1_126 wl_0_127 wl_1_127 rbl_wl_1_0 rbl_wl_1_1 vdd gnd
+ routeb_new_1w1r_8x128_replica_column_0
Xdummy_row_0
+ bl_0_0 bl_1_0 br_0_0 br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2
+ br_0_2 br_1_2 bl_0_3 bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4
+ bl_0_5 bl_1_5 br_0_5 br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7
+ br_0_7 br_1_7 rbl_wl_0_0 rbl_wl_0_1 vdd gnd
+ routeb_new_1w1r_8x128_dummy_array
Xdummy_row_1
+ bl_0_0 bl_1_0 br_0_0 br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2
+ br_0_2 br_1_2 bl_0_3 bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4
+ bl_0_5 bl_1_5 br_0_5 br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7
+ br_0_7 br_1_7 rbl_wl_1_0 rbl_wl_1_1 vdd gnd
+ routeb_new_1w1r_8x128_dummy_array
.ENDS routeb_new_1w1r_8x128_replica_bitcell_array

.SUBCKT routeb_new_1w1r_8x128_capped_replica_bitcell_array
+ rbl_bl_0_0 rbl_bl_1_0 rbl_br_0_0 rbl_br_1_0 bl_0_0 bl_1_0 br_0_0
+ br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2 br_0_2 br_1_2 bl_0_3
+ bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4 bl_0_5 bl_1_5 br_0_5
+ br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7 br_0_7 br_1_7
+ rbl_bl_0_1 rbl_bl_1_1 rbl_br_0_1 rbl_br_1_1 rbl_wl_0_0 wl_0_0 wl_1_0
+ wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3 wl_0_4 wl_1_4 wl_0_5 wl_1_5
+ wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8 wl_0_9 wl_1_9 wl_0_10
+ wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13 wl_1_13 wl_0_14
+ wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17 wl_1_17 wl_0_18
+ wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21 wl_1_21 wl_0_22
+ wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25 wl_1_25 wl_0_26
+ wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29 wl_1_29 wl_0_30
+ wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33 wl_1_33 wl_0_34
+ wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37 wl_1_37 wl_0_38
+ wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41 wl_1_41 wl_0_42
+ wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45 wl_1_45 wl_0_46
+ wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49 wl_1_49 wl_0_50
+ wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53 wl_1_53 wl_0_54
+ wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57 wl_1_57 wl_0_58
+ wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61 wl_1_61 wl_0_62
+ wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65 wl_1_65 wl_0_66
+ wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69 wl_1_69 wl_0_70
+ wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73 wl_1_73 wl_0_74
+ wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77 wl_1_77 wl_0_78
+ wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81 wl_1_81 wl_0_82
+ wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85 wl_1_85 wl_0_86
+ wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89 wl_1_89 wl_0_90
+ wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93 wl_1_93 wl_0_94
+ wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97 wl_1_97 wl_0_98
+ wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101 wl_1_101 wl_0_102
+ wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104 wl_0_105 wl_1_105
+ wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108 wl_1_108 wl_0_109
+ wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111 wl_0_112 wl_1_112
+ wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115 wl_1_115 wl_0_116
+ wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118 wl_0_119 wl_1_119
+ wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122 wl_1_122 wl_0_123
+ wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125 wl_0_126 wl_1_126
+ wl_0_127 wl_1_127 rbl_wl_1_1 vdd gnd
* INOUT : rbl_bl_0_0 
* INOUT : rbl_bl_1_0 
* INOUT : rbl_br_0_0 
* INOUT : rbl_br_1_0 
* INOUT : bl_0_0 
* INOUT : bl_1_0 
* INOUT : br_0_0 
* INOUT : br_1_0 
* INOUT : bl_0_1 
* INOUT : bl_1_1 
* INOUT : br_0_1 
* INOUT : br_1_1 
* INOUT : bl_0_2 
* INOUT : bl_1_2 
* INOUT : br_0_2 
* INOUT : br_1_2 
* INOUT : bl_0_3 
* INOUT : bl_1_3 
* INOUT : br_0_3 
* INOUT : br_1_3 
* INOUT : bl_0_4 
* INOUT : bl_1_4 
* INOUT : br_0_4 
* INOUT : br_1_4 
* INOUT : bl_0_5 
* INOUT : bl_1_5 
* INOUT : br_0_5 
* INOUT : br_1_5 
* INOUT : bl_0_6 
* INOUT : bl_1_6 
* INOUT : br_0_6 
* INOUT : br_1_6 
* INOUT : bl_0_7 
* INOUT : bl_1_7 
* INOUT : br_0_7 
* INOUT : br_1_7 
* INOUT : rbl_bl_0_1 
* INOUT : rbl_bl_1_1 
* INOUT : rbl_br_0_1 
* INOUT : rbl_br_1_1 
* INPUT : rbl_wl_0_0 
* INPUT : wl_0_0 
* INPUT : wl_1_0 
* INPUT : wl_0_1 
* INPUT : wl_1_1 
* INPUT : wl_0_2 
* INPUT : wl_1_2 
* INPUT : wl_0_3 
* INPUT : wl_1_3 
* INPUT : wl_0_4 
* INPUT : wl_1_4 
* INPUT : wl_0_5 
* INPUT : wl_1_5 
* INPUT : wl_0_6 
* INPUT : wl_1_6 
* INPUT : wl_0_7 
* INPUT : wl_1_7 
* INPUT : wl_0_8 
* INPUT : wl_1_8 
* INPUT : wl_0_9 
* INPUT : wl_1_9 
* INPUT : wl_0_10 
* INPUT : wl_1_10 
* INPUT : wl_0_11 
* INPUT : wl_1_11 
* INPUT : wl_0_12 
* INPUT : wl_1_12 
* INPUT : wl_0_13 
* INPUT : wl_1_13 
* INPUT : wl_0_14 
* INPUT : wl_1_14 
* INPUT : wl_0_15 
* INPUT : wl_1_15 
* INPUT : wl_0_16 
* INPUT : wl_1_16 
* INPUT : wl_0_17 
* INPUT : wl_1_17 
* INPUT : wl_0_18 
* INPUT : wl_1_18 
* INPUT : wl_0_19 
* INPUT : wl_1_19 
* INPUT : wl_0_20 
* INPUT : wl_1_20 
* INPUT : wl_0_21 
* INPUT : wl_1_21 
* INPUT : wl_0_22 
* INPUT : wl_1_22 
* INPUT : wl_0_23 
* INPUT : wl_1_23 
* INPUT : wl_0_24 
* INPUT : wl_1_24 
* INPUT : wl_0_25 
* INPUT : wl_1_25 
* INPUT : wl_0_26 
* INPUT : wl_1_26 
* INPUT : wl_0_27 
* INPUT : wl_1_27 
* INPUT : wl_0_28 
* INPUT : wl_1_28 
* INPUT : wl_0_29 
* INPUT : wl_1_29 
* INPUT : wl_0_30 
* INPUT : wl_1_30 
* INPUT : wl_0_31 
* INPUT : wl_1_31 
* INPUT : wl_0_32 
* INPUT : wl_1_32 
* INPUT : wl_0_33 
* INPUT : wl_1_33 
* INPUT : wl_0_34 
* INPUT : wl_1_34 
* INPUT : wl_0_35 
* INPUT : wl_1_35 
* INPUT : wl_0_36 
* INPUT : wl_1_36 
* INPUT : wl_0_37 
* INPUT : wl_1_37 
* INPUT : wl_0_38 
* INPUT : wl_1_38 
* INPUT : wl_0_39 
* INPUT : wl_1_39 
* INPUT : wl_0_40 
* INPUT : wl_1_40 
* INPUT : wl_0_41 
* INPUT : wl_1_41 
* INPUT : wl_0_42 
* INPUT : wl_1_42 
* INPUT : wl_0_43 
* INPUT : wl_1_43 
* INPUT : wl_0_44 
* INPUT : wl_1_44 
* INPUT : wl_0_45 
* INPUT : wl_1_45 
* INPUT : wl_0_46 
* INPUT : wl_1_46 
* INPUT : wl_0_47 
* INPUT : wl_1_47 
* INPUT : wl_0_48 
* INPUT : wl_1_48 
* INPUT : wl_0_49 
* INPUT : wl_1_49 
* INPUT : wl_0_50 
* INPUT : wl_1_50 
* INPUT : wl_0_51 
* INPUT : wl_1_51 
* INPUT : wl_0_52 
* INPUT : wl_1_52 
* INPUT : wl_0_53 
* INPUT : wl_1_53 
* INPUT : wl_0_54 
* INPUT : wl_1_54 
* INPUT : wl_0_55 
* INPUT : wl_1_55 
* INPUT : wl_0_56 
* INPUT : wl_1_56 
* INPUT : wl_0_57 
* INPUT : wl_1_57 
* INPUT : wl_0_58 
* INPUT : wl_1_58 
* INPUT : wl_0_59 
* INPUT : wl_1_59 
* INPUT : wl_0_60 
* INPUT : wl_1_60 
* INPUT : wl_0_61 
* INPUT : wl_1_61 
* INPUT : wl_0_62 
* INPUT : wl_1_62 
* INPUT : wl_0_63 
* INPUT : wl_1_63 
* INPUT : wl_0_64 
* INPUT : wl_1_64 
* INPUT : wl_0_65 
* INPUT : wl_1_65 
* INPUT : wl_0_66 
* INPUT : wl_1_66 
* INPUT : wl_0_67 
* INPUT : wl_1_67 
* INPUT : wl_0_68 
* INPUT : wl_1_68 
* INPUT : wl_0_69 
* INPUT : wl_1_69 
* INPUT : wl_0_70 
* INPUT : wl_1_70 
* INPUT : wl_0_71 
* INPUT : wl_1_71 
* INPUT : wl_0_72 
* INPUT : wl_1_72 
* INPUT : wl_0_73 
* INPUT : wl_1_73 
* INPUT : wl_0_74 
* INPUT : wl_1_74 
* INPUT : wl_0_75 
* INPUT : wl_1_75 
* INPUT : wl_0_76 
* INPUT : wl_1_76 
* INPUT : wl_0_77 
* INPUT : wl_1_77 
* INPUT : wl_0_78 
* INPUT : wl_1_78 
* INPUT : wl_0_79 
* INPUT : wl_1_79 
* INPUT : wl_0_80 
* INPUT : wl_1_80 
* INPUT : wl_0_81 
* INPUT : wl_1_81 
* INPUT : wl_0_82 
* INPUT : wl_1_82 
* INPUT : wl_0_83 
* INPUT : wl_1_83 
* INPUT : wl_0_84 
* INPUT : wl_1_84 
* INPUT : wl_0_85 
* INPUT : wl_1_85 
* INPUT : wl_0_86 
* INPUT : wl_1_86 
* INPUT : wl_0_87 
* INPUT : wl_1_87 
* INPUT : wl_0_88 
* INPUT : wl_1_88 
* INPUT : wl_0_89 
* INPUT : wl_1_89 
* INPUT : wl_0_90 
* INPUT : wl_1_90 
* INPUT : wl_0_91 
* INPUT : wl_1_91 
* INPUT : wl_0_92 
* INPUT : wl_1_92 
* INPUT : wl_0_93 
* INPUT : wl_1_93 
* INPUT : wl_0_94 
* INPUT : wl_1_94 
* INPUT : wl_0_95 
* INPUT : wl_1_95 
* INPUT : wl_0_96 
* INPUT : wl_1_96 
* INPUT : wl_0_97 
* INPUT : wl_1_97 
* INPUT : wl_0_98 
* INPUT : wl_1_98 
* INPUT : wl_0_99 
* INPUT : wl_1_99 
* INPUT : wl_0_100 
* INPUT : wl_1_100 
* INPUT : wl_0_101 
* INPUT : wl_1_101 
* INPUT : wl_0_102 
* INPUT : wl_1_102 
* INPUT : wl_0_103 
* INPUT : wl_1_103 
* INPUT : wl_0_104 
* INPUT : wl_1_104 
* INPUT : wl_0_105 
* INPUT : wl_1_105 
* INPUT : wl_0_106 
* INPUT : wl_1_106 
* INPUT : wl_0_107 
* INPUT : wl_1_107 
* INPUT : wl_0_108 
* INPUT : wl_1_108 
* INPUT : wl_0_109 
* INPUT : wl_1_109 
* INPUT : wl_0_110 
* INPUT : wl_1_110 
* INPUT : wl_0_111 
* INPUT : wl_1_111 
* INPUT : wl_0_112 
* INPUT : wl_1_112 
* INPUT : wl_0_113 
* INPUT : wl_1_113 
* INPUT : wl_0_114 
* INPUT : wl_1_114 
* INPUT : wl_0_115 
* INPUT : wl_1_115 
* INPUT : wl_0_116 
* INPUT : wl_1_116 
* INPUT : wl_0_117 
* INPUT : wl_1_117 
* INPUT : wl_0_118 
* INPUT : wl_1_118 
* INPUT : wl_0_119 
* INPUT : wl_1_119 
* INPUT : wl_0_120 
* INPUT : wl_1_120 
* INPUT : wl_0_121 
* INPUT : wl_1_121 
* INPUT : wl_0_122 
* INPUT : wl_1_122 
* INPUT : wl_0_123 
* INPUT : wl_1_123 
* INPUT : wl_0_124 
* INPUT : wl_1_124 
* INPUT : wl_0_125 
* INPUT : wl_1_125 
* INPUT : wl_0_126 
* INPUT : wl_1_126 
* INPUT : wl_0_127 
* INPUT : wl_1_127 
* INPUT : rbl_wl_1_1 
* POWER : vdd 
* GROUND: gnd 
* rows: 128 cols: 8
* rbl: [1, 1] left_rbl: [0] right_rbl: [1]
Xreplica_bitcell_array
+ rbl_bl_0_0 rbl_bl_1_0 rbl_br_0_0 rbl_br_1_0 bl_0_0 bl_1_0 br_0_0
+ br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2 br_0_2 br_1_2 bl_0_3
+ bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4 bl_0_5 bl_1_5 br_0_5
+ br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7 br_0_7 br_1_7
+ rbl_bl_0_1 rbl_bl_1_1 rbl_br_0_1 rbl_br_1_1 rbl_wl_0_0 gnd wl_0_0
+ wl_1_0 wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3 wl_0_4 wl_1_4 wl_0_5
+ wl_1_5 wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8 wl_0_9 wl_1_9 wl_0_10
+ wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13 wl_1_13 wl_0_14
+ wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17 wl_1_17 wl_0_18
+ wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21 wl_1_21 wl_0_22
+ wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25 wl_1_25 wl_0_26
+ wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29 wl_1_29 wl_0_30
+ wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33 wl_1_33 wl_0_34
+ wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37 wl_1_37 wl_0_38
+ wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41 wl_1_41 wl_0_42
+ wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45 wl_1_45 wl_0_46
+ wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49 wl_1_49 wl_0_50
+ wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53 wl_1_53 wl_0_54
+ wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57 wl_1_57 wl_0_58
+ wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61 wl_1_61 wl_0_62
+ wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65 wl_1_65 wl_0_66
+ wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69 wl_1_69 wl_0_70
+ wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73 wl_1_73 wl_0_74
+ wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77 wl_1_77 wl_0_78
+ wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81 wl_1_81 wl_0_82
+ wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85 wl_1_85 wl_0_86
+ wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89 wl_1_89 wl_0_90
+ wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93 wl_1_93 wl_0_94
+ wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97 wl_1_97 wl_0_98
+ wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101 wl_1_101 wl_0_102
+ wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104 wl_0_105 wl_1_105
+ wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108 wl_1_108 wl_0_109
+ wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111 wl_0_112 wl_1_112
+ wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115 wl_1_115 wl_0_116
+ wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118 wl_0_119 wl_1_119
+ wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122 wl_1_122 wl_0_123
+ wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125 wl_0_126 wl_1_126
+ wl_0_127 wl_1_127 gnd rbl_wl_1_1 vdd gnd
+ routeb_new_1w1r_8x128_replica_bitcell_array
.ENDS routeb_new_1w1r_8x128_capped_replica_bitcell_array

.SUBCKT routeb_new_1w1r_8x128_port_address
+ addr_0 addr_1 addr_2 addr_3 addr_4 addr_5 addr_6 wl_en wl_0 wl_1 wl_2
+ wl_3 wl_4 wl_5 wl_6 wl_7 wl_8 wl_9 wl_10 wl_11 wl_12 wl_13 wl_14 wl_15
+ wl_16 wl_17 wl_18 wl_19 wl_20 wl_21 wl_22 wl_23 wl_24 wl_25 wl_26
+ wl_27 wl_28 wl_29 wl_30 wl_31 wl_32 wl_33 wl_34 wl_35 wl_36 wl_37
+ wl_38 wl_39 wl_40 wl_41 wl_42 wl_43 wl_44 wl_45 wl_46 wl_47 wl_48
+ wl_49 wl_50 wl_51 wl_52 wl_53 wl_54 wl_55 wl_56 wl_57 wl_58 wl_59
+ wl_60 wl_61 wl_62 wl_63 wl_64 wl_65 wl_66 wl_67 wl_68 wl_69 wl_70
+ wl_71 wl_72 wl_73 wl_74 wl_75 wl_76 wl_77 wl_78 wl_79 wl_80 wl_81
+ wl_82 wl_83 wl_84 wl_85 wl_86 wl_87 wl_88 wl_89 wl_90 wl_91 wl_92
+ wl_93 wl_94 wl_95 wl_96 wl_97 wl_98 wl_99 wl_100 wl_101 wl_102 wl_103
+ wl_104 wl_105 wl_106 wl_107 wl_108 wl_109 wl_110 wl_111 wl_112 wl_113
+ wl_114 wl_115 wl_116 wl_117 wl_118 wl_119 wl_120 wl_121 wl_122 wl_123
+ wl_124 wl_125 wl_126 wl_127 rbl_wl vdd gnd
* INPUT : addr_0 
* INPUT : addr_1 
* INPUT : addr_2 
* INPUT : addr_3 
* INPUT : addr_4 
* INPUT : addr_5 
* INPUT : addr_6 
* INPUT : wl_en 
* OUTPUT: wl_0 
* OUTPUT: wl_1 
* OUTPUT: wl_2 
* OUTPUT: wl_3 
* OUTPUT: wl_4 
* OUTPUT: wl_5 
* OUTPUT: wl_6 
* OUTPUT: wl_7 
* OUTPUT: wl_8 
* OUTPUT: wl_9 
* OUTPUT: wl_10 
* OUTPUT: wl_11 
* OUTPUT: wl_12 
* OUTPUT: wl_13 
* OUTPUT: wl_14 
* OUTPUT: wl_15 
* OUTPUT: wl_16 
* OUTPUT: wl_17 
* OUTPUT: wl_18 
* OUTPUT: wl_19 
* OUTPUT: wl_20 
* OUTPUT: wl_21 
* OUTPUT: wl_22 
* OUTPUT: wl_23 
* OUTPUT: wl_24 
* OUTPUT: wl_25 
* OUTPUT: wl_26 
* OUTPUT: wl_27 
* OUTPUT: wl_28 
* OUTPUT: wl_29 
* OUTPUT: wl_30 
* OUTPUT: wl_31 
* OUTPUT: wl_32 
* OUTPUT: wl_33 
* OUTPUT: wl_34 
* OUTPUT: wl_35 
* OUTPUT: wl_36 
* OUTPUT: wl_37 
* OUTPUT: wl_38 
* OUTPUT: wl_39 
* OUTPUT: wl_40 
* OUTPUT: wl_41 
* OUTPUT: wl_42 
* OUTPUT: wl_43 
* OUTPUT: wl_44 
* OUTPUT: wl_45 
* OUTPUT: wl_46 
* OUTPUT: wl_47 
* OUTPUT: wl_48 
* OUTPUT: wl_49 
* OUTPUT: wl_50 
* OUTPUT: wl_51 
* OUTPUT: wl_52 
* OUTPUT: wl_53 
* OUTPUT: wl_54 
* OUTPUT: wl_55 
* OUTPUT: wl_56 
* OUTPUT: wl_57 
* OUTPUT: wl_58 
* OUTPUT: wl_59 
* OUTPUT: wl_60 
* OUTPUT: wl_61 
* OUTPUT: wl_62 
* OUTPUT: wl_63 
* OUTPUT: wl_64 
* OUTPUT: wl_65 
* OUTPUT: wl_66 
* OUTPUT: wl_67 
* OUTPUT: wl_68 
* OUTPUT: wl_69 
* OUTPUT: wl_70 
* OUTPUT: wl_71 
* OUTPUT: wl_72 
* OUTPUT: wl_73 
* OUTPUT: wl_74 
* OUTPUT: wl_75 
* OUTPUT: wl_76 
* OUTPUT: wl_77 
* OUTPUT: wl_78 
* OUTPUT: wl_79 
* OUTPUT: wl_80 
* OUTPUT: wl_81 
* OUTPUT: wl_82 
* OUTPUT: wl_83 
* OUTPUT: wl_84 
* OUTPUT: wl_85 
* OUTPUT: wl_86 
* OUTPUT: wl_87 
* OUTPUT: wl_88 
* OUTPUT: wl_89 
* OUTPUT: wl_90 
* OUTPUT: wl_91 
* OUTPUT: wl_92 
* OUTPUT: wl_93 
* OUTPUT: wl_94 
* OUTPUT: wl_95 
* OUTPUT: wl_96 
* OUTPUT: wl_97 
* OUTPUT: wl_98 
* OUTPUT: wl_99 
* OUTPUT: wl_100 
* OUTPUT: wl_101 
* OUTPUT: wl_102 
* OUTPUT: wl_103 
* OUTPUT: wl_104 
* OUTPUT: wl_105 
* OUTPUT: wl_106 
* OUTPUT: wl_107 
* OUTPUT: wl_108 
* OUTPUT: wl_109 
* OUTPUT: wl_110 
* OUTPUT: wl_111 
* OUTPUT: wl_112 
* OUTPUT: wl_113 
* OUTPUT: wl_114 
* OUTPUT: wl_115 
* OUTPUT: wl_116 
* OUTPUT: wl_117 
* OUTPUT: wl_118 
* OUTPUT: wl_119 
* OUTPUT: wl_120 
* OUTPUT: wl_121 
* OUTPUT: wl_122 
* OUTPUT: wl_123 
* OUTPUT: wl_124 
* OUTPUT: wl_125 
* OUTPUT: wl_126 
* OUTPUT: wl_127 
* OUTPUT: rbl_wl 
* POWER : vdd 
* GROUND: gnd 
Xrow_decoder
+ addr_0 addr_1 addr_2 addr_3 addr_4 addr_5 addr_6 dec_out_0 dec_out_1
+ dec_out_2 dec_out_3 dec_out_4 dec_out_5 dec_out_6 dec_out_7 dec_out_8
+ dec_out_9 dec_out_10 dec_out_11 dec_out_12 dec_out_13 dec_out_14
+ dec_out_15 dec_out_16 dec_out_17 dec_out_18 dec_out_19 dec_out_20
+ dec_out_21 dec_out_22 dec_out_23 dec_out_24 dec_out_25 dec_out_26
+ dec_out_27 dec_out_28 dec_out_29 dec_out_30 dec_out_31 dec_out_32
+ dec_out_33 dec_out_34 dec_out_35 dec_out_36 dec_out_37 dec_out_38
+ dec_out_39 dec_out_40 dec_out_41 dec_out_42 dec_out_43 dec_out_44
+ dec_out_45 dec_out_46 dec_out_47 dec_out_48 dec_out_49 dec_out_50
+ dec_out_51 dec_out_52 dec_out_53 dec_out_54 dec_out_55 dec_out_56
+ dec_out_57 dec_out_58 dec_out_59 dec_out_60 dec_out_61 dec_out_62
+ dec_out_63 dec_out_64 dec_out_65 dec_out_66 dec_out_67 dec_out_68
+ dec_out_69 dec_out_70 dec_out_71 dec_out_72 dec_out_73 dec_out_74
+ dec_out_75 dec_out_76 dec_out_77 dec_out_78 dec_out_79 dec_out_80
+ dec_out_81 dec_out_82 dec_out_83 dec_out_84 dec_out_85 dec_out_86
+ dec_out_87 dec_out_88 dec_out_89 dec_out_90 dec_out_91 dec_out_92
+ dec_out_93 dec_out_94 dec_out_95 dec_out_96 dec_out_97 dec_out_98
+ dec_out_99 dec_out_100 dec_out_101 dec_out_102 dec_out_103 dec_out_104
+ dec_out_105 dec_out_106 dec_out_107 dec_out_108 dec_out_109
+ dec_out_110 dec_out_111 dec_out_112 dec_out_113 dec_out_114
+ dec_out_115 dec_out_116 dec_out_117 dec_out_118 dec_out_119
+ dec_out_120 dec_out_121 dec_out_122 dec_out_123 dec_out_124
+ dec_out_125 dec_out_126 dec_out_127 vdd gnd
+ routeb_new_1w1r_8x128_hierarchical_decoder
Xwordline_driver
+ dec_out_0 dec_out_1 dec_out_2 dec_out_3 dec_out_4 dec_out_5 dec_out_6
+ dec_out_7 dec_out_8 dec_out_9 dec_out_10 dec_out_11 dec_out_12
+ dec_out_13 dec_out_14 dec_out_15 dec_out_16 dec_out_17 dec_out_18
+ dec_out_19 dec_out_20 dec_out_21 dec_out_22 dec_out_23 dec_out_24
+ dec_out_25 dec_out_26 dec_out_27 dec_out_28 dec_out_29 dec_out_30
+ dec_out_31 dec_out_32 dec_out_33 dec_out_34 dec_out_35 dec_out_36
+ dec_out_37 dec_out_38 dec_out_39 dec_out_40 dec_out_41 dec_out_42
+ dec_out_43 dec_out_44 dec_out_45 dec_out_46 dec_out_47 dec_out_48
+ dec_out_49 dec_out_50 dec_out_51 dec_out_52 dec_out_53 dec_out_54
+ dec_out_55 dec_out_56 dec_out_57 dec_out_58 dec_out_59 dec_out_60
+ dec_out_61 dec_out_62 dec_out_63 dec_out_64 dec_out_65 dec_out_66
+ dec_out_67 dec_out_68 dec_out_69 dec_out_70 dec_out_71 dec_out_72
+ dec_out_73 dec_out_74 dec_out_75 dec_out_76 dec_out_77 dec_out_78
+ dec_out_79 dec_out_80 dec_out_81 dec_out_82 dec_out_83 dec_out_84
+ dec_out_85 dec_out_86 dec_out_87 dec_out_88 dec_out_89 dec_out_90
+ dec_out_91 dec_out_92 dec_out_93 dec_out_94 dec_out_95 dec_out_96
+ dec_out_97 dec_out_98 dec_out_99 dec_out_100 dec_out_101 dec_out_102
+ dec_out_103 dec_out_104 dec_out_105 dec_out_106 dec_out_107
+ dec_out_108 dec_out_109 dec_out_110 dec_out_111 dec_out_112
+ dec_out_113 dec_out_114 dec_out_115 dec_out_116 dec_out_117
+ dec_out_118 dec_out_119 dec_out_120 dec_out_121 dec_out_122
+ dec_out_123 dec_out_124 dec_out_125 dec_out_126 dec_out_127 wl_0 wl_1
+ wl_2 wl_3 wl_4 wl_5 wl_6 wl_7 wl_8 wl_9 wl_10 wl_11 wl_12 wl_13 wl_14
+ wl_15 wl_16 wl_17 wl_18 wl_19 wl_20 wl_21 wl_22 wl_23 wl_24 wl_25
+ wl_26 wl_27 wl_28 wl_29 wl_30 wl_31 wl_32 wl_33 wl_34 wl_35 wl_36
+ wl_37 wl_38 wl_39 wl_40 wl_41 wl_42 wl_43 wl_44 wl_45 wl_46 wl_47
+ wl_48 wl_49 wl_50 wl_51 wl_52 wl_53 wl_54 wl_55 wl_56 wl_57 wl_58
+ wl_59 wl_60 wl_61 wl_62 wl_63 wl_64 wl_65 wl_66 wl_67 wl_68 wl_69
+ wl_70 wl_71 wl_72 wl_73 wl_74 wl_75 wl_76 wl_77 wl_78 wl_79 wl_80
+ wl_81 wl_82 wl_83 wl_84 wl_85 wl_86 wl_87 wl_88 wl_89 wl_90 wl_91
+ wl_92 wl_93 wl_94 wl_95 wl_96 wl_97 wl_98 wl_99 wl_100 wl_101 wl_102
+ wl_103 wl_104 wl_105 wl_106 wl_107 wl_108 wl_109 wl_110 wl_111 wl_112
+ wl_113 wl_114 wl_115 wl_116 wl_117 wl_118 wl_119 wl_120 wl_121 wl_122
+ wl_123 wl_124 wl_125 wl_126 wl_127 wl_en vdd gnd
+ routeb_new_1w1r_8x128_wordline_driver_array
Xrbl_driver
+ wl_en vdd rbl_wl vdd gnd
+ routeb_new_1w1r_8x128_and2_dec_0
.ENDS routeb_new_1w1r_8x128_port_address

* spice ptx X{0} {1} sky130_fd_pr__pfet_01v8 m=1 w=0.55 l=0.15 pd=1.40 ps=1.40 as=0.21u ad=0.21u

.SUBCKT routeb_new_1w1r_8x128_precharge_1
+ bl br en_bar vdd
* OUTPUT: bl 
* OUTPUT: br 
* INPUT : en_bar 
* POWER : vdd 
Xlower_pmos bl en_bar br vdd sky130_fd_pr__pfet_01v8 m=1 w=0.55u l=0.15u
Xupper_pmos1 bl en_bar vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=0.55u l=0.15u
Xupper_pmos2 br en_bar vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=0.55u l=0.15u
.ENDS routeb_new_1w1r_8x128_precharge_1

.SUBCKT routeb_new_1w1r_8x128_precharge_array_0
+ bl_0 br_0 bl_1 br_1 bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5 br_5 bl_6 br_6
+ bl_7 br_7 bl_8 br_8 en_bar vdd
* OUTPUT: bl_0 
* OUTPUT: br_0 
* OUTPUT: bl_1 
* OUTPUT: br_1 
* OUTPUT: bl_2 
* OUTPUT: br_2 
* OUTPUT: bl_3 
* OUTPUT: br_3 
* OUTPUT: bl_4 
* OUTPUT: br_4 
* OUTPUT: bl_5 
* OUTPUT: br_5 
* OUTPUT: bl_6 
* OUTPUT: br_6 
* OUTPUT: bl_7 
* OUTPUT: br_7 
* OUTPUT: bl_8 
* OUTPUT: br_8 
* INPUT : en_bar 
* POWER : vdd 
* cols: 9 size: 1 bl: bl1 br: br1
Xpre_column_0
+ bl_0 br_0 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_1
+ bl_1 br_1 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_2
+ bl_2 br_2 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_3
+ bl_3 br_3 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_4
+ bl_4 br_4 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_5
+ bl_5 br_5 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_6
+ bl_6 br_6 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_7
+ bl_7 br_7 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
Xpre_column_8
+ bl_8 br_8 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_1
.ENDS routeb_new_1w1r_8x128_precharge_array_0
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

*********************** "sky130_fd_bd_sram__openram_sense_amp" ******************************

.SUBCKT sky130_fd_bd_sram__openram_sense_amp BL BR DOUT EN VDD GND
X1000 GND EN a_56_432# GND sky130_fd_pr__nfet_01v8 W=0.65u L=0.15u m=1
X1001 a_56_432# dint_bar dint GND sky130_fd_pr__nfet_01v8 W=0.65u L=0.15u m=1
X1002 dint_bar dint a_56_432# GND sky130_fd_pr__nfet_01v8 W=0.65u L=0.15u m=1

X1003 VDD dint_bar dint VDD sky130_fd_pr__pfet_01v8 W=1.26u L=0.15u m=1
X1004 dint_bar dint VDD VDD sky130_fd_pr__pfet_01v8 W=1.26u L=0.15u m=1

X1005 BL EN dint VDD sky130_fd_pr__pfet_01v8 W=2u L=0.15u m=1
X1006 dint_bar EN BR VDD sky130_fd_pr__pfet_01v8 W=2u L=0.15u m=1

X1007 VDD dint_bar DOUT VDD sky130_fd_pr__pfet_01v8 W=1.26u L=0.15u m=1
X1008 DOUT dint_bar GND GND sky130_fd_pr__nfet_01v8 W=0.65u L=0.15u m=1

.ENDS sky130_fd_bd_sram__openram_sense_amp

.SUBCKT routeb_new_1w1r_8x128_sense_amp_array
+ data_0 bl_0 br_0 data_1 bl_1 br_1 data_2 bl_2 br_2 data_3 bl_3 br_3
+ data_4 bl_4 br_4 data_5 bl_5 br_5 data_6 bl_6 br_6 data_7 bl_7 br_7 en
+ vdd gnd
* OUTPUT: data_0 
* INPUT : bl_0 
* INPUT : br_0 
* OUTPUT: data_1 
* INPUT : bl_1 
* INPUT : br_1 
* OUTPUT: data_2 
* INPUT : bl_2 
* INPUT : br_2 
* OUTPUT: data_3 
* INPUT : bl_3 
* INPUT : br_3 
* OUTPUT: data_4 
* INPUT : bl_4 
* INPUT : br_4 
* OUTPUT: data_5 
* INPUT : bl_5 
* INPUT : br_5 
* OUTPUT: data_6 
* INPUT : bl_6 
* INPUT : br_6 
* OUTPUT: data_7 
* INPUT : bl_7 
* INPUT : br_7 
* INPUT : en 
* POWER : vdd 
* GROUND: gnd 
* word_size 8
* words_per_row: 1
Xsa_d0
+ bl_0 br_0 data_0 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
Xsa_d1
+ bl_1 br_1 data_1 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
Xsa_d2
+ bl_2 br_2 data_2 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
Xsa_d3
+ bl_3 br_3 data_3 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
Xsa_d4
+ bl_4 br_4 data_4 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
Xsa_d5
+ bl_5 br_5 data_5 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
Xsa_d6
+ bl_6 br_6 data_6 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
Xsa_d7
+ bl_7 br_7 data_7 en vdd gnd
+ sky130_fd_bd_sram__openram_sense_amp
.ENDS routeb_new_1w1r_8x128_sense_amp_array

.SUBCKT routeb_new_1w1r_8x128_port_data_0
+ rbl_bl rbl_br bl_0 br_0 bl_1 br_1 bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5
+ br_5 bl_6 br_6 bl_7 br_7 dout_0 dout_1 dout_2 dout_3 dout_4 dout_5
+ dout_6 dout_7 s_en p_en_bar vdd gnd
* INOUT : rbl_bl 
* INOUT : rbl_br 
* INOUT : bl_0 
* INOUT : br_0 
* INOUT : bl_1 
* INOUT : br_1 
* INOUT : bl_2 
* INOUT : br_2 
* INOUT : bl_3 
* INOUT : br_3 
* INOUT : bl_4 
* INOUT : br_4 
* INOUT : bl_5 
* INOUT : br_5 
* INOUT : bl_6 
* INOUT : br_6 
* INOUT : bl_7 
* INOUT : br_7 
* OUTPUT: dout_0 
* OUTPUT: dout_1 
* OUTPUT: dout_2 
* OUTPUT: dout_3 
* OUTPUT: dout_4 
* OUTPUT: dout_5 
* OUTPUT: dout_6 
* OUTPUT: dout_7 
* INPUT : s_en 
* INPUT : p_en_bar 
* POWER : vdd 
* GROUND: gnd 
Xprecharge_array1
+ bl_0 br_0 bl_1 br_1 bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5 br_5 bl_6 br_6
+ bl_7 br_7 rbl_bl rbl_br p_en_bar vdd
+ routeb_new_1w1r_8x128_precharge_array_0
Xsense_amp_array1
+ dout_0 bl_0 br_0 dout_1 bl_1 br_1 dout_2 bl_2 br_2 dout_3 bl_3 br_3
+ dout_4 bl_4 br_4 dout_5 bl_5 br_5 dout_6 bl_6 br_6 dout_7 bl_7 br_7
+ s_en vdd gnd
+ routeb_new_1w1r_8x128_sense_amp_array
.ENDS routeb_new_1w1r_8x128_port_data_0
* Copyright 2020 The SkyWater PDK Authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     https://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* SPDX-License-Identifier: Apache-2.0

*********************** "sky130_fd_bd_sram__openram_write_driver" ******************************

.SUBCKT sky130_fd_bd_sram__openram_write_driver DIN BL BR EN VDD GND

**** Inverter to conver Data_in to data_in_bar ******
* din_bar = inv(DIN)
X_1 din_bar DIN GND GND sky130_fd_pr__nfet_01v8 W=0.36u L=0.15u m=1
X_2 din_bar DIN VDD VDD sky130_fd_pr__pfet_01v8 W=0.55u L=0.15u m=1

**** 2input nand gate follwed by inverter to drive BL ******
* din_bar_gated = nand(EN, DIN)
X_3 din_bar_gated EN net_7 GND sky130_fd_pr__nfet_01v8 W=0.55u L=0.15u m=1
X_4 net_7 DIN GND GND sky130_fd_pr__nfet_01v8 W=0.55u L=0.15u m=1
X_5 din_bar_gated EN VDD VDD sky130_fd_pr__pfet_01v8 W=0.55u L=0.15u m=1
X_6 din_bar_gated DIN VDD VDD sky130_fd_pr__pfet_01v8 W=0.55u L=0.15u m=1
* din_bar_gated_bar = inv(din_bar_gated)
X_7 din_bar_gated_bar din_bar_gated VDD VDD sky130_fd_pr__pfet_01v8 W=0.55u L=0.15u m=1
X_8 din_bar_gated_bar din_bar_gated GND GND sky130_fd_pr__nfet_01v8 W=0.36u L=0.15u m=1

**** 2input nand gate follwed by inverter to drive BR******
* din_gated = nand(EN, din_bar)
X_9 din_gated EN VDD VDD sky130_fd_pr__pfet_01v8 W=0.55u L=0.15u m=1
X_10 din_gated EN net_8 GND sky130_fd_pr__nfet_01v8 W=0.55u L=0.15u m=1
X_11 net_8 din_bar GND GND sky130_fd_pr__nfet_01v8 W=0.55u L=0.15u m=1
X_12 din_gated din_bar VDD VDD sky130_fd_pr__pfet_01v8 W=0.55u L=0.15u m=1
* din_gated_bar = inv(din_gated)
X_13 din_gated_bar din_gated VDD VDD sky130_fd_pr__pfet_01v8 W=0.55u L=0.15u m=1
X_14 din_gated_bar din_gated GND GND sky130_fd_pr__nfet_01v8 W=0.36u L=0.15u m=1

************************************************
* pull down with EN enable
X_15 BL din_gated_bar GND GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1
X_16 BR din_bar_gated_bar GND GND sky130_fd_pr__nfet_01v8 W=1u L=0.15u m=1

.ENDS sky130_fd_bd_sram__openram_write_driver

.SUBCKT routeb_new_1w1r_8x128_write_driver_array
+ data_0 data_1 data_2 data_3 data_4 data_5 data_6 data_7 bl_0 br_0 bl_1
+ br_1 bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5 br_5 bl_6 br_6 bl_7 br_7 en
+ vdd gnd
* INPUT : data_0 
* INPUT : data_1 
* INPUT : data_2 
* INPUT : data_3 
* INPUT : data_4 
* INPUT : data_5 
* INPUT : data_6 
* INPUT : data_7 
* OUTPUT: bl_0 
* OUTPUT: br_0 
* OUTPUT: bl_1 
* OUTPUT: br_1 
* OUTPUT: bl_2 
* OUTPUT: br_2 
* OUTPUT: bl_3 
* OUTPUT: br_3 
* OUTPUT: bl_4 
* OUTPUT: br_4 
* OUTPUT: bl_5 
* OUTPUT: br_5 
* OUTPUT: bl_6 
* OUTPUT: br_6 
* OUTPUT: bl_7 
* OUTPUT: br_7 
* INPUT : en 
* POWER : vdd 
* GROUND: gnd 
* columns: 8
* word_size 8
Xwrite_driver0
+ data_0 bl_0 br_0 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
Xwrite_driver1
+ data_1 bl_1 br_1 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
Xwrite_driver2
+ data_2 bl_2 br_2 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
Xwrite_driver3
+ data_3 bl_3 br_3 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
Xwrite_driver4
+ data_4 bl_4 br_4 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
Xwrite_driver5
+ data_5 bl_5 br_5 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
Xwrite_driver6
+ data_6 bl_6 br_6 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
Xwrite_driver7
+ data_7 bl_7 br_7 en vdd gnd
+ sky130_fd_bd_sram__openram_write_driver
.ENDS routeb_new_1w1r_8x128_write_driver_array

.SUBCKT routeb_new_1w1r_8x128_precharge_0
+ bl br en_bar vdd
* OUTPUT: bl 
* OUTPUT: br 
* INPUT : en_bar 
* POWER : vdd 
Xlower_pmos bl en_bar br vdd sky130_fd_pr__pfet_01v8 m=1 w=0.55u l=0.15u
Xupper_pmos1 bl en_bar vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=0.55u l=0.15u
Xupper_pmos2 br en_bar vdd vdd sky130_fd_pr__pfet_01v8 m=1 w=0.55u l=0.15u
.ENDS routeb_new_1w1r_8x128_precharge_0

.SUBCKT routeb_new_1w1r_8x128_precharge_array
+ bl_0 br_0 bl_1 br_1 bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5 br_5 bl_6 br_6
+ bl_7 br_7 bl_8 br_8 en_bar vdd
* OUTPUT: bl_0 
* OUTPUT: br_0 
* OUTPUT: bl_1 
* OUTPUT: br_1 
* OUTPUT: bl_2 
* OUTPUT: br_2 
* OUTPUT: bl_3 
* OUTPUT: br_3 
* OUTPUT: bl_4 
* OUTPUT: br_4 
* OUTPUT: bl_5 
* OUTPUT: br_5 
* OUTPUT: bl_6 
* OUTPUT: br_6 
* OUTPUT: bl_7 
* OUTPUT: br_7 
* OUTPUT: bl_8 
* OUTPUT: br_8 
* INPUT : en_bar 
* POWER : vdd 
* cols: 9 size: 1 bl: bl0 br: br0
Xpre_column_0
+ bl_0 br_0 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_1
+ bl_1 br_1 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_2
+ bl_2 br_2 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_3
+ bl_3 br_3 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_4
+ bl_4 br_4 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_5
+ bl_5 br_5 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_6
+ bl_6 br_6 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_7
+ bl_7 br_7 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
Xpre_column_8
+ bl_8 br_8 en_bar vdd
+ routeb_new_1w1r_8x128_precharge_0
.ENDS routeb_new_1w1r_8x128_precharge_array

.SUBCKT routeb_new_1w1r_8x128_port_data
+ rbl_bl rbl_br bl_0 br_0 bl_1 br_1 bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5
+ br_5 bl_6 br_6 bl_7 br_7 din_0 din_1 din_2 din_3 din_4 din_5 din_6
+ din_7 p_en_bar w_en vdd gnd
* INOUT : rbl_bl 
* INOUT : rbl_br 
* INOUT : bl_0 
* INOUT : br_0 
* INOUT : bl_1 
* INOUT : br_1 
* INOUT : bl_2 
* INOUT : br_2 
* INOUT : bl_3 
* INOUT : br_3 
* INOUT : bl_4 
* INOUT : br_4 
* INOUT : bl_5 
* INOUT : br_5 
* INOUT : bl_6 
* INOUT : br_6 
* INOUT : bl_7 
* INOUT : br_7 
* INPUT : din_0 
* INPUT : din_1 
* INPUT : din_2 
* INPUT : din_3 
* INPUT : din_4 
* INPUT : din_5 
* INPUT : din_6 
* INPUT : din_7 
* INPUT : p_en_bar 
* INPUT : w_en 
* POWER : vdd 
* GROUND: gnd 
Xprecharge_array0
+ rbl_bl rbl_br bl_0 br_0 bl_1 br_1 bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5
+ br_5 bl_6 br_6 bl_7 br_7 p_en_bar vdd
+ routeb_new_1w1r_8x128_precharge_array
Xwrite_driver_array0
+ din_0 din_1 din_2 din_3 din_4 din_5 din_6 din_7 bl_0 br_0 bl_1 br_1
+ bl_2 br_2 bl_3 br_3 bl_4 br_4 bl_5 br_5 bl_6 br_6 bl_7 br_7 w_en vdd
+ gnd
+ routeb_new_1w1r_8x128_write_driver_array
.ENDS routeb_new_1w1r_8x128_port_data

.SUBCKT routeb_new_1w1r_8x128_bank
+ dout1_0 dout1_1 dout1_2 dout1_3 dout1_4 dout1_5 dout1_6 dout1_7
+ rbl_bl_0_0 rbl_bl_1_1 din0_0 din0_1 din0_2 din0_3 din0_4 din0_5 din0_6
+ din0_7 addr0_0 addr0_1 addr0_2 addr0_3 addr0_4 addr0_5 addr0_6 addr1_0
+ addr1_1 addr1_2 addr1_3 addr1_4 addr1_5 addr1_6 s_en1 p_en_bar0
+ p_en_bar1 w_en0 wl_en0 wl_en1 vdd gnd
* OUTPUT: dout1_0 
* OUTPUT: dout1_1 
* OUTPUT: dout1_2 
* OUTPUT: dout1_3 
* OUTPUT: dout1_4 
* OUTPUT: dout1_5 
* OUTPUT: dout1_6 
* OUTPUT: dout1_7 
* OUTPUT: rbl_bl_0_0 
* OUTPUT: rbl_bl_1_1 
* INPUT : din0_0 
* INPUT : din0_1 
* INPUT : din0_2 
* INPUT : din0_3 
* INPUT : din0_4 
* INPUT : din0_5 
* INPUT : din0_6 
* INPUT : din0_7 
* INPUT : addr0_0 
* INPUT : addr0_1 
* INPUT : addr0_2 
* INPUT : addr0_3 
* INPUT : addr0_4 
* INPUT : addr0_5 
* INPUT : addr0_6 
* INPUT : addr1_0 
* INPUT : addr1_1 
* INPUT : addr1_2 
* INPUT : addr1_3 
* INPUT : addr1_4 
* INPUT : addr1_5 
* INPUT : addr1_6 
* INPUT : s_en1 
* INPUT : p_en_bar0 
* INPUT : p_en_bar1 
* INPUT : w_en0 
* INPUT : wl_en0 
* INPUT : wl_en1 
* POWER : vdd 
* GROUND: gnd 
Xbitcell_array
+ rbl_bl_0_0 rbl_bl_1_0 rbl_br_0_0 rbl_br_1_0 bl_0_0 bl_1_0 br_0_0
+ br_1_0 bl_0_1 bl_1_1 br_0_1 br_1_1 bl_0_2 bl_1_2 br_0_2 br_1_2 bl_0_3
+ bl_1_3 br_0_3 br_1_3 bl_0_4 bl_1_4 br_0_4 br_1_4 bl_0_5 bl_1_5 br_0_5
+ br_1_5 bl_0_6 bl_1_6 br_0_6 br_1_6 bl_0_7 bl_1_7 br_0_7 br_1_7
+ rbl_bl_0_1 rbl_bl_1_1 rbl_br_0_1 rbl_br_1_1 rbl_wl0 wl_0_0 wl_1_0
+ wl_0_1 wl_1_1 wl_0_2 wl_1_2 wl_0_3 wl_1_3 wl_0_4 wl_1_4 wl_0_5 wl_1_5
+ wl_0_6 wl_1_6 wl_0_7 wl_1_7 wl_0_8 wl_1_8 wl_0_9 wl_1_9 wl_0_10
+ wl_1_10 wl_0_11 wl_1_11 wl_0_12 wl_1_12 wl_0_13 wl_1_13 wl_0_14
+ wl_1_14 wl_0_15 wl_1_15 wl_0_16 wl_1_16 wl_0_17 wl_1_17 wl_0_18
+ wl_1_18 wl_0_19 wl_1_19 wl_0_20 wl_1_20 wl_0_21 wl_1_21 wl_0_22
+ wl_1_22 wl_0_23 wl_1_23 wl_0_24 wl_1_24 wl_0_25 wl_1_25 wl_0_26
+ wl_1_26 wl_0_27 wl_1_27 wl_0_28 wl_1_28 wl_0_29 wl_1_29 wl_0_30
+ wl_1_30 wl_0_31 wl_1_31 wl_0_32 wl_1_32 wl_0_33 wl_1_33 wl_0_34
+ wl_1_34 wl_0_35 wl_1_35 wl_0_36 wl_1_36 wl_0_37 wl_1_37 wl_0_38
+ wl_1_38 wl_0_39 wl_1_39 wl_0_40 wl_1_40 wl_0_41 wl_1_41 wl_0_42
+ wl_1_42 wl_0_43 wl_1_43 wl_0_44 wl_1_44 wl_0_45 wl_1_45 wl_0_46
+ wl_1_46 wl_0_47 wl_1_47 wl_0_48 wl_1_48 wl_0_49 wl_1_49 wl_0_50
+ wl_1_50 wl_0_51 wl_1_51 wl_0_52 wl_1_52 wl_0_53 wl_1_53 wl_0_54
+ wl_1_54 wl_0_55 wl_1_55 wl_0_56 wl_1_56 wl_0_57 wl_1_57 wl_0_58
+ wl_1_58 wl_0_59 wl_1_59 wl_0_60 wl_1_60 wl_0_61 wl_1_61 wl_0_62
+ wl_1_62 wl_0_63 wl_1_63 wl_0_64 wl_1_64 wl_0_65 wl_1_65 wl_0_66
+ wl_1_66 wl_0_67 wl_1_67 wl_0_68 wl_1_68 wl_0_69 wl_1_69 wl_0_70
+ wl_1_70 wl_0_71 wl_1_71 wl_0_72 wl_1_72 wl_0_73 wl_1_73 wl_0_74
+ wl_1_74 wl_0_75 wl_1_75 wl_0_76 wl_1_76 wl_0_77 wl_1_77 wl_0_78
+ wl_1_78 wl_0_79 wl_1_79 wl_0_80 wl_1_80 wl_0_81 wl_1_81 wl_0_82
+ wl_1_82 wl_0_83 wl_1_83 wl_0_84 wl_1_84 wl_0_85 wl_1_85 wl_0_86
+ wl_1_86 wl_0_87 wl_1_87 wl_0_88 wl_1_88 wl_0_89 wl_1_89 wl_0_90
+ wl_1_90 wl_0_91 wl_1_91 wl_0_92 wl_1_92 wl_0_93 wl_1_93 wl_0_94
+ wl_1_94 wl_0_95 wl_1_95 wl_0_96 wl_1_96 wl_0_97 wl_1_97 wl_0_98
+ wl_1_98 wl_0_99 wl_1_99 wl_0_100 wl_1_100 wl_0_101 wl_1_101 wl_0_102
+ wl_1_102 wl_0_103 wl_1_103 wl_0_104 wl_1_104 wl_0_105 wl_1_105
+ wl_0_106 wl_1_106 wl_0_107 wl_1_107 wl_0_108 wl_1_108 wl_0_109
+ wl_1_109 wl_0_110 wl_1_110 wl_0_111 wl_1_111 wl_0_112 wl_1_112
+ wl_0_113 wl_1_113 wl_0_114 wl_1_114 wl_0_115 wl_1_115 wl_0_116
+ wl_1_116 wl_0_117 wl_1_117 wl_0_118 wl_1_118 wl_0_119 wl_1_119
+ wl_0_120 wl_1_120 wl_0_121 wl_1_121 wl_0_122 wl_1_122 wl_0_123
+ wl_1_123 wl_0_124 wl_1_124 wl_0_125 wl_1_125 wl_0_126 wl_1_126
+ wl_0_127 wl_1_127 rbl_wl1 vdd gnd
+ routeb_new_1w1r_8x128_capped_replica_bitcell_array
Xport_data0
+ rbl_bl_0_0 rbl_br_0_0 bl_0_0 br_0_0 bl_0_1 br_0_1 bl_0_2 br_0_2 bl_0_3
+ br_0_3 bl_0_4 br_0_4 bl_0_5 br_0_5 bl_0_6 br_0_6 bl_0_7 br_0_7 din0_0
+ din0_1 din0_2 din0_3 din0_4 din0_5 din0_6 din0_7 p_en_bar0 w_en0 vdd
+ gnd
+ routeb_new_1w1r_8x128_port_data
Xport_data1
+ rbl_bl_1_1 rbl_br_1_1 bl_1_0 br_1_0 bl_1_1 br_1_1 bl_1_2 br_1_2 bl_1_3
+ br_1_3 bl_1_4 br_1_4 bl_1_5 br_1_5 bl_1_6 br_1_6 bl_1_7 br_1_7 dout1_0
+ dout1_1 dout1_2 dout1_3 dout1_4 dout1_5 dout1_6 dout1_7 s_en1
+ p_en_bar1 vdd gnd
+ routeb_new_1w1r_8x128_port_data_0
Xport_address0
+ addr0_0 addr0_1 addr0_2 addr0_3 addr0_4 addr0_5 addr0_6 wl_en0 wl_0_0
+ wl_0_1 wl_0_2 wl_0_3 wl_0_4 wl_0_5 wl_0_6 wl_0_7 wl_0_8 wl_0_9 wl_0_10
+ wl_0_11 wl_0_12 wl_0_13 wl_0_14 wl_0_15 wl_0_16 wl_0_17 wl_0_18
+ wl_0_19 wl_0_20 wl_0_21 wl_0_22 wl_0_23 wl_0_24 wl_0_25 wl_0_26
+ wl_0_27 wl_0_28 wl_0_29 wl_0_30 wl_0_31 wl_0_32 wl_0_33 wl_0_34
+ wl_0_35 wl_0_36 wl_0_37 wl_0_38 wl_0_39 wl_0_40 wl_0_41 wl_0_42
+ wl_0_43 wl_0_44 wl_0_45 wl_0_46 wl_0_47 wl_0_48 wl_0_49 wl_0_50
+ wl_0_51 wl_0_52 wl_0_53 wl_0_54 wl_0_55 wl_0_56 wl_0_57 wl_0_58
+ wl_0_59 wl_0_60 wl_0_61 wl_0_62 wl_0_63 wl_0_64 wl_0_65 wl_0_66
+ wl_0_67 wl_0_68 wl_0_69 wl_0_70 wl_0_71 wl_0_72 wl_0_73 wl_0_74
+ wl_0_75 wl_0_76 wl_0_77 wl_0_78 wl_0_79 wl_0_80 wl_0_81 wl_0_82
+ wl_0_83 wl_0_84 wl_0_85 wl_0_86 wl_0_87 wl_0_88 wl_0_89 wl_0_90
+ wl_0_91 wl_0_92 wl_0_93 wl_0_94 wl_0_95 wl_0_96 wl_0_97 wl_0_98
+ wl_0_99 wl_0_100 wl_0_101 wl_0_102 wl_0_103 wl_0_104 wl_0_105 wl_0_106
+ wl_0_107 wl_0_108 wl_0_109 wl_0_110 wl_0_111 wl_0_112 wl_0_113
+ wl_0_114 wl_0_115 wl_0_116 wl_0_117 wl_0_118 wl_0_119 wl_0_120
+ wl_0_121 wl_0_122 wl_0_123 wl_0_124 wl_0_125 wl_0_126 wl_0_127 rbl_wl0
+ vdd gnd
+ routeb_new_1w1r_8x128_port_address
Xport_address1
+ addr1_0 addr1_1 addr1_2 addr1_3 addr1_4 addr1_5 addr1_6 wl_en1 wl_1_0
+ wl_1_1 wl_1_2 wl_1_3 wl_1_4 wl_1_5 wl_1_6 wl_1_7 wl_1_8 wl_1_9 wl_1_10
+ wl_1_11 wl_1_12 wl_1_13 wl_1_14 wl_1_15 wl_1_16 wl_1_17 wl_1_18
+ wl_1_19 wl_1_20 wl_1_21 wl_1_22 wl_1_23 wl_1_24 wl_1_25 wl_1_26
+ wl_1_27 wl_1_28 wl_1_29 wl_1_30 wl_1_31 wl_1_32 wl_1_33 wl_1_34
+ wl_1_35 wl_1_36 wl_1_37 wl_1_38 wl_1_39 wl_1_40 wl_1_41 wl_1_42
+ wl_1_43 wl_1_44 wl_1_45 wl_1_46 wl_1_47 wl_1_48 wl_1_49 wl_1_50
+ wl_1_51 wl_1_52 wl_1_53 wl_1_54 wl_1_55 wl_1_56 wl_1_57 wl_1_58
+ wl_1_59 wl_1_60 wl_1_61 wl_1_62 wl_1_63 wl_1_64 wl_1_65 wl_1_66
+ wl_1_67 wl_1_68 wl_1_69 wl_1_70 wl_1_71 wl_1_72 wl_1_73 wl_1_74
+ wl_1_75 wl_1_76 wl_1_77 wl_1_78 wl_1_79 wl_1_80 wl_1_81 wl_1_82
+ wl_1_83 wl_1_84 wl_1_85 wl_1_86 wl_1_87 wl_1_88 wl_1_89 wl_1_90
+ wl_1_91 wl_1_92 wl_1_93 wl_1_94 wl_1_95 wl_1_96 wl_1_97 wl_1_98
+ wl_1_99 wl_1_100 wl_1_101 wl_1_102 wl_1_103 wl_1_104 wl_1_105 wl_1_106
+ wl_1_107 wl_1_108 wl_1_109 wl_1_110 wl_1_111 wl_1_112 wl_1_113
+ wl_1_114 wl_1_115 wl_1_116 wl_1_117 wl_1_118 wl_1_119 wl_1_120
+ wl_1_121 wl_1_122 wl_1_123 wl_1_124 wl_1_125 wl_1_126 wl_1_127 rbl_wl1
+ vdd gnd
+ routeb_new_1w1r_8x128_port_address_0
.ENDS routeb_new_1w1r_8x128_bank

.SUBCKT routeb_new_1w1r_8x128
+ din0[0] din0[1] din0[2] din0[3] din0[4] din0[5] din0[6] din0[7]
+ addr0[0] addr0[1] addr0[2] addr0[3] addr0[4] addr0[5] addr0[6]
+ addr1[0] addr1[1] addr1[2] addr1[3] addr1[4] addr1[5] addr1[6] csb0
+ csb1 clk0 clk1 dout1[0] dout1[1] dout1[2] dout1[3] dout1[4] dout1[5]
+ dout1[6] dout1[7] vccd1 vssd1
* INPUT : din0[0] 
* INPUT : din0[1] 
* INPUT : din0[2] 
* INPUT : din0[3] 
* INPUT : din0[4] 
* INPUT : din0[5] 
* INPUT : din0[6] 
* INPUT : din0[7] 
* INPUT : addr0[0] 
* INPUT : addr0[1] 
* INPUT : addr0[2] 
* INPUT : addr0[3] 
* INPUT : addr0[4] 
* INPUT : addr0[5] 
* INPUT : addr0[6] 
* INPUT : addr1[0] 
* INPUT : addr1[1] 
* INPUT : addr1[2] 
* INPUT : addr1[3] 
* INPUT : addr1[4] 
* INPUT : addr1[5] 
* INPUT : addr1[6] 
* INPUT : csb0 
* INPUT : csb1 
* INPUT : clk0 
* INPUT : clk1 
* OUTPUT: dout1[0] 
* OUTPUT: dout1[1] 
* OUTPUT: dout1[2] 
* OUTPUT: dout1[3] 
* OUTPUT: dout1[4] 
* OUTPUT: dout1[5] 
* OUTPUT: dout1[6] 
* OUTPUT: dout1[7] 
* POWER : vccd1 
* GROUND: vssd1 
Xbank0
+ dout1[0] dout1[1] dout1[2] dout1[3] dout1[4] dout1[5] dout1[6]
+ dout1[7] rbl_bl0 rbl_bl1 bank_din0_0 bank_din0_1 bank_din0_2
+ bank_din0_3 bank_din0_4 bank_din0_5 bank_din0_6 bank_din0_7 a0_0 a0_1
+ a0_2 a0_3 a0_4 a0_5 a0_6 a1_0 a1_1 a1_2 a1_3 a1_4 a1_5 a1_6 s_en1
+ p_en_bar0 p_en_bar1 w_en0 wl_en0 wl_en1 vccd1 vssd1
+ routeb_new_1w1r_8x128_bank
Xcontrol0
+ csb0 clk0 rbl_bl0 w_en0 p_en_bar0 wl_en0 clk_buf0 vccd1 vssd1
+ routeb_new_1w1r_8x128_control_logic_w
Xcontrol1
+ csb1 clk1 rbl_bl1 s_en1 p_en_bar1 wl_en1 clk_buf1 vccd1 vssd1
+ routeb_new_1w1r_8x128_control_logic_r
Xrow_address0
+ addr0[0] addr0[1] addr0[2] addr0[3] addr0[4] addr0[5] addr0[6] a0_0
+ a0_1 a0_2 a0_3 a0_4 a0_5 a0_6 clk_buf0 vccd1 vssd1
+ routeb_new_1w1r_8x128_row_addr_dff
Xrow_address1
+ addr1[0] addr1[1] addr1[2] addr1[3] addr1[4] addr1[5] addr1[6] a1_0
+ a1_1 a1_2 a1_3 a1_4 a1_5 a1_6 clk_buf1 vccd1 vssd1
+ routeb_new_1w1r_8x128_row_addr_dff
Xdata_dff0
+ din0[0] din0[1] din0[2] din0[3] din0[4] din0[5] din0[6] din0[7]
+ bank_din0_0 bank_din0_1 bank_din0_2 bank_din0_3 bank_din0_4
+ bank_din0_5 bank_din0_6 bank_din0_7 clk_buf0 vccd1 vssd1
+ routeb_new_1w1r_8x128_data_dff
.ENDS routeb_new_1w1r_8x128
