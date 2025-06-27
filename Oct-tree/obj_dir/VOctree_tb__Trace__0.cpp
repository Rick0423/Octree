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
        bufp->chgBit(oldp+19,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_CEN));
        bufp->chgQData(oldp+20,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_D),64);
        bufp->chgQData(oldp+22,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_A),64);
        bufp->chgQData(oldp+24,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_Q),64);
        bufp->chgQData(oldp+26,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram),64);
        bufp->chgQData(oldp+28,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q),64);
        bufp->chgQData(oldp+30,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos),48);
        bufp->chgWData(oldp+32,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL),80);
        bufp->chgCData(oldp+35,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__next_state),4);
        bufp->chgSData(oldp+36,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_temp),16);
        bufp->chgSData(oldp+37,((0xffffU & (IData)(
                                                   (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+38,((0xffffU & (IData)(
                                                   (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+39,((0xffffU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_pos))),16);
        bufp->chgSData(oldp+40,((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U])),16);
        bufp->chgSData(oldp+41,((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[0U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+42,((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U])),16);
        bufp->chgSData(oldp+43,((vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+44,((0xffffU & vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_lay_dL[2U])),16);
        bufp->chgQData(oldp+45,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[0]),64);
        bufp->chgQData(oldp+47,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[1]),64);
        bufp->chgQData(oldp+49,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[2]),64);
        bufp->chgQData(oldp+51,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[3]),64);
        bufp->chgQData(oldp+53,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__offset[4]),64);
        bufp->chgQData(oldp+55,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_part_),64);
        bufp->chgQData(oldp+57,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__actual_address),64);
        bufp->chgIData(oldp+59,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_1_slice),24);
        bufp->chgIData(oldp+60,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__rdata_2_slice),24);
        bufp->chgQData(oldp+61,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__hash_addr),64);
        bufp->chgSData(oldp+63,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__anchor_data),16);
        bufp->chgQData(oldp+64,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hash_encoded_addr),64);
        bufp->chgBit(oldp+66,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__self_all_invalid));
        bufp->chgBit(oldp+67,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__parent_all_invalid));
        bufp->chgSData(oldp+68,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__anchor_data),16);
        bufp->chgBit(oldp+69,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__parent_all_invalid));
        bufp->chgBit(oldp+70,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__self_all_invalid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+71,(vlSelfRef.Octree_tb__DOT__out_ready));
        bufp->chgQData(oldp+72,(vlSelfRef.Octree_tb__DOT__u_sram__DOT__mem_sram_Q_reg),64);
        bufp->chgBit(oldp+74,(vlSelfRef.Octree_tb__DOT__search_done));
        bufp->chgBit(oldp+75,(vlSelfRef.Octree_tb__DOT__del_done));
        bufp->chgBit(oldp+76,(vlSelfRef.Octree_tb__DOT__add_done));
        bufp->chgBit(oldp+77,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__search_start_reg));
        bufp->chgBit(oldp+78,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__add_anchor_reg));
        bufp->chgBit(oldp+79,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__del_anchor_reg));
        bufp->chgCData(oldp+80,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg),2);
        bufp->chgQData(oldp+81,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_Q),64);
        bufp->chgBit(oldp+83,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_CEN));
        bufp->chgQData(oldp+84,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D),64);
        bufp->chgQData(oldp+86,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_Q),64);
        bufp->chgBit(oldp+88,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_GWEN));
        bufp->chgCData(oldp+89,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__state),2);
        bufp->chgCData(oldp+90,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_cnt),4);
        bufp->chgBit(oldp+91,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_CEN));
        bufp->chgQData(oldp+92,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_D),64);
        bufp->chgBit(oldp+94,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_GWEN));
        bufp->chgBit(oldp+95,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__cal_lod));
        bufp->chgBit(oldp+96,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_done));
        bufp->chgBit(oldp+97,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__tree_search_start));
        bufp->chgCData(oldp+98,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select),2);
        bufp->chgCData(oldp+99,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__searcher_state),2);
        bufp->chgCData(oldp+100,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_cnt),4);
        bufp->chgCData(oldp+101,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__in_anchor_cnt),4);
        bufp->chgCData(oldp+102,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__tree_state),2);
        bufp->chgCData(oldp+103,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state),3);
        bufp->chgBit(oldp+104,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__outing_done));
        bufp->chgBit(oldp+105,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__searching_done));
        bufp->chgBit(oldp+106,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__first));
        bufp->chgIData(oldp+107,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__w_fifo_pos_encode),18);
        bufp->chgCData(oldp+108,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__anchor_interested),2);
        bufp->chgCData(oldp+109,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_data),8);
        bufp->chgCData(oldp+110,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_data),8);
        bufp->chgIData(oldp+111,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_pos),24);
        bufp->chgCData(oldp+112,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__self_ones_count),4);
        bufp->chgIData(oldp+113,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_pos),24);
        bufp->chgCData(oldp+114,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__child_ones_count),4);
        bufp->chgBit(oldp+115,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_read_data_valid));
        bufp->chgBit(oldp+116,((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_CEN)))));
        bufp->chgBit(oldp+117,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__write_fifo_data_valid));
        bufp->chgBit(oldp+118,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wr_en));
        bufp->chgBit(oldp+119,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_rd_en));
        bufp->chgBit(oldp+120,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_empty));
        bufp->chgBit(oldp+121,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_full));
        bufp->chgQData(oldp+122,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_1_wdata),46);
        bufp->chgQData(oldp+124,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rdata_reg),46);
        bufp->chgBit(oldp+126,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wr_en));
        bufp->chgBit(oldp+127,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_rd_en));
        bufp->chgBit(oldp+128,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_empty));
        bufp->chgBit(oldp+129,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_full));
        bufp->chgQData(oldp+130,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_2_wdata),46);
        bufp->chgQData(oldp+132,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rdata_reg),46);
        bufp->chgCData(oldp+134,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_1_anchor_num),4);
        bufp->chgCData(oldp+135,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__r_fifo_2_anchor_num),4);
        bufp->chgCData(oldp+136,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__level),3);
        bufp->chgIData(oldp+137,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__mem_posencode),18);
        bufp->chgIData(oldp+138,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__j),32);
        bufp->chgIData(oldp+139,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__o),32);
        bufp->chgIData(oldp+140,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk4__DOT__a),32);
        bufp->chgIData(oldp+141,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk5__DOT__a),32);
        bufp->chgIData(oldp+142,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__gen_level_offset_from_fifo_data__DOT__unnamedblk6__DOT__a),32);
        bufp->chgIData(oldp+143,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__get_intersted_data__DOT__unnamedblk1__DOT__i),32);
        bufp->chgQData(oldp+144,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[0]),46);
        bufp->chgQData(oldp+146,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[1]),46);
        bufp->chgQData(oldp+148,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[2]),46);
        bufp->chgQData(oldp+150,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[3]),46);
        bufp->chgQData(oldp+152,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[4]),46);
        bufp->chgQData(oldp+154,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[5]),46);
        bufp->chgQData(oldp+156,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[6]),46);
        bufp->chgQData(oldp+158,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[7]),46);
        bufp->chgQData(oldp+160,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[8]),46);
        bufp->chgQData(oldp+162,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[9]),46);
        bufp->chgQData(oldp+164,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[10]),46);
        bufp->chgQData(oldp+166,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[11]),46);
        bufp->chgQData(oldp+168,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[12]),46);
        bufp->chgQData(oldp+170,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[13]),46);
        bufp->chgQData(oldp+172,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[14]),46);
        bufp->chgQData(oldp+174,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[15]),46);
        bufp->chgQData(oldp+176,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[16]),46);
        bufp->chgQData(oldp+178,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[17]),46);
        bufp->chgQData(oldp+180,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[18]),46);
        bufp->chgQData(oldp+182,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[19]),46);
        bufp->chgQData(oldp+184,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[20]),46);
        bufp->chgQData(oldp+186,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[21]),46);
        bufp->chgQData(oldp+188,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[22]),46);
        bufp->chgQData(oldp+190,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[23]),46);
        bufp->chgQData(oldp+192,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[24]),46);
        bufp->chgQData(oldp+194,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[25]),46);
        bufp->chgQData(oldp+196,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[26]),46);
        bufp->chgQData(oldp+198,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__mem[27]),46);
        bufp->chgCData(oldp+200,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr),6);
        bufp->chgCData(oldp+201,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr),6);
        bufp->chgCData(oldp+202,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__wr_ptr))),5);
        bufp->chgCData(oldp+203,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_1__DOT__rd_ptr))),5);
        bufp->chgQData(oldp+204,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[0]),46);
        bufp->chgQData(oldp+206,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[1]),46);
        bufp->chgQData(oldp+208,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[2]),46);
        bufp->chgQData(oldp+210,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[3]),46);
        bufp->chgQData(oldp+212,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[4]),46);
        bufp->chgQData(oldp+214,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[5]),46);
        bufp->chgQData(oldp+216,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[6]),46);
        bufp->chgQData(oldp+218,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[7]),46);
        bufp->chgQData(oldp+220,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[8]),46);
        bufp->chgQData(oldp+222,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[9]),46);
        bufp->chgQData(oldp+224,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[10]),46);
        bufp->chgQData(oldp+226,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[11]),46);
        bufp->chgQData(oldp+228,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[12]),46);
        bufp->chgQData(oldp+230,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[13]),46);
        bufp->chgQData(oldp+232,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[14]),46);
        bufp->chgQData(oldp+234,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[15]),46);
        bufp->chgQData(oldp+236,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[16]),46);
        bufp->chgQData(oldp+238,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[17]),46);
        bufp->chgQData(oldp+240,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[18]),46);
        bufp->chgQData(oldp+242,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[19]),46);
        bufp->chgQData(oldp+244,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[20]),46);
        bufp->chgQData(oldp+246,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[21]),46);
        bufp->chgQData(oldp+248,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[22]),46);
        bufp->chgQData(oldp+250,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[23]),46);
        bufp->chgQData(oldp+252,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[24]),46);
        bufp->chgQData(oldp+254,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[25]),46);
        bufp->chgQData(oldp+256,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[26]),46);
        bufp->chgQData(oldp+258,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__mem[27]),46);
        bufp->chgCData(oldp+260,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr),6);
        bufp->chgCData(oldp+261,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr),6);
        bufp->chgCData(oldp+262,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__wr_ptr))),5);
        bufp->chgCData(oldp+263,((0x1fU & (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__u_fifo_sync_2__DOT__rd_ptr))),5);
        bufp->chgIData(oldp+264,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__unnamedblk9__DOT__i),32);
        bufp->chgCData(oldp+265,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__state_updater),3);
        bufp->chgBit(oldp+266,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_CEN));
        bufp->chgQData(oldp+267,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_D),64);
        bufp->chgBit(oldp+269,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_GWEN));
        bufp->chgQData(oldp+270,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__add_sram_Q),64);
        bufp->chgBit(oldp+272,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_CEN));
        bufp->chgQData(oldp+273,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_A),64);
        bufp->chgQData(oldp+275,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_D),64);
        bufp->chgBit(oldp+277,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_GWEN));
        bufp->chgQData(oldp+278,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del_sram_Q),64);
        bufp->chgCData(oldp+280,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__state_input_buffer),3);
        bufp->chgCData(oldp+281,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__add_state),3);
        bufp->chgCData(oldp+282,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__input_cnt),4);
        bufp->chgCData(oldp+283,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__cnt),4);
        bufp->chgIData(oldp+284,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_pos),18);
        bufp->chgIData(oldp+285,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate),18);
        bufp->chgWData(oldp+286,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__reg_feature_in),576);
        bufp->chgCData(oldp+304,((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__addr_to_calculate 
                                        >> 0xfU))),3);
        bufp->chgQData(oldp+305,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[0]),64);
        bufp->chgQData(oldp+307,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[1]),64);
        bufp->chgQData(oldp+309,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[2]),64);
        bufp->chgQData(oldp+311,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[3]),64);
        bufp->chgQData(oldp+313,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__offset[4]),64);
        bufp->chgQData(oldp+315,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_part_),64);
        bufp->chgQData(oldp+317,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__actual_address),64);
        bufp->chgQData(oldp+319,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__address_for_sram),64);
        bufp->chgIData(oldp+321,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__Add__DOT__hold_input_data__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+322,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__delete_state),2);
        bufp->chgIData(oldp+323,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__reg_pos),18);
        bufp->chgIData(oldp+324,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate),18);
        bufp->chgCData(oldp+325,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__cnt),4);
        bufp->chgCData(oldp+326,((7U & (vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__addr_to_calculate 
                                        >> 0xfU))),3);
        bufp->chgQData(oldp+327,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[0]),64);
        bufp->chgQData(oldp+329,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[1]),64);
        bufp->chgQData(oldp+331,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[2]),64);
        bufp->chgQData(oldp+333,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[3]),64);
        bufp->chgQData(oldp+335,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__offset[4]),64);
        bufp->chgQData(oldp+337,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_part_),64);
        bufp->chgQData(oldp+339,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__actual_address),64);
        bufp->chgQData(oldp+341,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_inst__DOT__del__DOT__address_for_sram),64);
        bufp->chgIData(oldp+343,(vlSelfRef.Octree_tb__DOT__u_sram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+344,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_CEN));
        bufp->chgQData(oldp+345,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A),64);
        bufp->chgCData(oldp+347,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_active),5);
        bufp->chgBit(oldp+348,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_ready));
        bufp->chgCData(oldp+349,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_temp),5);
        bufp->chgSData(oldp+350,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_x),16);
        bufp->chgSData(oldp+351,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_y),16);
        bufp->chgSData(oldp+352,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_pow_z),16);
        bufp->chgCData(oldp+353,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__state),4);
        bufp->chgSData(oldp+354,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_temp),16);
        bufp->chgSData(oldp+355,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_temp),16);
        bufp->chgSData(oldp+356,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_temp),16);
        bufp->chgSData(oldp+357,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_x_pow_temp),16);
        bufp->chgSData(oldp+358,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_y_pow_temp),16);
        bufp->chgSData(oldp+359,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__dist_z_pow_temp),16);
        bufp->chgSData(oldp+360,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp1),16);
        bufp->chgSData(oldp+361,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_pow_temp2),16);
        bufp->chgSData(oldp+362,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_pow_temp),16);
        bufp->chgSData(oldp+363,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__log_total_dist_temp),16);
        bufp->chgSData(oldp+364,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp1),16);
        bufp->chgSData(oldp+365,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__pre_int_layer_temp2),16);
        bufp->chgSData(oldp+366,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp1),16);
        bufp->chgSData(oldp+367,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_1_temp2),16);
        bufp->chgSData(oldp+368,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp1),16);
        bufp->chgSData(oldp+369,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_2_temp2),16);
        bufp->chgSData(oldp+370,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp1),16);
        bufp->chgSData(oldp+371,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_3_temp2),16);
        bufp->chgSData(oldp+372,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp1),16);
        bufp->chgSData(oldp+373,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_4_temp2),16);
        bufp->chgSData(oldp+374,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp1),16);
        bufp->chgSData(oldp+375,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__minus_5_temp2),16);
        bufp->chgBit(oldp+376,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__oct_flag));
        bufp->chgCData(oldp+377,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_reg),5);
        bufp->chgBit(oldp+378,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready));
        bufp->chgBit(oldp+379,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__lod_active_ready_new));
        bufp->chgBit(oldp+380,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__sign));
        bufp->chgCData(oldp+381,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponent),6);
        bufp->chgSData(oldp+382,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__mantissa),10);
        bufp->chgCData(oldp+383,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentA),5);
        bufp->chgCData(oldp+384,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__exponentB),5);
        bufp->chgSData(oldp+385,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionA),11);
        bufp->chgSData(oldp+386,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fractionB),11);
        bufp->chgSData(oldp+387,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__fraction),11);
        bufp->chgCData(oldp+388,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__shiftAmount),5);
        bufp->chgBit(oldp+389,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__cout));
        bufp->chgSData(oldp+390,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_minus__DOT__floatB_minus),16);
        bufp->chgBit(oldp+391,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__sign));
        bufp->chgCData(oldp+392,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__exponent),6);
        bufp->chgSData(oldp+393,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__mantissa),10);
        bufp->chgSData(oldp+394,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionA),11);
        bufp->chgSData(oldp+395,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fractionB),11);
        bufp->chgIData(oldp+396,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp00_mult__DOT__fraction),22);
        bufp->chgBit(oldp+397,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__sign));
        bufp->chgCData(oldp+398,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponent),6);
        bufp->chgSData(oldp+399,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__mantissa),10);
        bufp->chgCData(oldp+400,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentA),5);
        bufp->chgCData(oldp+401,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__exponentB),5);
        bufp->chgSData(oldp+402,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionA),11);
        bufp->chgSData(oldp+403,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fractionB),11);
        bufp->chgSData(oldp+404,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__fraction),11);
        bufp->chgCData(oldp+405,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__shiftAmount),5);
        bufp->chgBit(oldp+406,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__cout));
        bufp->chgSData(oldp+407,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_minus__DOT__floatB_minus),16);
        bufp->chgBit(oldp+408,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__sign));
        bufp->chgCData(oldp+409,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__exponent),6);
        bufp->chgSData(oldp+410,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__mantissa),10);
        bufp->chgSData(oldp+411,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionA),11);
        bufp->chgSData(oldp+412,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fractionB),11);
        bufp->chgIData(oldp+413,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp11_mult__DOT__fraction),22);
        bufp->chgBit(oldp+414,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__sign));
        bufp->chgCData(oldp+415,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponent),6);
        bufp->chgSData(oldp+416,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__mantissa),10);
        bufp->chgCData(oldp+417,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentA),5);
        bufp->chgCData(oldp+418,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__exponentB),5);
        bufp->chgSData(oldp+419,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionA),11);
        bufp->chgSData(oldp+420,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fractionB),11);
        bufp->chgSData(oldp+421,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__fraction),11);
        bufp->chgCData(oldp+422,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__shiftAmount),5);
        bufp->chgBit(oldp+423,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__cout));
        bufp->chgSData(oldp+424,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_minus__DOT__floatB_minus),16);
        bufp->chgBit(oldp+425,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__sign));
        bufp->chgCData(oldp+426,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__exponent),6);
        bufp->chgSData(oldp+427,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__mantissa),10);
        bufp->chgSData(oldp+428,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionA),11);
        bufp->chgSData(oldp+429,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fractionB),11);
        bufp->chgIData(oldp+430,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp22_mult__DOT__fraction),22);
        bufp->chgSData(oldp+431,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_int),16);
        bufp->chgSData(oldp+432,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp),16);
        bufp->chgSData(oldp+433,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fpin_fp),10);
        bufp->chgCData(oldp+434,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__mid),5);
        bufp->chgSData(oldp+435,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_fp_sub),16);
        bufp->chgSData(oldp+436,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__result_pre),16);
        bufp->chgBit(oldp+437,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__sign));
        bufp->chgCData(oldp+438,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponent),6);
        bufp->chgSData(oldp+439,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__mantissa),10);
        bufp->chgCData(oldp+440,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentA),5);
        bufp->chgCData(oldp+441,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__exponentB),5);
        bufp->chgSData(oldp+442,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionA),11);
        bufp->chgSData(oldp+443,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fractionB),11);
        bufp->chgSData(oldp+444,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__fraction),11);
        bufp->chgCData(oldp+445,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+446,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__cout));
        bufp->chgSData(oldp+447,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+448,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__sign));
        bufp->chgCData(oldp+449,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponent),6);
        bufp->chgSData(oldp+450,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__mantissa),10);
        bufp->chgCData(oldp+451,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentA),5);
        bufp->chgCData(oldp+452,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__exponentB),5);
        bufp->chgSData(oldp+453,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionA),11);
        bufp->chgSData(oldp+454,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fractionB),11);
        bufp->chgSData(oldp+455,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__fraction),11);
        bufp->chgCData(oldp+456,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+457,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_dist_max__DOT__fp2__DOT__cout));
        bufp->chgSData(oldp+458,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_int),16);
        bufp->chgSData(oldp+459,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp),16);
        bufp->chgSData(oldp+460,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fpin_fp),10);
        bufp->chgCData(oldp+461,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__mid),5);
        bufp->chgSData(oldp+462,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_fp_sub),16);
        bufp->chgSData(oldp+463,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__result_pre),16);
        bufp->chgBit(oldp+464,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__sign));
        bufp->chgCData(oldp+465,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponent),6);
        bufp->chgSData(oldp+466,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__mantissa),10);
        bufp->chgCData(oldp+467,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentA),5);
        bufp->chgCData(oldp+468,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__exponentB),5);
        bufp->chgSData(oldp+469,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionA),11);
        bufp->chgSData(oldp+470,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fractionB),11);
        bufp->chgSData(oldp+471,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__fraction),11);
        bufp->chgCData(oldp+472,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+473,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__cout));
        bufp->chgSData(oldp+474,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+475,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__sign));
        bufp->chgCData(oldp+476,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponent),6);
        bufp->chgSData(oldp+477,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__mantissa),10);
        bufp->chgCData(oldp+478,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentA),5);
        bufp->chgCData(oldp+479,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__exponentB),5);
        bufp->chgSData(oldp+480,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionA),11);
        bufp->chgSData(oldp+481,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fractionB),11);
        bufp->chgSData(oldp+482,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__fraction),11);
        bufp->chgCData(oldp+483,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+484,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_s__DOT__fp2__DOT__cout));
        bufp->chgSData(oldp+485,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_int),16);
        bufp->chgSData(oldp+486,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp),16);
        bufp->chgSData(oldp+487,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fpin_fp),10);
        bufp->chgCData(oldp+488,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__mid),5);
        bufp->chgSData(oldp+489,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_fp_sub),16);
        bufp->chgSData(oldp+490,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__result_pre),16);
        bufp->chgBit(oldp+491,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__sign));
        bufp->chgCData(oldp+492,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponent),6);
        bufp->chgSData(oldp+493,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__mantissa),10);
        bufp->chgCData(oldp+494,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentA),5);
        bufp->chgCData(oldp+495,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__exponentB),5);
        bufp->chgSData(oldp+496,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionA),11);
        bufp->chgSData(oldp+497,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fractionB),11);
        bufp->chgSData(oldp+498,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__fraction),11);
        bufp->chgCData(oldp+499,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+500,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__cout));
        bufp->chgSData(oldp+501,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+502,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__sign));
        bufp->chgCData(oldp+503,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponent),6);
        bufp->chgSData(oldp+504,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__mantissa),10);
        bufp->chgCData(oldp+505,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentA),5);
        bufp->chgCData(oldp+506,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__exponentB),5);
        bufp->chgSData(oldp+507,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionA),11);
        bufp->chgSData(oldp+508,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fractionB),11);
        bufp->chgSData(oldp+509,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__fraction),11);
        bufp->chgCData(oldp+510,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+511,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_log_total_dist__DOT__fp2__DOT__cout));
        bufp->chgBit(oldp+512,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__sign));
        bufp->chgCData(oldp+513,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponent),6);
        bufp->chgSData(oldp+514,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__mantissa),10);
        bufp->chgCData(oldp+515,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentA),5);
        bufp->chgCData(oldp+516,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__exponentB),5);
        bufp->chgSData(oldp+517,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionA),11);
        bufp->chgSData(oldp+518,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fractionB),11);
        bufp->chgSData(oldp+519,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__fraction),11);
        bufp->chgCData(oldp+520,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+521,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__cout));
        bufp->chgSData(oldp+522,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp1__DOT__floatB_minus),16);
        bufp->chgBit(oldp+523,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__sign));
        bufp->chgCData(oldp+524,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponent),6);
        bufp->chgSData(oldp+525,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__mantissa),10);
        bufp->chgCData(oldp+526,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentA),5);
        bufp->chgCData(oldp+527,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__exponentB),5);
        bufp->chgSData(oldp+528,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionA),11);
        bufp->chgSData(oldp+529,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fractionB),11);
        bufp->chgSData(oldp+530,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__fraction),11);
        bufp->chgCData(oldp+531,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+532,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__cout));
        bufp->chgSData(oldp+533,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_minus_pre_int_temp2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+534,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__sign));
        bufp->chgCData(oldp+535,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__exponent),6);
        bufp->chgSData(oldp+536,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__mantissa),10);
        bufp->chgSData(oldp+537,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionA),11);
        bufp->chgSData(oldp+538,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fractionB),11);
        bufp->chgIData(oldp+539,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__fp_mult_log_total_dist__DOT__fraction),22);
        bufp->chgBit(oldp+540,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__sign));
        bufp->chgCData(oldp+541,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponent),6);
        bufp->chgSData(oldp+542,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__mantissa),10);
        bufp->chgCData(oldp+543,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentA),5);
        bufp->chgCData(oldp+544,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__exponentB),5);
        bufp->chgSData(oldp+545,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionA),11);
        bufp->chgSData(oldp+546,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fractionB),11);
        bufp->chgSData(oldp+547,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__fraction),11);
        bufp->chgCData(oldp+548,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+549,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_1__DOT__cout));
        bufp->chgBit(oldp+550,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__sign));
        bufp->chgCData(oldp+551,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponent),6);
        bufp->chgSData(oldp+552,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__mantissa),10);
        bufp->chgCData(oldp+553,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentA),5);
        bufp->chgCData(oldp+554,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__exponentB),5);
        bufp->chgSData(oldp+555,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionA),11);
        bufp->chgSData(oldp+556,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fractionB),11);
        bufp->chgSData(oldp+557,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__fraction),11);
        bufp->chgCData(oldp+558,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+559,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__cout));
        bufp->chgSData(oldp+560,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp1_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+561,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__sign));
        bufp->chgCData(oldp+562,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponent),6);
        bufp->chgSData(oldp+563,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__mantissa),10);
        bufp->chgCData(oldp+564,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentA),5);
        bufp->chgCData(oldp+565,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__exponentB),5);
        bufp->chgSData(oldp+566,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionA),11);
        bufp->chgSData(oldp+567,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fractionB),11);
        bufp->chgSData(oldp+568,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__fraction),11);
        bufp->chgCData(oldp+569,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+570,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_1__DOT__cout));
        bufp->chgBit(oldp+571,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__sign));
        bufp->chgCData(oldp+572,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponent),6);
        bufp->chgSData(oldp+573,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__mantissa),10);
        bufp->chgCData(oldp+574,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentA),5);
        bufp->chgCData(oldp+575,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__exponentB),5);
        bufp->chgSData(oldp+576,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionA),11);
        bufp->chgSData(oldp+577,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fractionB),11);
        bufp->chgSData(oldp+578,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__fraction),11);
        bufp->chgCData(oldp+579,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+580,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__cout));
        bufp->chgSData(oldp+581,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp2_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+582,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__sign));
        bufp->chgCData(oldp+583,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponent),6);
        bufp->chgSData(oldp+584,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__mantissa),10);
        bufp->chgCData(oldp+585,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentA),5);
        bufp->chgCData(oldp+586,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__exponentB),5);
        bufp->chgSData(oldp+587,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionA),11);
        bufp->chgSData(oldp+588,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fractionB),11);
        bufp->chgSData(oldp+589,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__fraction),11);
        bufp->chgCData(oldp+590,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+591,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_1__DOT__cout));
        bufp->chgBit(oldp+592,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__sign));
        bufp->chgCData(oldp+593,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponent),6);
        bufp->chgSData(oldp+594,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__mantissa),10);
        bufp->chgCData(oldp+595,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentA),5);
        bufp->chgCData(oldp+596,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__exponentB),5);
        bufp->chgSData(oldp+597,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionA),11);
        bufp->chgSData(oldp+598,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fractionB),11);
        bufp->chgSData(oldp+599,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__fraction),11);
        bufp->chgCData(oldp+600,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+601,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__cout));
        bufp->chgSData(oldp+602,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp3_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+603,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__sign));
        bufp->chgCData(oldp+604,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponent),6);
        bufp->chgSData(oldp+605,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__mantissa),10);
        bufp->chgCData(oldp+606,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentA),5);
        bufp->chgCData(oldp+607,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__exponentB),5);
        bufp->chgSData(oldp+608,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionA),11);
        bufp->chgSData(oldp+609,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fractionB),11);
        bufp->chgSData(oldp+610,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__fraction),11);
        bufp->chgCData(oldp+611,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+612,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_1__DOT__cout));
        bufp->chgBit(oldp+613,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__sign));
        bufp->chgCData(oldp+614,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponent),6);
        bufp->chgSData(oldp+615,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__mantissa),10);
        bufp->chgCData(oldp+616,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentA),5);
        bufp->chgCData(oldp+617,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__exponentB),5);
        bufp->chgSData(oldp+618,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionA),11);
        bufp->chgSData(oldp+619,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fractionB),11);
        bufp->chgSData(oldp+620,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__fraction),11);
        bufp->chgCData(oldp+621,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+622,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__cout));
        bufp->chgSData(oldp+623,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp4_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+624,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__sign));
        bufp->chgCData(oldp+625,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponent),6);
        bufp->chgSData(oldp+626,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__mantissa),10);
        bufp->chgCData(oldp+627,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentA),5);
        bufp->chgCData(oldp+628,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__exponentB),5);
        bufp->chgSData(oldp+629,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionA),11);
        bufp->chgSData(oldp+630,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fractionB),11);
        bufp->chgSData(oldp+631,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__fraction),11);
        bufp->chgCData(oldp+632,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+633,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_1__DOT__cout));
        bufp->chgBit(oldp+634,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__sign));
        bufp->chgCData(oldp+635,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponent),6);
        bufp->chgSData(oldp+636,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__mantissa),10);
        bufp->chgCData(oldp+637,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentA),5);
        bufp->chgCData(oldp+638,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__exponentB),5);
        bufp->chgSData(oldp+639,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionA),11);
        bufp->chgSData(oldp+640,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fractionB),11);
        bufp->chgSData(oldp+641,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__fraction),11);
        bufp->chgCData(oldp+642,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__shiftAmount),5);
        bufp->chgBit(oldp+643,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__cout));
        bufp->chgSData(oldp+644,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__temp5_2__DOT__floatB_minus),16);
        bufp->chgBit(oldp+645,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__sign));
        bufp->chgCData(oldp+646,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponent),6);
        bufp->chgSData(oldp+647,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__mantissa),10);
        bufp->chgCData(oldp+648,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentA),5);
        bufp->chgCData(oldp+649,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__exponentB),5);
        bufp->chgSData(oldp+650,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionA),11);
        bufp->chgSData(oldp+651,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fractionB),11);
        bufp->chgSData(oldp+652,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__fraction),11);
        bufp->chgCData(oldp+653,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__shiftAmount),5);
        bufp->chgBit(oldp+654,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add__DOT__cout));
        bufp->chgBit(oldp+655,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__sign));
        bufp->chgCData(oldp+656,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponent),6);
        bufp->chgSData(oldp+657,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__mantissa),10);
        bufp->chgCData(oldp+658,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentA),5);
        bufp->chgCData(oldp+659,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__exponentB),5);
        bufp->chgSData(oldp+660,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionA),11);
        bufp->chgSData(oldp+661,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fractionB),11);
        bufp->chgSData(oldp+662,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__fraction),11);
        bufp->chgCData(oldp+663,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__shiftAmount),5);
        bufp->chgBit(oldp+664,(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_lod_compute__DOT__total_dist_add_1__DOT__cout));
    }
    bufp->chgBit(oldp+665,(vlSelfRef.Octree_tb__DOT__clk));
    bufp->chgQData(oldp+666,(((5U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__fifo_state))
                               ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_Q
                               : 0ULL)),64);
    bufp->chgQData(oldp+668,(((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                               ? 0ULL : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                          ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_sram_D
                                          : ((2U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__control_inst__DOT__mem_select_reg))
                                              ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__updater_sram_D
                                              : 0ULL)))),64);
    bufp->chgQData(oldp+670,(((IData)(vlSelfRef.Octree_tb__DOT__rst_n)
                               ? ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                   ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__lod_sram_A
                                   : ((1U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select))
                                       ? vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__u_tree_search__DOT__address_for_sram
                                       : 0ULL)) : 0ULL)),64);
    bufp->chgBit(oldp+672,(((1U & (~ (IData)(vlSelfRef.Octree_tb__DOT__rst_n))) 
                            || ((0U == (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                || ((1U != (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__mem_select)) 
                                    || (IData)(vlSelfRef.Octree_tb__DOT__u_Octree__DOT__searcher_inst__DOT__search_sram_GWEN))))));
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
