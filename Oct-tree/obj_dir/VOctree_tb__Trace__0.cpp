// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOctree_tb__Syms.h"


void VOctree_tb___024root__trace_chg_0_sub_0(VOctree_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VOctree_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root__trace_chg_0\n"); );
    // Init
    VOctree_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOctree_tb___024root*>(voidSelf);
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOctree_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VOctree_tb___024root__trace_chg_0_sub_0(VOctree_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root__trace_chg_0_sub_0\n"); );
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Octree_tb__DOT__rst_n));
        bufp->chgIData(oldp+1,(vlSelfRef.Octree_tb__DOT__pos_encode),18);
        bufp->chgQData(oldp+2,(vlSelfRef.Octree_tb__DOT__feature_in),64);
        bufp->chgCData(oldp+4,(vlSelfRef.Octree_tb__DOT__ctrl),2);
        bufp->chgCData(oldp+5,(vlSelfRef.Octree_tb__DOT__tree_num),4);
        bufp->chgQData(oldp+6,(vlSelfRef.Octree_tb__DOT__cam_pos),48);
        bufp->chgSData(oldp+8,(vlSelfRef.Octree_tb__DOT__dist_max),16);
        bufp->chgSData(oldp+9,(vlSelfRef.Octree_tb__DOT__s),16);
        bufp->chgBit(oldp+10,(vlSelfRef.Octree_tb__DOT__out_valid));
        bufp->chgBit(oldp+11,(vlSelfRef.Octree_tb__DOT__in_valid));
        bufp->chgSData(oldp+12,((0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__cam_pos))),16);
        bufp->chgSData(oldp+13,((0xffffU & (IData)(
                                                   (vlSelfRef.Octree_tb__DOT__cam_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+14,((0xffffU & (IData)(
                                                   (vlSelfRef.Octree_tb__DOT__cam_pos 
                                                    >> 0x20U)))),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+15,(vlSelfRef.Octree_tb__DOT__mem_sram_CEN));
        bufp->chgQData(oldp+16,(vlSelfRef.Octree_tb__DOT__mem_sram_A),64);
        bufp->chgBit(oldp+18,(vlSelfRef.Octree_tb__DOT__mem_sram_GWEN));
        bufp->chgQData(oldp+19,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_A),64);
        bufp->chgQData(oldp+21,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q),64);
        bufp->chgQData(oldp+23,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram),64);
        bufp->chgQData(oldp+25,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q),64);
        bufp->chgQData(oldp+27,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos),64);
        bufp->chgWData(oldp+29,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL),80);
        bufp->chgCData(oldp+32,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state),4);
        bufp->chgSData(oldp+33,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_temp),16);
        bufp->chgSData(oldp+34,((0xffffU & (IData)(
                                                   (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+35,((0xffffU & (IData)(
                                                   (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+36,((0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos))),16);
        bufp->chgSData(oldp+37,((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U])),16);
        bufp->chgSData(oldp+38,((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+39,((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U])),16);
        bufp->chgSData(oldp+40,((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+41,((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U])),16);
        bufp->chgQData(oldp+42,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0]),64);
        bufp->chgQData(oldp+44,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1]),64);
        bufp->chgQData(oldp+46,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2]),64);
        bufp->chgQData(oldp+48,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3]),64);
        bufp->chgQData(oldp+50,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4]),64);
        bufp->chgQData(oldp+52,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_),64);
        bufp->chgQData(oldp+54,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address),64);
        bufp->chgIData(oldp+56,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice),24);
        bufp->chgIData(oldp+57,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice),24);
        bufp->chgQData(oldp+58,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__hash_addr),64);
        bufp->chgSData(oldp+60,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data),16);
        bufp->chgQData(oldp+61,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr),64);
        bufp->chgBit(oldp+63,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid));
        bufp->chgBit(oldp+64,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid));
        bufp->chgSData(oldp+65,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data),16);
        bufp->chgBit(oldp+66,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid));
        bufp->chgBit(oldp+67,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+68,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__out_ready));
        bufp->chgQData(oldp+69,(vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg),64);
        bufp->chgBit(oldp+71,(vlSelfRef.Octree_tb__DOT__search_done));
        bufp->chgBit(oldp+72,(vlSelfRef.Octree_tb__DOT__del_done));
        bufp->chgBit(oldp+73,(vlSelfRef.Octree_tb__DOT__add_done));
        bufp->chgBit(oldp+74,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__search_start_reg));
        bufp->chgBit(oldp+75,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg));
        bufp->chgBit(oldp+76,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg));
        bufp->chgCData(oldp+77,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg),2);
        bufp->chgQData(oldp+78,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q),64);
        bufp->chgBit(oldp+80,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_CEN));
        bufp->chgQData(oldp+81,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D),64);
        bufp->chgQData(oldp+83,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q),64);
        bufp->chgBit(oldp+85,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_GWEN));
        bufp->chgCData(oldp+86,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__state),2);
        bufp->chgCData(oldp+87,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt),4);
        bufp->chgBit(oldp+88,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN));
        bufp->chgQData(oldp+89,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_D),64);
        bufp->chgBit(oldp+91,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_GWEN));
        bufp->chgBit(oldp+92,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod));
        bufp->chgBit(oldp+93,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_search_done));
        bufp->chgBit(oldp+94,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start));
        bufp->chgCData(oldp+95,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select),2);
        bufp->chgCData(oldp+96,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state),2);
        bufp->chgCData(oldp+97,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt),4);
        bufp->chgCData(oldp+98,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt),4);
        bufp->chgCData(oldp+99,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state),2);
        bufp->chgCData(oldp+100,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state),3);
        bufp->chgBit(oldp+101,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__outing_done));
        bufp->chgBit(oldp+102,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done));
        bufp->chgBit(oldp+103,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first));
        bufp->chgIData(oldp+104,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode),18);
        bufp->chgCData(oldp+105,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested),2);
        bufp->chgCData(oldp+106,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data),8);
        bufp->chgCData(oldp+107,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data),8);
        bufp->chgIData(oldp+108,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos),24);
        bufp->chgCData(oldp+109,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_count),4);
        bufp->chgIData(oldp+110,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos),24);
        bufp->chgCData(oldp+111,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_count),4);
        bufp->chgBit(oldp+112,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid));
        bufp->chgBit(oldp+113,((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN)))));
        bufp->chgBit(oldp+114,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid));
        bufp->chgBit(oldp+115,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wr_en));
        bufp->chgBit(oldp+116,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en));
        bufp->chgBit(oldp+117,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty));
        bufp->chgBit(oldp+118,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_full));
        bufp->chgQData(oldp+119,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wdata),46);
        bufp->chgQData(oldp+121,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg),46);
        bufp->chgBit(oldp+123,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wr_en));
        bufp->chgBit(oldp+124,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en));
        bufp->chgBit(oldp+125,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty));
        bufp->chgBit(oldp+126,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_full));
        bufp->chgQData(oldp+127,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wdata),46);
        bufp->chgQData(oldp+129,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg),46);
        bufp->chgCData(oldp+131,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num),4);
        bufp->chgCData(oldp+132,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num),4);
        bufp->chgCData(oldp+133,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level),3);
        bufp->chgIData(oldp+134,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_posencode),18);
        bufp->chgIData(oldp+135,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j),32);
        bufp->chgIData(oldp+136,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o),32);
        bufp->chgIData(oldp+137,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk4__DOT__a),32);
        bufp->chgIData(oldp+138,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk5__DOT__a),32);
        bufp->chgIData(oldp+139,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk6__DOT__a),32);
        bufp->chgIData(oldp+140,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__get_intersted_data__DOT__unnamedblk1__DOT__i),32);
        bufp->chgQData(oldp+141,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[0]),46);
        bufp->chgQData(oldp+143,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[1]),46);
        bufp->chgQData(oldp+145,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[2]),46);
        bufp->chgQData(oldp+147,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[3]),46);
        bufp->chgQData(oldp+149,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[4]),46);
        bufp->chgQData(oldp+151,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[5]),46);
        bufp->chgQData(oldp+153,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[6]),46);
        bufp->chgQData(oldp+155,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[7]),46);
        bufp->chgQData(oldp+157,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[8]),46);
        bufp->chgQData(oldp+159,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[9]),46);
        bufp->chgQData(oldp+161,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[10]),46);
        bufp->chgQData(oldp+163,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[11]),46);
        bufp->chgQData(oldp+165,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[12]),46);
        bufp->chgQData(oldp+167,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[13]),46);
        bufp->chgQData(oldp+169,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[14]),46);
        bufp->chgQData(oldp+171,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[15]),46);
        bufp->chgQData(oldp+173,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[16]),46);
        bufp->chgQData(oldp+175,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[17]),46);
        bufp->chgQData(oldp+177,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[18]),46);
        bufp->chgQData(oldp+179,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[19]),46);
        bufp->chgQData(oldp+181,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[20]),46);
        bufp->chgQData(oldp+183,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[21]),46);
        bufp->chgQData(oldp+185,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[22]),46);
        bufp->chgQData(oldp+187,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[23]),46);
        bufp->chgQData(oldp+189,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[24]),46);
        bufp->chgQData(oldp+191,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[25]),46);
        bufp->chgQData(oldp+193,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[26]),46);
        bufp->chgQData(oldp+195,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[27]),46);
        bufp->chgCData(oldp+197,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr),6);
        bufp->chgCData(oldp+198,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr),6);
        bufp->chgCData(oldp+199,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr))),5);
        bufp->chgCData(oldp+200,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr))),5);
        bufp->chgQData(oldp+201,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[0]),46);
        bufp->chgQData(oldp+203,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[1]),46);
        bufp->chgQData(oldp+205,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[2]),46);
        bufp->chgQData(oldp+207,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[3]),46);
        bufp->chgQData(oldp+209,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[4]),46);
        bufp->chgQData(oldp+211,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[5]),46);
        bufp->chgQData(oldp+213,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[6]),46);
        bufp->chgQData(oldp+215,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[7]),46);
        bufp->chgQData(oldp+217,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[8]),46);
        bufp->chgQData(oldp+219,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[9]),46);
        bufp->chgQData(oldp+221,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[10]),46);
        bufp->chgQData(oldp+223,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[11]),46);
        bufp->chgQData(oldp+225,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[12]),46);
        bufp->chgQData(oldp+227,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[13]),46);
        bufp->chgQData(oldp+229,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[14]),46);
        bufp->chgQData(oldp+231,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[15]),46);
        bufp->chgQData(oldp+233,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[16]),46);
        bufp->chgQData(oldp+235,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[17]),46);
        bufp->chgQData(oldp+237,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[18]),46);
        bufp->chgQData(oldp+239,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[19]),46);
        bufp->chgQData(oldp+241,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[20]),46);
        bufp->chgQData(oldp+243,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[21]),46);
        bufp->chgQData(oldp+245,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[22]),46);
        bufp->chgQData(oldp+247,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[23]),46);
        bufp->chgQData(oldp+249,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[24]),46);
        bufp->chgQData(oldp+251,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[25]),46);
        bufp->chgQData(oldp+253,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[26]),46);
        bufp->chgQData(oldp+255,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[27]),46);
        bufp->chgCData(oldp+257,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr),6);
        bufp->chgCData(oldp+258,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr),6);
        bufp->chgCData(oldp+259,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr))),5);
        bufp->chgCData(oldp+260,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr))),5);
        bufp->chgIData(oldp+261,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__unnamedblk9__DOT__i),32);
        bufp->chgCData(oldp+262,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater),3);
        bufp->chgBit(oldp+263,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN));
        bufp->chgQData(oldp+264,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D),64);
        bufp->chgBit(oldp+266,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN));
        bufp->chgQData(oldp+267,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q),64);
        bufp->chgBit(oldp+269,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN));
        bufp->chgQData(oldp+270,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A),64);
        bufp->chgQData(oldp+272,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D),64);
        bufp->chgBit(oldp+274,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN));
        bufp->chgQData(oldp+275,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q),64);
        bufp->chgCData(oldp+277,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer),3);
        bufp->chgCData(oldp+278,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state),3);
        bufp->chgCData(oldp+279,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt),4);
        bufp->chgCData(oldp+280,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt),4);
        bufp->chgIData(oldp+281,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos),18);
        bufp->chgIData(oldp+282,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate),18);
        bufp->chgWData(oldp+283,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in),576);
        bufp->chgCData(oldp+301,((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                        >> 0xfU))),3);
        bufp->chgQData(oldp+302,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[0]),64);
        bufp->chgQData(oldp+304,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[1]),64);
        bufp->chgQData(oldp+306,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[2]),64);
        bufp->chgQData(oldp+308,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[3]),64);
        bufp->chgQData(oldp+310,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[4]),64);
        bufp->chgQData(oldp+312,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_),64);
        bufp->chgQData(oldp+314,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address),64);
        bufp->chgQData(oldp+316,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_for_sram),64);
        bufp->chgIData(oldp+318,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hold_input_data__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+319,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state),2);
        bufp->chgIData(oldp+320,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__reg_pos),18);
        bufp->chgIData(oldp+321,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate),18);
        bufp->chgCData(oldp+322,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt),4);
        bufp->chgCData(oldp+323,((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                        >> 0xfU))),3);
        bufp->chgQData(oldp+324,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[0]),64);
        bufp->chgQData(oldp+326,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[1]),64);
        bufp->chgQData(oldp+328,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[2]),64);
        bufp->chgQData(oldp+330,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[3]),64);
        bufp->chgQData(oldp+332,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[4]),64);
        bufp->chgQData(oldp+334,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_),64);
        bufp->chgQData(oldp+336,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address),64);
        bufp->chgQData(oldp+338,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram),64);
        bufp->chgIData(oldp+340,(vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+341,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN));
        bufp->chgQData(oldp+342,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A),64);
        bufp->chgCData(oldp+344,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active),5);
        bufp->chgBit(oldp+345,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready));
        bufp->chgCData(oldp+346,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp),5);
        bufp->chgSData(oldp+347,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x),16);
        bufp->chgSData(oldp+348,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y),16);
        bufp->chgSData(oldp+349,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z),16);
        bufp->chgCData(oldp+350,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state),4);
        bufp->chgSData(oldp+351,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp),16);
        bufp->chgSData(oldp+352,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp),16);
        bufp->chgSData(oldp+353,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp),16);
        bufp->chgSData(oldp+354,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp),16);
        bufp->chgSData(oldp+355,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp),16);
        bufp->chgSData(oldp+356,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp),16);
        bufp->chgSData(oldp+357,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1),16);
        bufp->chgSData(oldp+358,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2),16);
        bufp->chgSData(oldp+359,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp),16);
        bufp->chgSData(oldp+360,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_temp),16);
        bufp->chgSData(oldp+361,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1),16);
        bufp->chgSData(oldp+362,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2),16);
        bufp->chgSData(oldp+363,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1),16);
        bufp->chgSData(oldp+364,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2),16);
        bufp->chgSData(oldp+365,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1),16);
        bufp->chgSData(oldp+366,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2),16);
        bufp->chgSData(oldp+367,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1),16);
        bufp->chgSData(oldp+368,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2),16);
        bufp->chgSData(oldp+369,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1),16);
        bufp->chgSData(oldp+370,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2),16);
        bufp->chgSData(oldp+371,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1),16);
        bufp->chgSData(oldp+372,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2),16);
        bufp->chgBit(oldp+373,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag));
        bufp->chgCData(oldp+374,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg),5);
        bufp->chgBit(oldp+375,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready));
        bufp->chgBit(oldp+376,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new));
        bufp->chgBit(oldp+377,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__sign));
        bufp->chgCData(oldp+378,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent),6);
        bufp->chgSData(oldp+379,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__mantissa),10);
        bufp->chgCData(oldp+380,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA),5);
        bufp->chgCData(oldp+381,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB),5);
        bufp->chgSData(oldp+382,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA),11);
        bufp->chgSData(oldp+383,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB),11);
        bufp->chgSData(oldp+384,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction),11);
        bufp->chgCData(oldp+385,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__shiftAmount),5);
        bufp->chgBit(oldp+386,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout));
        bufp->chgSData(oldp+387,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus),16);
        bufp->chgBit(oldp+388,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__sign));
        bufp->chgCData(oldp+389,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent),6);
        bufp->chgSData(oldp+390,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__mantissa),10);
        bufp->chgSData(oldp+391,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionA),11);
        bufp->chgSData(oldp+392,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionB),11);
        bufp->chgIData(oldp+393,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction),22);
        bufp->chgBit(oldp+394,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__sign));
        bufp->chgCData(oldp+395,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent),6);
        bufp->chgSData(oldp+396,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__mantissa),10);
        bufp->chgCData(oldp+397,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA),5);
        bufp->chgCData(oldp+398,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB),5);
        bufp->chgSData(oldp+399,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA),11);
        bufp->chgSData(oldp+400,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB),11);
        bufp->chgSData(oldp+401,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction),11);
        bufp->chgCData(oldp+402,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__shiftAmount),5);
        bufp->chgBit(oldp+403,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout));
        bufp->chgSData(oldp+404,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus),16);
        bufp->chgBit(oldp+405,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__sign));
        bufp->chgCData(oldp+406,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent),6);
        bufp->chgSData(oldp+407,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__mantissa),10);
        bufp->chgSData(oldp+408,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionA),11);
        bufp->chgSData(oldp+409,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionB),11);
        bufp->chgIData(oldp+410,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction),22);
        bufp->chgBit(oldp+411,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__sign));
        bufp->chgCData(oldp+412,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent),6);
        bufp->chgSData(oldp+413,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__mantissa),10);
        bufp->chgCData(oldp+414,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA),5);
        bufp->chgCData(oldp+415,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB),5);
        bufp->chgSData(oldp+416,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA),11);
        bufp->chgSData(oldp+417,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB),11);
        bufp->chgSData(oldp+418,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction),11);
        bufp->chgCData(oldp+419,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__shiftAmount),5);
        bufp->chgBit(oldp+420,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout));
        bufp->chgSData(oldp+421,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus),16);
        bufp->chgBit(oldp+422,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__sign));
        bufp->chgCData(oldp+423,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent),6);
        bufp->chgSData(oldp+424,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__mantissa),10);
        bufp->chgSData(oldp+425,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionA),11);
        bufp->chgSData(oldp+426,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionB),11);
        bufp->chgIData(oldp+427,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction),22);
        bufp->chgSData(oldp+428,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int),16);
        bufp->chgSData(oldp+429,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp),16);
        bufp->chgSData(oldp+430,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp),10);
        bufp->chgCData(oldp+431,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid),5);
        bufp->chgSData(oldp+432,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub),16);
        bufp->chgSData(oldp+433,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre),16);
        bufp->chgBit(oldp+434,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__sign));
        bufp->chgCData(oldp+435,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent),6);
        bufp->chgSData(oldp+436,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__mantissa),10);
        bufp->chgCData(oldp+437,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA),5);
        bufp->chgCData(oldp+438,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB),5);
        bufp->chgSData(oldp+439,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA),11);
        bufp->chgSData(oldp+440,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB),11);
        bufp->chgSData(oldp+441,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction),11);
        bufp->chgCData(oldp+442,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+443,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout));
        bufp->chgSData(oldp+444,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+445,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__sign));
        bufp->chgCData(oldp+446,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent),6);
        bufp->chgSData(oldp+447,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__mantissa),10);
        bufp->chgCData(oldp+448,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA),5);
        bufp->chgCData(oldp+449,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB),5);
        bufp->chgSData(oldp+450,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA),11);
        bufp->chgSData(oldp+451,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB),11);
        bufp->chgSData(oldp+452,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction),11);
        bufp->chgCData(oldp+453,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+454,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout));
        bufp->chgSData(oldp+455,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int),16);
        bufp->chgSData(oldp+456,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp),16);
        bufp->chgSData(oldp+457,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp),10);
        bufp->chgCData(oldp+458,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid),5);
        bufp->chgSData(oldp+459,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub),16);
        bufp->chgSData(oldp+460,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre),16);
        bufp->chgBit(oldp+461,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__sign));
        bufp->chgCData(oldp+462,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent),6);
        bufp->chgSData(oldp+463,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__mantissa),10);
        bufp->chgCData(oldp+464,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA),5);
        bufp->chgCData(oldp+465,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB),5);
        bufp->chgSData(oldp+466,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA),11);
        bufp->chgSData(oldp+467,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB),11);
        bufp->chgSData(oldp+468,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction),11);
        bufp->chgCData(oldp+469,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+470,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout));
        bufp->chgSData(oldp+471,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+472,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__sign));
        bufp->chgCData(oldp+473,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent),6);
        bufp->chgSData(oldp+474,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__mantissa),10);
        bufp->chgCData(oldp+475,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA),5);
        bufp->chgCData(oldp+476,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB),5);
        bufp->chgSData(oldp+477,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA),11);
        bufp->chgSData(oldp+478,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB),11);
        bufp->chgSData(oldp+479,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction),11);
        bufp->chgCData(oldp+480,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+481,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout));
        bufp->chgSData(oldp+482,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int),16);
        bufp->chgSData(oldp+483,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp),16);
        bufp->chgSData(oldp+484,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp),10);
        bufp->chgCData(oldp+485,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid),5);
        bufp->chgSData(oldp+486,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub),16);
        bufp->chgSData(oldp+487,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre),16);
        bufp->chgBit(oldp+488,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__sign));
        bufp->chgCData(oldp+489,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent),6);
        bufp->chgSData(oldp+490,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__mantissa),10);
        bufp->chgCData(oldp+491,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA),5);
        bufp->chgCData(oldp+492,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB),5);
        bufp->chgSData(oldp+493,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA),11);
        bufp->chgSData(oldp+494,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB),11);
        bufp->chgSData(oldp+495,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction),11);
        bufp->chgCData(oldp+496,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+497,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout));
        bufp->chgSData(oldp+498,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+499,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__sign));
        bufp->chgCData(oldp+500,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent),6);
        bufp->chgSData(oldp+501,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__mantissa),10);
        bufp->chgCData(oldp+502,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA),5);
        bufp->chgCData(oldp+503,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB),5);
        bufp->chgSData(oldp+504,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA),11);
        bufp->chgSData(oldp+505,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB),11);
        bufp->chgSData(oldp+506,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction),11);
        bufp->chgCData(oldp+507,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+508,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout));
        bufp->chgBit(oldp+509,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__sign));
        bufp->chgCData(oldp+510,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent),6);
        bufp->chgSData(oldp+511,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__mantissa),10);
        bufp->chgCData(oldp+512,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA),5);
        bufp->chgCData(oldp+513,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB),5);
        bufp->chgSData(oldp+514,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA),11);
        bufp->chgSData(oldp+515,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB),11);
        bufp->chgSData(oldp+516,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction),11);
        bufp->chgCData(oldp+517,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+518,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout));
        bufp->chgSData(oldp+519,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+520,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__sign));
        bufp->chgCData(oldp+521,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent),6);
        bufp->chgSData(oldp+522,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__mantissa),10);
        bufp->chgCData(oldp+523,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA),5);
        bufp->chgCData(oldp+524,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB),5);
        bufp->chgSData(oldp+525,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA),11);
        bufp->chgSData(oldp+526,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB),11);
        bufp->chgSData(oldp+527,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction),11);
        bufp->chgCData(oldp+528,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+529,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout));
        bufp->chgSData(oldp+530,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+531,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__sign));
        bufp->chgCData(oldp+532,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent),6);
        bufp->chgSData(oldp+533,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__mantissa),10);
        bufp->chgSData(oldp+534,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionA),11);
        bufp->chgSData(oldp+535,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionB),11);
        bufp->chgIData(oldp+536,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction),22);
        bufp->chgBit(oldp+537,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__sign));
        bufp->chgCData(oldp+538,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent),6);
        bufp->chgSData(oldp+539,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__mantissa),10);
        bufp->chgCData(oldp+540,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA),5);
        bufp->chgCData(oldp+541,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB),5);
        bufp->chgSData(oldp+542,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA),11);
        bufp->chgSData(oldp+543,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB),11);
        bufp->chgSData(oldp+544,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction),11);
        bufp->chgCData(oldp+545,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+546,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout));
        bufp->chgBit(oldp+547,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__sign));
        bufp->chgCData(oldp+548,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent),6);
        bufp->chgSData(oldp+549,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__mantissa),10);
        bufp->chgCData(oldp+550,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA),5);
        bufp->chgCData(oldp+551,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB),5);
        bufp->chgSData(oldp+552,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA),11);
        bufp->chgSData(oldp+553,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB),11);
        bufp->chgSData(oldp+554,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction),11);
        bufp->chgCData(oldp+555,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+556,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout));
        bufp->chgSData(oldp+557,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+558,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__sign));
        bufp->chgCData(oldp+559,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent),6);
        bufp->chgSData(oldp+560,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__mantissa),10);
        bufp->chgCData(oldp+561,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA),5);
        bufp->chgCData(oldp+562,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB),5);
        bufp->chgSData(oldp+563,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA),11);
        bufp->chgSData(oldp+564,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB),11);
        bufp->chgSData(oldp+565,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction),11);
        bufp->chgCData(oldp+566,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+567,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout));
        bufp->chgBit(oldp+568,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__sign));
        bufp->chgCData(oldp+569,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent),6);
        bufp->chgSData(oldp+570,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__mantissa),10);
        bufp->chgCData(oldp+571,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA),5);
        bufp->chgCData(oldp+572,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB),5);
        bufp->chgSData(oldp+573,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA),11);
        bufp->chgSData(oldp+574,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB),11);
        bufp->chgSData(oldp+575,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction),11);
        bufp->chgCData(oldp+576,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+577,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout));
        bufp->chgSData(oldp+578,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+579,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__sign));
        bufp->chgCData(oldp+580,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent),6);
        bufp->chgSData(oldp+581,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__mantissa),10);
        bufp->chgCData(oldp+582,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA),5);
        bufp->chgCData(oldp+583,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB),5);
        bufp->chgSData(oldp+584,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA),11);
        bufp->chgSData(oldp+585,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB),11);
        bufp->chgSData(oldp+586,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction),11);
        bufp->chgCData(oldp+587,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+588,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout));
        bufp->chgBit(oldp+589,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__sign));
        bufp->chgCData(oldp+590,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent),6);
        bufp->chgSData(oldp+591,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__mantissa),10);
        bufp->chgCData(oldp+592,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA),5);
        bufp->chgCData(oldp+593,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB),5);
        bufp->chgSData(oldp+594,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA),11);
        bufp->chgSData(oldp+595,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB),11);
        bufp->chgSData(oldp+596,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction),11);
        bufp->chgCData(oldp+597,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+598,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout));
        bufp->chgSData(oldp+599,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+600,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__sign));
        bufp->chgCData(oldp+601,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent),6);
        bufp->chgSData(oldp+602,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__mantissa),10);
        bufp->chgCData(oldp+603,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA),5);
        bufp->chgCData(oldp+604,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB),5);
        bufp->chgSData(oldp+605,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA),11);
        bufp->chgSData(oldp+606,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB),11);
        bufp->chgSData(oldp+607,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction),11);
        bufp->chgCData(oldp+608,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+609,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout));
        bufp->chgBit(oldp+610,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__sign));
        bufp->chgCData(oldp+611,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent),6);
        bufp->chgSData(oldp+612,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__mantissa),10);
        bufp->chgCData(oldp+613,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA),5);
        bufp->chgCData(oldp+614,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB),5);
        bufp->chgSData(oldp+615,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA),11);
        bufp->chgSData(oldp+616,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB),11);
        bufp->chgSData(oldp+617,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction),11);
        bufp->chgCData(oldp+618,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+619,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout));
        bufp->chgSData(oldp+620,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+621,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__sign));
        bufp->chgCData(oldp+622,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent),6);
        bufp->chgSData(oldp+623,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__mantissa),10);
        bufp->chgCData(oldp+624,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA),5);
        bufp->chgCData(oldp+625,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB),5);
        bufp->chgSData(oldp+626,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA),11);
        bufp->chgSData(oldp+627,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB),11);
        bufp->chgSData(oldp+628,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction),11);
        bufp->chgCData(oldp+629,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+630,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout));
        bufp->chgBit(oldp+631,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__sign));
        bufp->chgCData(oldp+632,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent),6);
        bufp->chgSData(oldp+633,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__mantissa),10);
        bufp->chgCData(oldp+634,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA),5);
        bufp->chgCData(oldp+635,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB),5);
        bufp->chgSData(oldp+636,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA),11);
        bufp->chgSData(oldp+637,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB),11);
        bufp->chgSData(oldp+638,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction),11);
        bufp->chgCData(oldp+639,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+640,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout));
        bufp->chgSData(oldp+641,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+642,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__sign));
        bufp->chgCData(oldp+643,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent),6);
        bufp->chgSData(oldp+644,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__mantissa),10);
        bufp->chgCData(oldp+645,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA),5);
        bufp->chgCData(oldp+646,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB),5);
        bufp->chgSData(oldp+647,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA),11);
        bufp->chgSData(oldp+648,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB),11);
        bufp->chgSData(oldp+649,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction),11);
        bufp->chgCData(oldp+650,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__shiftAmount),5);
        bufp->chgBit(oldp+651,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout));
        bufp->chgBit(oldp+652,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__sign));
        bufp->chgCData(oldp+653,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent),6);
        bufp->chgSData(oldp+654,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__mantissa),10);
        bufp->chgCData(oldp+655,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA),5);
        bufp->chgCData(oldp+656,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB),5);
        bufp->chgSData(oldp+657,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA),11);
        bufp->chgSData(oldp+658,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB),11);
        bufp->chgSData(oldp+659,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction),11);
        bufp->chgCData(oldp+660,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+661,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout));
    }
    bufp->chgBit(oldp+662,(vlSelfRef.Octree_tb__DOT__clk));
    bufp->chgQData(oldp+663,(((5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))
                               ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q
                               : 0ULL)),64);
    bufp->chgQData(oldp+665,(((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                               ? 0ULL : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                          ? ((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                                              ? ((0U 
                                                  == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                                  ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_D
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                                   ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_D
                                                   : 0ULL))
                                              : 0ULL)
                                          : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                              ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D
                                              : 0ULL)))),64);
    bufp->chgBit(oldp+667,(((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n))) 
                            || ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                 ? (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN)
                                 : ((1U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                    || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_CEN))))));
    bufp->chgQData(oldp+668,(((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                               ? ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                   ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A
                                   : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                       ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram
                                       : 0ULL)) : 0ULL)),64);
    bufp->chgQData(oldp+670,(((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                               ? ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                   ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_D
                                   : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                       ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_D
                                       : 0ULL)) : 0ULL)),64);
    bufp->chgBit(oldp+672,(((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n))) 
                            || ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                || ((1U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                    || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_sram_GWEN))))));
    bufp->chgSData(oldp+673,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_dist_max_temp),16);
    bufp->chgSData(oldp+674,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_s_temp),16);
    bufp->chgIData(oldp+675,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk7__DOT__i),32);
    bufp->chgIData(oldp+676,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__interested_slice_of_fifo_rdata__DOT__unnamedblk8__DOT__i),32);
    bufp->chgQData(oldp+677,(((4U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state))
                               ? ((QData)((IData)((0x7ffU 
                                                   & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr)))) 
                                  + (QData)((IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt)))
                               : vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_for_sram)),64);
}

void VOctree_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOctree_tb___024root__trace_cleanup\n"); );
    // Init
    VOctree_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOctree_tb___024root*>(voidSelf);
    VOctree_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
