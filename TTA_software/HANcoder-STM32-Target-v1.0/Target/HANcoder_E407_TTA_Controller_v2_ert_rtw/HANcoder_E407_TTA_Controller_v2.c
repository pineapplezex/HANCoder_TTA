/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v2.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v2'.
 *
 * Model version                  : 1.87
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jan  3 18:30:06 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Controller_v2.h"
#include "HANcoder_E407_TTA_Controller_v2_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);
const msg_buffer_type HANcoder_E407_TTA_Controller_v2_rtZmsg_buffer_type = {
  0U,                                  /* Buffer_1 */
  0U,                                  /* Buffer_2 */
  0U,                                  /* Buffer_3 */
  0U,                                  /* Buffer_4 */
  0U,                                  /* Buffer_5 */
  0U,                                  /* Buffer_6 */
  0U,                                  /* Buffer_7 */
  0U                                   /* Buffer_8 */
} ;                                    /* msg_buffer_type ground */

/* Exported block signals */
real_T simulation_time;                /* '<S6>/Digital Clock' */
real_T Board_ID_s;                     /* '<S24>/Add' */
uint32_T SI_FreeHeap;                  /* '<S936>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S937>/Level-2 M-file S-Function' */
uint16_T local_ticks_interrupt;        /* '<S26>/Switch' */
uint8_T SI_CPUload;                    /* '<S935>/Level-2 M-file S-Function' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */
real_T Master_ID_s;                    /* '<S88>/Data Store Read' */
real_T Role_ID_s;                      /* '<S88>/Data Store Read1' */
real_T votes_Board_1_DEBUG;            /* '<S88>/Data Store Read3' */
real_T votes_Board_2_DEBUG;            /* '<S88>/Data Store Read3' */
real_T votes_Board_3_DEBUG;            /* '<S88>/Data Store Read3' */
real_T Board_1_error_counter_s;        /* '<S88>/Data Store Read4' */
real_T Board_2_error_counter_s;        /* '<S88>/Data Store Read5' */
real_T Board_3_error_counter_s;        /* '<S88>/Data Store Read6' */
real_T msg_count_DEBUG_s;              /* '<S91>/Data Store Read24' */
real_T Desync_Sync_bc1_s;              /* '<S736>/Switch1' */
real_T expected_LT_setvalues_CAN1_s;   /* '<S690>/Sum' */
real_T expected_LT_setvalues_CAN2_s;   /* '<S690>/Sum1' */
real_T Desync_setvalues_s;             /* '<S690>/Switch1' */
real_T Rx_temporal_setvalues_CAN2;     /* '<S694>/Cast To Double' */
real_T Rx_temporal_setvalues_CAN1;     /* '<S693>/Cast To Double' */
real_T expected_LT_sensorvalues_CAN1_s;/* '<S637>/Sum' */
real_T expected_LT_sensorvalues_CAN2_s;/* '<S637>/Sum1' */
real_T Desync_sensorvalues_s;          /* '<S637>/Switch1' */
real_T Rx_temporal_sensorvalues_CAN2;  /* '<S641>/Cast To Double' */
real_T Rx_temporal_sensorvalues_CAN1;  /* '<S640>/Cast To Double' */
real_T expected_LT_outemulator_CAN1_s; /* '<S609>/Sum' */
real_T expected_LT_outemulator_CAN2_s; /* '<S609>/Sum1' */
real_T Desync_outemulator_s;           /* '<S609>/Switch1' */
real_T Rx_temporal_outemulator_CAN2;   /* '<S612>/Cast To Double' */
real_T Rx_temporal_outemulator_CAN1;   /* '<S611>/Cast To Double' */
real_T expected_LT_outcontrol2_CAN1_s; /* '<S581>/Sum' */
real_T expected_LT_outcontrol2_CAN2_s; /* '<S581>/Sum1' */
real_T Desync_outcontrol2_s;           /* '<S581>/Switch1' */
real_T Rx_temporal_outcontrol2_CAN2;   /* '<S584>/Cast To Double' */
real_T Rx_temporal_outcontrol2_CAN1;   /* '<S583>/Cast To Double' */
real_T expected_LT_outcontrol1_CAN1_s; /* '<S552>/Sum' */
real_T expected_LT_outcontrol1_CAN2_s; /* '<S552>/Sum1' */
real_T Desync_outcontrol1_s;           /* '<S552>/Switch1' */
real_T Rx_temporal_outcontrol1_CAN2;   /* '<S555>/Cast To Double' */
real_T Rx_temporal_outcontrol1_CAN1;   /* '<S554>/Cast To Double' */
real_T theta_fr_stored_s;              /* '<S530>/Data Store Read1' */
real_T theta_fl_stored_s;              /* '<S530>/Data Store Read' */
real_T delta_dot_f_s;                  /* '<S530>/Gain4' */
real_T theta_ar_stored_s;              /* '<S530>/Data Store Read2' */
real_T theta_al_stored_s;              /* '<S530>/Data Store Read3' */
real_T delta_dot_a_s;                  /* '<S530>/Gain5' */
real_T delta_f_est_current_s;          /* '<S530>/Data Store Read20' */
real_T delta_dot_f_prev_s;             /* '<S530>/Data Store Read22' */
real_T rx_data_t_steerF_s;             /* '<S530>/Data Store Read16' */
real_T delta_f_est_s;                  /* '<S536>/Minus2' */
real_T delta_a_est_current_s;          /* '<S530>/Data Store Read21' */
real_T delta_dot_a_prev_s;             /* '<S530>/Data Store Read23' */
real_T rx_data_t_steerA_s;             /* '<S530>/Data Store Read18' */
real_T delta_a_est_s;                  /* '<S535>/Minus2' */
real_T v_est_s;                        /* '<S527>/Gain4' */
real_T v_integral_s;                   /* '<S529>/Minus2' */
real_T v_ctreff_s;                     /* '<S527>/Sum2' */
real_T torque_fr_set_s;                /* '<S527>/Saturation' */
real_T torque_fl_set_s;                /* '<S527>/Saturation1' */
real_T torque_ar_set_s;                /* '<S527>/Saturation2' */
real_T torque_al_set_s;                /* '<S527>/Saturation3' */
real_T expected_LT_vote3_CAN1_s;       /* '<S298>/Sum' */
real_T expected_LT_vote3_CAN2_s;       /* '<S298>/Sum1' */
real_T Desync_Vote3_s;                 /* '<S298>/Switch1' */
real_T Rx_temporal_vote3_CAN2;         /* '<S301>/Cast To Double' */
real_T Rx_temporal_vote3_CAN1;         /* '<S300>/Cast To Double' */
real_T expected_LT_vote2_CAN1_s;       /* '<S269>/Sum' */
real_T expected_LT_vote2_CAN2_s;       /* '<S269>/Sum1' */
real_T Desync_Vote2_s;                 /* '<S269>/Switch1' */
real_T Rx_temporal_vote2_CAN2;         /* '<S272>/Cast To Double' */
real_T Rx_temporal_vote2_CAN1;         /* '<S271>/Cast To Double' */
real_T expected_LT_vote1_CAN1_s;       /* '<S240>/Sum' */
real_T expected_LT_vote1_CAN2_s;       /* '<S240>/Sum1' */
real_T Desync_Vote1_s;                 /* '<S240>/Switch1' */
real_T Rx_temporal_vote1_CAN2;         /* '<S243>/Cast To Double' */
real_T Rx_temporal_vote1_CAN1;         /* '<S242>/Cast To Double' */
real_T Desync_Sync_bc0_s;              /* '<S205>/Switch1' */
real_T TM1_timeout_counter_s;          /* '<S197>/Switch' */
real_T TM2_timeout_counter_s;          /* '<S198>/Switch' */
real_T TM3_timeout_counter_s;          /* '<S199>/Switch' */
uint16_T Rx_msg_ticks_setvalues_CAN1_s;/* '<S690>/Data Store Read' */
uint16_T Rx_msg_ticks_setvalues_CAN2_s;/* '<S690>/Data Store Read1' */
uint16_T Rx_msg_ticks_sensorvalues_CAN1_s;/* '<S637>/Data Store Read' */
uint16_T Rx_msg_ticks_sensorvalues_CAN2_s;/* '<S637>/Data Store Read1' */
uint16_T Rx_msg_ticks_outemulator_CAN1_s;/* '<S609>/Data Store Read' */
uint16_T Rx_msg_ticks_outemulator_CAN2_s;/* '<S609>/Data Store Read1' */
uint16_T Rx_msg_ticks_outcontrol2_CAN1_s;/* '<S581>/Data Store Read' */
uint16_T Rx_msg_ticks_outcontrol2_CAN2_s;/* '<S581>/Data Store Read1' */
uint16_T Rx_msg_ticks_outcontrol1_CAN1_s;/* '<S552>/Data Store Read' */
uint16_T Rx_msg_ticks_outcontrol1_CAN2_s;/* '<S552>/Data Store Read1' */
uint16_T Rx_msg_ticks_vote3_CAN1_s;    /* '<S298>/Data Store Read' */
uint16_T Rx_msg_ticks_vote3_CAN2_s;    /* '<S298>/Data Store Read1' */
uint16_T Rx_msg_ticks_vote2_CAN1_s;    /* '<S269>/Data Store Read' */
uint16_T Rx_msg_ticks_vote2_CAN2_s;    /* '<S269>/Data Store Read1' */
uint16_T Rx_msg_ticks_vote1_CAN1_s;    /* '<S240>/Data Store Read' */
uint16_T Rx_msg_ticks_vote1_CAN2_s;    /* '<S240>/Data Store Read1' */
uint16_T Rx_init_LT;                   /* '<S49>/Cast' */
uint8_T TMR_miss1_set;                 /* '<S766>/Data Store Read20' */
uint8_T TMR_miss2_set;                 /* '<S766>/Data Store Read22' */
uint8_T TMR_miss1_sensor;              /* '<S766>/Data Store Read21' */
uint8_T TMR_miss2_sensor;              /* '<S766>/Data Store Read23' */
uint8_T error_log1_s;                  /* '<S766>/Sum' */
uint8_T error_log2_s;                  /* '<S766>/Sum1' */
uint8_T error_log3_s;                  /* '<S766>/Sum2' */
uint8_T shift7_s;                      /* '<S827>/bit_shift' */
uint8_T shift6_s;                      /* '<S826>/bit_shift' */
uint8_T shift5_s;                      /* '<S825>/bit_shift' */
uint8_T shift4_s;                      /* '<S824>/bit_shift' */
uint8_T shift3_s;                      /* '<S822>/bit_shift' */
uint8_T shift2_s;                      /* '<S811>/bit_shift' */
uint8_T shift1_s;                      /* '<S810>/bit_shift' */
uint8_T Rx_id_sync1_CAN2;              /* '<S756>/bit_shift' */
uint8_T Rx_mc_sync1_CAN2;              /* '<S755>/bit_shift' */
uint8_T Rx_bc_sync1_CAN2;              /* '<S754>/bit_shift' */
uint8_T Rx_id_sync1_CAN1;              /* '<S744>/bit_shift' */
uint8_T Rx_mc_sync1_CAN1;              /* '<S743>/bit_shift' */
uint8_T Rx_bc_sync1_CAN1;              /* '<S742>/bit_shift' */
uint8_T Rx_id_setvalues_CAN2;          /* '<S711>/bit_shift' */
uint8_T Rx_mc_setvalues_CAN2;          /* '<S710>/bit_shift' */
uint8_T Rx_bc_setvalues_CAN2;          /* '<S709>/bit_shift' */
uint8_T Rx_id_setvalues_CAN1;          /* '<S699>/bit_shift' */
uint8_T Rx_mc_setvalues_CAN1;          /* '<S698>/bit_shift' */
uint8_T Rx_bc_setvalues_CAN1;          /* '<S697>/bit_shift' */
uint8_T Rx_id_sensorvalues_CAN2;       /* '<S658>/bit_shift' */
uint8_T Rx_mc_sensorvalues_CAN2;       /* '<S657>/bit_shift' */
uint8_T Rx_bc_sensorvalues_CAN2;       /* '<S656>/bit_shift' */
uint8_T Rx_id_sensorvalues_CAN1;       /* '<S646>/bit_shift' */
uint8_T Rx_mc_sensorvalues_CAN1;       /* '<S645>/bit_shift' */
uint8_T Rx_bc_sensorvalues_CAN1;       /* '<S644>/bit_shift' */
uint8_T Rx_id_outemulator_CAN2;        /* '<S629>/bit_shift' */
uint8_T Rx_mc_outemulator_CAN2;        /* '<S628>/bit_shift' */
uint8_T Rx_bc_outemulator_CAN2;        /* '<S627>/bit_shift' */
uint8_T Rx_id_outemulator_CAN1;        /* '<S617>/bit_shift' */
uint8_T Rx_mc_outemulator_CAN1;        /* '<S616>/bit_shift' */
uint8_T Rx_bc_outemulator_CAN1;        /* '<S615>/bit_shift' */
uint8_T Rx_id_outcontrol2_CAN2;        /* '<S601>/bit_shift' */
uint8_T Rx_mc_outcontrol2_CAN2;        /* '<S600>/bit_shift' */
uint8_T Rx_bc_outcontrol2_CAN2;        /* '<S599>/bit_shift' */
uint8_T Rx_id_outcontrol2_CAN1;        /* '<S589>/bit_shift' */
uint8_T Rx_mc_outcontrol2_CAN1;        /* '<S588>/bit_shift' */
uint8_T Rx_bc_outcontrol2_CAN1;        /* '<S587>/bit_shift' */
uint8_T Rx_id_outcontrol1_CAN2;        /* '<S572>/bit_shift' */
uint8_T Rx_mc_outcontrol1_CAN2;        /* '<S571>/bit_shift' */
uint8_T Rx_bc_outcontrol1_CAN2;        /* '<S570>/bit_shift' */
uint8_T Rx_id_outcontrol1_CAN1;        /* '<S560>/bit_shift' */
uint8_T Rx_mc_outcontrol1_CAN1;        /* '<S559>/bit_shift' */
uint8_T Rx_bc_outcontrol1_CAN1;        /* '<S558>/bit_shift' */
uint8_T Rx_id_vote3_CAN2;              /* '<S318>/bit_shift' */
uint8_T Rx_mc_vote3_CAN2;              /* '<S317>/bit_shift' */
uint8_T Rx_bc_vote3_CAN2;              /* '<S316>/bit_shift' */
uint8_T Rx_id_vote3_CAN1;              /* '<S306>/bit_shift' */
uint8_T Rx_mc_vote3_CAN1;              /* '<S305>/bit_shift' */
uint8_T Rx_bc_vote3_CAN1;              /* '<S304>/bit_shift' */
uint8_T Rx_id_vote2_CAN2;              /* '<S289>/bit_shift' */
uint8_T Rx_mc_vote2_CAN2;              /* '<S288>/bit_shift' */
uint8_T Rx_bc_vote2_CAN2;              /* '<S287>/bit_shift' */
uint8_T Rx_id_vote2_CAN1;              /* '<S277>/bit_shift' */
uint8_T Rx_mc_vote2_CAN1;              /* '<S276>/bit_shift' */
uint8_T Rx_bc_vote2_CAN1;              /* '<S275>/bit_shift' */
uint8_T Rx_id_vote1_CAN2;              /* '<S260>/bit_shift' */
uint8_T Rx_mc_vote1_CAN2;              /* '<S259>/bit_shift' */
uint8_T Rx_bc_vote1_CAN2;              /* '<S258>/bit_shift' */
uint8_T Rx_id_vote1_CAN1;              /* '<S248>/bit_shift' */
uint8_T Rx_mc_vote1_CAN1;              /* '<S247>/bit_shift' */
uint8_T Rx_bc_vote1_CAN1;              /* '<S246>/bit_shift' */
uint8_T Vote_s;                        /* '<S235>/Cast' */
uint8_T Rx_id_sync0_CAN2;              /* '<S225>/bit_shift' */
uint8_T Rx_mc_sync0_CAN2;              /* '<S224>/bit_shift' */
uint8_T Rx_bc_sync0_CAN2;              /* '<S223>/bit_shift' */
uint8_T Rx_id_sync0_CAN1;              /* '<S213>/bit_shift' */
uint8_T Rx_mc_sync0_CAN1;              /* '<S212>/bit_shift' */
uint8_T Rx_bc_sync0_CAN1;              /* '<S211>/bit_shift' */
uint8_T Rx_init_id;                    /* '<S58>/bit_shift' */
uint8_T Rx_init_mc;                    /* '<S57>/bit_shift' */
uint8_T Rx_init_bc;                    /* '<S56>/bit_shift' */
uint8_T bacic_cycle_s;                 /* '<S29>/Switch' */
boolean_T BC1_sync_processed_s;        /* '<S88>/Data Store Read10' */
boolean_T BC0_sync_processed_s;        /* '<S88>/Data Store Read2' */
boolean_T BC0_vote1_processed_s;       /* '<S88>/Data Store Read7' */
boolean_T BC0_vote2_processed_s;       /* '<S88>/Data Store Read8' */
boolean_T BC0_vote3_processed_s;       /* '<S88>/Data Store Read9' */
boolean_T TMR_miss_set;                /* '<S766>/Data Store Read24' */
boolean_T TMR_miss_sensor;             /* '<S766>/Data Store Read25' */
boolean_T TMR_miss_out1;               /* '<S766>/NOT4' */
boolean_T TMR_miss_out2;               /* '<S766>/NOT5' */
boolean_T tau_fr_agree_s;              /* '<S809>/AND' */
boolean_T tau_fl_agree_s;              /* '<S809>/AND1' */
boolean_T tau_ar_agree_s;              /* '<S809>/AND2' */
boolean_T tau_al_agree_s;              /* '<S809>/AND3' */
boolean_T tau_fr2_agree_s;             /* '<S808>/AND' */
boolean_T tau_fl2_agree_s;             /* '<S808>/AND1' */
boolean_T tau_ar2_agree_s;             /* '<S808>/AND2' */
boolean_T tau_al2_agree_s;             /* '<S808>/AND3' */
boolean_T tau_fr1_agree_s;             /* '<S807>/AND' */
boolean_T tau_fl1_agree_s;             /* '<S807>/AND1' */
boolean_T tau_ar1_agree_s;             /* '<S807>/AND2' */
boolean_T tau_al1_agree_s;             /* '<S807>/AND3' */
boolean_T new_set_rx_s;                /* '<S692>/Data Store Read5' */
boolean_T new_sensor_rx_s;             /* '<S639>/Data Store Read5' */
boolean_T out2_rx_s;                   /* '<S581>/OR' */
boolean_T out1_rx_s;                   /* '<S552>/OR' */
boolean_T reset_s;                     /* '<S98>/Data Store Read' */
real_T Tx_temporal_msg_CAN2;           /* '<S22>/Cast To Double' */
uint32_T TxCAN2_counter_s;             /* '<S22>/Sum1' */
uint32_T TxID_CAN2_s;                  /* '<S22>/Data Store Read3' */
uint16_T Local_Ticks_Activation_CAN2_send;/* '<S22>/Data Store Read1' */
uint16_T FRC_Activation_CAN2_send;     /* '<S919>/Level-2 M-file S-Function' */
real_T Rx_temporal_msg_CAN2;           /* '<S890>/Cast To Double' */
uint32_T RxCAN2_counter_s;             /* '<S21>/Sum1' */
uint32_T RxID_CAN2_s;                  /* '<S21>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN2;            /* '<S890>/Local_Time' */
real_T Rx_temporal_msg_CAN1;           /* '<S857>/Cast To Double' */
uint32_T RxCAN1_counter_s;             /* '<S19>/Sum1' */
uint32_T RxID_CAN1_s;                  /* '<S19>/Data Store Read' */
uint16_T Rx_msg_ticks_CAN1;            /* '<S857>/Local_Time' */
real_T Tx_temporal_msg_CAN1;           /* '<S20>/Cast To Double' */
uint32_T TxCAN1_counter_s;             /* '<S20>/Sum1' */
uint32_T TxID_CAN1_s;                  /* '<S20>/Data Store Read3' */
uint16_T Local_Ticks_Activation_CAN1_send;/* '<S20>/Data Store Read1' */
uint16_T FRC_Activation_CAN1_send;     /* '<S886>/Level-2 M-file S-Function' */

/* Exported block parameters */
real_T speed_k_d = 0.0;                /* Variable: speed_k_d
                                        * Referenced by: '<S527>/Gain7'
                                        */
real_T speed_k_i = 0.001;              /* Variable: speed_k_i
                                        * Referenced by: '<S527>/Gain6'
                                        */
real_T speed_k_p = 20.0;               /* Variable: speed_k_p
                                        * Referenced by: '<S527>/Gain5'
                                        */
real_T torque_a_k_d = 0.0;             /* Variable: torque_a_k_d
                                        * Referenced by: '<S537>/Gain7'
                                        */
real_T torque_a_k_i = 1.0;             /* Variable: torque_a_k_i
                                        * Referenced by: '<S537>/Gain6'
                                        */
real_T torque_a_k_p = 1.0;             /* Variable: torque_a_k_p
                                        * Referenced by: '<S537>/Gain5'
                                        */
real_T torque_f_k_d = 0.0;             /* Variable: torque_f_k_d
                                        * Referenced by: '<S537>/Gain4'
                                        */
real_T torque_f_k_i = 1.0;             /* Variable: torque_f_k_i
                                        * Referenced by: '<S537>/Gain3'
                                        */
real_T torque_f_k_p = 1.0;             /* Variable: torque_f_k_p
                                        * Referenced by: '<S537>/Gain2'
                                        */
boolean_T HANtuneOverride = 0;         /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Block signals (default storage) */
BlockIO rtB;

/* Block states (default storage) */
D_Work rtDWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates rtPrevZCSigState;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_scheduler(void);
static tCanDataTypes canTxData;
static tCanDataTypes canRxData_0_23U;
static tCanDataTypes canRxData_0_24U;
static tCanDataTypes canRxData_0_25U;
static tCanDataTypes canRxData_0_22U;
static tCanDataTypes canRxData_0_21U;
static tCanDataTypes canRxData_0_1U;
static tCanDataTypes canRxData_0_11U;
static tCanDataTypes canRxData_0_12U;
static tCanDataTypes canRxData_0_13U;
static tCanDataTypes canRxData_1_23U;
static tCanDataTypes canRxData_1_24U;
static tCanDataTypes canRxData_1_25U;
static tCanDataTypes canRxData_1_22U;
static tCanDataTypes canRxData_1_21U;
static tCanDataTypes canRxData_1_1U;
static tCanDataTypes canRxData_1_11U;
static tCanDataTypes canRxData_1_12U;
static tCanDataTypes canRxData_1_13U;

/*
 * Swaps the values of two bytes.
 * a, b pointers to data values that need swapping
 */
static void swap(unsigned char *a, unsigned char *b)
{
  register char i = *a;
  *a = *b;
  *b = i;
}                                      /*** end of swap ***/

/*
 * Swaps all bytes in b. Typically used to fix endianes.
 * b pointer to data with bytes to swap
 * n number of bytes to swap
 */
void ByteSwap_x(uint8_t *b, size_t n)
{
  int i = 0;
  int j = n-1;
  while (i<j) {
    swap(&b[i], &b[j]);
    i++, j--;
  }
}

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void)
{
  /* Output and update for function-call system: '<S6>/Local Time generation' */
  {
    /* local block i/o variables */
    uint16_T rtb_Level2MfileSFunction;

    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant2'
     *  DataStoreRead: '<S26>/Data Store Read'
     *  DataStoreRead: '<S26>/Data Store Read1'
     *  Sum: '<S26>/Sum1'
     */
    if (rtB.Logic[0]) {
      local_ticks_interrupt = (uint16_T)((uint32_T)rtDWork.Local_Ticks +
        ((uint16_T)1U));
    } else {
      local_ticks_interrupt = rtDWork.Local_Ticks;
    }

    /* End of Switch: '<S26>/Switch' */

    /* DataStoreWrite: '<S26>/Data Store Write' */
    rtDWork.Local_Ticks = local_ticks_interrupt;

    /* Chart: '<S26>/Chart' */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Local Time generation/Chart */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Local Time generation/Chart */
    if (rtDWork.bitsForTID1.is_active_c9_HANcoder_E407_TTA_ == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Local Time generation/Chart */
      rtDWork.bitsForTID1.is_active_c9_HANcoder_E407_TTA_ = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Local Time generation/Chart */
      /* Transition: '<S925>:10' */
      /* Entry 'Send_Trigger': '<S925>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S6>/CAN Management' */
        /* Event: '<S925>:3' */
        CANManagement(&rtB.CANManagement_c, &rtConstB.CANManagement_c,
                      &rtDWork.CANManagement_c, &rtDWork.Board_ID,
                      &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                      &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                      &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                      &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                      &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                      &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2,
                      &rtDWork.Rx_State_CAN1, &rtDWork.Rx_State_CAN2,
                      &rtDWork.Toggle_Pin_A0, &rtDWork.TxID_CAN1,
                      &rtDWork.TxID_CAN2, &rtDWork.Tx_msg_count_CAN1,
                      &rtDWork.Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S6>/CAN Management' */
      }
    } else {
      /* During 'Send_Trigger': '<S925>:9' */
      if (rtB.Logic[0]) {
        /* Outputs for Function Call SubSystem: '<S6>/CAN Management' */
        /* Event: '<S925>:3' */
        CANManagement(&rtB.CANManagement_c, &rtConstB.CANManagement_c,
                      &rtDWork.CANManagement_c, &rtDWork.Board_ID,
                      &rtDWork.Local_Ticks, &rtDWork.Master_ID,
                      &rtDWork.Msg_Rx_CAN1, &rtDWork.Msg_Rx_CAN2,
                      &rtDWork.Msg_Rx_Ticks_CAN1, &rtDWork.Msg_Rx_Ticks_CAN2,
                      &rtDWork.Msg_Tx_CAN1, &rtDWork.Msg_Tx_CAN2,
                      &rtDWork.New_Msg_Ready_CAN1, &rtDWork.New_Msg_Ready_CAN2,
                      &rtDWork.RxID_CAN1, &rtDWork.RxID_CAN2,
                      &rtDWork.Rx_State_CAN1, &rtDWork.Rx_State_CAN2,
                      &rtDWork.Toggle_Pin_A0, &rtDWork.TxID_CAN1,
                      &rtDWork.TxID_CAN2, &rtDWork.Tx_msg_count_CAN1,
                      &rtDWork.Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S6>/CAN Management' */
      }
    }

    /* End of Chart: '<S26>/Chart' */
    /* M-S-Function: '<S926>/Level-2 M-file S-Function' */
    /* read 16-bit free running counter timestamp of the last output compare event */
    rtb_Level2MfileSFunction = TimeoutGetLastEventCounter(TIMEOUT_TIM4_PIN_PD12);

    /* Sum: '<S26>/Sum' incorporates:
     *  Constant: '<S26>/Constant'
     */
    rtB.Sum = (uint16_T)((uint32_T)rtb_Level2MfileSFunction + ((uint16_T)100U));

    /* Update for M-S-Function: '<S927>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S26>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, rtB.Sum, (tTimeoutAction)
      ((uint8_T)3U));
  }
}

void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void)
{
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.1s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 19) {/* Sample time: [0.2s, 0.0s] */
    rtM->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Output and update for function-call system: '<S6>/CAN1 Send' */
void CAN1Send(rtB_CAN1Send *localB, rtDW_CAN1Send *localDW, uint16_T
              *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, boolean_T
              *rtd_Toggle_Pin_A0, uint32_T *rtd_TxID_CAN1, real_T
              *rtd_Tx_msg_count_CAN1)
{
  /* DataStoreWrite: '<S20>/Data Store Write2' incorporates:
   *  Constant: '<S20>/Constant8'
   *  Sum: '<S20>/Plus'
   */
  *rtd_Tx_msg_count_CAN1 += 1.0;

  /* DataStoreWrite: '<S20>/Data Store Write1' incorporates:
   *  Constant: '<S20>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S20>/Sum1' incorporates:
   *  Constant: '<S20>/Constant3'
   *  DataStoreRead: '<S20>/Data Store Read'
   */
  TxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S20>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN1_counter_s;

  /* DataTypeConversion: '<S20>/Cast To Double' */
  Tx_temporal_msg_CAN1 = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataStoreRead: '<S20>/Data Store Read3' */
  TxID_CAN1_s = *rtd_TxID_CAN1;

  /* DataTypeConversion: '<S20>/Data Type Conversion' */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN1->Buffer_1;

  /* DataTypeConversion: '<S20>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN1_s;

  /* DataTypeConversion: '<S20>/Data Type Conversion10' */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN1->Buffer_8;

  /* DataTypeConversion: '<S20>/Data Type Conversion4' */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN1->Buffer_2;

  /* DataTypeConversion: '<S20>/Data Type Conversion5' */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN1->Buffer_3;

  /* DataTypeConversion: '<S20>/Data Type Conversion6' */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN1->Buffer_4;

  /* DataTypeConversion: '<S20>/Data Type Conversion7' */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN1->Buffer_5;

  /* DataTypeConversion: '<S20>/Data Type Conversion8' */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN1->Buffer_6;

  /* DataTypeConversion: '<S20>/Data Type Conversion9' */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN1->Buffer_7;

  /* DataStoreRead: '<S20>/Data Store Read1' */
  Local_Ticks_Activation_CAN1_send = *rtd_Local_Ticks;

  /* M-S-Function: '<S886>/Level-2 M-file S-Function' */
  /* read 16-bit free running counter value */
  FRC_Activation_CAN1_send = TimeoutGetFreeRunningCounter(TIMEOUT_MODULE_TIM4);

  /* Update for M-S-Function: '<S885>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(0, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/* Disable for function-call system: '<S6>/CAN1 Recieve' */
void CAN1Recieve_Disable(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S856>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for Outport: '<S863>/CAN_new' */
    localB->SFunction_o1_h = 0;

    /* Disable for Outport: '<S863>/Out2' */
    localB->In1_p = ((uint8_T)0U);

    /* Disable for Outport: '<S863>/Out3' */
    localB->In2_k = ((uint8_T)0U);

    /* Disable for Outport: '<S863>/Out4' */
    localB->In3_b = ((uint8_T)0U);

    /* Disable for Outport: '<S863>/Out5' */
    localB->In4_l = ((uint8_T)0U);

    /* Disable for Outport: '<S863>/Out6' */
    localB->In5_c = ((uint8_T)0U);

    /* Disable for Outport: '<S863>/Out7' */
    localB->In6_i = ((uint8_T)0U);

    /* Disable for Outport: '<S863>/Out8' */
    localB->In7_m = ((uint8_T)0U);

    /* Disable for Outport: '<S863>/Out9' */
    localB->In8_c = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for Outport: '<S864>/CAN_new' */
    localB->SFunction_o1_m = 0;

    /* Disable for Outport: '<S864>/Out2' */
    localB->In1_d = ((uint8_T)0U);

    /* Disable for Outport: '<S864>/Out3' */
    localB->In2_a = ((uint8_T)0U);

    /* Disable for Outport: '<S864>/Out4' */
    localB->In3_n = ((uint8_T)0U);

    /* Disable for Outport: '<S864>/Out5' */
    localB->In4_m = ((uint8_T)0U);

    /* Disable for Outport: '<S864>/Out6' */
    localB->In5_k = ((uint8_T)0U);

    /* Disable for Outport: '<S864>/Out7' */
    localB->In6_j = ((uint8_T)0U);

    /* Disable for Outport: '<S864>/Out8' */
    localB->In7_o = ((uint8_T)0U);

    /* Disable for Outport: '<S864>/Out9' */
    localB->In8_k = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for Outport: '<S865>/CAN_new' */
    localB->SFunction_o1_e = 0;

    /* Disable for Outport: '<S865>/Out2' */
    localB->In1_j = ((uint8_T)0U);

    /* Disable for Outport: '<S865>/Out3' */
    localB->In2_l = ((uint8_T)0U);

    /* Disable for Outport: '<S865>/Out4' */
    localB->In3_o = ((uint8_T)0U);

    /* Disable for Outport: '<S865>/Out5' */
    localB->In4_c = ((uint8_T)0U);

    /* Disable for Outport: '<S865>/Out6' */
    localB->In5_g = ((uint8_T)0U);

    /* Disable for Outport: '<S865>/Out7' */
    localB->In6_h = ((uint8_T)0U);

    /* Disable for Outport: '<S865>/Out8' */
    localB->In7_b = ((uint8_T)0U);

    /* Disable for Outport: '<S865>/Out9' */
    localB->In8_a = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for Outport: '<S866>/CAN_new' */
    localB->SFunction_o1 = 0;

    /* Disable for Outport: '<S866>/Out2' */
    localB->In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S866>/Out3' */
    localB->In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S866>/Out4' */
    localB->In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S866>/Out5' */
    localB->In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S866>/Out6' */
    localB->In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S866>/Out7' */
    localB->In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S866>/Out8' */
    localB->In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S866>/Out9' */
    localB->In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/SetValues_ID_CAN' */
  if (localDW->SetValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S862>/CAN_new' */
    localB->SFunction_o1_l = 0;

    /* Disable for Outport: '<S862>/Out2' */
    localB->In1_pn = ((uint8_T)0U);

    /* Disable for Outport: '<S862>/Out3' */
    localB->In2_b = ((uint8_T)0U);

    /* Disable for Outport: '<S862>/Out4' */
    localB->In3_k = ((uint8_T)0U);

    /* Disable for Outport: '<S862>/Out5' */
    localB->In4_h = ((uint8_T)0U);

    /* Disable for Outport: '<S862>/Out6' */
    localB->In5_l = ((uint8_T)0U);

    /* Disable for Outport: '<S862>/Out7' */
    localB->In6_m = ((uint8_T)0U);

    /* Disable for Outport: '<S862>/Out8' */
    localB->In7_mm = ((uint8_T)0U);

    /* Disable for Outport: '<S862>/Out9' */
    localB->In8_e = ((uint8_T)0U);
    localDW->SetValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/SetValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/SensorValues_ID_CAN' */
  if (localDW->SensorValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S861>/CAN_new' */
    localB->SFunction_o1_i = 0;

    /* Disable for Outport: '<S861>/Out2' */
    localB->In1_k = ((uint8_T)0U);

    /* Disable for Outport: '<S861>/Out3' */
    localB->In2_c = ((uint8_T)0U);

    /* Disable for Outport: '<S861>/Out4' */
    localB->In3_i = ((uint8_T)0U);

    /* Disable for Outport: '<S861>/Out5' */
    localB->In4_b = ((uint8_T)0U);

    /* Disable for Outport: '<S861>/Out6' */
    localB->In5_m = ((uint8_T)0U);

    /* Disable for Outport: '<S861>/Out7' */
    localB->In6_n = ((uint8_T)0U);

    /* Disable for Outport: '<S861>/Out8' */
    localB->In7_l = ((uint8_T)0U);

    /* Disable for Outport: '<S861>/Out9' */
    localB->In8_aa = ((uint8_T)0U);
    localDW->SensorValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/SensorValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/OutControl1_ID_CAN' */
  if (localDW->OutControl1_ID_CAN_MODE) {
    /* Disable for Outport: '<S858>/CAN_new' */
    localB->SFunction_o1_k = 0;

    /* Disable for Outport: '<S858>/Out2' */
    localB->In1_g = ((uint8_T)0U);

    /* Disable for Outport: '<S858>/Out3' */
    localB->In2_p = ((uint8_T)0U);

    /* Disable for Outport: '<S858>/Out4' */
    localB->In3_l = ((uint8_T)0U);

    /* Disable for Outport: '<S858>/Out5' */
    localB->In4_n = ((uint8_T)0U);

    /* Disable for Outport: '<S858>/Out6' */
    localB->In5_o = ((uint8_T)0U);

    /* Disable for Outport: '<S858>/Out7' */
    localB->In6_l = ((uint8_T)0U);

    /* Disable for Outport: '<S858>/Out8' */
    localB->In7_f = ((uint8_T)0U);

    /* Disable for Outport: '<S858>/Out9' */
    localB->In8_kx = ((uint8_T)0U);
    localDW->OutControl1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/OutControl1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/OutControl2_ID_CAN' */
  if (localDW->OutControl2_ID_CAN_MODE) {
    /* Disable for Outport: '<S859>/CAN_new' */
    localB->SFunction_o1_b = 0;

    /* Disable for Outport: '<S859>/Out2' */
    localB->In1_c = ((uint8_T)0U);

    /* Disable for Outport: '<S859>/Out3' */
    localB->In2_i = ((uint8_T)0U);

    /* Disable for Outport: '<S859>/Out4' */
    localB->In3_m = ((uint8_T)0U);

    /* Disable for Outport: '<S859>/Out5' */
    localB->In4_iv = ((uint8_T)0U);

    /* Disable for Outport: '<S859>/Out6' */
    localB->In5_h = ((uint8_T)0U);

    /* Disable for Outport: '<S859>/Out7' */
    localB->In6_d = ((uint8_T)0U);

    /* Disable for Outport: '<S859>/Out8' */
    localB->In7_bt = ((uint8_T)0U);

    /* Disable for Outport: '<S859>/Out9' */
    localB->In8_ku = ((uint8_T)0U);
    localDW->OutControl2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/OutControl2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S856>/OutEmulator_ID_CAN' */
  if (localDW->OutEmulator_ID_CAN_MODE) {
    /* Disable for Outport: '<S860>/CAN_new' */
    localB->SFunction_o1_o = 0;

    /* Disable for Outport: '<S860>/Out2' */
    localB->In1_b = ((uint8_T)0U);

    /* Disable for Outport: '<S860>/Out3' */
    localB->In2_o = ((uint8_T)0U);

    /* Disable for Outport: '<S860>/Out4' */
    localB->In3_oq = ((uint8_T)0U);

    /* Disable for Outport: '<S860>/Out5' */
    localB->In4_i = ((uint8_T)0U);

    /* Disable for Outport: '<S860>/Out6' */
    localB->In5_md = ((uint8_T)0U);

    /* Disable for Outport: '<S860>/Out7' */
    localB->In6_hx = ((uint8_T)0U);

    /* Disable for Outport: '<S860>/Out8' */
    localB->In7_k = ((uint8_T)0U);

    /* Disable for Outport: '<S860>/Out9' */
    localB->In8_l = ((uint8_T)0U);
    localDW->OutEmulator_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S856>/OutEmulator_ID_CAN' */
}

/* Start for function-call system: '<S6>/CAN1 Recieve' */
void CAN1Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S856>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S877>/S-Function' incorporates:
   *  Constant: '<S863>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 1U);

  /* End of Start for SubSystem: '<S856>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S879>/S-Function' incorporates:
   *  Constant: '<S864>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 11U);

  /* End of Start for SubSystem: '<S856>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S881>/S-Function' incorporates:
   *  Constant: '<S865>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 12U);

  /* End of Start for SubSystem: '<S856>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S883>/S-Function' incorporates:
   *  Constant: '<S866>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 13U);

  /* End of Start for SubSystem: '<S856>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/SetValues_ID_CAN' */

  /* Start for M-S-Function: '<S875>/S-Function' incorporates:
   *  Constant: '<S862>/Constant4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 21U);

  /* End of Start for SubSystem: '<S856>/SetValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/SensorValues_ID_CAN' */

  /* Start for M-S-Function: '<S873>/S-Function' incorporates:
   *  Constant: '<S861>/Constant5'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 22U);

  /* End of Start for SubSystem: '<S856>/SensorValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/OutControl1_ID_CAN' */

  /* Start for M-S-Function: '<S867>/S-Function' incorporates:
   *  Constant: '<S858>/Constant6'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 23U);

  /* End of Start for SubSystem: '<S856>/OutControl1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/OutControl2_ID_CAN' */

  /* Start for M-S-Function: '<S869>/S-Function' incorporates:
   *  Constant: '<S859>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 24U);

  /* End of Start for SubSystem: '<S856>/OutControl2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S856>/OutEmulator_ID_CAN' */

  /* Start for M-S-Function: '<S871>/S-Function' incorporates:
   *  Constant: '<S860>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(0, 25U);

  /* End of Start for SubSystem: '<S856>/OutEmulator_ID_CAN' */
}

/* Output and update for function-call system: '<S6>/CAN1 Recieve' */
void CAN1Recieve(rtB_CAN1Recieve *localB, rtDW_CAN1Recieve *localDW, uint16_T
                 *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN1, uint16_T
                 *rtd_Msg_Rx_Ticks_CAN1, boolean_T *rtd_New_Msg_Ready_CAN1,
                 uint32_T *rtd_RxID_CAN1, uint8_T *rtd_Rx_State_CAN1, boolean_T *
                 rtd_Toggle_Pin_A0)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2;
  uint8_T rtb_SFunction_o3;
  uint8_T rtb_SFunction_o4;
  uint8_T rtb_SFunction_o5;
  uint8_T rtb_SFunction_o6;
  uint8_T rtb_SFunction_o7;
  uint8_T rtb_SFunction_o8;
  uint8_T rtb_SFunction_o9;
  uint8_T rtb_SFunction_o2_f;
  uint8_T rtb_SFunction_o3_m;
  uint8_T rtb_SFunction_o4_m;
  uint8_T rtb_SFunction_o5_j;
  uint8_T rtb_SFunction_o6_m;
  uint8_T rtb_SFunction_o7_h;
  uint8_T rtb_SFunction_o8_l;
  uint8_T rtb_SFunction_o9_k;
  uint8_T rtb_SFunction_o2_c;
  uint8_T rtb_SFunction_o3_c;
  uint8_T rtb_SFunction_o4_b;
  uint8_T rtb_SFunction_o5_k;
  uint8_T rtb_SFunction_o6_mm;
  uint8_T rtb_SFunction_o7_m;
  uint8_T rtb_SFunction_o8_g;
  uint8_T rtb_SFunction_o9_f;
  uint8_T rtb_SFunction_o2_c3;
  uint8_T rtb_SFunction_o3_h;
  uint8_T rtb_SFunction_o4_e;
  uint8_T rtb_SFunction_o5_m;
  uint8_T rtb_SFunction_o6_i;
  uint8_T rtb_SFunction_o7_ml;
  uint8_T rtb_SFunction_o8_n;
  uint8_T rtb_SFunction_o9_fm;
  uint8_T rtb_SFunction_o2_fr;
  uint8_T rtb_SFunction_o3_g;
  uint8_T rtb_SFunction_o4_g;
  uint8_T rtb_SFunction_o5_c;
  uint8_T rtb_SFunction_o6_g;
  uint8_T rtb_SFunction_o7_n;
  uint8_T rtb_SFunction_o8_k;
  uint8_T rtb_SFunction_o9_d;
  uint8_T rtb_SFunction_o2_h;
  uint8_T rtb_SFunction_o3_f;
  uint8_T rtb_SFunction_o4_n;
  uint8_T rtb_SFunction_o5_p;
  uint8_T rtb_SFunction_o6_h;
  uint8_T rtb_SFunction_o7_h2;
  uint8_T rtb_SFunction_o8_lv;
  uint8_T rtb_SFunction_o9_p;
  uint8_T rtb_SFunction_o2_fu;
  uint8_T rtb_SFunction_o3_mj;
  uint8_T rtb_SFunction_o4_j;
  uint8_T rtb_SFunction_o5_c5;
  uint8_T rtb_SFunction_o6_p;
  uint8_T rtb_SFunction_o7_j;
  uint8_T rtb_SFunction_o8_c;
  uint8_T rtb_SFunction_o9_f0;
  uint8_T rtb_SFunction_o2_a;
  uint8_T rtb_SFunction_o3_j;
  uint8_T rtb_SFunction_o4_o;
  uint8_T rtb_SFunction_o5_o;
  uint8_T rtb_SFunction_o6_n;
  uint8_T rtb_SFunction_o7_d;
  uint8_T rtb_SFunction_o8_e;
  uint8_T rtb_SFunction_o9_f2;
  uint8_T rtb_SFunction_o2_m;
  uint8_T rtb_SFunction_o3_h1;
  uint8_T rtb_SFunction_o4_i;
  uint8_T rtb_SFunction_o5_c4;
  uint8_T rtb_SFunction_o6_j;
  uint8_T rtb_SFunction_o7_o;
  uint8_T rtb_SFunction_o8_nw;
  uint8_T rtb_SFunction_o9_d5;
  boolean_T rtb_Equal_mj;
  boolean_T rtb_Equal1_bu;
  boolean_T rtb_Equal2_oo;
  boolean_T rtb_Equal3_n;
  boolean_T rtb_Equal4_gf;
  boolean_T rtb_Equal5_jt;
  boolean_T rtb_Equal6_o;
  boolean_T rtb_Equal7_g;
  int8_T rtb_signal1_jr;
  uint8_T rtb_signal2_n;
  uint8_T rtb_signal3;
  uint8_T rtb_signal4;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;

  /* Sum: '<S19>/Sum1' incorporates:
   *  Constant: '<S19>/Constant3'
   *  DataStoreRead: '<S19>/Data Store Read1'
   */
  RxCAN1_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S19>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN1_counter_s;

  /* DataStoreRead: '<S19>/Data Store Read' */
  RxID_CAN1_s = *rtd_RxID_CAN1;

  /* RelationalOperator: '<S856>/Equal' incorporates:
   *  Constant: '<S856>/Constant'
   */
  rtb_Equal_mj = (RxID_CAN1_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S856>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S863>/Enable'
   */
  if (rtb_Equal_mj) {
    if (!localDW->Sync_ID_CAN_MODE) {
      localDW->Sync_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S877>/S-Function' incorporates:
     *  Constant: '<S863>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_h = CanIoGetMessage(0, 1U, NULL,
      &canRxData_0_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_h > 0) {
      /* read the data */
      rtb_SFunction_o2_c3 = canRxData_0_1U.uint8_T_info[0];
      rtb_SFunction_o3_h = canRxData_0_1U.uint8_T_info[1];
      rtb_SFunction_o4_e = canRxData_0_1U.uint8_T_info[2];
      rtb_SFunction_o5_m = canRxData_0_1U.uint8_T_info[3];
      rtb_SFunction_o6_i = canRxData_0_1U.uint8_T_info[4];
      rtb_SFunction_o7_ml = canRxData_0_1U.uint8_T_info[5];
      rtb_SFunction_o8_n = canRxData_0_1U.uint8_T_info[6];
      rtb_SFunction_o9_fm = canRxData_0_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S877>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S878>/Enable'
     */
    if (localB->SFunction_o1_h > 0) {
      /* Inport: '<S878>/In1' */
      localB->In1_p = rtb_SFunction_o2_c3;

      /* Inport: '<S878>/In2' */
      localB->In2_k = rtb_SFunction_o3_h;

      /* Inport: '<S878>/In3' */
      localB->In3_b = rtb_SFunction_o4_e;

      /* Inport: '<S878>/In4' */
      localB->In4_l = rtb_SFunction_o5_m;

      /* Inport: '<S878>/In5' */
      localB->In5_c = rtb_SFunction_o6_i;

      /* Inport: '<S878>/In6' */
      localB->In6_i = rtb_SFunction_o7_ml;

      /* Inport: '<S878>/In7' */
      localB->In7_m = rtb_SFunction_o8_n;

      /* Inport: '<S878>/In8' */
      localB->In8_c = rtb_SFunction_o9_fm;
    }

    /* End of Outputs for SubSystem: '<S877>/Enabled Subsystem' */
  } else {
    if (localDW->Sync_ID_CAN_MODE) {
      /* Disable for Outport: '<S863>/CAN_new' */
      localB->SFunction_o1_h = 0;

      /* Disable for Outport: '<S863>/Out2' */
      localB->In1_p = ((uint8_T)0U);

      /* Disable for Outport: '<S863>/Out3' */
      localB->In2_k = ((uint8_T)0U);

      /* Disable for Outport: '<S863>/Out4' */
      localB->In3_b = ((uint8_T)0U);

      /* Disable for Outport: '<S863>/Out5' */
      localB->In4_l = ((uint8_T)0U);

      /* Disable for Outport: '<S863>/Out6' */
      localB->In5_c = ((uint8_T)0U);

      /* Disable for Outport: '<S863>/Out7' */
      localB->In6_i = ((uint8_T)0U);

      /* Disable for Outport: '<S863>/Out8' */
      localB->In7_m = ((uint8_T)0U);

      /* Disable for Outport: '<S863>/Out9' */
      localB->In8_c = ((uint8_T)0U);
      localDW->Sync_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/Sync_ID_CAN' */

  /* RelationalOperator: '<S856>/Equal1' incorporates:
   *  Constant: '<S856>/Constant1'
   */
  rtb_Equal1_bu = (RxID_CAN1_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S856>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S864>/Enable'
   */
  if (rtb_Equal1_bu) {
    if (!localDW->Vote1_ID_CAN_MODE) {
      localDW->Vote1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S879>/S-Function' incorporates:
     *  Constant: '<S864>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(0, 11U, NULL,
      &canRxData_0_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_c = canRxData_0_11U.uint8_T_info[0];
      rtb_SFunction_o3_c = canRxData_0_11U.uint8_T_info[1];
      rtb_SFunction_o4_b = canRxData_0_11U.uint8_T_info[2];
      rtb_SFunction_o5_k = canRxData_0_11U.uint8_T_info[3];
      rtb_SFunction_o6_mm = canRxData_0_11U.uint8_T_info[4];
      rtb_SFunction_o7_m = canRxData_0_11U.uint8_T_info[5];
      rtb_SFunction_o8_g = canRxData_0_11U.uint8_T_info[6];
      rtb_SFunction_o9_f = canRxData_0_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S879>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S880>/Enable'
     */
    if (localB->SFunction_o1_m > 0) {
      /* Inport: '<S880>/In1' */
      localB->In1_d = rtb_SFunction_o2_c;

      /* Inport: '<S880>/In2' */
      localB->In2_a = rtb_SFunction_o3_c;

      /* Inport: '<S880>/In3' */
      localB->In3_n = rtb_SFunction_o4_b;

      /* Inport: '<S880>/In4' */
      localB->In4_m = rtb_SFunction_o5_k;

      /* Inport: '<S880>/In5' */
      localB->In5_k = rtb_SFunction_o6_mm;

      /* Inport: '<S880>/In6' */
      localB->In6_j = rtb_SFunction_o7_m;

      /* Inport: '<S880>/In7' */
      localB->In7_o = rtb_SFunction_o8_g;

      /* Inport: '<S880>/In8' */
      localB->In8_k = rtb_SFunction_o9_f;
    }

    /* End of Outputs for SubSystem: '<S879>/Enabled Subsystem' */
  } else {
    if (localDW->Vote1_ID_CAN_MODE) {
      /* Disable for Outport: '<S864>/CAN_new' */
      localB->SFunction_o1_m = 0;

      /* Disable for Outport: '<S864>/Out2' */
      localB->In1_d = ((uint8_T)0U);

      /* Disable for Outport: '<S864>/Out3' */
      localB->In2_a = ((uint8_T)0U);

      /* Disable for Outport: '<S864>/Out4' */
      localB->In3_n = ((uint8_T)0U);

      /* Disable for Outport: '<S864>/Out5' */
      localB->In4_m = ((uint8_T)0U);

      /* Disable for Outport: '<S864>/Out6' */
      localB->In5_k = ((uint8_T)0U);

      /* Disable for Outport: '<S864>/Out7' */
      localB->In6_j = ((uint8_T)0U);

      /* Disable for Outport: '<S864>/Out8' */
      localB->In7_o = ((uint8_T)0U);

      /* Disable for Outport: '<S864>/Out9' */
      localB->In8_k = ((uint8_T)0U);
      localDW->Vote1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S856>/Equal2' incorporates:
   *  Constant: '<S856>/Constant2'
   */
  rtb_Equal2_oo = (RxID_CAN1_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S856>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S865>/Enable'
   */
  if (rtb_Equal2_oo) {
    if (!localDW->Vote2_ID_CAN_MODE) {
      localDW->Vote2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S881>/S-Function' incorporates:
     *  Constant: '<S865>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(0, 12U, NULL,
      &canRxData_0_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_f = canRxData_0_12U.uint8_T_info[0];
      rtb_SFunction_o3_m = canRxData_0_12U.uint8_T_info[1];
      rtb_SFunction_o4_m = canRxData_0_12U.uint8_T_info[2];
      rtb_SFunction_o5_j = canRxData_0_12U.uint8_T_info[3];
      rtb_SFunction_o6_m = canRxData_0_12U.uint8_T_info[4];
      rtb_SFunction_o7_h = canRxData_0_12U.uint8_T_info[5];
      rtb_SFunction_o8_l = canRxData_0_12U.uint8_T_info[6];
      rtb_SFunction_o9_k = canRxData_0_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S881>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S882>/Enable'
     */
    if (localB->SFunction_o1_e > 0) {
      /* Inport: '<S882>/In1' */
      localB->In1_j = rtb_SFunction_o2_f;

      /* Inport: '<S882>/In2' */
      localB->In2_l = rtb_SFunction_o3_m;

      /* Inport: '<S882>/In3' */
      localB->In3_o = rtb_SFunction_o4_m;

      /* Inport: '<S882>/In4' */
      localB->In4_c = rtb_SFunction_o5_j;

      /* Inport: '<S882>/In5' */
      localB->In5_g = rtb_SFunction_o6_m;

      /* Inport: '<S882>/In6' */
      localB->In6_h = rtb_SFunction_o7_h;

      /* Inport: '<S882>/In7' */
      localB->In7_b = rtb_SFunction_o8_l;

      /* Inport: '<S882>/In8' */
      localB->In8_a = rtb_SFunction_o9_k;
    }

    /* End of Outputs for SubSystem: '<S881>/Enabled Subsystem' */
  } else {
    if (localDW->Vote2_ID_CAN_MODE) {
      /* Disable for Outport: '<S865>/CAN_new' */
      localB->SFunction_o1_e = 0;

      /* Disable for Outport: '<S865>/Out2' */
      localB->In1_j = ((uint8_T)0U);

      /* Disable for Outport: '<S865>/Out3' */
      localB->In2_l = ((uint8_T)0U);

      /* Disable for Outport: '<S865>/Out4' */
      localB->In3_o = ((uint8_T)0U);

      /* Disable for Outport: '<S865>/Out5' */
      localB->In4_c = ((uint8_T)0U);

      /* Disable for Outport: '<S865>/Out6' */
      localB->In5_g = ((uint8_T)0U);

      /* Disable for Outport: '<S865>/Out7' */
      localB->In6_h = ((uint8_T)0U);

      /* Disable for Outport: '<S865>/Out8' */
      localB->In7_b = ((uint8_T)0U);

      /* Disable for Outport: '<S865>/Out9' */
      localB->In8_a = ((uint8_T)0U);
      localDW->Vote2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S856>/Equal3' incorporates:
   *  Constant: '<S856>/Constant3'
   */
  rtb_Equal3_n = (RxID_CAN1_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S856>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S866>/Enable'
   */
  if (rtb_Equal3_n) {
    if (!localDW->Vote3_ID_CAN_MODE) {
      localDW->Vote3_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S883>/S-Function' incorporates:
     *  Constant: '<S866>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(0, 13U, NULL,
      &canRxData_0_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2 = canRxData_0_13U.uint8_T_info[0];
      rtb_SFunction_o3 = canRxData_0_13U.uint8_T_info[1];
      rtb_SFunction_o4 = canRxData_0_13U.uint8_T_info[2];
      rtb_SFunction_o5 = canRxData_0_13U.uint8_T_info[3];
      rtb_SFunction_o6 = canRxData_0_13U.uint8_T_info[4];
      rtb_SFunction_o7 = canRxData_0_13U.uint8_T_info[5];
      rtb_SFunction_o8 = canRxData_0_13U.uint8_T_info[6];
      rtb_SFunction_o9 = canRxData_0_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S883>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S884>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S884>/In1' */
      localB->In1 = rtb_SFunction_o2;

      /* Inport: '<S884>/In2' */
      localB->In2 = rtb_SFunction_o3;

      /* Inport: '<S884>/In3' */
      localB->In3 = rtb_SFunction_o4;

      /* Inport: '<S884>/In4' */
      localB->In4 = rtb_SFunction_o5;

      /* Inport: '<S884>/In5' */
      localB->In5 = rtb_SFunction_o6;

      /* Inport: '<S884>/In6' */
      localB->In6 = rtb_SFunction_o7;

      /* Inport: '<S884>/In7' */
      localB->In7 = rtb_SFunction_o8;

      /* Inport: '<S884>/In8' */
      localB->In8 = rtb_SFunction_o9;
    }

    /* End of Outputs for SubSystem: '<S883>/Enabled Subsystem' */
  } else {
    if (localDW->Vote3_ID_CAN_MODE) {
      /* Disable for Outport: '<S866>/CAN_new' */
      localB->SFunction_o1 = 0;

      /* Disable for Outport: '<S866>/Out2' */
      localB->In1 = ((uint8_T)0U);

      /* Disable for Outport: '<S866>/Out3' */
      localB->In2 = ((uint8_T)0U);

      /* Disable for Outport: '<S866>/Out4' */
      localB->In3 = ((uint8_T)0U);

      /* Disable for Outport: '<S866>/Out5' */
      localB->In4 = ((uint8_T)0U);

      /* Disable for Outport: '<S866>/Out6' */
      localB->In5 = ((uint8_T)0U);

      /* Disable for Outport: '<S866>/Out7' */
      localB->In6 = ((uint8_T)0U);

      /* Disable for Outport: '<S866>/Out8' */
      localB->In7 = ((uint8_T)0U);

      /* Disable for Outport: '<S866>/Out9' */
      localB->In8 = ((uint8_T)0U);
      localDW->Vote3_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S856>/Equal4' incorporates:
   *  Constant: '<S856>/Constant4'
   */
  rtb_Equal4_gf = (RxID_CAN1_s == 21.0);

  /* Outputs for Enabled SubSystem: '<S856>/SetValues_ID_CAN' incorporates:
   *  EnablePort: '<S862>/Enable'
   */
  if (rtb_Equal4_gf) {
    if (!localDW->SetValues_ID_CAN_MODE) {
      localDW->SetValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S875>/S-Function' incorporates:
     *  Constant: '<S862>/Constant4'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_l = CanIoGetMessage(0, 21U, NULL,
      &canRxData_0_21U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_l > 0) {
      /* read the data */
      rtb_SFunction_o2_fr = canRxData_0_21U.uint8_T_info[0];
      rtb_SFunction_o3_g = canRxData_0_21U.uint8_T_info[1];
      rtb_SFunction_o4_g = canRxData_0_21U.uint8_T_info[2];
      rtb_SFunction_o5_c = canRxData_0_21U.uint8_T_info[3];
      rtb_SFunction_o6_g = canRxData_0_21U.uint8_T_info[4];
      rtb_SFunction_o7_n = canRxData_0_21U.uint8_T_info[5];
      rtb_SFunction_o8_k = canRxData_0_21U.uint8_T_info[6];
      rtb_SFunction_o9_d = canRxData_0_21U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S875>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S876>/Enable'
     */
    if (localB->SFunction_o1_l > 0) {
      /* Inport: '<S876>/In1' */
      localB->In1_pn = rtb_SFunction_o2_fr;

      /* Inport: '<S876>/In2' */
      localB->In2_b = rtb_SFunction_o3_g;

      /* Inport: '<S876>/In3' */
      localB->In3_k = rtb_SFunction_o4_g;

      /* Inport: '<S876>/In4' */
      localB->In4_h = rtb_SFunction_o5_c;

      /* Inport: '<S876>/In5' */
      localB->In5_l = rtb_SFunction_o6_g;

      /* Inport: '<S876>/In6' */
      localB->In6_m = rtb_SFunction_o7_n;

      /* Inport: '<S876>/In7' */
      localB->In7_mm = rtb_SFunction_o8_k;

      /* Inport: '<S876>/In8' */
      localB->In8_e = rtb_SFunction_o9_d;
    }

    /* End of Outputs for SubSystem: '<S875>/Enabled Subsystem' */
  } else {
    if (localDW->SetValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S862>/CAN_new' */
      localB->SFunction_o1_l = 0;

      /* Disable for Outport: '<S862>/Out2' */
      localB->In1_pn = ((uint8_T)0U);

      /* Disable for Outport: '<S862>/Out3' */
      localB->In2_b = ((uint8_T)0U);

      /* Disable for Outport: '<S862>/Out4' */
      localB->In3_k = ((uint8_T)0U);

      /* Disable for Outport: '<S862>/Out5' */
      localB->In4_h = ((uint8_T)0U);

      /* Disable for Outport: '<S862>/Out6' */
      localB->In5_l = ((uint8_T)0U);

      /* Disable for Outport: '<S862>/Out7' */
      localB->In6_m = ((uint8_T)0U);

      /* Disable for Outport: '<S862>/Out8' */
      localB->In7_mm = ((uint8_T)0U);

      /* Disable for Outport: '<S862>/Out9' */
      localB->In8_e = ((uint8_T)0U);
      localDW->SetValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/SetValues_ID_CAN' */

  /* RelationalOperator: '<S856>/Equal5' incorporates:
   *  Constant: '<S856>/Constant5'
   */
  rtb_Equal5_jt = (RxID_CAN1_s == 22.0);

  /* Outputs for Enabled SubSystem: '<S856>/SensorValues_ID_CAN' incorporates:
   *  EnablePort: '<S861>/Enable'
   */
  if (rtb_Equal5_jt) {
    if (!localDW->SensorValues_ID_CAN_MODE) {
      localDW->SensorValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S873>/S-Function' incorporates:
     *  Constant: '<S861>/Constant5'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_i = CanIoGetMessage(0, 22U, NULL,
      &canRxData_0_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_i > 0) {
      /* read the data */
      rtb_SFunction_o2_h = canRxData_0_22U.uint8_T_info[0];
      rtb_SFunction_o3_f = canRxData_0_22U.uint8_T_info[1];
      rtb_SFunction_o4_n = canRxData_0_22U.uint8_T_info[2];
      rtb_SFunction_o5_p = canRxData_0_22U.uint8_T_info[3];
      rtb_SFunction_o6_h = canRxData_0_22U.uint8_T_info[4];
      rtb_SFunction_o7_h2 = canRxData_0_22U.uint8_T_info[5];
      rtb_SFunction_o8_lv = canRxData_0_22U.uint8_T_info[6];
      rtb_SFunction_o9_p = canRxData_0_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S873>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S874>/Enable'
     */
    if (localB->SFunction_o1_i > 0) {
      /* Inport: '<S874>/In1' */
      localB->In1_k = rtb_SFunction_o2_h;

      /* Inport: '<S874>/In2' */
      localB->In2_c = rtb_SFunction_o3_f;

      /* Inport: '<S874>/In3' */
      localB->In3_i = rtb_SFunction_o4_n;

      /* Inport: '<S874>/In4' */
      localB->In4_b = rtb_SFunction_o5_p;

      /* Inport: '<S874>/In5' */
      localB->In5_m = rtb_SFunction_o6_h;

      /* Inport: '<S874>/In6' */
      localB->In6_n = rtb_SFunction_o7_h2;

      /* Inport: '<S874>/In7' */
      localB->In7_l = rtb_SFunction_o8_lv;

      /* Inport: '<S874>/In8' */
      localB->In8_aa = rtb_SFunction_o9_p;
    }

    /* End of Outputs for SubSystem: '<S873>/Enabled Subsystem' */
  } else {
    if (localDW->SensorValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S861>/CAN_new' */
      localB->SFunction_o1_i = 0;

      /* Disable for Outport: '<S861>/Out2' */
      localB->In1_k = ((uint8_T)0U);

      /* Disable for Outport: '<S861>/Out3' */
      localB->In2_c = ((uint8_T)0U);

      /* Disable for Outport: '<S861>/Out4' */
      localB->In3_i = ((uint8_T)0U);

      /* Disable for Outport: '<S861>/Out5' */
      localB->In4_b = ((uint8_T)0U);

      /* Disable for Outport: '<S861>/Out6' */
      localB->In5_m = ((uint8_T)0U);

      /* Disable for Outport: '<S861>/Out7' */
      localB->In6_n = ((uint8_T)0U);

      /* Disable for Outport: '<S861>/Out8' */
      localB->In7_l = ((uint8_T)0U);

      /* Disable for Outport: '<S861>/Out9' */
      localB->In8_aa = ((uint8_T)0U);
      localDW->SensorValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/SensorValues_ID_CAN' */

  /* RelationalOperator: '<S856>/Equal6' incorporates:
   *  Constant: '<S856>/Constant6'
   */
  rtb_Equal6_o = (RxID_CAN1_s == 23.0);

  /* Outputs for Enabled SubSystem: '<S856>/OutControl1_ID_CAN' incorporates:
   *  EnablePort: '<S858>/Enable'
   */
  if (rtb_Equal6_o) {
    if (!localDW->OutControl1_ID_CAN_MODE) {
      localDW->OutControl1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S867>/S-Function' incorporates:
     *  Constant: '<S858>/Constant6'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_k = CanIoGetMessage(0, 23U, NULL,
      &canRxData_0_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_k > 0) {
      /* read the data */
      rtb_SFunction_o2_m = canRxData_0_23U.uint8_T_info[0];
      rtb_SFunction_o3_h1 = canRxData_0_23U.uint8_T_info[1];
      rtb_SFunction_o4_i = canRxData_0_23U.uint8_T_info[2];
      rtb_SFunction_o5_c4 = canRxData_0_23U.uint8_T_info[3];
      rtb_SFunction_o6_j = canRxData_0_23U.uint8_T_info[4];
      rtb_SFunction_o7_o = canRxData_0_23U.uint8_T_info[5];
      rtb_SFunction_o8_nw = canRxData_0_23U.uint8_T_info[6];
      rtb_SFunction_o9_d5 = canRxData_0_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S867>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S868>/Enable'
     */
    if (localB->SFunction_o1_k > 0) {
      /* Inport: '<S868>/In1' */
      localB->In1_g = rtb_SFunction_o2_m;

      /* Inport: '<S868>/In2' */
      localB->In2_p = rtb_SFunction_o3_h1;

      /* Inport: '<S868>/In3' */
      localB->In3_l = rtb_SFunction_o4_i;

      /* Inport: '<S868>/In4' */
      localB->In4_n = rtb_SFunction_o5_c4;

      /* Inport: '<S868>/In5' */
      localB->In5_o = rtb_SFunction_o6_j;

      /* Inport: '<S868>/In6' */
      localB->In6_l = rtb_SFunction_o7_o;

      /* Inport: '<S868>/In7' */
      localB->In7_f = rtb_SFunction_o8_nw;

      /* Inport: '<S868>/In8' */
      localB->In8_kx = rtb_SFunction_o9_d5;
    }

    /* End of Outputs for SubSystem: '<S867>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl1_ID_CAN_MODE) {
      /* Disable for Outport: '<S858>/CAN_new' */
      localB->SFunction_o1_k = 0;

      /* Disable for Outport: '<S858>/Out2' */
      localB->In1_g = ((uint8_T)0U);

      /* Disable for Outport: '<S858>/Out3' */
      localB->In2_p = ((uint8_T)0U);

      /* Disable for Outport: '<S858>/Out4' */
      localB->In3_l = ((uint8_T)0U);

      /* Disable for Outport: '<S858>/Out5' */
      localB->In4_n = ((uint8_T)0U);

      /* Disable for Outport: '<S858>/Out6' */
      localB->In5_o = ((uint8_T)0U);

      /* Disable for Outport: '<S858>/Out7' */
      localB->In6_l = ((uint8_T)0U);

      /* Disable for Outport: '<S858>/Out8' */
      localB->In7_f = ((uint8_T)0U);

      /* Disable for Outport: '<S858>/Out9' */
      localB->In8_kx = ((uint8_T)0U);
      localDW->OutControl1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/OutControl1_ID_CAN' */

  /* RelationalOperator: '<S856>/Equal7' incorporates:
   *  Constant: '<S856>/Constant7'
   */
  rtb_Equal7_g = (RxID_CAN1_s == 24.0);

  /* Outputs for Enabled SubSystem: '<S856>/OutControl2_ID_CAN' incorporates:
   *  EnablePort: '<S859>/Enable'
   */
  if (rtb_Equal7_g) {
    if (!localDW->OutControl2_ID_CAN_MODE) {
      localDW->OutControl2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S869>/S-Function' incorporates:
     *  Constant: '<S859>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_b = CanIoGetMessage(0, 24U, NULL,
      &canRxData_0_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_b > 0) {
      /* read the data */
      rtb_SFunction_o2_a = canRxData_0_24U.uint8_T_info[0];
      rtb_SFunction_o3_j = canRxData_0_24U.uint8_T_info[1];
      rtb_SFunction_o4_o = canRxData_0_24U.uint8_T_info[2];
      rtb_SFunction_o5_o = canRxData_0_24U.uint8_T_info[3];
      rtb_SFunction_o6_n = canRxData_0_24U.uint8_T_info[4];
      rtb_SFunction_o7_d = canRxData_0_24U.uint8_T_info[5];
      rtb_SFunction_o8_e = canRxData_0_24U.uint8_T_info[6];
      rtb_SFunction_o9_f2 = canRxData_0_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S869>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S870>/Enable'
     */
    if (localB->SFunction_o1_b > 0) {
      /* Inport: '<S870>/In1' */
      localB->In1_c = rtb_SFunction_o2_a;

      /* Inport: '<S870>/In2' */
      localB->In2_i = rtb_SFunction_o3_j;

      /* Inport: '<S870>/In3' */
      localB->In3_m = rtb_SFunction_o4_o;

      /* Inport: '<S870>/In4' */
      localB->In4_iv = rtb_SFunction_o5_o;

      /* Inport: '<S870>/In5' */
      localB->In5_h = rtb_SFunction_o6_n;

      /* Inport: '<S870>/In6' */
      localB->In6_d = rtb_SFunction_o7_d;

      /* Inport: '<S870>/In7' */
      localB->In7_bt = rtb_SFunction_o8_e;

      /* Inport: '<S870>/In8' */
      localB->In8_ku = rtb_SFunction_o9_f2;
    }

    /* End of Outputs for SubSystem: '<S869>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl2_ID_CAN_MODE) {
      /* Disable for Outport: '<S859>/CAN_new' */
      localB->SFunction_o1_b = 0;

      /* Disable for Outport: '<S859>/Out2' */
      localB->In1_c = ((uint8_T)0U);

      /* Disable for Outport: '<S859>/Out3' */
      localB->In2_i = ((uint8_T)0U);

      /* Disable for Outport: '<S859>/Out4' */
      localB->In3_m = ((uint8_T)0U);

      /* Disable for Outport: '<S859>/Out5' */
      localB->In4_iv = ((uint8_T)0U);

      /* Disable for Outport: '<S859>/Out6' */
      localB->In5_h = ((uint8_T)0U);

      /* Disable for Outport: '<S859>/Out7' */
      localB->In6_d = ((uint8_T)0U);

      /* Disable for Outport: '<S859>/Out8' */
      localB->In7_bt = ((uint8_T)0U);

      /* Disable for Outport: '<S859>/Out9' */
      localB->In8_ku = ((uint8_T)0U);
      localDW->OutControl2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S856>/OutControl2_ID_CAN' */

  /* Outputs for Enabled SubSystem: '<S856>/OutEmulator_ID_CAN' incorporates:
   *  EnablePort: '<S860>/Enable'
   */
  /* RelationalOperator: '<S856>/Equal8' incorporates:
   *  Constant: '<S856>/Constant8'
   *  Inport: '<S872>/In1'
   *  Inport: '<S872>/In2'
   *  Inport: '<S872>/In3'
   *  Inport: '<S872>/In4'
   *  Inport: '<S872>/In5'
   *  Inport: '<S872>/In6'
   *  Inport: '<S872>/In7'
   *  Inport: '<S872>/In8'
   */
  if (RxID_CAN1_s == 25.0) {
    if (!localDW->OutEmulator_ID_CAN_MODE) {
      localDW->OutEmulator_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S871>/S-Function' incorporates:
     *  Constant: '<S860>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_o = CanIoGetMessage(0, 25U, NULL,
      &canRxData_0_25U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_o > 0) {
      /* read the data */
      rtb_SFunction_o2_fu = canRxData_0_25U.uint8_T_info[0];
      rtb_SFunction_o3_mj = canRxData_0_25U.uint8_T_info[1];
      rtb_SFunction_o4_j = canRxData_0_25U.uint8_T_info[2];
      rtb_SFunction_o5_c5 = canRxData_0_25U.uint8_T_info[3];
      rtb_SFunction_o6_p = canRxData_0_25U.uint8_T_info[4];
      rtb_SFunction_o7_j = canRxData_0_25U.uint8_T_info[5];
      rtb_SFunction_o8_c = canRxData_0_25U.uint8_T_info[6];
      rtb_SFunction_o9_f0 = canRxData_0_25U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S871>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S872>/Enable'
     */
    if (localB->SFunction_o1_o > 0) {
      localB->In1_b = rtb_SFunction_o2_fu;
      localB->In2_o = rtb_SFunction_o3_mj;
      localB->In3_oq = rtb_SFunction_o4_j;
      localB->In4_i = rtb_SFunction_o5_c5;
      localB->In5_md = rtb_SFunction_o6_p;
      localB->In6_hx = rtb_SFunction_o7_j;
      localB->In7_k = rtb_SFunction_o8_c;
      localB->In8_l = rtb_SFunction_o9_f0;
    }

    /* End of Outputs for SubSystem: '<S871>/Enabled Subsystem' */
  } else {
    if (localDW->OutEmulator_ID_CAN_MODE) {
      /* Disable for Outport: '<S860>/CAN_new' */
      localB->SFunction_o1_o = 0;

      /* Disable for Outport: '<S860>/Out2' */
      localB->In1_b = ((uint8_T)0U);

      /* Disable for Outport: '<S860>/Out3' */
      localB->In2_o = ((uint8_T)0U);

      /* Disable for Outport: '<S860>/Out4' */
      localB->In3_oq = ((uint8_T)0U);

      /* Disable for Outport: '<S860>/Out5' */
      localB->In4_i = ((uint8_T)0U);

      /* Disable for Outport: '<S860>/Out6' */
      localB->In5_md = ((uint8_T)0U);

      /* Disable for Outport: '<S860>/Out7' */
      localB->In6_hx = ((uint8_T)0U);

      /* Disable for Outport: '<S860>/Out8' */
      localB->In7_k = ((uint8_T)0U);

      /* Disable for Outport: '<S860>/Out9' */
      localB->In8_l = ((uint8_T)0U);
      localDW->OutEmulator_ID_CAN_MODE = false;
    }
  }

  /* End of RelationalOperator: '<S856>/Equal8' */
  /* End of Outputs for SubSystem: '<S856>/OutEmulator_ID_CAN' */

  /* Switch: '<S856>/Switch' incorporates:
   *  Switch: '<S856>/Switch1'
   *  Switch: '<S856>/Switch2'
   *  Switch: '<S856>/Switch3'
   *  Switch: '<S856>/Switch4'
   *  Switch: '<S856>/Switch5'
   *  Switch: '<S856>/Switch6'
   *  Switch: '<S856>/Switch7'
   */
  if (rtb_Equal_mj) {
    rtb_signal1_jr = localB->SFunction_o1_h;
    rtb_signal2_n = localB->In1_p;
    rtb_signal3 = localB->In2_k;
    rtb_signal4 = localB->In3_b;
    rtb_signal5 = localB->In4_l;
    rtb_signal6 = localB->In5_c;
    rtb_signal7 = localB->In6_i;
    rtb_signal8 = localB->In7_m;
    rtb_signal9 = localB->In8_c;
  } else {
    if (rtb_Equal1_bu) {
      /* Switch: '<S856>/Switch1' */
      rtb_signal1_jr = localB->SFunction_o1_m;
    } else if (rtb_Equal2_oo) {
      /* Switch: '<S856>/Switch2' incorporates:
       *  Switch: '<S856>/Switch1'
       */
      rtb_signal1_jr = localB->SFunction_o1_e;
    } else if (rtb_Equal3_n) {
      /* Switch: '<S856>/Switch3' incorporates:
       *  Switch: '<S856>/Switch1'
       *  Switch: '<S856>/Switch2'
       */
      rtb_signal1_jr = localB->SFunction_o1;
    } else if (rtb_Equal4_gf) {
      /* Switch: '<S856>/Switch4' incorporates:
       *  Switch: '<S856>/Switch1'
       *  Switch: '<S856>/Switch2'
       *  Switch: '<S856>/Switch3'
       */
      rtb_signal1_jr = localB->SFunction_o1_l;
    } else if (rtb_Equal5_jt) {
      /* Switch: '<S856>/Switch5' incorporates:
       *  Switch: '<S856>/Switch1'
       *  Switch: '<S856>/Switch2'
       *  Switch: '<S856>/Switch3'
       *  Switch: '<S856>/Switch4'
       */
      rtb_signal1_jr = localB->SFunction_o1_i;
    } else if (rtb_Equal6_o) {
      /* Switch: '<S856>/Switch6' incorporates:
       *  Switch: '<S856>/Switch1'
       *  Switch: '<S856>/Switch2'
       *  Switch: '<S856>/Switch3'
       *  Switch: '<S856>/Switch4'
       *  Switch: '<S856>/Switch5'
       */
      rtb_signal1_jr = localB->SFunction_o1_k;
    } else if (rtb_Equal7_g) {
      /* Switch: '<S856>/Switch7' incorporates:
       *  Switch: '<S856>/Switch1'
       *  Switch: '<S856>/Switch2'
       *  Switch: '<S856>/Switch3'
       *  Switch: '<S856>/Switch4'
       *  Switch: '<S856>/Switch5'
       *  Switch: '<S856>/Switch6'
       */
      rtb_signal1_jr = localB->SFunction_o1_b;
    } else {
      /* Switch: '<S856>/Switch4' incorporates:
       *  Switch: '<S856>/Switch1'
       *  Switch: '<S856>/Switch2'
       *  Switch: '<S856>/Switch3'
       *  Switch: '<S856>/Switch5'
       *  Switch: '<S856>/Switch6'
       *  Switch: '<S856>/Switch7'
       */
      rtb_signal1_jr = localB->SFunction_o1_o;
    }

    /* Switch: '<S856>/Switch1' incorporates:
     *  Switch: '<S856>/Switch2'
     *  Switch: '<S856>/Switch3'
     *  Switch: '<S856>/Switch4'
     *  Switch: '<S856>/Switch5'
     *  Switch: '<S856>/Switch6'
     *  Switch: '<S856>/Switch7'
     */
    if (rtb_Equal1_bu) {
      rtb_signal2_n = localB->In1_d;
      rtb_signal3 = localB->In2_a;
      rtb_signal4 = localB->In3_n;
      rtb_signal5 = localB->In4_m;
      rtb_signal6 = localB->In5_k;
      rtb_signal7 = localB->In6_j;
      rtb_signal8 = localB->In7_o;
      rtb_signal9 = localB->In8_k;
    } else if (rtb_Equal2_oo) {
      rtb_signal2_n = localB->In1_j;
      rtb_signal3 = localB->In2_l;
      rtb_signal4 = localB->In3_o;
      rtb_signal5 = localB->In4_c;
      rtb_signal6 = localB->In5_g;
      rtb_signal7 = localB->In6_h;
      rtb_signal8 = localB->In7_b;
      rtb_signal9 = localB->In8_a;
    } else {
      if (rtb_Equal3_n) {
        rtb_signal2_n = localB->In1;
      } else if (rtb_Equal4_gf) {
        rtb_signal2_n = localB->In1_pn;
      } else if (rtb_Equal5_jt) {
        rtb_signal2_n = localB->In1_k;
      } else if (rtb_Equal6_o) {
        rtb_signal2_n = localB->In1_g;
      } else if (rtb_Equal7_g) {
        rtb_signal2_n = localB->In1_c;
      } else {
        rtb_signal2_n = localB->In1_b;
      }

      if (rtb_Equal3_n) {
        rtb_signal3 = localB->In2;
      } else if (rtb_Equal4_gf) {
        rtb_signal3 = localB->In2_b;
      } else if (rtb_Equal5_jt) {
        rtb_signal3 = localB->In2_c;
      } else if (rtb_Equal6_o) {
        rtb_signal3 = localB->In2_p;
      } else if (rtb_Equal7_g) {
        rtb_signal3 = localB->In2_i;
      } else {
        rtb_signal3 = localB->In2_o;
      }

      if (rtb_Equal3_n) {
        rtb_signal4 = localB->In3;
      } else if (rtb_Equal4_gf) {
        rtb_signal4 = localB->In3_k;
      } else if (rtb_Equal5_jt) {
        rtb_signal4 = localB->In3_i;
      } else if (rtb_Equal6_o) {
        rtb_signal4 = localB->In3_l;
      } else if (rtb_Equal7_g) {
        rtb_signal4 = localB->In3_m;
      } else {
        rtb_signal4 = localB->In3_oq;
      }

      if (rtb_Equal3_n) {
        rtb_signal5 = localB->In4;
      } else if (rtb_Equal4_gf) {
        rtb_signal5 = localB->In4_h;
      } else if (rtb_Equal5_jt) {
        rtb_signal5 = localB->In4_b;
      } else if (rtb_Equal6_o) {
        rtb_signal5 = localB->In4_n;
      } else if (rtb_Equal7_g) {
        rtb_signal5 = localB->In4_iv;
      } else {
        rtb_signal5 = localB->In4_i;
      }

      if (rtb_Equal3_n) {
        rtb_signal6 = localB->In5;
      } else if (rtb_Equal4_gf) {
        rtb_signal6 = localB->In5_l;
      } else if (rtb_Equal5_jt) {
        rtb_signal6 = localB->In5_m;
      } else if (rtb_Equal6_o) {
        rtb_signal6 = localB->In5_o;
      } else if (rtb_Equal7_g) {
        rtb_signal6 = localB->In5_h;
      } else {
        rtb_signal6 = localB->In5_md;
      }

      if (rtb_Equal3_n) {
        rtb_signal7 = localB->In6;
      } else if (rtb_Equal4_gf) {
        rtb_signal7 = localB->In6_m;
      } else if (rtb_Equal5_jt) {
        rtb_signal7 = localB->In6_n;
      } else if (rtb_Equal6_o) {
        rtb_signal7 = localB->In6_l;
      } else if (rtb_Equal7_g) {
        rtb_signal7 = localB->In6_d;
      } else {
        rtb_signal7 = localB->In6_hx;
      }

      if (rtb_Equal3_n) {
        rtb_signal8 = localB->In7;
      } else if (rtb_Equal4_gf) {
        rtb_signal8 = localB->In7_mm;
      } else if (rtb_Equal5_jt) {
        rtb_signal8 = localB->In7_l;
      } else if (rtb_Equal6_o) {
        rtb_signal8 = localB->In7_f;
      } else if (rtb_Equal7_g) {
        rtb_signal8 = localB->In7_bt;
      } else {
        rtb_signal8 = localB->In7_k;
      }

      if (rtb_Equal3_n) {
        rtb_signal9 = localB->In8;
      } else if (rtb_Equal4_gf) {
        rtb_signal9 = localB->In8_e;
      } else if (rtb_Equal5_jt) {
        rtb_signal9 = localB->In8_aa;
      } else if (rtb_Equal6_o) {
        rtb_signal9 = localB->In8_kx;
      } else if (rtb_Equal7_g) {
        rtb_signal9 = localB->In8_ku;
      } else {
        rtb_signal9 = localB->In8_l;
      }
    }
  }

  /* End of Switch: '<S856>/Switch' */

  /* Outputs for Enabled SubSystem: '<S19>/Buffer ready' incorporates:
   *  EnablePort: '<S854>/Enable'
   */
  /* Logic: '<S19>/AND2' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant7'
   *  RelationalOperator: '<S19>/Equal3'
   *  RelationalOperator: '<S19>/Equal6'
   */
  if ((*rtd_Rx_State_CAN1 == 1.0) && (0.0 == rtb_signal1_jr)) {
    /* DataStoreWrite: '<S854>/Data Store Write' incorporates:
     *  Constant: '<S854>/New_Msg'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)2U);

    /* DataStoreWrite: '<S854>/Data Store Write1' incorporates:
     *  Constant: '<S854>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S19>/AND2' */
  /* End of Outputs for SubSystem: '<S19>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S19>/Update message buffers' incorporates:
   *  EnablePort: '<S857>/Enable'
   */
  /* Logic: '<S19>/AND3' incorporates:
   *  Constant: '<S19>/Constant4'
   *  Constant: '<S19>/Constant5'
   *  RelationalOperator: '<S19>/Equal4'
   *  RelationalOperator: '<S19>/Equal7'
   */
  if ((*rtd_Rx_State_CAN1 == 2.0) && (rtb_signal1_jr >= 1.0)) {
    /* DataStoreWrite: '<S857>/Data Store Write1' */
    rtd_Msg_Rx_CAN1->Buffer_1 = rtb_signal2_n;
    rtd_Msg_Rx_CAN1->Buffer_2 = rtb_signal3;
    rtd_Msg_Rx_CAN1->Buffer_3 = rtb_signal4;
    rtd_Msg_Rx_CAN1->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN1->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN1->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN1->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN1->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S857>/Data Store Write' incorporates:
     *  Constant: '<S857>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S857>/Data Store Write2' incorporates:
     *  Constant: '<S857>/SET'
     */
    *rtd_New_Msg_Ready_CAN1 = true;

    /* DataStoreWrite: '<S857>/Data Store Write5' incorporates:
     *  Constant: '<S857>/Idle_State'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)3U);

    /* DataStoreRead: '<S857>/Local_Time' */
    Rx_msg_ticks_CAN1 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S857>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN1 = Rx_msg_ticks_CAN1;

    /* DataTypeConversion: '<S857>/Cast To Double' */
    Rx_temporal_msg_CAN1 = rtb_signal2_n;
  }

  /* End of Logic: '<S19>/AND3' */
  /* End of Outputs for SubSystem: '<S19>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S19>/Prepare buffer' incorporates:
   *  EnablePort: '<S855>/Enable'
   */
  /* RelationalOperator: '<S19>/Equal5' incorporates:
   *  Constant: '<S19>/Constant6'
   */
  if (*rtd_Rx_State_CAN1 == 0.0) {
    /* DataStoreWrite: '<S855>/Data Store Write' incorporates:
     *  Constant: '<S855>/Constant1'
     */
    *rtd_Rx_State_CAN1 = ((uint8_T)1U);

    /* DataStoreWrite: '<S855>/Data Store Write1' incorporates:
     *  Constant: '<S855>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S19>/Equal5' */
  /* End of Outputs for SubSystem: '<S19>/Prepare buffer' */
}

/* Disable for function-call system: '<S6>/CAN2 Recieve' */
void CAN2Recieve_Disable(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW)
{
  /* Disable for Enabled SubSystem: '<S889>/Sync_ID_CAN' */
  if (localDW->Sync_ID_CAN_MODE) {
    /* Disable for Outport: '<S896>/CAN_new' */
    localB->SFunction_o1_d = 0;

    /* Disable for Outport: '<S896>/Out2' */
    localB->In1_b = ((uint8_T)0U);

    /* Disable for Outport: '<S896>/Out3' */
    localB->In2_c = ((uint8_T)0U);

    /* Disable for Outport: '<S896>/Out4' */
    localB->In3_n = ((uint8_T)0U);

    /* Disable for Outport: '<S896>/Out5' */
    localB->In4_m = ((uint8_T)0U);

    /* Disable for Outport: '<S896>/Out6' */
    localB->In5_k = ((uint8_T)0U);

    /* Disable for Outport: '<S896>/Out7' */
    localB->In6_l = ((uint8_T)0U);

    /* Disable for Outport: '<S896>/Out8' */
    localB->In7_b = ((uint8_T)0U);

    /* Disable for Outport: '<S896>/Out9' */
    localB->In8_k = ((uint8_T)0U);
    localDW->Sync_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/Sync_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/Vote1_ID_CAN' */
  if (localDW->Vote1_ID_CAN_MODE) {
    /* Disable for Outport: '<S897>/CAN_new' */
    localB->SFunction_o1_m = 0;

    /* Disable for Outport: '<S897>/Out2' */
    localB->In1_m = ((uint8_T)0U);

    /* Disable for Outport: '<S897>/Out3' */
    localB->In2_j = ((uint8_T)0U);

    /* Disable for Outport: '<S897>/Out4' */
    localB->In3_d = ((uint8_T)0U);

    /* Disable for Outport: '<S897>/Out5' */
    localB->In4_n = ((uint8_T)0U);

    /* Disable for Outport: '<S897>/Out6' */
    localB->In5_i = ((uint8_T)0U);

    /* Disable for Outport: '<S897>/Out7' */
    localB->In6_n = ((uint8_T)0U);

    /* Disable for Outport: '<S897>/Out8' */
    localB->In7_e = ((uint8_T)0U);

    /* Disable for Outport: '<S897>/Out9' */
    localB->In8_i = ((uint8_T)0U);
    localDW->Vote1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/Vote1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/Vote2_ID_CAN' */
  if (localDW->Vote2_ID_CAN_MODE) {
    /* Disable for Outport: '<S898>/CAN_new' */
    localB->SFunction_o1_c = 0;

    /* Disable for Outport: '<S898>/Out2' */
    localB->In1_l = ((uint8_T)0U);

    /* Disable for Outport: '<S898>/Out3' */
    localB->In2_i = ((uint8_T)0U);

    /* Disable for Outport: '<S898>/Out4' */
    localB->In3_l = ((uint8_T)0U);

    /* Disable for Outport: '<S898>/Out5' */
    localB->In4_e = ((uint8_T)0U);

    /* Disable for Outport: '<S898>/Out6' */
    localB->In5_c = ((uint8_T)0U);

    /* Disable for Outport: '<S898>/Out7' */
    localB->In6_g = ((uint8_T)0U);

    /* Disable for Outport: '<S898>/Out8' */
    localB->In7_j = ((uint8_T)0U);

    /* Disable for Outport: '<S898>/Out9' */
    localB->In8_p = ((uint8_T)0U);
    localDW->Vote2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/Vote2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/Vote3_ID_CAN' */
  if (localDW->Vote3_ID_CAN_MODE) {
    /* Disable for Outport: '<S899>/CAN_new' */
    localB->SFunction_o1 = 0;

    /* Disable for Outport: '<S899>/Out2' */
    localB->In1 = ((uint8_T)0U);

    /* Disable for Outport: '<S899>/Out3' */
    localB->In2 = ((uint8_T)0U);

    /* Disable for Outport: '<S899>/Out4' */
    localB->In3 = ((uint8_T)0U);

    /* Disable for Outport: '<S899>/Out5' */
    localB->In4 = ((uint8_T)0U);

    /* Disable for Outport: '<S899>/Out6' */
    localB->In5 = ((uint8_T)0U);

    /* Disable for Outport: '<S899>/Out7' */
    localB->In6 = ((uint8_T)0U);

    /* Disable for Outport: '<S899>/Out8' */
    localB->In7 = ((uint8_T)0U);

    /* Disable for Outport: '<S899>/Out9' */
    localB->In8 = ((uint8_T)0U);
    localDW->Vote3_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/Vote3_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/SetValues_ID_CAN' */
  if (localDW->SetValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S895>/CAN_new' */
    localB->SFunction_o1_e = 0;

    /* Disable for Outport: '<S895>/Out2' */
    localB->In1_mc = ((uint8_T)0U);

    /* Disable for Outport: '<S895>/Out3' */
    localB->In2_i4 = ((uint8_T)0U);

    /* Disable for Outport: '<S895>/Out4' */
    localB->In3_m = ((uint8_T)0U);

    /* Disable for Outport: '<S895>/Out5' */
    localB->In4_f = ((uint8_T)0U);

    /* Disable for Outport: '<S895>/Out6' */
    localB->In5_l = ((uint8_T)0U);

    /* Disable for Outport: '<S895>/Out7' */
    localB->In6_o = ((uint8_T)0U);

    /* Disable for Outport: '<S895>/Out8' */
    localB->In7_eu = ((uint8_T)0U);

    /* Disable for Outport: '<S895>/Out9' */
    localB->In8_c = ((uint8_T)0U);
    localDW->SetValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/SetValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/SensorValues_ID_CAN' */
  if (localDW->SensorValues_ID_CAN_MODE) {
    /* Disable for Outport: '<S894>/CAN_new' */
    localB->SFunction_o1_mp = 0;

    /* Disable for Outport: '<S894>/Out2' */
    localB->In1_n = ((uint8_T)0U);

    /* Disable for Outport: '<S894>/Out3' */
    localB->In2_ie = ((uint8_T)0U);

    /* Disable for Outport: '<S894>/Out4' */
    localB->In3_p = ((uint8_T)0U);

    /* Disable for Outport: '<S894>/Out5' */
    localB->In4_c = ((uint8_T)0U);

    /* Disable for Outport: '<S894>/Out6' */
    localB->In5_kx = ((uint8_T)0U);

    /* Disable for Outport: '<S894>/Out7' */
    localB->In6_f = ((uint8_T)0U);

    /* Disable for Outport: '<S894>/Out8' */
    localB->In7_d = ((uint8_T)0U);

    /* Disable for Outport: '<S894>/Out9' */
    localB->In8_j = ((uint8_T)0U);
    localDW->SensorValues_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/SensorValues_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/OutControl1_ID_CAN' */
  if (localDW->OutControl1_ID_CAN_MODE) {
    /* Disable for Outport: '<S891>/CAN_new' */
    localB->SFunction_o1_f = 0;

    /* Disable for Outport: '<S891>/Out2' */
    localB->In1_b4 = ((uint8_T)0U);

    /* Disable for Outport: '<S891>/Out3' */
    localB->In2_it = ((uint8_T)0U);

    /* Disable for Outport: '<S891>/Out4' */
    localB->In3_c = ((uint8_T)0U);

    /* Disable for Outport: '<S891>/Out5' */
    localB->In4_p = ((uint8_T)0U);

    /* Disable for Outport: '<S891>/Out6' */
    localB->In5_j = ((uint8_T)0U);

    /* Disable for Outport: '<S891>/Out7' */
    localB->In6_c = ((uint8_T)0U);

    /* Disable for Outport: '<S891>/Out8' */
    localB->In7_f = ((uint8_T)0U);

    /* Disable for Outport: '<S891>/Out9' */
    localB->In8_kt = ((uint8_T)0U);
    localDW->OutControl1_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/OutControl1_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/OutControl2_ID_CAN' */
  if (localDW->OutControl2_ID_CAN_MODE) {
    /* Disable for Outport: '<S892>/CAN_new' */
    localB->SFunction_o1_ew = 0;

    /* Disable for Outport: '<S892>/Out2' */
    localB->In1_j = ((uint8_T)0U);

    /* Disable for Outport: '<S892>/Out3' */
    localB->In2_a = ((uint8_T)0U);

    /* Disable for Outport: '<S892>/Out4' */
    localB->In3_n2 = ((uint8_T)0U);

    /* Disable for Outport: '<S892>/Out5' */
    localB->In4_k = ((uint8_T)0U);

    /* Disable for Outport: '<S892>/Out6' */
    localB->In5_p = ((uint8_T)0U);

    /* Disable for Outport: '<S892>/Out7' */
    localB->In6_ht = ((uint8_T)0U);

    /* Disable for Outport: '<S892>/Out8' */
    localB->In7_dx = ((uint8_T)0U);

    /* Disable for Outport: '<S892>/Out9' */
    localB->In8_l = ((uint8_T)0U);
    localDW->OutControl2_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/OutControl2_ID_CAN' */

  /* Disable for Enabled SubSystem: '<S889>/OutEmulator_ID_CAN' */
  if (localDW->OutEmulator_ID_CAN_MODE) {
    /* Disable for Outport: '<S893>/CAN_new' */
    localB->SFunction_o1_c5 = 0;

    /* Disable for Outport: '<S893>/Out2' */
    localB->In1_f = ((uint8_T)0U);

    /* Disable for Outport: '<S893>/Out3' */
    localB->In2_h = ((uint8_T)0U);

    /* Disable for Outport: '<S893>/Out4' */
    localB->In3_o = ((uint8_T)0U);

    /* Disable for Outport: '<S893>/Out5' */
    localB->In4_d = ((uint8_T)0U);

    /* Disable for Outport: '<S893>/Out6' */
    localB->In5_b = ((uint8_T)0U);

    /* Disable for Outport: '<S893>/Out7' */
    localB->In6_h = ((uint8_T)0U);

    /* Disable for Outport: '<S893>/Out8' */
    localB->In7_bb = ((uint8_T)0U);

    /* Disable for Outport: '<S893>/Out9' */
    localB->In8_p1 = ((uint8_T)0U);
    localDW->OutEmulator_ID_CAN_MODE = false;
  }

  /* End of Disable for SubSystem: '<S889>/OutEmulator_ID_CAN' */
}

/* Start for function-call system: '<S6>/CAN2 Recieve' */
void CAN2Recieve_Start(void)
{
  /* Start for Enabled SubSystem: '<S889>/Sync_ID_CAN' */

  /* Start for M-S-Function: '<S910>/S-Function' incorporates:
   *  Constant: '<S896>/Constant'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 1U);

  /* End of Start for SubSystem: '<S889>/Sync_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/Vote1_ID_CAN' */

  /* Start for M-S-Function: '<S912>/S-Function' incorporates:
   *  Constant: '<S897>/Constant1'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 11U);

  /* End of Start for SubSystem: '<S889>/Vote1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/Vote2_ID_CAN' */

  /* Start for M-S-Function: '<S914>/S-Function' incorporates:
   *  Constant: '<S898>/Constant2'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 12U);

  /* End of Start for SubSystem: '<S889>/Vote2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/Vote3_ID_CAN' */

  /* Start for M-S-Function: '<S916>/S-Function' incorporates:
   *  Constant: '<S899>/Constant3'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 13U);

  /* End of Start for SubSystem: '<S889>/Vote3_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/SetValues_ID_CAN' */

  /* Start for M-S-Function: '<S908>/S-Function' incorporates:
   *  Constant: '<S895>/Constant4'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 21U);

  /* End of Start for SubSystem: '<S889>/SetValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/SensorValues_ID_CAN' */

  /* Start for M-S-Function: '<S906>/S-Function' incorporates:
   *  Constant: '<S894>/Constant5'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 22U);

  /* End of Start for SubSystem: '<S889>/SensorValues_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/OutControl1_ID_CAN' */

  /* Start for M-S-Function: '<S900>/S-Function' incorporates:
   *  Constant: '<S891>/Constant6'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 23U);

  /* End of Start for SubSystem: '<S889>/OutControl1_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/OutControl2_ID_CAN' */

  /* Start for M-S-Function: '<S902>/S-Function' incorporates:
   *  Constant: '<S892>/Constant7'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 24U);

  /* End of Start for SubSystem: '<S889>/OutControl2_ID_CAN' */

  /* Start for Enabled SubSystem: '<S889>/OutEmulator_ID_CAN' */

  /* Start for M-S-Function: '<S904>/S-Function' incorporates:
   *  Constant: '<S893>/Constant8'
   */

  /* register a CAN storage buffer for the message with this ID */
  CanIoCreateMessageReceivedStorage(1, 25U);

  /* End of Start for SubSystem: '<S889>/OutEmulator_ID_CAN' */
}

/* Output and update for function-call system: '<S6>/CAN2 Recieve' */
void CAN2Recieve(rtB_CAN2Recieve *localB, rtDW_CAN2Recieve *localDW, uint16_T
                 *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T
                 *rtd_Msg_Rx_Ticks_CAN2, boolean_T *rtd_New_Msg_Ready_CAN2,
                 uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN2, boolean_T *
                 rtd_Toggle_Pin_A0)
{
  /* local block i/o variables */
  uint8_T rtb_SFunction_o2_i;
  uint8_T rtb_SFunction_o3_gj;
  uint8_T rtb_SFunction_o4_nu;
  uint8_T rtb_SFunction_o5_e;
  uint8_T rtb_SFunction_o6_hh;
  uint8_T rtb_SFunction_o7_ju;
  uint8_T rtb_SFunction_o8_f;
  uint8_T rtb_SFunction_o9_a;
  uint8_T rtb_SFunction_o2_h4;
  uint8_T rtb_SFunction_o3_n;
  uint8_T rtb_SFunction_o4_gz;
  uint8_T rtb_SFunction_o5_a;
  uint8_T rtb_SFunction_o6_ic;
  uint8_T rtb_SFunction_o7_np;
  uint8_T rtb_SFunction_o8_a;
  uint8_T rtb_SFunction_o9_l;
  uint8_T rtb_SFunction_o2_e;
  uint8_T rtb_SFunction_o3_g3;
  uint8_T rtb_SFunction_o4_mc;
  uint8_T rtb_SFunction_o5_o4;
  uint8_T rtb_SFunction_o6_a;
  uint8_T rtb_SFunction_o7_oi;
  uint8_T rtb_SFunction_o8_ne;
  uint8_T rtb_SFunction_o9_i;
  uint8_T rtb_SFunction_o2_m0;
  uint8_T rtb_SFunction_o3_h2;
  uint8_T rtb_SFunction_o4_d;
  uint8_T rtb_SFunction_o5_f;
  uint8_T rtb_SFunction_o6_jy;
  uint8_T rtb_SFunction_o7_hv;
  uint8_T rtb_SFunction_o8_ky;
  uint8_T rtb_SFunction_o9_g;
  uint8_T rtb_SFunction_o2_ho;
  uint8_T rtb_SFunction_o3_e;
  uint8_T rtb_SFunction_o4_ny;
  uint8_T rtb_SFunction_o5_pj;
  uint8_T rtb_SFunction_o6_k;
  uint8_T rtb_SFunction_o7_l;
  uint8_T rtb_SFunction_o8_i;
  uint8_T rtb_SFunction_o9_j;
  uint8_T rtb_SFunction_o2_hx;
  uint8_T rtb_SFunction_o3_nv;
  uint8_T rtb_SFunction_o4_jg;
  uint8_T rtb_SFunction_o5_h;
  uint8_T rtb_SFunction_o6_aj;
  uint8_T rtb_SFunction_o7_b;
  uint8_T rtb_SFunction_o8_h;
  uint8_T rtb_SFunction_o9_e;
  uint8_T rtb_SFunction_o2_mb;
  uint8_T rtb_SFunction_o3_gq;
  uint8_T rtb_SFunction_o4_c;
  uint8_T rtb_SFunction_o5_cj;
  uint8_T rtb_SFunction_o6_jc;
  uint8_T rtb_SFunction_o7_nl;
  uint8_T rtb_SFunction_o8_m;
  uint8_T rtb_SFunction_o9_fl;
  uint8_T rtb_SFunction_o2_d;
  uint8_T rtb_SFunction_o3_gd;
  uint8_T rtb_SFunction_o4_eq;
  uint8_T rtb_SFunction_o5_n;
  uint8_T rtb_SFunction_o6_b;
  uint8_T rtb_SFunction_o7_hw;
  uint8_T rtb_SFunction_o8_hn;
  uint8_T rtb_SFunction_o9_i1;
  uint8_T rtb_SFunction_o2_ej;
  uint8_T rtb_SFunction_o3_p;
  uint8_T rtb_SFunction_o4_cg;
  uint8_T rtb_SFunction_o5_b;
  uint8_T rtb_SFunction_o6_o;
  uint8_T rtb_SFunction_o7_i;
  uint8_T rtb_SFunction_o8_nb;
  uint8_T rtb_SFunction_o9_ib;
  boolean_T rtb_Equal_d;
  boolean_T rtb_Equal1_l;
  boolean_T rtb_Equal2_b4;
  boolean_T rtb_Equal3_n;
  boolean_T rtb_Equal4_ar;
  boolean_T rtb_Equal5_on;
  boolean_T rtb_Equal6_a;
  boolean_T rtb_Equal7_j;
  int8_T rtb_signal1_f4;
  uint8_T rtb_signal2_kw;
  uint8_T rtb_signal3;
  uint8_T rtb_signal4;
  uint8_T rtb_signal5;
  uint8_T rtb_signal6;
  uint8_T rtb_signal7;
  uint8_T rtb_signal8;
  uint8_T rtb_signal9;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<S21>/Constant3'
   *  DataStoreRead: '<S21>/Data Store Read1'
   */
  RxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S21>/Data Store Write' */
  localDW->fcn_call_counter = RxCAN2_counter_s;

  /* DataStoreRead: '<S21>/Data Store Read' */
  RxID_CAN2_s = *rtd_RxID_CAN2;

  /* RelationalOperator: '<S889>/Equal' incorporates:
   *  Constant: '<S889>/Constant'
   */
  rtb_Equal_d = (RxID_CAN2_s == 1.0);

  /* Outputs for Enabled SubSystem: '<S889>/Sync_ID_CAN' incorporates:
   *  EnablePort: '<S896>/Enable'
   */
  if (rtb_Equal_d) {
    if (!localDW->Sync_ID_CAN_MODE) {
      localDW->Sync_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S910>/S-Function' incorporates:
     *  Constant: '<S896>/Constant'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_d = CanIoGetMessage(1, 1U, NULL,
      &canRxData_1_1U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_d > 0) {
      /* read the data */
      rtb_SFunction_o2_m0 = canRxData_1_1U.uint8_T_info[0];
      rtb_SFunction_o3_h2 = canRxData_1_1U.uint8_T_info[1];
      rtb_SFunction_o4_d = canRxData_1_1U.uint8_T_info[2];
      rtb_SFunction_o5_f = canRxData_1_1U.uint8_T_info[3];
      rtb_SFunction_o6_jy = canRxData_1_1U.uint8_T_info[4];
      rtb_SFunction_o7_hv = canRxData_1_1U.uint8_T_info[5];
      rtb_SFunction_o8_ky = canRxData_1_1U.uint8_T_info[6];
      rtb_SFunction_o9_g = canRxData_1_1U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S910>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S911>/Enable'
     */
    if (localB->SFunction_o1_d > 0) {
      /* Inport: '<S911>/In1' */
      localB->In1_b = rtb_SFunction_o2_m0;

      /* Inport: '<S911>/In2' */
      localB->In2_c = rtb_SFunction_o3_h2;

      /* Inport: '<S911>/In3' */
      localB->In3_n = rtb_SFunction_o4_d;

      /* Inport: '<S911>/In4' */
      localB->In4_m = rtb_SFunction_o5_f;

      /* Inport: '<S911>/In5' */
      localB->In5_k = rtb_SFunction_o6_jy;

      /* Inport: '<S911>/In6' */
      localB->In6_l = rtb_SFunction_o7_hv;

      /* Inport: '<S911>/In7' */
      localB->In7_b = rtb_SFunction_o8_ky;

      /* Inport: '<S911>/In8' */
      localB->In8_k = rtb_SFunction_o9_g;
    }

    /* End of Outputs for SubSystem: '<S910>/Enabled Subsystem' */
  } else {
    if (localDW->Sync_ID_CAN_MODE) {
      /* Disable for Outport: '<S896>/CAN_new' */
      localB->SFunction_o1_d = 0;

      /* Disable for Outport: '<S896>/Out2' */
      localB->In1_b = ((uint8_T)0U);

      /* Disable for Outport: '<S896>/Out3' */
      localB->In2_c = ((uint8_T)0U);

      /* Disable for Outport: '<S896>/Out4' */
      localB->In3_n = ((uint8_T)0U);

      /* Disable for Outport: '<S896>/Out5' */
      localB->In4_m = ((uint8_T)0U);

      /* Disable for Outport: '<S896>/Out6' */
      localB->In5_k = ((uint8_T)0U);

      /* Disable for Outport: '<S896>/Out7' */
      localB->In6_l = ((uint8_T)0U);

      /* Disable for Outport: '<S896>/Out8' */
      localB->In7_b = ((uint8_T)0U);

      /* Disable for Outport: '<S896>/Out9' */
      localB->In8_k = ((uint8_T)0U);
      localDW->Sync_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/Sync_ID_CAN' */

  /* RelationalOperator: '<S889>/Equal1' incorporates:
   *  Constant: '<S889>/Constant1'
   */
  rtb_Equal1_l = (RxID_CAN2_s == 11.0);

  /* Outputs for Enabled SubSystem: '<S889>/Vote1_ID_CAN' incorporates:
   *  EnablePort: '<S897>/Enable'
   */
  if (rtb_Equal1_l) {
    if (!localDW->Vote1_ID_CAN_MODE) {
      localDW->Vote1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S912>/S-Function' incorporates:
     *  Constant: '<S897>/Constant1'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_m = CanIoGetMessage(1, 11U, NULL,
      &canRxData_1_11U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_m > 0) {
      /* read the data */
      rtb_SFunction_o2_e = canRxData_1_11U.uint8_T_info[0];
      rtb_SFunction_o3_g3 = canRxData_1_11U.uint8_T_info[1];
      rtb_SFunction_o4_mc = canRxData_1_11U.uint8_T_info[2];
      rtb_SFunction_o5_o4 = canRxData_1_11U.uint8_T_info[3];
      rtb_SFunction_o6_a = canRxData_1_11U.uint8_T_info[4];
      rtb_SFunction_o7_oi = canRxData_1_11U.uint8_T_info[5];
      rtb_SFunction_o8_ne = canRxData_1_11U.uint8_T_info[6];
      rtb_SFunction_o9_i = canRxData_1_11U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S912>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S913>/Enable'
     */
    if (localB->SFunction_o1_m > 0) {
      /* Inport: '<S913>/In1' */
      localB->In1_m = rtb_SFunction_o2_e;

      /* Inport: '<S913>/In2' */
      localB->In2_j = rtb_SFunction_o3_g3;

      /* Inport: '<S913>/In3' */
      localB->In3_d = rtb_SFunction_o4_mc;

      /* Inport: '<S913>/In4' */
      localB->In4_n = rtb_SFunction_o5_o4;

      /* Inport: '<S913>/In5' */
      localB->In5_i = rtb_SFunction_o6_a;

      /* Inport: '<S913>/In6' */
      localB->In6_n = rtb_SFunction_o7_oi;

      /* Inport: '<S913>/In7' */
      localB->In7_e = rtb_SFunction_o8_ne;

      /* Inport: '<S913>/In8' */
      localB->In8_i = rtb_SFunction_o9_i;
    }

    /* End of Outputs for SubSystem: '<S912>/Enabled Subsystem' */
  } else {
    if (localDW->Vote1_ID_CAN_MODE) {
      /* Disable for Outport: '<S897>/CAN_new' */
      localB->SFunction_o1_m = 0;

      /* Disable for Outport: '<S897>/Out2' */
      localB->In1_m = ((uint8_T)0U);

      /* Disable for Outport: '<S897>/Out3' */
      localB->In2_j = ((uint8_T)0U);

      /* Disable for Outport: '<S897>/Out4' */
      localB->In3_d = ((uint8_T)0U);

      /* Disable for Outport: '<S897>/Out5' */
      localB->In4_n = ((uint8_T)0U);

      /* Disable for Outport: '<S897>/Out6' */
      localB->In5_i = ((uint8_T)0U);

      /* Disable for Outport: '<S897>/Out7' */
      localB->In6_n = ((uint8_T)0U);

      /* Disable for Outport: '<S897>/Out8' */
      localB->In7_e = ((uint8_T)0U);

      /* Disable for Outport: '<S897>/Out9' */
      localB->In8_i = ((uint8_T)0U);
      localDW->Vote1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/Vote1_ID_CAN' */

  /* RelationalOperator: '<S889>/Equal2' incorporates:
   *  Constant: '<S889>/Constant2'
   */
  rtb_Equal2_b4 = (RxID_CAN2_s == 12.0);

  /* Outputs for Enabled SubSystem: '<S889>/Vote2_ID_CAN' incorporates:
   *  EnablePort: '<S898>/Enable'
   */
  if (rtb_Equal2_b4) {
    if (!localDW->Vote2_ID_CAN_MODE) {
      localDW->Vote2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S914>/S-Function' incorporates:
     *  Constant: '<S898>/Constant2'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_c = CanIoGetMessage(1, 12U, NULL,
      &canRxData_1_12U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_c > 0) {
      /* read the data */
      rtb_SFunction_o2_h4 = canRxData_1_12U.uint8_T_info[0];
      rtb_SFunction_o3_n = canRxData_1_12U.uint8_T_info[1];
      rtb_SFunction_o4_gz = canRxData_1_12U.uint8_T_info[2];
      rtb_SFunction_o5_a = canRxData_1_12U.uint8_T_info[3];
      rtb_SFunction_o6_ic = canRxData_1_12U.uint8_T_info[4];
      rtb_SFunction_o7_np = canRxData_1_12U.uint8_T_info[5];
      rtb_SFunction_o8_a = canRxData_1_12U.uint8_T_info[6];
      rtb_SFunction_o9_l = canRxData_1_12U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S914>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S915>/Enable'
     */
    if (localB->SFunction_o1_c > 0) {
      /* Inport: '<S915>/In1' */
      localB->In1_l = rtb_SFunction_o2_h4;

      /* Inport: '<S915>/In2' */
      localB->In2_i = rtb_SFunction_o3_n;

      /* Inport: '<S915>/In3' */
      localB->In3_l = rtb_SFunction_o4_gz;

      /* Inport: '<S915>/In4' */
      localB->In4_e = rtb_SFunction_o5_a;

      /* Inport: '<S915>/In5' */
      localB->In5_c = rtb_SFunction_o6_ic;

      /* Inport: '<S915>/In6' */
      localB->In6_g = rtb_SFunction_o7_np;

      /* Inport: '<S915>/In7' */
      localB->In7_j = rtb_SFunction_o8_a;

      /* Inport: '<S915>/In8' */
      localB->In8_p = rtb_SFunction_o9_l;
    }

    /* End of Outputs for SubSystem: '<S914>/Enabled Subsystem' */
  } else {
    if (localDW->Vote2_ID_CAN_MODE) {
      /* Disable for Outport: '<S898>/CAN_new' */
      localB->SFunction_o1_c = 0;

      /* Disable for Outport: '<S898>/Out2' */
      localB->In1_l = ((uint8_T)0U);

      /* Disable for Outport: '<S898>/Out3' */
      localB->In2_i = ((uint8_T)0U);

      /* Disable for Outport: '<S898>/Out4' */
      localB->In3_l = ((uint8_T)0U);

      /* Disable for Outport: '<S898>/Out5' */
      localB->In4_e = ((uint8_T)0U);

      /* Disable for Outport: '<S898>/Out6' */
      localB->In5_c = ((uint8_T)0U);

      /* Disable for Outport: '<S898>/Out7' */
      localB->In6_g = ((uint8_T)0U);

      /* Disable for Outport: '<S898>/Out8' */
      localB->In7_j = ((uint8_T)0U);

      /* Disable for Outport: '<S898>/Out9' */
      localB->In8_p = ((uint8_T)0U);
      localDW->Vote2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/Vote2_ID_CAN' */

  /* RelationalOperator: '<S889>/Equal3' incorporates:
   *  Constant: '<S889>/Constant3'
   */
  rtb_Equal3_n = (RxID_CAN2_s == 13.0);

  /* Outputs for Enabled SubSystem: '<S889>/Vote3_ID_CAN' incorporates:
   *  EnablePort: '<S899>/Enable'
   */
  if (rtb_Equal3_n) {
    if (!localDW->Vote3_ID_CAN_MODE) {
      localDW->Vote3_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S916>/S-Function' incorporates:
     *  Constant: '<S899>/Constant3'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1 = CanIoGetMessage(1, 13U, NULL,
      &canRxData_1_13U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1 > 0) {
      /* read the data */
      rtb_SFunction_o2_i = canRxData_1_13U.uint8_T_info[0];
      rtb_SFunction_o3_gj = canRxData_1_13U.uint8_T_info[1];
      rtb_SFunction_o4_nu = canRxData_1_13U.uint8_T_info[2];
      rtb_SFunction_o5_e = canRxData_1_13U.uint8_T_info[3];
      rtb_SFunction_o6_hh = canRxData_1_13U.uint8_T_info[4];
      rtb_SFunction_o7_ju = canRxData_1_13U.uint8_T_info[5];
      rtb_SFunction_o8_f = canRxData_1_13U.uint8_T_info[6];
      rtb_SFunction_o9_a = canRxData_1_13U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S916>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S917>/Enable'
     */
    if (localB->SFunction_o1 > 0) {
      /* Inport: '<S917>/In1' */
      localB->In1 = rtb_SFunction_o2_i;

      /* Inport: '<S917>/In2' */
      localB->In2 = rtb_SFunction_o3_gj;

      /* Inport: '<S917>/In3' */
      localB->In3 = rtb_SFunction_o4_nu;

      /* Inport: '<S917>/In4' */
      localB->In4 = rtb_SFunction_o5_e;

      /* Inport: '<S917>/In5' */
      localB->In5 = rtb_SFunction_o6_hh;

      /* Inport: '<S917>/In6' */
      localB->In6 = rtb_SFunction_o7_ju;

      /* Inport: '<S917>/In7' */
      localB->In7 = rtb_SFunction_o8_f;

      /* Inport: '<S917>/In8' */
      localB->In8 = rtb_SFunction_o9_a;
    }

    /* End of Outputs for SubSystem: '<S916>/Enabled Subsystem' */
  } else {
    if (localDW->Vote3_ID_CAN_MODE) {
      /* Disable for Outport: '<S899>/CAN_new' */
      localB->SFunction_o1 = 0;

      /* Disable for Outport: '<S899>/Out2' */
      localB->In1 = ((uint8_T)0U);

      /* Disable for Outport: '<S899>/Out3' */
      localB->In2 = ((uint8_T)0U);

      /* Disable for Outport: '<S899>/Out4' */
      localB->In3 = ((uint8_T)0U);

      /* Disable for Outport: '<S899>/Out5' */
      localB->In4 = ((uint8_T)0U);

      /* Disable for Outport: '<S899>/Out6' */
      localB->In5 = ((uint8_T)0U);

      /* Disable for Outport: '<S899>/Out7' */
      localB->In6 = ((uint8_T)0U);

      /* Disable for Outport: '<S899>/Out8' */
      localB->In7 = ((uint8_T)0U);

      /* Disable for Outport: '<S899>/Out9' */
      localB->In8 = ((uint8_T)0U);
      localDW->Vote3_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/Vote3_ID_CAN' */

  /* RelationalOperator: '<S889>/Equal4' incorporates:
   *  Constant: '<S889>/Constant4'
   */
  rtb_Equal4_ar = (RxID_CAN2_s == 21.0);

  /* Outputs for Enabled SubSystem: '<S889>/SetValues_ID_CAN' incorporates:
   *  EnablePort: '<S895>/Enable'
   */
  if (rtb_Equal4_ar) {
    if (!localDW->SetValues_ID_CAN_MODE) {
      localDW->SetValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S908>/S-Function' incorporates:
     *  Constant: '<S895>/Constant4'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_e = CanIoGetMessage(1, 21U, NULL,
      &canRxData_1_21U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_e > 0) {
      /* read the data */
      rtb_SFunction_o2_ho = canRxData_1_21U.uint8_T_info[0];
      rtb_SFunction_o3_e = canRxData_1_21U.uint8_T_info[1];
      rtb_SFunction_o4_ny = canRxData_1_21U.uint8_T_info[2];
      rtb_SFunction_o5_pj = canRxData_1_21U.uint8_T_info[3];
      rtb_SFunction_o6_k = canRxData_1_21U.uint8_T_info[4];
      rtb_SFunction_o7_l = canRxData_1_21U.uint8_T_info[5];
      rtb_SFunction_o8_i = canRxData_1_21U.uint8_T_info[6];
      rtb_SFunction_o9_j = canRxData_1_21U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S908>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S909>/Enable'
     */
    if (localB->SFunction_o1_e > 0) {
      /* Inport: '<S909>/In1' */
      localB->In1_mc = rtb_SFunction_o2_ho;

      /* Inport: '<S909>/In2' */
      localB->In2_i4 = rtb_SFunction_o3_e;

      /* Inport: '<S909>/In3' */
      localB->In3_m = rtb_SFunction_o4_ny;

      /* Inport: '<S909>/In4' */
      localB->In4_f = rtb_SFunction_o5_pj;

      /* Inport: '<S909>/In5' */
      localB->In5_l = rtb_SFunction_o6_k;

      /* Inport: '<S909>/In6' */
      localB->In6_o = rtb_SFunction_o7_l;

      /* Inport: '<S909>/In7' */
      localB->In7_eu = rtb_SFunction_o8_i;

      /* Inport: '<S909>/In8' */
      localB->In8_c = rtb_SFunction_o9_j;
    }

    /* End of Outputs for SubSystem: '<S908>/Enabled Subsystem' */
  } else {
    if (localDW->SetValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S895>/CAN_new' */
      localB->SFunction_o1_e = 0;

      /* Disable for Outport: '<S895>/Out2' */
      localB->In1_mc = ((uint8_T)0U);

      /* Disable for Outport: '<S895>/Out3' */
      localB->In2_i4 = ((uint8_T)0U);

      /* Disable for Outport: '<S895>/Out4' */
      localB->In3_m = ((uint8_T)0U);

      /* Disable for Outport: '<S895>/Out5' */
      localB->In4_f = ((uint8_T)0U);

      /* Disable for Outport: '<S895>/Out6' */
      localB->In5_l = ((uint8_T)0U);

      /* Disable for Outport: '<S895>/Out7' */
      localB->In6_o = ((uint8_T)0U);

      /* Disable for Outport: '<S895>/Out8' */
      localB->In7_eu = ((uint8_T)0U);

      /* Disable for Outport: '<S895>/Out9' */
      localB->In8_c = ((uint8_T)0U);
      localDW->SetValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/SetValues_ID_CAN' */

  /* RelationalOperator: '<S889>/Equal5' incorporates:
   *  Constant: '<S889>/Constant5'
   */
  rtb_Equal5_on = (RxID_CAN2_s == 22.0);

  /* Outputs for Enabled SubSystem: '<S889>/SensorValues_ID_CAN' incorporates:
   *  EnablePort: '<S894>/Enable'
   */
  if (rtb_Equal5_on) {
    if (!localDW->SensorValues_ID_CAN_MODE) {
      localDW->SensorValues_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S906>/S-Function' incorporates:
     *  Constant: '<S894>/Constant5'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_mp = CanIoGetMessage(1, 22U, NULL,
      &canRxData_1_22U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_mp > 0) {
      /* read the data */
      rtb_SFunction_o2_hx = canRxData_1_22U.uint8_T_info[0];
      rtb_SFunction_o3_nv = canRxData_1_22U.uint8_T_info[1];
      rtb_SFunction_o4_jg = canRxData_1_22U.uint8_T_info[2];
      rtb_SFunction_o5_h = canRxData_1_22U.uint8_T_info[3];
      rtb_SFunction_o6_aj = canRxData_1_22U.uint8_T_info[4];
      rtb_SFunction_o7_b = canRxData_1_22U.uint8_T_info[5];
      rtb_SFunction_o8_h = canRxData_1_22U.uint8_T_info[6];
      rtb_SFunction_o9_e = canRxData_1_22U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S906>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S907>/Enable'
     */
    if (localB->SFunction_o1_mp > 0) {
      /* Inport: '<S907>/In1' */
      localB->In1_n = rtb_SFunction_o2_hx;

      /* Inport: '<S907>/In2' */
      localB->In2_ie = rtb_SFunction_o3_nv;

      /* Inport: '<S907>/In3' */
      localB->In3_p = rtb_SFunction_o4_jg;

      /* Inport: '<S907>/In4' */
      localB->In4_c = rtb_SFunction_o5_h;

      /* Inport: '<S907>/In5' */
      localB->In5_kx = rtb_SFunction_o6_aj;

      /* Inport: '<S907>/In6' */
      localB->In6_f = rtb_SFunction_o7_b;

      /* Inport: '<S907>/In7' */
      localB->In7_d = rtb_SFunction_o8_h;

      /* Inport: '<S907>/In8' */
      localB->In8_j = rtb_SFunction_o9_e;
    }

    /* End of Outputs for SubSystem: '<S906>/Enabled Subsystem' */
  } else {
    if (localDW->SensorValues_ID_CAN_MODE) {
      /* Disable for Outport: '<S894>/CAN_new' */
      localB->SFunction_o1_mp = 0;

      /* Disable for Outport: '<S894>/Out2' */
      localB->In1_n = ((uint8_T)0U);

      /* Disable for Outport: '<S894>/Out3' */
      localB->In2_ie = ((uint8_T)0U);

      /* Disable for Outport: '<S894>/Out4' */
      localB->In3_p = ((uint8_T)0U);

      /* Disable for Outport: '<S894>/Out5' */
      localB->In4_c = ((uint8_T)0U);

      /* Disable for Outport: '<S894>/Out6' */
      localB->In5_kx = ((uint8_T)0U);

      /* Disable for Outport: '<S894>/Out7' */
      localB->In6_f = ((uint8_T)0U);

      /* Disable for Outport: '<S894>/Out8' */
      localB->In7_d = ((uint8_T)0U);

      /* Disable for Outport: '<S894>/Out9' */
      localB->In8_j = ((uint8_T)0U);
      localDW->SensorValues_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/SensorValues_ID_CAN' */

  /* RelationalOperator: '<S889>/Equal6' incorporates:
   *  Constant: '<S889>/Constant6'
   */
  rtb_Equal6_a = (RxID_CAN2_s == 23.0);

  /* Outputs for Enabled SubSystem: '<S889>/OutControl1_ID_CAN' incorporates:
   *  EnablePort: '<S891>/Enable'
   */
  if (rtb_Equal6_a) {
    if (!localDW->OutControl1_ID_CAN_MODE) {
      localDW->OutControl1_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S900>/S-Function' incorporates:
     *  Constant: '<S891>/Constant6'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_f = CanIoGetMessage(1, 23U, NULL,
      &canRxData_1_23U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_f > 0) {
      /* read the data */
      rtb_SFunction_o2_ej = canRxData_1_23U.uint8_T_info[0];
      rtb_SFunction_o3_p = canRxData_1_23U.uint8_T_info[1];
      rtb_SFunction_o4_cg = canRxData_1_23U.uint8_T_info[2];
      rtb_SFunction_o5_b = canRxData_1_23U.uint8_T_info[3];
      rtb_SFunction_o6_o = canRxData_1_23U.uint8_T_info[4];
      rtb_SFunction_o7_i = canRxData_1_23U.uint8_T_info[5];
      rtb_SFunction_o8_nb = canRxData_1_23U.uint8_T_info[6];
      rtb_SFunction_o9_ib = canRxData_1_23U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S900>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S901>/Enable'
     */
    if (localB->SFunction_o1_f > 0) {
      /* Inport: '<S901>/In1' */
      localB->In1_b4 = rtb_SFunction_o2_ej;

      /* Inport: '<S901>/In2' */
      localB->In2_it = rtb_SFunction_o3_p;

      /* Inport: '<S901>/In3' */
      localB->In3_c = rtb_SFunction_o4_cg;

      /* Inport: '<S901>/In4' */
      localB->In4_p = rtb_SFunction_o5_b;

      /* Inport: '<S901>/In5' */
      localB->In5_j = rtb_SFunction_o6_o;

      /* Inport: '<S901>/In6' */
      localB->In6_c = rtb_SFunction_o7_i;

      /* Inport: '<S901>/In7' */
      localB->In7_f = rtb_SFunction_o8_nb;

      /* Inport: '<S901>/In8' */
      localB->In8_kt = rtb_SFunction_o9_ib;
    }

    /* End of Outputs for SubSystem: '<S900>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl1_ID_CAN_MODE) {
      /* Disable for Outport: '<S891>/CAN_new' */
      localB->SFunction_o1_f = 0;

      /* Disable for Outport: '<S891>/Out2' */
      localB->In1_b4 = ((uint8_T)0U);

      /* Disable for Outport: '<S891>/Out3' */
      localB->In2_it = ((uint8_T)0U);

      /* Disable for Outport: '<S891>/Out4' */
      localB->In3_c = ((uint8_T)0U);

      /* Disable for Outport: '<S891>/Out5' */
      localB->In4_p = ((uint8_T)0U);

      /* Disable for Outport: '<S891>/Out6' */
      localB->In5_j = ((uint8_T)0U);

      /* Disable for Outport: '<S891>/Out7' */
      localB->In6_c = ((uint8_T)0U);

      /* Disable for Outport: '<S891>/Out8' */
      localB->In7_f = ((uint8_T)0U);

      /* Disable for Outport: '<S891>/Out9' */
      localB->In8_kt = ((uint8_T)0U);
      localDW->OutControl1_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/OutControl1_ID_CAN' */

  /* RelationalOperator: '<S889>/Equal7' incorporates:
   *  Constant: '<S889>/Constant7'
   */
  rtb_Equal7_j = (RxID_CAN2_s == 24.0);

  /* Outputs for Enabled SubSystem: '<S889>/OutControl2_ID_CAN' incorporates:
   *  EnablePort: '<S892>/Enable'
   */
  if (rtb_Equal7_j) {
    if (!localDW->OutControl2_ID_CAN_MODE) {
      localDW->OutControl2_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S902>/S-Function' incorporates:
     *  Constant: '<S892>/Constant7'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_ew = CanIoGetMessage(1, 24U, NULL,
      &canRxData_1_24U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_ew > 0) {
      /* read the data */
      rtb_SFunction_o2_d = canRxData_1_24U.uint8_T_info[0];
      rtb_SFunction_o3_gd = canRxData_1_24U.uint8_T_info[1];
      rtb_SFunction_o4_eq = canRxData_1_24U.uint8_T_info[2];
      rtb_SFunction_o5_n = canRxData_1_24U.uint8_T_info[3];
      rtb_SFunction_o6_b = canRxData_1_24U.uint8_T_info[4];
      rtb_SFunction_o7_hw = canRxData_1_24U.uint8_T_info[5];
      rtb_SFunction_o8_hn = canRxData_1_24U.uint8_T_info[6];
      rtb_SFunction_o9_i1 = canRxData_1_24U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S902>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S903>/Enable'
     */
    if (localB->SFunction_o1_ew > 0) {
      /* Inport: '<S903>/In1' */
      localB->In1_j = rtb_SFunction_o2_d;

      /* Inport: '<S903>/In2' */
      localB->In2_a = rtb_SFunction_o3_gd;

      /* Inport: '<S903>/In3' */
      localB->In3_n2 = rtb_SFunction_o4_eq;

      /* Inport: '<S903>/In4' */
      localB->In4_k = rtb_SFunction_o5_n;

      /* Inport: '<S903>/In5' */
      localB->In5_p = rtb_SFunction_o6_b;

      /* Inport: '<S903>/In6' */
      localB->In6_ht = rtb_SFunction_o7_hw;

      /* Inport: '<S903>/In7' */
      localB->In7_dx = rtb_SFunction_o8_hn;

      /* Inport: '<S903>/In8' */
      localB->In8_l = rtb_SFunction_o9_i1;
    }

    /* End of Outputs for SubSystem: '<S902>/Enabled Subsystem' */
  } else {
    if (localDW->OutControl2_ID_CAN_MODE) {
      /* Disable for Outport: '<S892>/CAN_new' */
      localB->SFunction_o1_ew = 0;

      /* Disable for Outport: '<S892>/Out2' */
      localB->In1_j = ((uint8_T)0U);

      /* Disable for Outport: '<S892>/Out3' */
      localB->In2_a = ((uint8_T)0U);

      /* Disable for Outport: '<S892>/Out4' */
      localB->In3_n2 = ((uint8_T)0U);

      /* Disable for Outport: '<S892>/Out5' */
      localB->In4_k = ((uint8_T)0U);

      /* Disable for Outport: '<S892>/Out6' */
      localB->In5_p = ((uint8_T)0U);

      /* Disable for Outport: '<S892>/Out7' */
      localB->In6_ht = ((uint8_T)0U);

      /* Disable for Outport: '<S892>/Out8' */
      localB->In7_dx = ((uint8_T)0U);

      /* Disable for Outport: '<S892>/Out9' */
      localB->In8_l = ((uint8_T)0U);
      localDW->OutControl2_ID_CAN_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S889>/OutControl2_ID_CAN' */

  /* Outputs for Enabled SubSystem: '<S889>/OutEmulator_ID_CAN' incorporates:
   *  EnablePort: '<S893>/Enable'
   */
  /* RelationalOperator: '<S889>/Equal8' incorporates:
   *  Constant: '<S889>/Constant8'
   *  Inport: '<S905>/In1'
   *  Inport: '<S905>/In2'
   *  Inport: '<S905>/In3'
   *  Inport: '<S905>/In4'
   *  Inport: '<S905>/In5'
   *  Inport: '<S905>/In6'
   *  Inport: '<S905>/In7'
   *  Inport: '<S905>/In8'
   */
  if (RxID_CAN2_s == 25.0) {
    if (!localDW->OutEmulator_ID_CAN_MODE) {
      localDW->OutEmulator_ID_CAN_MODE = true;
    }

    /* M-S-Function: '<S904>/S-Function' incorporates:
     *  Constant: '<S893>/Constant8'
     */

    /* read the message data and store the new parameter */
    localB->SFunction_o1_c5 = CanIoGetMessage(1, 25U, NULL,
      &canRxData_1_25U.uint8_T_info[0], NULL);

    /* process the message data */
    if (localB->SFunction_o1_c5 > 0) {
      /* read the data */
      rtb_SFunction_o2_mb = canRxData_1_25U.uint8_T_info[0];
      rtb_SFunction_o3_gq = canRxData_1_25U.uint8_T_info[1];
      rtb_SFunction_o4_c = canRxData_1_25U.uint8_T_info[2];
      rtb_SFunction_o5_cj = canRxData_1_25U.uint8_T_info[3];
      rtb_SFunction_o6_jc = canRxData_1_25U.uint8_T_info[4];
      rtb_SFunction_o7_nl = canRxData_1_25U.uint8_T_info[5];
      rtb_SFunction_o8_m = canRxData_1_25U.uint8_T_info[6];
      rtb_SFunction_o9_fl = canRxData_1_25U.uint8_T_info[7];
    }

    /* Outputs for Enabled SubSystem: '<S904>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S905>/Enable'
     */
    if (localB->SFunction_o1_c5 > 0) {
      localB->In1_f = rtb_SFunction_o2_mb;
      localB->In2_h = rtb_SFunction_o3_gq;
      localB->In3_o = rtb_SFunction_o4_c;
      localB->In4_d = rtb_SFunction_o5_cj;
      localB->In5_b = rtb_SFunction_o6_jc;
      localB->In6_h = rtb_SFunction_o7_nl;
      localB->In7_bb = rtb_SFunction_o8_m;
      localB->In8_p1 = rtb_SFunction_o9_fl;
    }

    /* End of Outputs for SubSystem: '<S904>/Enabled Subsystem' */
  } else {
    if (localDW->OutEmulator_ID_CAN_MODE) {
      /* Disable for Outport: '<S893>/CAN_new' */
      localB->SFunction_o1_c5 = 0;

      /* Disable for Outport: '<S893>/Out2' */
      localB->In1_f = ((uint8_T)0U);

      /* Disable for Outport: '<S893>/Out3' */
      localB->In2_h = ((uint8_T)0U);

      /* Disable for Outport: '<S893>/Out4' */
      localB->In3_o = ((uint8_T)0U);

      /* Disable for Outport: '<S893>/Out5' */
      localB->In4_d = ((uint8_T)0U);

      /* Disable for Outport: '<S893>/Out6' */
      localB->In5_b = ((uint8_T)0U);

      /* Disable for Outport: '<S893>/Out7' */
      localB->In6_h = ((uint8_T)0U);

      /* Disable for Outport: '<S893>/Out8' */
      localB->In7_bb = ((uint8_T)0U);

      /* Disable for Outport: '<S893>/Out9' */
      localB->In8_p1 = ((uint8_T)0U);
      localDW->OutEmulator_ID_CAN_MODE = false;
    }
  }

  /* End of RelationalOperator: '<S889>/Equal8' */
  /* End of Outputs for SubSystem: '<S889>/OutEmulator_ID_CAN' */

  /* Switch: '<S889>/Switch' incorporates:
   *  Switch: '<S889>/Switch1'
   *  Switch: '<S889>/Switch2'
   *  Switch: '<S889>/Switch3'
   *  Switch: '<S889>/Switch4'
   *  Switch: '<S889>/Switch5'
   *  Switch: '<S889>/Switch6'
   *  Switch: '<S889>/Switch7'
   */
  if (rtb_Equal_d) {
    rtb_signal1_f4 = localB->SFunction_o1_d;
    rtb_signal2_kw = localB->In1_b;
    rtb_signal3 = localB->In2_c;
    rtb_signal4 = localB->In3_n;
    rtb_signal5 = localB->In4_m;
    rtb_signal6 = localB->In5_k;
    rtb_signal7 = localB->In6_l;
    rtb_signal8 = localB->In7_b;
    rtb_signal9 = localB->In8_k;
  } else {
    if (rtb_Equal1_l) {
      /* Switch: '<S889>/Switch1' */
      rtb_signal1_f4 = localB->SFunction_o1_m;
    } else if (rtb_Equal2_b4) {
      /* Switch: '<S889>/Switch2' incorporates:
       *  Switch: '<S889>/Switch1'
       */
      rtb_signal1_f4 = localB->SFunction_o1_c;
    } else if (rtb_Equal3_n) {
      /* Switch: '<S889>/Switch3' incorporates:
       *  Switch: '<S889>/Switch1'
       *  Switch: '<S889>/Switch2'
       */
      rtb_signal1_f4 = localB->SFunction_o1;
    } else if (rtb_Equal4_ar) {
      /* Switch: '<S889>/Switch4' incorporates:
       *  Switch: '<S889>/Switch1'
       *  Switch: '<S889>/Switch2'
       *  Switch: '<S889>/Switch3'
       */
      rtb_signal1_f4 = localB->SFunction_o1_e;
    } else if (rtb_Equal5_on) {
      /* Switch: '<S889>/Switch5' incorporates:
       *  Switch: '<S889>/Switch1'
       *  Switch: '<S889>/Switch2'
       *  Switch: '<S889>/Switch3'
       *  Switch: '<S889>/Switch4'
       */
      rtb_signal1_f4 = localB->SFunction_o1_mp;
    } else if (rtb_Equal6_a) {
      /* Switch: '<S889>/Switch6' incorporates:
       *  Switch: '<S889>/Switch1'
       *  Switch: '<S889>/Switch2'
       *  Switch: '<S889>/Switch3'
       *  Switch: '<S889>/Switch4'
       *  Switch: '<S889>/Switch5'
       */
      rtb_signal1_f4 = localB->SFunction_o1_f;
    } else if (rtb_Equal7_j) {
      /* Switch: '<S889>/Switch7' incorporates:
       *  Switch: '<S889>/Switch1'
       *  Switch: '<S889>/Switch2'
       *  Switch: '<S889>/Switch3'
       *  Switch: '<S889>/Switch4'
       *  Switch: '<S889>/Switch5'
       *  Switch: '<S889>/Switch6'
       */
      rtb_signal1_f4 = localB->SFunction_o1_ew;
    } else {
      /* Switch: '<S889>/Switch4' incorporates:
       *  Switch: '<S889>/Switch1'
       *  Switch: '<S889>/Switch2'
       *  Switch: '<S889>/Switch3'
       *  Switch: '<S889>/Switch5'
       *  Switch: '<S889>/Switch6'
       *  Switch: '<S889>/Switch7'
       */
      rtb_signal1_f4 = localB->SFunction_o1_c5;
    }

    /* Switch: '<S889>/Switch1' incorporates:
     *  Switch: '<S889>/Switch2'
     *  Switch: '<S889>/Switch3'
     *  Switch: '<S889>/Switch4'
     *  Switch: '<S889>/Switch5'
     *  Switch: '<S889>/Switch6'
     *  Switch: '<S889>/Switch7'
     */
    if (rtb_Equal1_l) {
      rtb_signal2_kw = localB->In1_m;
      rtb_signal3 = localB->In2_j;
      rtb_signal4 = localB->In3_d;
      rtb_signal5 = localB->In4_n;
      rtb_signal6 = localB->In5_i;
      rtb_signal7 = localB->In6_n;
      rtb_signal8 = localB->In7_e;
      rtb_signal9 = localB->In8_i;
    } else if (rtb_Equal2_b4) {
      rtb_signal2_kw = localB->In1_l;
      rtb_signal3 = localB->In2_i;
      rtb_signal4 = localB->In3_l;
      rtb_signal5 = localB->In4_e;
      rtb_signal6 = localB->In5_c;
      rtb_signal7 = localB->In6_g;
      rtb_signal8 = localB->In7_j;
      rtb_signal9 = localB->In8_p;
    } else {
      if (rtb_Equal3_n) {
        rtb_signal2_kw = localB->In1;
      } else if (rtb_Equal4_ar) {
        rtb_signal2_kw = localB->In1_mc;
      } else if (rtb_Equal5_on) {
        rtb_signal2_kw = localB->In1_n;
      } else if (rtb_Equal6_a) {
        rtb_signal2_kw = localB->In1_b4;
      } else if (rtb_Equal7_j) {
        rtb_signal2_kw = localB->In1_j;
      } else {
        rtb_signal2_kw = localB->In1_f;
      }

      if (rtb_Equal3_n) {
        rtb_signal3 = localB->In2;
      } else if (rtb_Equal4_ar) {
        rtb_signal3 = localB->In2_i4;
      } else if (rtb_Equal5_on) {
        rtb_signal3 = localB->In2_ie;
      } else if (rtb_Equal6_a) {
        rtb_signal3 = localB->In2_it;
      } else if (rtb_Equal7_j) {
        rtb_signal3 = localB->In2_a;
      } else {
        rtb_signal3 = localB->In2_h;
      }

      if (rtb_Equal3_n) {
        rtb_signal4 = localB->In3;
      } else if (rtb_Equal4_ar) {
        rtb_signal4 = localB->In3_m;
      } else if (rtb_Equal5_on) {
        rtb_signal4 = localB->In3_p;
      } else if (rtb_Equal6_a) {
        rtb_signal4 = localB->In3_c;
      } else if (rtb_Equal7_j) {
        rtb_signal4 = localB->In3_n2;
      } else {
        rtb_signal4 = localB->In3_o;
      }

      if (rtb_Equal3_n) {
        rtb_signal5 = localB->In4;
      } else if (rtb_Equal4_ar) {
        rtb_signal5 = localB->In4_f;
      } else if (rtb_Equal5_on) {
        rtb_signal5 = localB->In4_c;
      } else if (rtb_Equal6_a) {
        rtb_signal5 = localB->In4_p;
      } else if (rtb_Equal7_j) {
        rtb_signal5 = localB->In4_k;
      } else {
        rtb_signal5 = localB->In4_d;
      }

      if (rtb_Equal3_n) {
        rtb_signal6 = localB->In5;
      } else if (rtb_Equal4_ar) {
        rtb_signal6 = localB->In5_l;
      } else if (rtb_Equal5_on) {
        rtb_signal6 = localB->In5_kx;
      } else if (rtb_Equal6_a) {
        rtb_signal6 = localB->In5_j;
      } else if (rtb_Equal7_j) {
        rtb_signal6 = localB->In5_p;
      } else {
        rtb_signal6 = localB->In5_b;
      }

      if (rtb_Equal3_n) {
        rtb_signal7 = localB->In6;
      } else if (rtb_Equal4_ar) {
        rtb_signal7 = localB->In6_o;
      } else if (rtb_Equal5_on) {
        rtb_signal7 = localB->In6_f;
      } else if (rtb_Equal6_a) {
        rtb_signal7 = localB->In6_c;
      } else if (rtb_Equal7_j) {
        rtb_signal7 = localB->In6_ht;
      } else {
        rtb_signal7 = localB->In6_h;
      }

      if (rtb_Equal3_n) {
        rtb_signal8 = localB->In7;
      } else if (rtb_Equal4_ar) {
        rtb_signal8 = localB->In7_eu;
      } else if (rtb_Equal5_on) {
        rtb_signal8 = localB->In7_d;
      } else if (rtb_Equal6_a) {
        rtb_signal8 = localB->In7_f;
      } else if (rtb_Equal7_j) {
        rtb_signal8 = localB->In7_dx;
      } else {
        rtb_signal8 = localB->In7_bb;
      }

      if (rtb_Equal3_n) {
        rtb_signal9 = localB->In8;
      } else if (rtb_Equal4_ar) {
        rtb_signal9 = localB->In8_c;
      } else if (rtb_Equal5_on) {
        rtb_signal9 = localB->In8_j;
      } else if (rtb_Equal6_a) {
        rtb_signal9 = localB->In8_kt;
      } else if (rtb_Equal7_j) {
        rtb_signal9 = localB->In8_l;
      } else {
        rtb_signal9 = localB->In8_p1;
      }
    }
  }

  /* End of Switch: '<S889>/Switch' */

  /* Outputs for Enabled SubSystem: '<S21>/Buffer ready' incorporates:
   *  EnablePort: '<S887>/Enable'
   */
  /* Logic: '<S21>/AND2' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S21>/Constant7'
   *  RelationalOperator: '<S21>/Equal3'
   *  RelationalOperator: '<S21>/Equal6'
   */
  if ((*rtd_Rx_State_CAN2 == 1.0) && (0.0 == rtb_signal1_f4)) {
    /* DataStoreWrite: '<S887>/Data Store Write' incorporates:
     *  Constant: '<S887>/New_Msg'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)2U);

    /* DataStoreWrite: '<S887>/Data Store Write1' incorporates:
     *  Constant: '<S887>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of Logic: '<S21>/AND2' */
  /* End of Outputs for SubSystem: '<S21>/Buffer ready' */

  /* Outputs for Enabled SubSystem: '<S21>/Update message buffers' incorporates:
   *  EnablePort: '<S890>/Enable'
   */
  /* Logic: '<S21>/AND3' incorporates:
   *  Constant: '<S21>/Constant4'
   *  Constant: '<S21>/Constant5'
   *  RelationalOperator: '<S21>/Equal4'
   *  RelationalOperator: '<S21>/Equal7'
   */
  if ((*rtd_Rx_State_CAN2 == 2.0) && (rtb_signal1_f4 >= 1.0)) {
    /* DataStoreWrite: '<S890>/Data Store Write1' */
    rtd_Msg_Rx_CAN2->Buffer_1 = rtb_signal2_kw;
    rtd_Msg_Rx_CAN2->Buffer_2 = rtb_signal3;
    rtd_Msg_Rx_CAN2->Buffer_3 = rtb_signal4;
    rtd_Msg_Rx_CAN2->Buffer_4 = rtb_signal5;
    rtd_Msg_Rx_CAN2->Buffer_5 = rtb_signal6;
    rtd_Msg_Rx_CAN2->Buffer_6 = rtb_signal7;
    rtd_Msg_Rx_CAN2->Buffer_7 = rtb_signal8;
    rtd_Msg_Rx_CAN2->Buffer_8 = rtb_signal9;

    /* DataStoreWrite: '<S890>/Data Store Write' incorporates:
     *  Constant: '<S890>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;

    /* DataStoreWrite: '<S890>/Data Store Write2' incorporates:
     *  Constant: '<S890>/SET'
     */
    *rtd_New_Msg_Ready_CAN2 = true;

    /* DataStoreWrite: '<S890>/Data Store Write5' incorporates:
     *  Constant: '<S890>/Idle_State'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)3U);

    /* DataStoreRead: '<S890>/Local_Time' */
    Rx_msg_ticks_CAN2 = *rtd_Local_Ticks;

    /* DataStoreWrite: '<S890>/Data Store Write6' */
    *rtd_Msg_Rx_Ticks_CAN2 = Rx_msg_ticks_CAN2;

    /* DataTypeConversion: '<S890>/Cast To Double' */
    Rx_temporal_msg_CAN2 = rtb_signal2_kw;
  }

  /* End of Logic: '<S21>/AND3' */
  /* End of Outputs for SubSystem: '<S21>/Update message buffers' */

  /* Outputs for Enabled SubSystem: '<S21>/Prepare buffer' incorporates:
   *  EnablePort: '<S888>/Enable'
   */
  /* RelationalOperator: '<S21>/Equal5' incorporates:
   *  Constant: '<S21>/Constant6'
   */
  if (*rtd_Rx_State_CAN2 == 0.0) {
    /* DataStoreWrite: '<S888>/Data Store Write' incorporates:
     *  Constant: '<S888>/Constant1'
     */
    *rtd_Rx_State_CAN2 = ((uint8_T)1U);

    /* DataStoreWrite: '<S888>/Data Store Write1' incorporates:
     *  Constant: '<S888>/SET'
     */
    *rtd_Toggle_Pin_A0 = true;
  }

  /* End of RelationalOperator: '<S21>/Equal5' */
  /* End of Outputs for SubSystem: '<S21>/Prepare buffer' */
}

/* Output and update for function-call system: '<S6>/CAN2 Send' */
void CAN2Send(rtB_CAN2Send *localB, rtDW_CAN2Send *localDW, uint16_T
              *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
              *rtd_Toggle_Pin_A0, uint32_T *rtd_TxID_CAN2, real_T
              *rtd_Tx_msg_count_CAN2)
{
  /* DataStoreWrite: '<S22>/Data Store Write2' incorporates:
   *  Constant: '<S22>/Constant8'
   *  Sum: '<S22>/Plus'
   */
  *rtd_Tx_msg_count_CAN2 += 1.0;

  /* DataStoreWrite: '<S22>/Data Store Write1' incorporates:
   *  Constant: '<S22>/Constant'
   */
  *rtd_Toggle_Pin_A0 = true;

  /* Sum: '<S22>/Sum1' incorporates:
   *  Constant: '<S22>/Constant3'
   *  DataStoreRead: '<S22>/Data Store Read'
   */
  TxCAN2_counter_s = 1U + localDW->fcn_call_counter;

  /* DataStoreWrite: '<S22>/Data Store Write' */
  localDW->fcn_call_counter = TxCAN2_counter_s;

  /* DataTypeConversion: '<S22>/Cast To Double' */
  Tx_temporal_msg_CAN2 = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataStoreRead: '<S22>/Data Store Read3' */
  TxID_CAN2_s = *rtd_TxID_CAN2;

  /* DataTypeConversion: '<S22>/Data Type Conversion' */
  localB->DataTypeConversion = rtd_Msg_Tx_CAN2->Buffer_1;

  /* DataTypeConversion: '<S22>/Data Type Conversion1' */
  localB->DataTypeConversion1 = TxID_CAN2_s;

  /* DataTypeConversion: '<S22>/Data Type Conversion10' */
  localB->DataTypeConversion10 = rtd_Msg_Tx_CAN2->Buffer_8;

  /* DataTypeConversion: '<S22>/Data Type Conversion4' */
  localB->DataTypeConversion4 = rtd_Msg_Tx_CAN2->Buffer_2;

  /* DataTypeConversion: '<S22>/Data Type Conversion5' */
  localB->DataTypeConversion5 = rtd_Msg_Tx_CAN2->Buffer_3;

  /* DataTypeConversion: '<S22>/Data Type Conversion6' */
  localB->DataTypeConversion6 = rtd_Msg_Tx_CAN2->Buffer_4;

  /* DataTypeConversion: '<S22>/Data Type Conversion7' */
  localB->DataTypeConversion7 = rtd_Msg_Tx_CAN2->Buffer_5;

  /* DataTypeConversion: '<S22>/Data Type Conversion8' */
  localB->DataTypeConversion8 = rtd_Msg_Tx_CAN2->Buffer_6;

  /* DataTypeConversion: '<S22>/Data Type Conversion9' */
  localB->DataTypeConversion9 = rtd_Msg_Tx_CAN2->Buffer_7;

  /* DataStoreRead: '<S22>/Data Store Read1' */
  Local_Ticks_Activation_CAN2_send = *rtd_Local_Ticks;

  /* M-S-Function: '<S919>/Level-2 M-file S-Function' */
  /* read 16-bit free running counter value */
  FRC_Activation_CAN2_send = TimeoutGetFreeRunningCounter(TIMEOUT_MODULE_TIM4);

  /* Update for M-S-Function: '<S918>/S-Function' */
  {
    /* prepare the data */
    canTxData.uint8_T_info[0] = localB->DataTypeConversion;
    canTxData.uint8_T_info[1] = localB->DataTypeConversion4;
    canTxData.uint8_T_info[2] = localB->DataTypeConversion5;
    canTxData.uint8_T_info[3] = localB->DataTypeConversion6;
    canTxData.uint8_T_info[4] = localB->DataTypeConversion7;
    canTxData.uint8_T_info[5] = localB->DataTypeConversion8;
    canTxData.uint8_T_info[6] = localB->DataTypeConversion9;
    canTxData.uint8_T_info[7] = localB->DataTypeConversion10;

    /* send the data */
    CanTransmit(1, localB->DataTypeConversion1, 8, &canTxData.uint8_T_info[0]);
  }
}

/* Disable for function-call system: '<S6>/Measure EXecution time' */
void MeasureEXecutiontime_Disable(rtDW_MeasureEXecutiontime *localDW)
{
  /* Disable for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A3' */
  if (localDW->DEBUGToggledigitalpinA3_MODE) {
    localDW->DEBUGToggledigitalpinA3_MODE = false;
  }

  /* End of Disable for SubSystem: '<S27>/DEBUG - Toggle digital pin A3' */
}

/* Start for function-call system: '<S6>/Measure EXecution time' */
void MeasureEXecutiontime_Start(void)
{
  /* Start for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A3' */

  /* Start for M-S-Function: '<S929>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN8, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S27>/DEBUG - Toggle digital pin A3' */
}

/* Output and update for function-call system: '<S6>/Measure EXecution time' */
void MeasureEXecutiontime(rtB_MeasureEXecutiontime *localB,
  rtDW_MeasureEXecutiontime *localDW)
{
  /* Outputs for Enabled SubSystem: '<S27>/DEBUG - Toggle digital pin A3' incorporates:
   *  EnablePort: '<S928>/Enable'
   */
  /* Constant: '<S27>/Constant1' */
  if (0.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA3_MODE) {
      localDW->DEBUGToggledigitalpinA3_MODE = true;
    }

    /* Switch: '<S928>/Switch' incorporates:
     *  DataStoreRead: '<S928>/Data Store Read'
     */
    if (localDW->A3_Pin_State) {
      /* DataStoreWrite: '<S928>/Data Store Write1' incorporates:
       *  Constant: '<S928>/Constant1'
       */
      localDW->A3_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S928>/Data Store Write1' incorporates:
       *  Constant: '<S928>/Constant'
       */
      localDW->A3_Pin_State = true;
    }

    /* End of Switch: '<S928>/Switch' */
    /* DataStoreRead: '<S928>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->A3_Pin_State;

    /* Update for M-S-Function: '<S929>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN8, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA3_MODE) {
      localDW->DEBUGToggledigitalpinA3_MODE = false;
    }
  }

  /* End of Constant: '<S27>/Constant1' */
  /* End of Outputs for SubSystem: '<S27>/DEBUG - Toggle digital pin A3' */
}

/*
 * Output and update for atomic system:
 *    '<S50>/Bit Shift3'
 *    '<S209>/Bit Shift3'
 *    '<S221>/Bit Shift3'
 *    '<S244>/Bit Shift3'
 *    '<S256>/Bit Shift3'
 *    '<S273>/Bit Shift3'
 *    '<S285>/Bit Shift3'
 *    '<S302>/Bit Shift3'
 *    '<S314>/Bit Shift3'
 *    '<S556>/Bit Shift3'
 *    ...
 */
void BitShift3(uint8_T rtu_u, rtB_BitShift3 *localB)
{
  /* MATLAB Function: '<S59>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S64>:1' */
  /* '<S64>:1:6' */
  localB->y = (uint8_T)(rtu_u << 1);
}

/*
 * Output and update for atomic system:
 *    '<S50>/Bit Shift4'
 *    '<S116>/Bit Shift'
 *    '<S122>/Bit Shift'
 *    '<S149>/Bit Shift'
 *    '<S155>/Bit Shift'
 *    '<S167>/Bit Shift'
 *    '<S173>/Bit Shift'
 *    '<S185>/Bit Shift'
 *    '<S191>/Bit Shift'
 *    '<S209>/Bit Shift4'
 *    ...
 */
void BitShift4(uint8_T rtu_u, rtB_BitShift4 *localB)
{
  /* MATLAB Function: '<S60>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S65>:1' */
  /* '<S65>:1:6' */
  localB->y = (uint8_T)(rtu_u << 4);
}

/*
 * Output and update for atomic system:
 *    '<S51>/Bit Shift'
 *    '<S52>/Bit Shift'
 *    '<S53>/Bit Shift'
 *    '<S54>/Bit Shift'
 *    '<S55>/Bit Shift'
 *    '<S670>/Bit Shift'
 *    '<S671>/Bit Shift'
 *    '<S672>/Bit Shift'
 *    '<S673>/Bit Shift'
 *    '<S721>/Bit Shift'
 *    ...
 */
void BitShift(uint8_T rtu_u, rtB_BitShift *localB)
{
  /* MATLAB Function: '<S66>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S68>:1' */
  /* '<S68>:1:8' */
  localB->y = (uint8_T)((uint32_T)rtu_u >> 7);
}

/*
 * Output and update for atomic system:
 *    '<S51>/Bit Shift1'
 *    '<S52>/Bit Shift1'
 *    '<S53>/Bit Shift1'
 *    '<S54>/Bit Shift1'
 *    '<S55>/Bit Shift1'
 *    '<S116>/Bit Shift1'
 *    '<S122>/Bit Shift1'
 *    '<S127>/Bit Shift'
 *    '<S128>/Bit Shift'
 *    '<S129>/Bit Shift'
 *    ...
 */
void BitShift1(uint8_T rtu_u, rtB_BitShift1 *localB)
{
  /* MATLAB Function: '<S67>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S69>:1' */
  /* '<S69>:1:6' */
  localB->y = (uint8_T)(rtu_u << 7);
}

/*
 * Disable for enable system:
 *    '<S92>/Reception substasks'
 *    '<S93>/Reception substasks'
 *    '<S94>/Reception substasks'
 *    '<S95>/Reception substasks'
 *    '<S326>/Reception substasks'
 *    '<S327>/Reception substasks'
 *    '<S328>/Reception substasks'
 *    '<S329>/Reception substasks'
 *    '<S330>/Reception substasks'
 *    '<S331>/Reception substasks'
 */
void Receptionsubstasks_Disable(rtB_Receptionsubstasks *localB,
  rtDW_Receptionsubstasks *localDW)
{
  /* Disable for Outport: '<S109>/Receive CAN1' */
  localB->AND = false;

  /* Disable for Outport: '<S109>/Receive CAN2' */
  localB->AND1 = false;
  localDW->Receptionsubstasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S92>/Reception substasks'
 *    '<S93>/Reception substasks'
 *    '<S94>/Reception substasks'
 *    '<S95>/Reception substasks'
 *    '<S326>/Reception substasks'
 *    '<S327>/Reception substasks'
 *    '<S328>/Reception substasks'
 *    '<S329>/Reception substasks'
 *    '<S330>/Reception substasks'
 *    '<S331>/Reception substasks'
 */
void Receptionsubstasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Receptionsubstasks *localB, const rtC_Receptionsubstasks *localC,
  rtDW_Receptionsubstasks *localDW, uint16_T *rtd_Local_Ticks, msg_buffer_type
  *rtd_Msg_Rx_d, boolean_T *rtd_New_Msg_Ready_CAN1, boolean_T
  *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1, uint32_T *rtd_RxID_CAN2,
  uint8_T *rtd_Rx_State_CAN1, uint8_T *rtd_Rx_State_CAN2, boolean_T
  *rtd_new_msg_Rx_l)
{
  boolean_T rtb_Equal2_dx;

  /* Outputs for Enabled SubSystem: '<S92>/Reception substasks' incorporates:
   *  EnablePort: '<S109>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Receptionsubstasks_MODE) {
      localDW->Receptionsubstasks_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S109>/RX buffers update' incorporates:
     *  EnablePort: '<S111>/Enable'
     */
    /* RelationalOperator: '<S109>/Equal16' */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataStoreWrite: '<S111>/Data Store Write11' */
      *rtd_RxID_CAN2 = localC->Cast13;

      /* DataStoreWrite: '<S111>/Data Store Write6' */
      *rtd_RxID_CAN1 = localC->Cast3;

      /* DataStoreWrite: '<S111>/Data Store Write9' */
      *rtd_New_Msg_Ready_CAN2 = localC->Cast14;

      /* DataStoreWrite: '<S111>/Data Store Write12' */
      *rtd_Rx_State_CAN2 = localC->Cast15;

      /* DataStoreWrite: '<S111>/Data Store Write2' */
      *rtd_New_Msg_Ready_CAN1 = localC->Cast5;

      /* DataStoreWrite: '<S111>/Data Store Write7' */
      *rtd_Rx_State_CAN1 = localC->Cast6;

      /* DataStoreWrite: '<S111>/Data Store Write' incorporates:
       *  Constant: '<S111>/RESET_Msg_Rx'
       */
      *rtd_Msg_Rx_d = HANcoder_E407_TTA_Controller_v2_rtZmsg_buffer_type;

      /* DataStoreWrite: '<S111>/Data Store Write3' incorporates:
       *  Constant: '<S111>/RESET_new_msg_Rx'
       */
      *rtd_new_msg_Rx_l = false;
    }

    /* End of RelationalOperator: '<S109>/Equal16' */
    /* End of Outputs for SubSystem: '<S109>/RX buffers update' */

    /* RelationalOperator: '<S109>/Equal2' */
    rtb_Equal2_dx = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S109>/AND' incorporates:
     *  Logic: '<S109>/NOT'
     */
    localB->AND = (rtb_Equal2_dx && (!*rtd_New_Msg_Ready_CAN1));

    /* Logic: '<S109>/AND1' incorporates:
     *  Logic: '<S109>/NOT1'
     */
    localB->AND1 = (rtb_Equal2_dx && (!*rtd_New_Msg_Ready_CAN2));
  } else {
    if (localDW->Receptionsubstasks_MODE) {
      Receptionsubstasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S92>/Reception substasks' */
}

real_T rt_modd(real_T u0, real_T u1)
{
  real_T y;
  boolean_T yEq;
  real_T q;
  y = u0;
  if (u0 == 0.0) {
    y = 0.0;
  } else {
    if (u1 != 0.0) {
      y = fmod(u0, u1);
      yEq = (y == 0.0);
      if ((!yEq) && (u1 > floor(u1))) {
        q = fabs(u0 / u1);
        yEq = (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q);
      }

      if (yEq) {
        y = 0.0;
      } else {
        if ((u0 < 0.0) != (u1 < 0.0)) {
          y += u1;
        }
      }
    }
  }

  return y;
}

/*
 * Disable for enable system:
 *    '<S89>/COMM Task - Sync bc 0'
 *    '<S90>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc0_Disable(rtB_COMMTaskSyncbc0 *localB, rtDW_COMMTaskSyncbc0
  *localDW)
{
  /* Disable for Enabled SubSystem: '<S92>/Reception substasks' */
  if (localDW->Receptionsubstasks_h.Receptionsubstasks_MODE) {
    Receptionsubstasks_Disable(&localB->Receptionsubstasks_h,
      &localDW->Receptionsubstasks_h);
  }

  /* End of Disable for SubSystem: '<S92>/Reception substasks' */

  /* Disable for Enabled SubSystem: '<S92>/Transmission subtasks' */
  if (localDW->Transmissionsubtasks_MODE) {
    /* Disable for Enabled SubSystem: '<S110>/Check msg transmission CAN1' */
    if (localDW->CheckmsgtransmissionCAN1_MODE) {
      /* Disable for Outport: '<S112>/Send CAN1' */
      localB->Equal7_a = false;
      localDW->CheckmsgtransmissionCAN1_MODE = false;
    }

    /* End of Disable for SubSystem: '<S110>/Check msg transmission CAN1' */

    /* Disable for Enabled SubSystem: '<S110>/Check msg transmission CAN2' */
    if (localDW->CheckmsgtransmissionCAN2_MODE) {
      /* Disable for Outport: '<S113>/Send CAN2' */
      localB->Equal7 = false;
      localDW->CheckmsgtransmissionCAN2_MODE = false;
    }

    /* End of Disable for SubSystem: '<S110>/Check msg transmission CAN2' */

    /* Disable for Outport: '<S110>/Send CAN1' */
    localB->Equal7_a = false;

    /* Disable for Outport: '<S110>/Send CAN2' */
    localB->Equal7 = false;
    localDW->Transmissionsubtasks_MODE = false;
  }

  /* End of Disable for SubSystem: '<S92>/Transmission subtasks' */

  /* Disable for Outport: '<S92>/Send CAN1' */
  localB->Equal7_a = false;

  /* Disable for Outport: '<S92>/Receive CAN1' */
  localB->Receptionsubstasks_h.AND = false;

  /* Disable for Outport: '<S92>/Send CAN2' */
  localB->Equal7 = false;

  /* Disable for Outport: '<S92>/Receive CAN2' */
  localB->Receptionsubstasks_h.AND1 = false;
  localDW->COMMTaskSyncbc0_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S89>/COMM Task - Sync bc 0'
 *    '<S90>/COMM Task - Sync bc 1'
 */
void COMMTaskSyncbc0(boolean_T rtu_Enable, real_T rtu_TimeMark,
                     rtB_COMMTaskSyncbc0 *localB, const rtC_COMMTaskSyncbc0
                     *localC, rtDW_COMMTaskSyncbc0 *localDW, real_T
                     *rtd_Board_ID, uint16_T *rtd_Local_Ticks, msg_buffer_type
                     *rtd_Msg_Rx_d, msg_buffer_type *rtd_Msg_Tx_CAN1,
                     msg_buffer_type *rtd_Msg_Tx_CAN2, boolean_T
                     *rtd_New_Msg_Ready_CAN1, boolean_T *rtd_New_Msg_Ready_CAN2,
                     real_T *rtd_Role_ID, uint32_T *rtd_RxID_CAN1, uint32_T
                     *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T
                     *rtd_Rx_State_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T
                     *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T
                     *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count,
                     real_T *rtd_delta_a_est, real_T *rtd_delta_f_est, boolean_T
                     *rtd_new_msg_Rx_l, real_T *rtd_speed_integral, real_T
                     *rtd_torque_ar_integral, real_T *rtd_torque_fr_integral)
{
  boolean_T rtb_Equal1_b;
  boolean_T rtb_LessThanOrEqual2_gp;
  real_T rtb_Multiply_k3;
  real_T rtb_Fix1_c;
  boolean_T rtb_NOT_k;
  uint8_T rtb_Cast_oc;
  uint8_T rtb_Cast_p;
  uint8_T rtb_Cast_a;
  uint8_T rtb_Cast_o;
  uint8_T rtb_Cast_i;
  uint8_T rtb_Cast4_n;
  uint8_T rtb_Cast1_o;
  uint8_T rtb_Cast18_f;
  uint8_T rtb_Cast9_l;
  real_T u;

  /* Outputs for Enabled SubSystem: '<S89>/COMM Task - Sync bc 0' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->COMMTaskSyncbc0_MODE) {
      localDW->COMMTaskSyncbc0_MODE = true;
    }

    /* RelationalOperator: '<S92>/Equal1' incorporates:
     *  Constant: '<S92>/Constant2'
     */
    rtb_Equal1_b = (*rtd_Role_ID == 1.0);

    /* Logic: '<S92>/NOT' */
    rtb_NOT_k = !rtb_Equal1_b;

    /* Outputs for Enabled SubSystem: '<S92>/Reception substasks' */
    Receptionsubstasks(rtb_NOT_k, rtu_TimeMark, &localB->Receptionsubstasks_h,
                       &localC->Receptionsubstasks_h,
                       &localDW->Receptionsubstasks_h, rtd_Local_Ticks,
                       rtd_Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                       rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                       rtd_Rx_State_CAN1, rtd_Rx_State_CAN2, rtd_new_msg_Rx_l);

    /* End of Outputs for SubSystem: '<S92>/Reception substasks' */

    /* Outputs for Enabled SubSystem: '<S92>/Transmission subtasks' incorporates:
     *  EnablePort: '<S110>/Enable'
     */
    if (rtb_Equal1_b) {
      if (!localDW->Transmissionsubtasks_MODE) {
        localDW->Transmissionsubtasks_MODE = true;
      }

      /* RelationalOperator: '<S110>/Equal2' */
      rtb_Equal1_b = (*rtd_Local_Ticks > rtu_TimeMark);

      /* Outputs for Enabled SubSystem: '<S110>/Msg_Value_Data_Encoded' incorporates:
       *  EnablePort: '<S114>/Enable'
       */
      /* RelationalOperator: '<S110>/Equal16' incorporates:
       *  Constant: '<S114>/Constant'
       */
      if (*rtd_Local_Ticks == rtu_TimeMark) {
        localB->Constant = ((uint8_T)0U);

        /* Switch: '<S127>/Switch2' incorporates:
         *  Constant: '<S114>/Constant'
         *  Constant: '<S114>/Constant8'
         *  Constant: '<S114>/Constant9'
         *  RelationalOperator: '<S127>/LessThanOrEqual1'
         *  RelationalOperator: '<S127>/LessThanOrEqual2'
         *  Switch: '<S127>/Switch1'
         */
        if (5.0 < *rtd_torque_ar_integral) {
          /* Switch: '<S127>/Switch' */
          rtb_Multiply_k3 = 5.0;
        } else if (*rtd_torque_ar_integral >= (-5.0)) {
          /* Switch: '<S127>/Switch1' */
          rtb_Multiply_k3 = *rtd_torque_ar_integral;
        } else {
          rtb_Multiply_k3 = (-5.0);
        }

        /* End of Switch: '<S127>/Switch2' */

        /* RelationalOperator: '<S127>/GreaterThan' incorporates:
         *  Constant: '<S127>/Constant'
         */
        rtb_LessThanOrEqual2_gp = (rtb_Multiply_k3 < 0.0);

        /* Abs: '<S127>/Abs' */
        rtb_Multiply_k3 = fabs(rtb_Multiply_k3);

        /* Rounding: '<S127>/Fix' */
        rtb_Fix1_c = floor(rtb_Multiply_k3);

        /* Sum: '<S127>/Minus' */
        rtb_Multiply_k3 -= rtb_Fix1_c;

        /* DataTypeConversion: '<S127>/Cast' */
        rtb_Cast_oc = rtb_LessThanOrEqual2_gp;

        /* Outputs for Atomic SubSystem: '<S127>/Bit Shift' */
        BitShift1(rtb_Cast_oc, &localB->BitShift_fs);

        /* End of Outputs for SubSystem: '<S127>/Bit Shift' */

        /* Product: '<S127>/Multiply' */
        rtb_Fix1_c *= localC->Power1;

        /* Product: '<S127>/Divide' */
        u = rtb_Multiply_k3 / localC->Power;

        /* Rounding: '<S127>/Fix1' */
        if (u < 0.0) {
          u = ceil(u);
        } else {
          u = floor(u);
        }

        /* End of Rounding: '<S127>/Fix1' */

        /* Sum: '<S127>/Plus' incorporates:
         *  DataTypeConversion: '<S127>/Cast1'
         *  DataTypeConversion: '<S127>/Cast2'
         */
        localB->Plus = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift_fs.y + (uint8_T)rtb_Fix1_c) + (uint8_T)u);

        /* Switch: '<S128>/Switch2' incorporates:
         *  Constant: '<S114>/Constant10'
         *  Constant: '<S114>/Constant11'
         *  RelationalOperator: '<S128>/LessThanOrEqual1'
         *  RelationalOperator: '<S128>/LessThanOrEqual2'
         *  Switch: '<S128>/Switch1'
         */
        if (10.0 < *rtd_speed_integral) {
          /* Switch: '<S128>/Switch' */
          rtb_Fix1_c = 10.0;
        } else if (*rtd_speed_integral >= (-10.0)) {
          /* Switch: '<S128>/Switch1' */
          rtb_Fix1_c = *rtd_speed_integral;
        } else {
          rtb_Fix1_c = (-10.0);
        }

        /* End of Switch: '<S128>/Switch2' */

        /* RelationalOperator: '<S128>/GreaterThan' incorporates:
         *  Constant: '<S128>/Constant'
         */
        rtb_LessThanOrEqual2_gp = (rtb_Fix1_c < 0.0);

        /* Abs: '<S128>/Abs' */
        rtb_Fix1_c = fabs(rtb_Fix1_c);

        /* Rounding: '<S128>/Fix' */
        rtb_Multiply_k3 = floor(rtb_Fix1_c);

        /* Sum: '<S128>/Minus' */
        rtb_Fix1_c -= rtb_Multiply_k3;

        /* DataTypeConversion: '<S128>/Cast' */
        rtb_Cast_p = rtb_LessThanOrEqual2_gp;

        /* Outputs for Atomic SubSystem: '<S128>/Bit Shift' */
        BitShift1(rtb_Cast_p, &localB->BitShift_a);

        /* End of Outputs for SubSystem: '<S128>/Bit Shift' */

        /* Product: '<S128>/Multiply' */
        rtb_Multiply_k3 *= localC->Power1_m;

        /* Product: '<S128>/Divide' */
        u = rtb_Fix1_c / localC->Power_o;

        /* Rounding: '<S128>/Fix1' */
        if (u < 0.0) {
          u = ceil(u);
        } else {
          u = floor(u);
        }

        /* End of Rounding: '<S128>/Fix1' */

        /* Sum: '<S128>/Plus' incorporates:
         *  DataTypeConversion: '<S128>/Cast1'
         *  DataTypeConversion: '<S128>/Cast2'
         */
        localB->Plus_k = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift_a.y + (uint8_T)rtb_Multiply_k3) + (uint8_T)u);

        /* Switch: '<S129>/Switch2' incorporates:
         *  Constant: '<S114>/Constant12'
         *  Constant: '<S114>/Constant13'
         *  RelationalOperator: '<S129>/LessThanOrEqual1'
         *  RelationalOperator: '<S129>/LessThanOrEqual2'
         *  Switch: '<S129>/Switch1'
         */
        if (1.0 < *rtd_delta_f_est) {
          /* Switch: '<S129>/Switch' */
          rtb_Fix1_c = 1.0;
        } else if (*rtd_delta_f_est >= (-1.0)) {
          /* Switch: '<S129>/Switch1' */
          rtb_Fix1_c = *rtd_delta_f_est;
        } else {
          rtb_Fix1_c = (-1.0);
        }

        /* End of Switch: '<S129>/Switch2' */

        /* RelationalOperator: '<S129>/GreaterThan' incorporates:
         *  Constant: '<S129>/Constant'
         */
        rtb_LessThanOrEqual2_gp = (rtb_Fix1_c < 0.0);

        /* Abs: '<S129>/Abs' */
        rtb_Fix1_c = fabs(rtb_Fix1_c);

        /* Rounding: '<S129>/Fix' */
        rtb_Multiply_k3 = floor(rtb_Fix1_c);

        /* Sum: '<S129>/Minus' */
        rtb_Fix1_c -= rtb_Multiply_k3;

        /* DataTypeConversion: '<S129>/Cast' */
        rtb_Cast_a = rtb_LessThanOrEqual2_gp;

        /* Outputs for Atomic SubSystem: '<S129>/Bit Shift' */
        BitShift1(rtb_Cast_a, &localB->BitShift_b);

        /* End of Outputs for SubSystem: '<S129>/Bit Shift' */

        /* Product: '<S129>/Multiply' */
        rtb_Multiply_k3 *= localC->Power1_i;

        /* Product: '<S129>/Divide' */
        u = rtb_Fix1_c / localC->Power_e;

        /* Rounding: '<S129>/Fix1' */
        if (u < 0.0) {
          u = ceil(u);
        } else {
          u = floor(u);
        }

        /* End of Rounding: '<S129>/Fix1' */

        /* Sum: '<S129>/Plus' incorporates:
         *  DataTypeConversion: '<S129>/Cast1'
         *  DataTypeConversion: '<S129>/Cast2'
         */
        localB->Plus_c = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift_b.y + (uint8_T)rtb_Multiply_k3) + (uint8_T)u);

        /* Switch: '<S130>/Switch2' incorporates:
         *  Constant: '<S114>/Constant14'
         *  Constant: '<S114>/Constant15'
         *  RelationalOperator: '<S130>/LessThanOrEqual1'
         *  RelationalOperator: '<S130>/LessThanOrEqual2'
         *  Switch: '<S130>/Switch1'
         */
        if (1.0 < *rtd_delta_a_est) {
          /* Switch: '<S130>/Switch' */
          rtb_Fix1_c = 1.0;
        } else if (*rtd_delta_a_est >= (-1.0)) {
          /* Switch: '<S130>/Switch1' */
          rtb_Fix1_c = *rtd_delta_a_est;
        } else {
          rtb_Fix1_c = (-1.0);
        }

        /* End of Switch: '<S130>/Switch2' */

        /* RelationalOperator: '<S130>/GreaterThan' incorporates:
         *  Constant: '<S130>/Constant'
         */
        rtb_LessThanOrEqual2_gp = (rtb_Fix1_c < 0.0);

        /* Abs: '<S130>/Abs' */
        rtb_Fix1_c = fabs(rtb_Fix1_c);

        /* Rounding: '<S130>/Fix' */
        rtb_Multiply_k3 = floor(rtb_Fix1_c);

        /* Sum: '<S130>/Minus' */
        rtb_Fix1_c -= rtb_Multiply_k3;

        /* DataTypeConversion: '<S130>/Cast' */
        rtb_Cast_o = rtb_LessThanOrEqual2_gp;

        /* Outputs for Atomic SubSystem: '<S130>/Bit Shift' */
        BitShift1(rtb_Cast_o, &localB->BitShift_by);

        /* End of Outputs for SubSystem: '<S130>/Bit Shift' */

        /* Product: '<S130>/Multiply' */
        rtb_Multiply_k3 *= localC->Power1_a;

        /* Product: '<S130>/Divide' */
        u = rtb_Fix1_c / localC->Power_m;

        /* Rounding: '<S130>/Fix1' */
        if (u < 0.0) {
          u = ceil(u);
        } else {
          u = floor(u);
        }

        /* End of Rounding: '<S130>/Fix1' */

        /* Sum: '<S130>/Plus' incorporates:
         *  DataTypeConversion: '<S130>/Cast1'
         *  DataTypeConversion: '<S130>/Cast2'
         */
        localB->Plus_m = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift_by.y + (uint8_T)rtb_Multiply_k3) + (uint8_T)u);

        /* Switch: '<S131>/Switch2' incorporates:
         *  Constant: '<S114>/Constant6'
         *  Constant: '<S114>/Constant7'
         *  RelationalOperator: '<S131>/LessThanOrEqual1'
         *  RelationalOperator: '<S131>/LessThanOrEqual2'
         *  Switch: '<S131>/Switch1'
         */
        if (5.0 < *rtd_torque_fr_integral) {
          /* Switch: '<S131>/Switch' */
          rtb_Fix1_c = 5.0;
        } else if (*rtd_torque_fr_integral >= (-5.0)) {
          /* Switch: '<S131>/Switch1' */
          rtb_Fix1_c = *rtd_torque_fr_integral;
        } else {
          rtb_Fix1_c = (-5.0);
        }

        /* End of Switch: '<S131>/Switch2' */

        /* RelationalOperator: '<S131>/GreaterThan' incorporates:
         *  Constant: '<S131>/Constant'
         */
        rtb_LessThanOrEqual2_gp = (rtb_Fix1_c < 0.0);

        /* Abs: '<S131>/Abs' */
        rtb_Fix1_c = fabs(rtb_Fix1_c);

        /* Rounding: '<S131>/Fix' */
        rtb_Multiply_k3 = floor(rtb_Fix1_c);

        /* Sum: '<S131>/Minus' */
        rtb_Fix1_c -= rtb_Multiply_k3;

        /* DataTypeConversion: '<S131>/Cast' */
        rtb_Cast_i = rtb_LessThanOrEqual2_gp;

        /* Outputs for Atomic SubSystem: '<S131>/Bit Shift' */
        BitShift1(rtb_Cast_i, &localB->BitShift_n);

        /* End of Outputs for SubSystem: '<S131>/Bit Shift' */

        /* Product: '<S131>/Multiply' */
        rtb_Multiply_k3 *= localC->Power1_c;

        /* Product: '<S131>/Divide' */
        u = rtb_Fix1_c / localC->Power_h;

        /* Rounding: '<S131>/Fix1' */
        if (u < 0.0) {
          u = ceil(u);
        } else {
          u = floor(u);
        }

        /* End of Rounding: '<S131>/Fix1' */

        /* Sum: '<S131>/Plus' incorporates:
         *  DataTypeConversion: '<S131>/Cast1'
         *  DataTypeConversion: '<S131>/Cast2'
         */
        localB->Plus_p = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift_n.y + (uint8_T)rtb_Multiply_k3) + (uint8_T)u);
      }

      /* End of RelationalOperator: '<S110>/Equal16' */
      /* End of Outputs for SubSystem: '<S110>/Msg_Value_Data_Encoded' */

      /* Outputs for Enabled SubSystem: '<S110>/Check msg transmission CAN1' incorporates:
       *  EnablePort: '<S112>/Enable'
       */
      /* Logic: '<S110>/AND' incorporates:
       *  Constant: '<S110>/Constant6'
       *  Constant: '<S112>/Constant22'
       *  Constant: '<S112>/Constant24'
       *  Constant: '<S112>/Constant8'
       *  Math: '<S112>/Mod'
       *  RelationalOperator: '<S110>/GreaterThan2'
       *  RelationalOperator: '<S112>/Equal4'
       *  Sum: '<S112>/Minus'
       */
      if (rtb_Equal1_b && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
        if (!localDW->CheckmsgtransmissionCAN1_MODE) {
          localDW->CheckmsgtransmissionCAN1_MODE = true;
        }

        /* Outputs for Enabled SubSystem: '<S112>/TX buffer update CAN1' incorporates:
         *  EnablePort: '<S115>/Enable'
         */
        if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtu_TimeMark, 5.0) == 0.0)
        {
          /* DataTypeConversion: '<S115>/Cast4' */
          rtb_Cast4_n = *rtd_basic_cycle_count;

          /* Outputs for Atomic SubSystem: '<S116>/Bit Shift1' */
          BitShift1(rtb_Cast4_n, &localB->BitShift1_a);

          /* End of Outputs for SubSystem: '<S116>/Bit Shift1' */

          /* DataTypeConversion: '<S115>/Cast1' */
          rtb_Cast1_o = (uint8_T)*rtd_Tx_msg_count_CAN1;

          /* Outputs for Atomic SubSystem: '<S116>/Bit Shift' */
          BitShift4(rtb_Cast1_o, &localB->BitShift_f);

          /* End of Outputs for SubSystem: '<S116>/Bit Shift' */

          /* DataStoreWrite: '<S115>/Data Store Write10' incorporates:
           *  DataTypeConversion: '<S115>/Cast16'
           *  Sum: '<S116>/Minus'
           */
          rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
            localB->BitShift1_a.y + localB->BitShift_f.y) + (uint8_T)
            *rtd_Board_ID);
          rtd_Msg_Tx_CAN1->Buffer_2 = localB->Plus_p;
          rtd_Msg_Tx_CAN1->Buffer_3 = localB->Plus;
          rtd_Msg_Tx_CAN1->Buffer_4 = localB->Plus_k;
          rtd_Msg_Tx_CAN1->Buffer_5 = localB->Plus_c;
          rtd_Msg_Tx_CAN1->Buffer_6 = localB->Plus_m;
          rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
          rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

          /* DataStoreWrite: '<S115>/Data Store Write8' */
          *rtd_TxID_CAN1 = localC->Cast;
        }

        /* End of Outputs for SubSystem: '<S112>/TX buffer update CAN1' */

        /* RelationalOperator: '<S112>/Equal7' incorporates:
         *  Constant: '<S112>/Constant11'
         *  Constant: '<S112>/Constant22'
         *  Constant: '<S112>/Constant24'
         *  Constant: '<S112>/Constant27'
         *  Constant: '<S112>/Constant8'
         *  Math: '<S112>/Mod'
         *  Math: '<S112>/Mod1'
         *  RelationalOperator: '<S112>/Equal4'
         *  Sum: '<S112>/Minus'
         *  Sum: '<S112>/Minus1'
         */
        localB->Equal7_a = (rt_modd((real_T)*rtd_Local_Ticks - rtu_TimeMark, 5.0)
                            == 0.0);
      } else {
        if (localDW->CheckmsgtransmissionCAN1_MODE) {
          /* Disable for Outport: '<S112>/Send CAN1' */
          localB->Equal7_a = false;
          localDW->CheckmsgtransmissionCAN1_MODE = false;
        }
      }

      /* End of Logic: '<S110>/AND' */
      /* End of Outputs for SubSystem: '<S110>/Check msg transmission CAN1' */

      /* Outputs for Enabled SubSystem: '<S110>/Check msg transmission CAN2' incorporates:
       *  EnablePort: '<S113>/Enable'
       */
      /* Logic: '<S110>/AND1' incorporates:
       *  Constant: '<S110>/Constant7'
       *  Constant: '<S113>/Constant22'
       *  Constant: '<S113>/Constant24'
       *  Constant: '<S113>/Constant8'
       *  Math: '<S113>/Mod'
       *  RelationalOperator: '<S110>/GreaterThan3'
       *  RelationalOperator: '<S113>/Equal4'
       *  Sum: '<S113>/Minus'
       */
      if (rtb_Equal1_b && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
        if (!localDW->CheckmsgtransmissionCAN2_MODE) {
          localDW->CheckmsgtransmissionCAN2_MODE = true;
        }

        /* Outputs for Enabled SubSystem: '<S113>/TX buffer update CAN2' incorporates:
         *  EnablePort: '<S121>/Enable'
         */
        if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtu_TimeMark, 8.0) == 0.0)
        {
          /* DataTypeConversion: '<S121>/Cast18' */
          rtb_Cast18_f = *rtd_basic_cycle_count;

          /* Outputs for Atomic SubSystem: '<S122>/Bit Shift1' */
          BitShift1(rtb_Cast18_f, &localB->BitShift1_h);

          /* End of Outputs for SubSystem: '<S122>/Bit Shift1' */

          /* DataTypeConversion: '<S121>/Cast9' */
          rtb_Cast9_l = (uint8_T)*rtd_Tx_msg_count_CAN2;

          /* Outputs for Atomic SubSystem: '<S122>/Bit Shift' */
          BitShift4(rtb_Cast9_l, &localB->BitShift_e);

          /* End of Outputs for SubSystem: '<S122>/Bit Shift' */

          /* DataStoreWrite: '<S121>/Data Store Write4' incorporates:
           *  DataTypeConversion: '<S121>/Cast17'
           *  Sum: '<S122>/Minus'
           */
          rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
            localB->BitShift1_h.y + localB->BitShift_e.y) + (uint8_T)
            *rtd_Board_ID);
          rtd_Msg_Tx_CAN2->Buffer_2 = localB->Plus_p;
          rtd_Msg_Tx_CAN2->Buffer_3 = localB->Plus;
          rtd_Msg_Tx_CAN2->Buffer_4 = localB->Plus_k;
          rtd_Msg_Tx_CAN2->Buffer_5 = localB->Plus_c;
          rtd_Msg_Tx_CAN2->Buffer_6 = localB->Plus_m;
          rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
          rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

          /* DataStoreWrite: '<S121>/Data Store Write5' */
          *rtd_TxID_CAN2 = localC->Cast8;
        }

        /* End of Outputs for SubSystem: '<S113>/TX buffer update CAN2' */

        /* RelationalOperator: '<S113>/Equal7' incorporates:
         *  Constant: '<S113>/Constant11'
         *  Constant: '<S113>/Constant22'
         *  Constant: '<S113>/Constant24'
         *  Constant: '<S113>/Constant27'
         *  Constant: '<S113>/Constant8'
         *  Math: '<S113>/Mod'
         *  Math: '<S113>/Mod1'
         *  RelationalOperator: '<S113>/Equal4'
         *  Sum: '<S113>/Minus'
         *  Sum: '<S113>/Minus1'
         */
        localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtu_TimeMark, 8.0) ==
                          0.0);
      } else {
        if (localDW->CheckmsgtransmissionCAN2_MODE) {
          /* Disable for Outport: '<S113>/Send CAN2' */
          localB->Equal7 = false;
          localDW->CheckmsgtransmissionCAN2_MODE = false;
        }
      }

      /* End of Logic: '<S110>/AND1' */
      /* End of Outputs for SubSystem: '<S110>/Check msg transmission CAN2' */
    } else {
      if (localDW->Transmissionsubtasks_MODE) {
        /* Disable for Enabled SubSystem: '<S110>/Check msg transmission CAN1' */
        if (localDW->CheckmsgtransmissionCAN1_MODE) {
          /* Disable for Outport: '<S112>/Send CAN1' */
          localB->Equal7_a = false;
          localDW->CheckmsgtransmissionCAN1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S110>/Check msg transmission CAN1' */

        /* Disable for Enabled SubSystem: '<S110>/Check msg transmission CAN2' */
        if (localDW->CheckmsgtransmissionCAN2_MODE) {
          /* Disable for Outport: '<S113>/Send CAN2' */
          localB->Equal7 = false;
          localDW->CheckmsgtransmissionCAN2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S110>/Check msg transmission CAN2' */

        /* Disable for Outport: '<S110>/Send CAN1' */
        localB->Equal7_a = false;

        /* Disable for Outport: '<S110>/Send CAN2' */
        localB->Equal7 = false;
        localDW->Transmissionsubtasks_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S92>/Transmission subtasks' */
  } else {
    if (localDW->COMMTaskSyncbc0_MODE) {
      COMMTaskSyncbc0_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S89>/COMM Task - Sync bc 0' */
}

/*
 * Disable for enable system:
 *    '<S93>/Transmission subtasks'
 *    '<S94>/Transmission subtasks'
 *    '<S95>/Transmission subtasks'
 */
void Transmissionsubtasks_Disable(rtB_Transmissionsubtasks *localB,
  rtDW_Transmissionsubtasks *localDW)
{
  /* Disable for Enabled SubSystem: '<S143>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_MODE) {
    /* Disable for Outport: '<S145>/Send CAN1' */
    localB->Equal7_i = false;
    localDW->CheckmsgtransmissionCAN1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S143>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S143>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_MODE) {
    /* Disable for Outport: '<S146>/Send CAN2' */
    localB->Equal7 = false;
    localDW->CheckmsgtransmissionCAN2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S143>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S143>/Send CAN1' */
  localB->Equal7_i = false;

  /* Disable for Outport: '<S143>/Send CAN2' */
  localB->Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S93>/Transmission subtasks'
 *    '<S94>/Transmission subtasks'
 *    '<S95>/Transmission subtasks'
 */
void Transmissionsubtasks(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks *localB, const rtC_Transmissionsubtasks *localC,
  rtDW_Transmissionsubtasks *localDW, real_T *rtd_Board_ID, uint16_T
  *rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint8_T *rtd_Own_Vote, uint32_T *rtd_TxID_CAN1, uint32_T
  *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2,
  uint8_T *rtd_basic_cycle_count)
{
  boolean_T rtb_Equal2_km;
  uint8_T rtb_Cast4_o3;
  uint8_T rtb_Cast1_o;
  uint8_T rtb_Cast18_p;
  uint8_T rtb_Cast9_i;

  /* Outputs for Enabled SubSystem: '<S93>/Transmission subtasks' incorporates:
   *  EnablePort: '<S143>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S143>/Equal2' */
    rtb_Equal2_km = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Outputs for Enabled SubSystem: '<S143>/Msg_Value_Data_Encoded2' incorporates:
     *  EnablePort: '<S147>/Enable'
     */
    /* RelationalOperator: '<S143>/Equal16' incorporates:
     *  Constant: '<S147>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      localB->Constant = ((uint8_T)0U);

      /* DataStoreRead: '<S147>/Data Store Read' incorporates:
       *  Constant: '<S147>/Constant'
       */
      localB->DataStoreRead = *rtd_Own_Vote;
    }

    /* End of RelationalOperator: '<S143>/Equal16' */
    /* End of Outputs for SubSystem: '<S143>/Msg_Value_Data_Encoded2' */

    /* Outputs for Enabled SubSystem: '<S143>/Check msg transmission CAN1' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    /* Logic: '<S143>/AND' incorporates:
     *  Constant: '<S143>/Constant6'
     *  Constant: '<S145>/Constant22'
     *  Constant: '<S145>/Constant24'
     *  Constant: '<S145>/Constant8'
     *  Math: '<S145>/Mod'
     *  RelationalOperator: '<S143>/GreaterThan2'
     *  RelationalOperator: '<S145>/Equal4'
     *  Sum: '<S145>/Minus'
     */
    if (rtb_Equal2_km && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN1_MODE) {
        localDW->CheckmsgtransmissionCAN1_MODE = true;
      }

      /* Outputs for Enabled SubSystem: '<S145>/TX buffer update CAN1' incorporates:
       *  EnablePort: '<S148>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtu_Time_Mark, 5.0) == 0.0)
      {
        /* DataTypeConversion: '<S148>/Cast4' */
        rtb_Cast4_o3 = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S149>/Bit Shift1' */
        BitShift1(rtb_Cast4_o3, &localB->BitShift1_j);

        /* End of Outputs for SubSystem: '<S149>/Bit Shift1' */

        /* DataTypeConversion: '<S148>/Cast1' */
        rtb_Cast1_o = (uint8_T)*rtd_Tx_msg_count_CAN1;

        /* Outputs for Atomic SubSystem: '<S149>/Bit Shift' */
        BitShift4(rtb_Cast1_o, &localB->BitShift_c);

        /* End of Outputs for SubSystem: '<S149>/Bit Shift' */

        /* DataStoreWrite: '<S148>/Data Store Write10' incorporates:
         *  DataTypeConversion: '<S148>/Cast16'
         *  Sum: '<S149>/Minus'
         */
        rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_j.y + localB->BitShift_c.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN1->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN1->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S148>/Data Store Write8' */
        *rtd_TxID_CAN1 = localC->Cast;
      }

      /* End of Outputs for SubSystem: '<S145>/TX buffer update CAN1' */

      /* RelationalOperator: '<S145>/Equal7' incorporates:
       *  Constant: '<S145>/Constant11'
       *  Constant: '<S145>/Constant22'
       *  Constant: '<S145>/Constant24'
       *  Constant: '<S145>/Constant27'
       *  Constant: '<S145>/Constant8'
       *  Math: '<S145>/Mod'
       *  Math: '<S145>/Mod1'
       *  RelationalOperator: '<S145>/Equal4'
       *  Sum: '<S145>/Minus'
       *  Sum: '<S145>/Minus1'
       */
      localB->Equal7_i = (rt_modd((real_T)*rtd_Local_Ticks - rtu_Time_Mark, 5.0)
                          == 0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN1_MODE) {
        /* Disable for Outport: '<S145>/Send CAN1' */
        localB->Equal7_i = false;
        localDW->CheckmsgtransmissionCAN1_MODE = false;
      }
    }

    /* End of Logic: '<S143>/AND' */
    /* End of Outputs for SubSystem: '<S143>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S143>/Check msg transmission CAN2' incorporates:
     *  EnablePort: '<S146>/Enable'
     */
    /* Logic: '<S143>/AND1' incorporates:
     *  Constant: '<S143>/Constant7'
     *  Constant: '<S146>/Constant22'
     *  Constant: '<S146>/Constant24'
     *  Constant: '<S146>/Constant8'
     *  Math: '<S146>/Mod'
     *  RelationalOperator: '<S143>/GreaterThan3'
     *  RelationalOperator: '<S146>/Equal4'
     *  Sum: '<S146>/Minus'
     */
    if (rtb_Equal2_km && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
      if (!localDW->CheckmsgtransmissionCAN2_MODE) {
        localDW->CheckmsgtransmissionCAN2_MODE = true;
      }

      /* Outputs for Enabled SubSystem: '<S146>/TX buffer update CAN2' incorporates:
       *  EnablePort: '<S154>/Enable'
       */
      if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - rtu_Time_Mark, 8.0) == 0.0)
      {
        /* DataTypeConversion: '<S154>/Cast18' */
        rtb_Cast18_p = *rtd_basic_cycle_count;

        /* Outputs for Atomic SubSystem: '<S155>/Bit Shift1' */
        BitShift1(rtb_Cast18_p, &localB->BitShift1_k);

        /* End of Outputs for SubSystem: '<S155>/Bit Shift1' */

        /* DataTypeConversion: '<S154>/Cast9' */
        rtb_Cast9_i = (uint8_T)*rtd_Tx_msg_count_CAN2;

        /* Outputs for Atomic SubSystem: '<S155>/Bit Shift' */
        BitShift4(rtb_Cast9_i, &localB->BitShift_n);

        /* End of Outputs for SubSystem: '<S155>/Bit Shift' */

        /* DataStoreWrite: '<S154>/Data Store Write4' incorporates:
         *  DataTypeConversion: '<S154>/Cast17'
         *  Sum: '<S155>/Minus'
         */
        rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
          localB->BitShift1_k.y + localB->BitShift_n.y) + (uint8_T)*rtd_Board_ID);
        rtd_Msg_Tx_CAN2->Buffer_2 = localB->DataStoreRead;
        rtd_Msg_Tx_CAN2->Buffer_3 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_4 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant;
        rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant;

        /* DataStoreWrite: '<S154>/Data Store Write5' */
        *rtd_TxID_CAN2 = localC->Cast8;
      }

      /* End of Outputs for SubSystem: '<S146>/TX buffer update CAN2' */

      /* RelationalOperator: '<S146>/Equal7' incorporates:
       *  Constant: '<S146>/Constant11'
       *  Constant: '<S146>/Constant22'
       *  Constant: '<S146>/Constant24'
       *  Constant: '<S146>/Constant27'
       *  Constant: '<S146>/Constant8'
       *  Math: '<S146>/Mod'
       *  Math: '<S146>/Mod1'
       *  RelationalOperator: '<S146>/Equal4'
       *  Sum: '<S146>/Minus'
       *  Sum: '<S146>/Minus1'
       */
      localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - rtu_Time_Mark, 8.0) ==
                        0.0);
    } else {
      if (localDW->CheckmsgtransmissionCAN2_MODE) {
        /* Disable for Outport: '<S146>/Send CAN2' */
        localB->Equal7 = false;
        localDW->CheckmsgtransmissionCAN2_MODE = false;
      }
    }

    /* End of Logic: '<S143>/AND1' */
    /* End of Outputs for SubSystem: '<S143>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S93>/Transmission subtasks' */
}

/*
 * Output and update for enable system:
 *    '<S100>/Reset Tx msg counter'
 *    '<S104>/Reset Tx msg counter'
 *    '<S106>/Reset Tx msg counter'
 *    '<S108>/Reset Tx msg counter'
 *    '<S337>/Reset Tx msg counter'
 *    '<S338>/Reset Tx msg counter'
 *    '<S339>/Reset Tx msg counter'
 *    '<S340>/Reset Tx msg counter'
 *    '<S341>/Reset Tx msg counter'
 *    '<S342>/Reset Tx msg counter'
 */
void ResetTxmsgcounter(boolean_T rtu_Enable, real_T *rtd_Tx_msg_count_CAN1,
  real_T *rtd_Tx_msg_count_CAN2)
{
  /* Outputs for Enabled SubSystem: '<S100>/Reset Tx msg counter' incorporates:
   *  EnablePort: '<S206>/Enable'
   */
  if (rtu_Enable) {
    /* DataStoreWrite: '<S206>/Data Store Write2' incorporates:
     *  Constant: '<S206>/Constant1'
     */
    *rtd_Tx_msg_count_CAN2 = 1.0;

    /* DataStoreWrite: '<S206>/Data Store Write1' incorporates:
     *  Constant: '<S206>/Constant6'
     */
    *rtd_Tx_msg_count_CAN1 = 1.0;
  }

  /* End of Outputs for SubSystem: '<S100>/Reset Tx msg counter' */
}

/*
 * Output and update for enable system:
 *    '<S233>/Desync_Negative'
 *    '<S852>/Desync_Negative'
 */
void Desync_Negative(boolean_T rtu_Enable, real_T rtu_Current_Local_Time, real_T
                     *rtd_Desync_Ticks, uint16_T *rtd_Local_Ticks)
{
  /* Outputs for Enabled SubSystem: '<S233>/Desync_Negative' incorporates:
   *  EnablePort: '<S234>/Enable'
   */
  if (rtu_Enable) {
    /* DataTypeConversion: '<S234>/Cast' incorporates:
     *  Sum: '<S234>/Minus'
     */
    *rtd_Local_Ticks = (uint16_T)(rtu_Current_Local_Time + *rtd_Desync_Ticks);
  }

  /* End of Outputs for SubSystem: '<S233>/Desync_Negative' */
}

/*
 * Disable for enable system:
 *    '<S347>/Check msg transmission CAN1'
 *    '<S378>/Check msg transmission CAN1'
 *    '<S408>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN_Disable(rtB_CheckmsgtransmissionCAN1 *localB,
  rtDW_CheckmsgtransmissionCAN1 *localDW)
{
  /* Disable for Outport: '<S349>/Send CAN1' */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN1_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S347>/Check msg transmission CAN1'
 *    '<S378>/Check msg transmission CAN1'
 *    '<S408>/Check msg transmission CAN1'
 */
void CheckmsgtransmissionCAN1(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_g,
  uint8_T rtu_ValueDomainMsg_i, uint8_T rtu_ValueDomainMsg_gk, uint8_T
  rtu_ValueDomainMsg_l, uint8_T rtu_ValueDomainMsg_l5, uint8_T
  rtu_ValueDomainMsg_m, rtB_CheckmsgtransmissionCAN1 *localB, const
  rtC_CheckmsgtransmissionCAN1 *localC, rtDW_CheckmsgtransmissionCAN1 *localDW,
  real_T *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN1, uint32_T
  *rtd_TxID_CAN1, real_T *rtd_Tx_msg_count_CAN1, uint8_T *rtd_basic_cycle_count)
{
  uint8_T rtb_Cast4_f;
  uint8_T rtb_Cast1_i;

  /* Outputs for Enabled SubSystem: '<S347>/Check msg transmission CAN1' incorporates:
   *  EnablePort: '<S349>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CheckmsgtransmissionCAN1_MODE) {
      localDW->CheckmsgtransmissionCAN1_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S349>/TX buffer update CAN1' incorporates:
     *  EnablePort: '<S352>/Enable'
     */
    /* RelationalOperator: '<S349>/Equal4' incorporates:
     *  Constant: '<S349>/Constant22'
     *  Constant: '<S349>/Constant24'
     *  Constant: '<S349>/Constant8'
     *  Math: '<S349>/Mod'
     *  Sum: '<S349>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtu_TimeMark, 5.0) == 0.0) {
      /* DataTypeConversion: '<S352>/Cast4' */
      rtb_Cast4_f = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S353>/Bit Shift1' */
      BitShift1(rtb_Cast4_f, &localB->BitShift1_g);

      /* End of Outputs for SubSystem: '<S353>/Bit Shift1' */

      /* DataTypeConversion: '<S352>/Cast1' */
      rtb_Cast1_i = (uint8_T)*rtd_Tx_msg_count_CAN1;

      /* Outputs for Atomic SubSystem: '<S353>/Bit Shift' */
      BitShift4(rtb_Cast1_i, &localB->BitShift_i);

      /* End of Outputs for SubSystem: '<S353>/Bit Shift' */

      /* DataStoreWrite: '<S352>/Data Store Write10' incorporates:
       *  DataTypeConversion: '<S352>/Cast16'
       *  Sum: '<S353>/Minus'
       */
      rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_g.y + localB->BitShift_i.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN1->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN1->Buffer_3 = rtu_ValueDomainMsg_g;
      rtd_Msg_Tx_CAN1->Buffer_4 = rtu_ValueDomainMsg_i;
      rtd_Msg_Tx_CAN1->Buffer_5 = rtu_ValueDomainMsg_gk;
      rtd_Msg_Tx_CAN1->Buffer_6 = rtu_ValueDomainMsg_l;
      rtd_Msg_Tx_CAN1->Buffer_7 = rtu_ValueDomainMsg_l5;
      rtd_Msg_Tx_CAN1->Buffer_8 = rtu_ValueDomainMsg_m;

      /* DataStoreWrite: '<S352>/Data Store Write8' */
      *rtd_TxID_CAN1 = localC->Cast;
    }

    /* End of RelationalOperator: '<S349>/Equal4' */
    /* End of Outputs for SubSystem: '<S349>/TX buffer update CAN1' */

    /* RelationalOperator: '<S349>/Equal7' incorporates:
     *  Constant: '<S349>/Constant11'
     *  Constant: '<S349>/Constant27'
     *  Math: '<S349>/Mod1'
     *  Sum: '<S349>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtu_TimeMark, 5.0) == 0.0);
  } else {
    if (localDW->CheckmsgtransmissionCAN1_MODE) {
      CheckmsgtransmissionCAN_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S347>/Check msg transmission CAN1' */
}

/*
 * Disable for enable system:
 *    '<S347>/Check msg transmission CAN2'
 *    '<S378>/Check msg transmission CAN2'
 *    '<S408>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionC_g_Disable(rtB_CheckmsgtransmissionCAN2 *localB,
  rtDW_CheckmsgtransmissionCAN2 *localDW)
{
  /* Disable for Outport: '<S350>/Send CAN2' */
  localB->Equal7 = false;
  localDW->CheckmsgtransmissionCAN2_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S347>/Check msg transmission CAN2'
 *    '<S378>/Check msg transmission CAN2'
 *    '<S408>/Check msg transmission CAN2'
 */
void CheckmsgtransmissionCAN2(boolean_T rtu_Enable, uint16_T rtu_LocalTime,
  real_T rtu_TimeMark, uint8_T rtu_ValueDomainMsg, uint8_T rtu_ValueDomainMsg_a,
  uint8_T rtu_ValueDomainMsg_k, uint8_T rtu_ValueDomainMsg_h, uint8_T
  rtu_ValueDomainMsg_hq, uint8_T rtu_ValueDomainMsg_e, uint8_T
  rtu_ValueDomainMsg_o, rtB_CheckmsgtransmissionCAN2 *localB, const
  rtC_CheckmsgtransmissionCAN2 *localC, rtDW_CheckmsgtransmissionCAN2 *localDW,
  real_T *rtd_Board_ID, msg_buffer_type *rtd_Msg_Tx_CAN2, uint32_T
  *rtd_TxID_CAN2, real_T *rtd_Tx_msg_count_CAN2, uint8_T *rtd_basic_cycle_count)
{
  uint8_T rtb_Cast18_d;
  uint8_T rtb_Cast9_k;

  /* Outputs for Enabled SubSystem: '<S347>/Check msg transmission CAN2' incorporates:
   *  EnablePort: '<S350>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CheckmsgtransmissionCAN2_MODE) {
      localDW->CheckmsgtransmissionCAN2_MODE = true;
    }

    /* Outputs for Enabled SubSystem: '<S350>/TX buffer update CAN2' incorporates:
     *  EnablePort: '<S358>/Enable'
     */
    /* RelationalOperator: '<S350>/Equal4' incorporates:
     *  Constant: '<S350>/Constant22'
     *  Constant: '<S350>/Constant24'
     *  Constant: '<S350>/Constant8'
     *  Math: '<S350>/Mod'
     *  Sum: '<S350>/Minus'
     */
    if (rt_modd(((real_T)rtu_LocalTime + 1.0) - rtu_TimeMark, 8.0) == 0.0) {
      /* DataTypeConversion: '<S358>/Cast18' */
      rtb_Cast18_d = *rtd_basic_cycle_count;

      /* Outputs for Atomic SubSystem: '<S359>/Bit Shift1' */
      BitShift1(rtb_Cast18_d, &localB->BitShift1_m);

      /* End of Outputs for SubSystem: '<S359>/Bit Shift1' */

      /* DataTypeConversion: '<S358>/Cast9' */
      rtb_Cast9_k = (uint8_T)*rtd_Tx_msg_count_CAN2;

      /* Outputs for Atomic SubSystem: '<S359>/Bit Shift' */
      BitShift4(rtb_Cast9_k, &localB->BitShift_j);

      /* End of Outputs for SubSystem: '<S359>/Bit Shift' */

      /* DataStoreWrite: '<S358>/Data Store Write4' incorporates:
       *  DataTypeConversion: '<S358>/Cast17'
       *  Sum: '<S359>/Minus'
       */
      rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift1_m.y + localB->BitShift_j.y) + (uint8_T)*rtd_Board_ID);
      rtd_Msg_Tx_CAN2->Buffer_2 = rtu_ValueDomainMsg;
      rtd_Msg_Tx_CAN2->Buffer_3 = rtu_ValueDomainMsg_a;
      rtd_Msg_Tx_CAN2->Buffer_4 = rtu_ValueDomainMsg_k;
      rtd_Msg_Tx_CAN2->Buffer_5 = rtu_ValueDomainMsg_h;
      rtd_Msg_Tx_CAN2->Buffer_6 = rtu_ValueDomainMsg_hq;
      rtd_Msg_Tx_CAN2->Buffer_7 = rtu_ValueDomainMsg_e;
      rtd_Msg_Tx_CAN2->Buffer_8 = rtu_ValueDomainMsg_o;

      /* DataStoreWrite: '<S358>/Data Store Write5' */
      *rtd_TxID_CAN2 = localC->Cast8;
    }

    /* End of RelationalOperator: '<S350>/Equal4' */
    /* End of Outputs for SubSystem: '<S350>/TX buffer update CAN2' */

    /* RelationalOperator: '<S350>/Equal7' incorporates:
     *  Constant: '<S350>/Constant11'
     *  Constant: '<S350>/Constant27'
     *  Math: '<S350>/Mod1'
     *  Sum: '<S350>/Minus1'
     */
    localB->Equal7 = (rt_modd((real_T)rtu_LocalTime - rtu_TimeMark, 8.0) == 0.0);
  } else {
    if (localDW->CheckmsgtransmissionCAN2_MODE) {
      CheckmsgtransmissionC_g_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S347>/Check msg transmission CAN2' */
}

/*
 * Disable for enable system:
 *    '<S326>/Transmission subtasks'
 *    '<S327>/Transmission subtasks'
 */
void Transmissionsubtasks_g_Disable(rtB_Transmissionsubtasks_k *localB,
  rtDW_Transmissionsubtasks_i *localDW)
{
  /* Disable for Enabled SubSystem: '<S347>/Check msg transmission CAN1' */
  if (localDW->CheckmsgtransmissionCAN1_e.CheckmsgtransmissionCAN1_MODE) {
    CheckmsgtransmissionCAN_Disable(&localB->CheckmsgtransmissionCAN1_e,
      &localDW->CheckmsgtransmissionCAN1_e);
  }

  /* End of Disable for SubSystem: '<S347>/Check msg transmission CAN1' */

  /* Disable for Enabled SubSystem: '<S347>/Check msg transmission CAN2' */
  if (localDW->CheckmsgtransmissionCAN2_b.CheckmsgtransmissionCAN2_MODE) {
    CheckmsgtransmissionC_g_Disable(&localB->CheckmsgtransmissionCAN2_b,
      &localDW->CheckmsgtransmissionCAN2_b);
  }

  /* End of Disable for SubSystem: '<S347>/Check msg transmission CAN2' */

  /* Disable for Outport: '<S347>/Send CAN1' */
  localB->CheckmsgtransmissionCAN1_e.Equal7 = false;

  /* Disable for Outport: '<S347>/Send CAN2' */
  localB->CheckmsgtransmissionCAN2_b.Equal7 = false;
  localDW->Transmissionsubtasks_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S326>/Transmission subtasks'
 *    '<S327>/Transmission subtasks'
 */
void Transmissionsubtasks_i(boolean_T rtu_Enable, real_T rtu_Time_Mark,
  rtB_Transmissionsubtasks_k *localB, const rtC_Transmissionsubtasks_i *localC,
  rtDW_Transmissionsubtasks_i *localDW, real_T *rtd_Board_ID, boolean_T
  *rtd_Error_SensorValues_NotRX, boolean_T *rtd_Error_SetValues_NotRX, uint16_T *
  rtd_Local_Ticks, msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
  *rtd_Msg_Tx_CAN2, uint32_T *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
  *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2, uint8_T
  *rtd_basic_cycle_count, real_T *rtd_torque_al_set, real_T *rtd_torque_ar_set,
  real_T *rtd_torque_fl_set, real_T *rtd_torque_fr_set)
{
  boolean_T rtb_Equal2_ez;
  real_T rtb_Multiply_ey;
  real_T rtb_Fix1_p;
  boolean_T rtb_AND_jn;
  boolean_T rtb_AND1_il;
  uint8_T rtb_Cast_cs;
  uint8_T rtb_Cast_ha;
  uint8_T rtb_Cast_j;
  uint8_T rtb_Cast_a2;
  real_T u;

  /* Outputs for Enabled SubSystem: '<S326>/Transmission subtasks' incorporates:
   *  EnablePort: '<S347>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Transmissionsubtasks_MODE) {
      localDW->Transmissionsubtasks_MODE = true;
    }

    /* RelationalOperator: '<S347>/Equal2' */
    rtb_Equal2_ez = (*rtd_Local_Ticks > rtu_Time_Mark);

    /* Logic: '<S347>/AND' incorporates:
     *  Constant: '<S347>/Constant6'
     *  RelationalOperator: '<S347>/GreaterThan2'
     */
    rtb_AND_jn = (rtb_Equal2_ez && (*rtd_Tx_msg_count_CAN1 <= 7.0));

    /* Logic: '<S347>/AND1' incorporates:
     *  Constant: '<S347>/Constant7'
     *  RelationalOperator: '<S347>/GreaterThan3'
     */
    rtb_AND1_il = (rtb_Equal2_ez && (*rtd_Tx_msg_count_CAN2 <= 7.0));

    /* Outputs for Enabled SubSystem: '<S347>/Msg_Value_Data_Encoded7' incorporates:
     *  EnablePort: '<S351>/Enable'
     */
    /* RelationalOperator: '<S347>/Equal16' incorporates:
     *  Constant: '<S351>/Constant'
     */
    if (*rtd_Local_Ticks == rtu_Time_Mark) {
      /* DataTypeConversion: '<S351>/Cast' */
      localB->Cast = *rtd_Error_SetValues_NotRX;

      /* DataTypeConversion: '<S351>/Cast1' */
      localB->Cast1 = *rtd_Error_SensorValues_NotRX;
      localB->Constant = ((uint8_T)0U);

      /* Switch: '<S364>/Switch2' incorporates:
       *  Constant: '<S351>/Constant'
       *  Constant: '<S351>/Constant8'
       *  Constant: '<S351>/Constant9'
       *  RelationalOperator: '<S364>/LessThanOrEqual1'
       *  RelationalOperator: '<S364>/LessThanOrEqual2'
       *  Switch: '<S364>/Switch1'
       */
      if (5.0 < *rtd_torque_fl_set) {
        /* Switch: '<S364>/Switch' */
        rtb_Multiply_ey = 5.0;
      } else if (*rtd_torque_fl_set >= (-5.0)) {
        /* Switch: '<S364>/Switch1' */
        rtb_Multiply_ey = *rtd_torque_fl_set;
      } else {
        rtb_Multiply_ey = (-5.0);
      }

      /* End of Switch: '<S364>/Switch2' */

      /* RelationalOperator: '<S364>/GreaterThan' incorporates:
       *  Constant: '<S364>/Constant'
       */
      rtb_Equal2_ez = (rtb_Multiply_ey < 0.0);

      /* Abs: '<S364>/Abs' */
      rtb_Multiply_ey = fabs(rtb_Multiply_ey);

      /* Rounding: '<S364>/Fix' */
      rtb_Fix1_p = floor(rtb_Multiply_ey);

      /* Sum: '<S364>/Minus' */
      rtb_Multiply_ey -= rtb_Fix1_p;

      /* DataTypeConversion: '<S364>/Cast' */
      rtb_Cast_cs = rtb_Equal2_ez;

      /* Outputs for Atomic SubSystem: '<S364>/Bit Shift' */
      BitShift1(rtb_Cast_cs, &localB->BitShift_g);

      /* End of Outputs for SubSystem: '<S364>/Bit Shift' */

      /* Product: '<S364>/Multiply' */
      rtb_Fix1_p *= localC->Power1;

      /* Product: '<S364>/Divide' */
      u = rtb_Multiply_ey / localC->Power;

      /* Rounding: '<S364>/Fix1' */
      if (u < 0.0) {
        u = ceil(u);
      } else {
        u = floor(u);
      }

      /* End of Rounding: '<S364>/Fix1' */

      /* Sum: '<S364>/Plus' incorporates:
       *  DataTypeConversion: '<S364>/Cast1'
       *  DataTypeConversion: '<S364>/Cast2'
       */
      localB->Plus = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift_g.y + (uint8_T)rtb_Fix1_p) + (uint8_T)u);

      /* Switch: '<S365>/Switch2' incorporates:
       *  Constant: '<S351>/Constant5'
       *  Constant: '<S351>/Constant6'
       *  RelationalOperator: '<S365>/LessThanOrEqual1'
       *  RelationalOperator: '<S365>/LessThanOrEqual2'
       *  Switch: '<S365>/Switch1'
       */
      if (5.0 < *rtd_torque_fr_set) {
        /* Switch: '<S365>/Switch' */
        rtb_Fix1_p = 5.0;
      } else if (*rtd_torque_fr_set >= (-5.0)) {
        /* Switch: '<S365>/Switch1' */
        rtb_Fix1_p = *rtd_torque_fr_set;
      } else {
        rtb_Fix1_p = (-5.0);
      }

      /* End of Switch: '<S365>/Switch2' */

      /* RelationalOperator: '<S365>/GreaterThan' incorporates:
       *  Constant: '<S365>/Constant'
       */
      rtb_Equal2_ez = (rtb_Fix1_p < 0.0);

      /* Abs: '<S365>/Abs' */
      rtb_Fix1_p = fabs(rtb_Fix1_p);

      /* Rounding: '<S365>/Fix' */
      rtb_Multiply_ey = floor(rtb_Fix1_p);

      /* Sum: '<S365>/Minus' */
      rtb_Fix1_p -= rtb_Multiply_ey;

      /* DataTypeConversion: '<S365>/Cast' */
      rtb_Cast_ha = rtb_Equal2_ez;

      /* Outputs for Atomic SubSystem: '<S365>/Bit Shift' */
      BitShift1(rtb_Cast_ha, &localB->BitShift_d);

      /* End of Outputs for SubSystem: '<S365>/Bit Shift' */

      /* Product: '<S365>/Multiply' */
      rtb_Multiply_ey *= localC->Power1_d;

      /* Product: '<S365>/Divide' */
      u = rtb_Fix1_p / localC->Power_h;

      /* Rounding: '<S365>/Fix1' */
      if (u < 0.0) {
        u = ceil(u);
      } else {
        u = floor(u);
      }

      /* End of Rounding: '<S365>/Fix1' */

      /* Sum: '<S365>/Plus' incorporates:
       *  DataTypeConversion: '<S365>/Cast1'
       *  DataTypeConversion: '<S365>/Cast2'
       */
      localB->Plus_n = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift_d.y + (uint8_T)rtb_Multiply_ey) + (uint8_T)u);

      /* Switch: '<S366>/Switch2' incorporates:
       *  Constant: '<S351>/Constant11'
       *  Constant: '<S351>/Constant12'
       *  RelationalOperator: '<S366>/LessThanOrEqual1'
       *  RelationalOperator: '<S366>/LessThanOrEqual2'
       *  Switch: '<S366>/Switch1'
       */
      if (5.0 < *rtd_torque_ar_set) {
        /* Switch: '<S366>/Switch' */
        rtb_Fix1_p = 5.0;
      } else if (*rtd_torque_ar_set >= (-5.0)) {
        /* Switch: '<S366>/Switch1' */
        rtb_Fix1_p = *rtd_torque_ar_set;
      } else {
        rtb_Fix1_p = (-5.0);
      }

      /* End of Switch: '<S366>/Switch2' */

      /* RelationalOperator: '<S366>/GreaterThan' incorporates:
       *  Constant: '<S366>/Constant'
       */
      rtb_Equal2_ez = (rtb_Fix1_p < 0.0);

      /* Abs: '<S366>/Abs' */
      rtb_Fix1_p = fabs(rtb_Fix1_p);

      /* Rounding: '<S366>/Fix' */
      rtb_Multiply_ey = floor(rtb_Fix1_p);

      /* Sum: '<S366>/Minus' */
      rtb_Fix1_p -= rtb_Multiply_ey;

      /* DataTypeConversion: '<S366>/Cast' */
      rtb_Cast_j = rtb_Equal2_ez;

      /* Outputs for Atomic SubSystem: '<S366>/Bit Shift' */
      BitShift1(rtb_Cast_j, &localB->BitShift_l);

      /* End of Outputs for SubSystem: '<S366>/Bit Shift' */

      /* Product: '<S366>/Multiply' */
      rtb_Multiply_ey *= localC->Power1_m;

      /* Product: '<S366>/Divide' */
      u = rtb_Fix1_p / localC->Power_m;

      /* Rounding: '<S366>/Fix1' */
      if (u < 0.0) {
        u = ceil(u);
      } else {
        u = floor(u);
      }

      /* End of Rounding: '<S366>/Fix1' */

      /* Sum: '<S366>/Plus' incorporates:
       *  DataTypeConversion: '<S366>/Cast1'
       *  DataTypeConversion: '<S366>/Cast2'
       */
      localB->Plus_p = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift_l.y + (uint8_T)rtb_Multiply_ey) + (uint8_T)u);

      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S351>/Constant14'
       *  Constant: '<S351>/Constant15'
       *  RelationalOperator: '<S367>/LessThanOrEqual1'
       *  RelationalOperator: '<S367>/LessThanOrEqual2'
       *  Switch: '<S367>/Switch1'
       */
      if (5.0 < *rtd_torque_al_set) {
        /* Switch: '<S367>/Switch' */
        rtb_Fix1_p = 5.0;
      } else if (*rtd_torque_al_set >= (-5.0)) {
        /* Switch: '<S367>/Switch1' */
        rtb_Fix1_p = *rtd_torque_al_set;
      } else {
        rtb_Fix1_p = (-5.0);
      }

      /* End of Switch: '<S367>/Switch2' */

      /* RelationalOperator: '<S367>/GreaterThan' incorporates:
       *  Constant: '<S367>/Constant'
       */
      rtb_Equal2_ez = (rtb_Fix1_p < 0.0);

      /* Abs: '<S367>/Abs' */
      rtb_Fix1_p = fabs(rtb_Fix1_p);

      /* Rounding: '<S367>/Fix' */
      rtb_Multiply_ey = floor(rtb_Fix1_p);

      /* Sum: '<S367>/Minus' */
      rtb_Fix1_p -= rtb_Multiply_ey;

      /* DataTypeConversion: '<S367>/Cast' */
      rtb_Cast_a2 = rtb_Equal2_ez;

      /* Outputs for Atomic SubSystem: '<S367>/Bit Shift' */
      BitShift1(rtb_Cast_a2, &localB->BitShift_dm);

      /* End of Outputs for SubSystem: '<S367>/Bit Shift' */

      /* Product: '<S367>/Multiply' */
      rtb_Multiply_ey *= localC->Power1_e;

      /* Product: '<S367>/Divide' */
      u = rtb_Fix1_p / localC->Power_i;

      /* Rounding: '<S367>/Fix1' */
      if (u < 0.0) {
        u = ceil(u);
      } else {
        u = floor(u);
      }

      /* End of Rounding: '<S367>/Fix1' */

      /* Sum: '<S367>/Plus' incorporates:
       *  DataTypeConversion: '<S367>/Cast1'
       *  DataTypeConversion: '<S367>/Cast2'
       */
      localB->Plus_j = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
        localB->BitShift_dm.y + (uint8_T)rtb_Multiply_ey) + (uint8_T)u);
    }

    /* End of RelationalOperator: '<S347>/Equal16' */
    /* End of Outputs for SubSystem: '<S347>/Msg_Value_Data_Encoded7' */

    /* Outputs for Enabled SubSystem: '<S347>/Check msg transmission CAN1' */
    CheckmsgtransmissionCAN1(rtb_AND_jn, *rtd_Local_Ticks, rtu_Time_Mark,
      localB->Plus_n, localB->Plus, localB->Plus_p, localB->Plus_j, localB->Cast,
      localB->Cast1, localB->Constant, &localB->CheckmsgtransmissionCAN1_e,
      &localC->CheckmsgtransmissionCAN1_e, &localDW->CheckmsgtransmissionCAN1_e,
      rtd_Board_ID, rtd_Msg_Tx_CAN1, rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1,
      rtd_basic_cycle_count);

    /* End of Outputs for SubSystem: '<S347>/Check msg transmission CAN1' */

    /* Outputs for Enabled SubSystem: '<S347>/Check msg transmission CAN2' */
    CheckmsgtransmissionCAN2(rtb_AND1_il, *rtd_Local_Ticks, rtu_Time_Mark,
      localB->Plus_n, localB->Plus, localB->Plus_p, localB->Plus_j, localB->Cast,
      localB->Cast1, localB->Constant, &localB->CheckmsgtransmissionCAN2_b,
      &localC->CheckmsgtransmissionCAN2_b, &localDW->CheckmsgtransmissionCAN2_b,
      rtd_Board_ID, rtd_Msg_Tx_CAN2, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2,
      rtd_basic_cycle_count);

    /* End of Outputs for SubSystem: '<S347>/Check msg transmission CAN2' */
  } else {
    if (localDW->Transmissionsubtasks_MODE) {
      Transmissionsubtasks_g_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S326>/Transmission subtasks' */
}

/*
 * Output and update for atomic system:
 *    '<S766>/Bit Shift19'
 *    '<S766>/Bit Shift8'
 */
void BitShift19(uint8_T rtu_u, rtB_BitShift19 *localB)
{
  /* MATLAB Function: '<S821>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S842>:1' */
  /* '<S842>:1:6' */
  localB->y = (uint8_T)(rtu_u << 2);
}

/*
 * Output and update for atomic system:
 *    '<S766>/Bit Shift20'
 *    '<S766>/Bit Shift9'
 */
void BitShift20(uint8_T rtu_u, rtB_BitShift20 *localB)
{
  /* MATLAB Function: '<S823>/bit_shift' */
  /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S844>:1' */
  /* '<S844>:1:6' */
  localB->y = (uint8_T)(rtu_u << 3);
}

real_T rt_roundd(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* System initialize for function-call system: '<S6>/CAN Management' */
void CANManagement_Init(rtB_CANManagement *localB)
{
  /* SystemInitialize for Enabled SubSystem: '<S18>/Initialization' */
  /* SystemInitialize for Enabled SubSystem: '<S39>/RoleID and Global Time init' */
  /* SystemInitialize for Outport: '<S47>/Finish Initialization' */
  localB->SET = 0.0;

  /* End of SystemInitialize for SubSystem: '<S39>/RoleID and Global Time init' */
  /* End of SystemInitialize for SubSystem: '<S18>/Initialization' */
}

/* System reset for function-call system: '<S6>/CAN Management' */
void CANManagement_Reset(rtDW_CANManagement *localDW)
{
  /* SystemReset for Chart: '<S18>/Chart' */
  localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S18>/Chart1' */
  localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S18>/Chart2' */
  localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S18>/Chart3' */
  localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ = 0U;

  /* SystemReset for Chart: '<S18>/Chart4' */
  localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ = 0U;
}

/* Disable for function-call system: '<S6>/CAN Management' */
void CANManagement_Disable(rtB_CANManagement *localB, rtDW_CANManagement
  *localDW)
{
  /* Disable for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A2' */
  if (localDW->DEBUGToggledigitalpinA2_MODE) {
    localDW->DEBUGToggledigitalpinA2_MODE = false;
  }

  /* End of Disable for SubSystem: '<S18>/DEBUG - Toggle digital pin A2' */

  /* Disable for Enabled SubSystem: '<S18>/Initialization' */
  if (localDW->Initialization_MODE) {
    /* Disable for Enabled SubSystem: '<S39>/RoleID and Global Time init' */
    if (localDW->RoleIDandGlobalTimeinit_MODE) {
      /* Disable for Outport: '<S47>/Finish Initialization' */
      localB->SET = 0.0;
      localDW->RoleIDandGlobalTimeinit_MODE = false;
    }

    /* End of Disable for SubSystem: '<S39>/RoleID and Global Time init' */
    localDW->Initialization_MODE = false;
  }

  /* End of Disable for SubSystem: '<S18>/Initialization' */

  /* Disable for Enabled SubSystem: '<S18>/Matrix Cycle Manager' */
  if (localDW->MatrixCycleManager_MODE) {
    /* Disable for Enabled SubSystem: '<S41>/controller basic cycle 0' */
    if (localDW->controllerbasiccycle0_MODE) {
      /* Disable for Enabled SubSystem: '<S89>/COMP Task - Sync bc0 check' */
      if (localDW->COMPTaskSyncbc0check_MODE) {
        /* Disable for Enabled SubSystem: '<S100>/Process_Messages' */
        if (localDW->Process_Messages_MODE_ek) {
          /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcoher_f) {
            /* Disable for Outport: '<S207>/CAN1_msg_coherent' */
            localB->AND_e = false;
            localDW->DemuxmessageCAN1andcheckcoher_f = false;
          }

          /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcohe_me) {
            /* Disable for Outport: '<S208>/CAN2_msg_coherent' */
            localB->AND_b = false;
            localDW->DemuxmessageCAN1andcheckcohe_me = false;
          }

          /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_ek = false;
        }

        /* End of Disable for SubSystem: '<S100>/Process_Messages' */
        localDW->COMPTaskSyncbc0check_MODE = false;
      }

      /* End of Disable for SubSystem: '<S89>/COMP Task - Sync bc0 check' */

      /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote1 check' */
      if (localDW->COMPTaskVote1check_MODE) {
        /* Disable for Enabled SubSystem: '<S104>/Process_Messages1' */
        if (localDW->Process_Messages1_MODE) {
          /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
            /* Disable for Outport: '<S242>/CAN1_msg_coherent' */
            localB->Equal_h = false;
            localDW->DemuxmessageCAN1andcheckcohe_dz = false;
          }

          /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcoher_g) {
            /* Disable for Outport: '<S243>/CAN2_msg_coherent' */
            localB->Equal_c = false;
            localDW->DemuxmessageCAN1andcheckcoher_g = false;
          }

          /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S104>/Process_Messages1' */
        localDW->COMPTaskVote1check_MODE = false;
      }

      /* End of Disable for SubSystem: '<S89>/COMP Task - Vote1 check' */

      /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote2 check' */
      if (localDW->COMPTaskVote2check_MODE) {
        /* Disable for Enabled SubSystem: '<S106>/Process_Messages' */
        if (localDW->Process_Messages_MODE_mw) {
          /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcoher_p) {
            /* Disable for Outport: '<S271>/CAN1_msg_coherent' */
            localB->Equal_o3 = false;
            localDW->DemuxmessageCAN1andcheckcoher_p = false;
          }

          /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcoher_d) {
            /* Disable for Outport: '<S272>/CAN2_msg_coherent' */
            localB->Equal_fk = false;
            localDW->DemuxmessageCAN1andcheckcoher_d = false;
          }

          /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_mw = false;
        }

        /* End of Disable for SubSystem: '<S106>/Process_Messages' */
        localDW->COMPTaskVote2check_MODE = false;
      }

      /* End of Disable for SubSystem: '<S89>/COMP Task - Vote2 check' */

      /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote3 check' */
      if (localDW->COMPTaskVote3check_MODE) {
        /* Disable for Enabled SubSystem: '<S108>/Process_Messages' */
        if (localDW->Process_Messages_MODE_f) {
          /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcoher_e) {
            /* Disable for Outport: '<S300>/CAN1_msg_coherent' */
            localB->Equal_dl = false;
            localDW->DemuxmessageCAN1andcheckcoher_e = false;
          }

          /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcoher_j) {
            /* Disable for Outport: '<S301>/CAN2_msg_coherent' */
            localB->Equal_k = false;
            localDW->DemuxmessageCAN1andcheckcoher_j = false;
          }

          /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_f = false;
        }

        /* End of Disable for SubSystem: '<S108>/Process_Messages' */
        localDW->COMPTaskVote3check_MODE = false;
      }

      /* End of Disable for SubSystem: '<S89>/COMP Task - Vote3 check' */

      /* Disable for Enabled SubSystem: '<S89>/COMM Task - Sync bc 0' */
      if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
        COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
          &localDW->COMMTaskSyncbc0_b);
      }

      /* End of Disable for SubSystem: '<S89>/COMM Task - Sync bc 0' */

      /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote1' */
      if (localDW->COMMTaskVote1_MODE) {
        /* Disable for Enabled SubSystem: '<S93>/Reception substasks' */
        if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
            &localDW->Receptionsubstasks_k);
        }

        /* End of Disable for SubSystem: '<S93>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S93>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_ik.Transmissionsubtasks_MODE) {
          Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_ik,
            &localDW->Transmissionsubtasks_ik);
        }

        /* End of Disable for SubSystem: '<S93>/Transmission subtasks' */

        /* Disable for Outport: '<S93>/Send CAN1' */
        localB->Transmissionsubtasks_ik.Equal7_i = false;

        /* Disable for Outport: '<S93>/Receive CAN1' */
        localB->Receptionsubstasks_k.AND = false;

        /* Disable for Outport: '<S93>/Send CAN2' */
        localB->Transmissionsubtasks_ik.Equal7 = false;

        /* Disable for Outport: '<S93>/Receive CAN2' */
        localB->Receptionsubstasks_k.AND1 = false;
        localDW->COMMTaskVote1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S89>/COMM Task - Vote1' */

      /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote2' */
      if (localDW->COMMTaskVote2_MODE) {
        /* Disable for Enabled SubSystem: '<S94>/Reception substasks' */
        if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
            &localDW->Receptionsubstasks_g);
        }

        /* End of Disable for SubSystem: '<S94>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S94>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
          Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
            &localDW->Transmissionsubtasks_l);
        }

        /* End of Disable for SubSystem: '<S94>/Transmission subtasks' */

        /* Disable for Outport: '<S94>/Send CAN1' */
        localB->Transmissionsubtasks_l.Equal7_i = false;

        /* Disable for Outport: '<S94>/Receive CAN1' */
        localB->Receptionsubstasks_g.AND = false;

        /* Disable for Outport: '<S94>/Send CAN2' */
        localB->Transmissionsubtasks_l.Equal7 = false;

        /* Disable for Outport: '<S94>/Receive CAN2' */
        localB->Receptionsubstasks_g.AND1 = false;
        localDW->COMMTaskVote2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S89>/COMM Task - Vote2' */

      /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote3' */
      if (localDW->COMMTaskVote3_MODE) {
        /* Disable for Enabled SubSystem: '<S95>/Reception substasks' */
        if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
            &localDW->Receptionsubstasks_e);
        }

        /* End of Disable for SubSystem: '<S95>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S95>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_g.Transmissionsubtasks_MODE) {
          Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_g,
            &localDW->Transmissionsubtasks_g);
        }

        /* End of Disable for SubSystem: '<S95>/Transmission subtasks' */

        /* Disable for Outport: '<S95>/Send CAN1' */
        localB->Transmissionsubtasks_g.Equal7_i = false;

        /* Disable for Outport: '<S95>/Receive CAN1' */
        localB->Receptionsubstasks_e.AND = false;

        /* Disable for Outport: '<S95>/Send CAN2' */
        localB->Transmissionsubtasks_g.Equal7 = false;

        /* Disable for Outport: '<S95>/Receive CAN2' */
        localB->Receptionsubstasks_e.AND1 = false;
        localDW->COMMTaskVote3_MODE = false;
      }

      /* End of Disable for SubSystem: '<S89>/COMM Task - Vote3' */

      /* Disable for Outport: '<S89>/Send_Message_CAN1' */
      localB->OR1_o = false;

      /* Disable for Outport: '<S89>/Send_Message_CAN2' */
      localB->OR4_o = false;

      /* Disable for Outport: '<S89>/Receive_Message_CAN1' */
      localB->OR2_p = false;

      /* Disable for Outport: '<S89>/Receive_Message_CAN2' */
      localB->OR3_b = false;
      localDW->controllerbasiccycle0_MODE = false;
    }

    /* End of Disable for SubSystem: '<S41>/controller basic cycle 0' */

    /* Disable for Enabled SubSystem: '<S41>/controller basic cycle 1' */
    if (localDW->controllerbasiccycle1_MODE) {
      /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' */
      if (localDW->COMPTaskRx_Output_Control1_Chec) {
        /* Disable for Enabled SubSystem: '<S337>/Process_Messages' */
        if (localDW->Process_Messages_MODE_h) {
          /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcohe_ce) {
            /* Disable for Outport: '<S554>/CAN1_msg_coherent' */
            localB->Equal_i2 = false;
            localDW->DemuxmessageCAN1andcheckcohe_ce = false;
          }

          /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcoher_a) {
            /* Disable for Outport: '<S555>/CAN2_msg_coherent' */
            localB->Equal_b = false;
            localDW->DemuxmessageCAN1andcheckcoher_a = false;
          }

          /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_h = false;
        }

        /* End of Disable for SubSystem: '<S337>/Process_Messages' */
        localDW->COMPTaskRx_Output_Control1_Chec = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' */

      /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' */
      if (localDW->COMPTaskRx_Output_Control2_Chec) {
        /* Disable for Enabled SubSystem: '<S338>/Process_Messages' */
        if (localDW->Process_Messages_MODE_g) {
          /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcohe_nj) {
            /* Disable for Outport: '<S583>/CAN1_msg_coherent' */
            localB->Equal_i = false;
            localDW->DemuxmessageCAN1andcheckcohe_nj = false;
          }

          /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcoher_n) {
            /* Disable for Outport: '<S584>/CAN2_msg_coherent' */
            localB->Equal_o = false;
            localDW->DemuxmessageCAN1andcheckcoher_n = false;
          }

          /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_g = false;
        }

        /* End of Disable for SubSystem: '<S338>/Process_Messages' */
        localDW->COMPTaskRx_Output_Control2_Chec = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' */

      /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' */
      if (localDW->COMPTaskRx_Output_Emulator_Chec) {
        /* Disable for Enabled SubSystem: '<S339>/Process_Messages' */
        if (localDW->Process_Messages_MODE_o) {
          /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcohe_h0) {
            /* Disable for Outport: '<S611>/CAN1_msg_coherent' */
            localB->Equal_d = false;
            localDW->DemuxmessageCAN1andcheckcohe_h0 = false;
          }

          /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcohe_hb) {
            /* Disable for Outport: '<S612>/CAN2_msg_coherent' */
            localB->Equal_g = false;
            localDW->DemuxmessageCAN1andcheckcohe_hb = false;
          }

          /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_o = false;
        }

        /* End of Disable for SubSystem: '<S339>/Process_Messages' */
        localDW->COMPTaskRx_Output_Emulator_Chec = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' */

      /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */
      if (localDW->COMPTaskRx_Sensor_Values_Check_) {
        /* Disable for Enabled SubSystem: '<S340>/Process_Messages' */
        if (localDW->Process_Messages_MODE_e) {
          /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcoher_k) {
            /* Disable for Outport: '<S640>/CAN1_msg_coherent' */
            localB->Equal_j = false;
            localDW->DemuxmessageCAN1andcheckcoher_k = false;
          }

          /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcohe_m4) {
            /* Disable for Outport: '<S641>/CAN2_msg_coherent' */
            localB->Equal_a = false;
            localDW->DemuxmessageCAN1andcheckcohe_m4 = false;
          }

          /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_e = false;
        }

        /* End of Disable for SubSystem: '<S340>/Process_Messages' */
        localDW->COMPTaskRx_Sensor_Values_Check_ = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */

      /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' */
      if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
        /* Disable for Enabled SubSystem: '<S341>/Process_Messages' */
        if (localDW->Process_Messages_MODE_m) {
          /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcoher_m) {
            /* Disable for Outport: '<S693>/CAN1_msg_coherent' */
            localB->Equal_f = false;
            localDW->DemuxmessageCAN1andcheckcoher_m = false;
          }

          /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcoher_h) {
            /* Disable for Outport: '<S694>/CAN2_msg_coherent' */
            localB->Equal = false;
            localDW->DemuxmessageCAN1andcheckcoher_h = false;
          }

          /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE_m = false;
        }

        /* End of Disable for SubSystem: '<S341>/Process_Messages' */
        localDW->COMPTaskRx_Set_Values_Check_MOD = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' */

      /* Disable for Enabled SubSystem: '<S90>/COMP Task - Sync bc1 check' */
      if (localDW->COMPTaskSyncbc1check_MODE) {
        /* Disable for Enabled SubSystem: '<S342>/Process_Messages' */
        if (localDW->Process_Messages_MODE) {
          /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence' */
          if (localDW->DemuxmessageCAN1andcheckcoher_c) {
            /* Disable for Outport: '<S738>/CAN1_msg_coherent' */
            localB->AND_o = false;
            localDW->DemuxmessageCAN1andcheckcoher_c = false;
          }

          /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence' */

          /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
          if (localDW->DemuxmessageCAN1andcheckcoheren) {
            /* Disable for Outport: '<S739>/CAN2_msg_coherent' */
            localB->AND = false;
            localDW->DemuxmessageCAN1andcheckcoheren = false;
          }

          /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
          localDW->Process_Messages_MODE = false;
        }

        /* End of Disable for SubSystem: '<S342>/Process_Messages' */
        localDW->COMPTaskSyncbc1check_MODE = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMP Task - Sync bc1 check' */

      /* Disable for Enabled SubSystem: '<S90>/COMP Task - TMR' */
      if (localDW->COMPTaskTMR_MODE) {
        /* Disable for Enabled SubSystem: '<S343>/TMR_main' */
        if (localDW->TMR_main_MODE) {
          /* Disable for Enabled SubSystem: '<S766>/Agreement Out1' */
          if (localDW->AgreementOut1_MODE) {
            /* Disable for Outport: '<S807>/tau_fr_agree' */
            tau_fr1_agree_s = false;

            /* Disable for Outport: '<S807>/tau_fl_agree ' */
            tau_fl1_agree_s = false;

            /* Disable for Outport: '<S807>/tau_ar_agree' */
            tau_ar1_agree_s = false;

            /* Disable for Outport: '<S807>/tau_al_agree' */
            tau_al1_agree_s = false;
            localDW->AgreementOut1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S766>/Agreement Out1' */

          /* Disable for Enabled SubSystem: '<S766>/Agreement Out2' */
          if (localDW->AgreementOut2_MODE) {
            /* Disable for Outport: '<S808>/tau_fr_agree' */
            tau_fr2_agree_s = false;

            /* Disable for Outport: '<S808>/tau_fl_agree ' */
            tau_fl2_agree_s = false;

            /* Disable for Outport: '<S808>/tau_ar_agree' */
            tau_ar2_agree_s = false;

            /* Disable for Outport: '<S808>/tau_al_agree' */
            tau_al2_agree_s = false;
            localDW->AgreementOut2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S766>/Agreement Out2' */

          /* Disable for Enabled SubSystem: '<S766>/Agreement Out3' */
          if (localDW->AgreementOut3_MODE) {
            /* Disable for Outport: '<S809>/tau_fr_agree' */
            tau_fr_agree_s = false;

            /* Disable for Outport: '<S809>/tau_fl_agree ' */
            tau_fl_agree_s = false;

            /* Disable for Outport: '<S809>/tau_ar_agree' */
            tau_ar_agree_s = false;

            /* Disable for Outport: '<S809>/tau_al_agree' */
            tau_al_agree_s = false;
            localDW->AgreementOut3_MODE = false;
          }

          /* End of Disable for SubSystem: '<S766>/Agreement Out3' */
          localDW->TMR_main_MODE = false;
        }

        /* End of Disable for SubSystem: '<S343>/TMR_main' */
        localDW->COMPTaskTMR_MODE = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMP Task - TMR' */

      /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Control1' */
      if (localDW->COMMTaskOutputControl1_MODE) {
        /* Disable for Enabled SubSystem: '<S326>/Reception substasks' */
        if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_a,
            &localDW->Receptionsubstasks_a);
        }

        /* End of Disable for SubSystem: '<S326>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S326>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_ic.Transmissionsubtasks_MODE) {
          Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_ic,
            &localDW->Transmissionsubtasks_ic);
        }

        /* End of Disable for SubSystem: '<S326>/Transmission subtasks' */

        /* Disable for Outport: '<S326>/Send CAN1' */
        localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN1_e.Equal7 =
          false;

        /* Disable for Outport: '<S326>/Receive CAN1' */
        localB->Receptionsubstasks_a.AND = false;

        /* Disable for Outport: '<S326>/Send CAN2' */
        localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN2_b.Equal7 =
          false;

        /* Disable for Outport: '<S326>/Receive CAN2' */
        localB->Receptionsubstasks_a.AND1 = false;
        localDW->COMMTaskOutputControl1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMM Task - Output Control1' */

      /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Control2' */
      if (localDW->COMMTaskOutputControl2_MODE) {
        /* Disable for Enabled SubSystem: '<S327>/Reception substasks' */
        if (localDW->Receptionsubstasks_ah.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_ah,
            &localDW->Receptionsubstasks_ah);
        }

        /* End of Disable for SubSystem: '<S327>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S327>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_m.Transmissionsubtasks_MODE) {
          Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_m,
            &localDW->Transmissionsubtasks_m);
        }

        /* End of Disable for SubSystem: '<S327>/Transmission subtasks' */

        /* Disable for Outport: '<S327>/Send CAN1' */
        localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN1_e.Equal7 = false;

        /* Disable for Outport: '<S327>/Receive CAN1' */
        localB->Receptionsubstasks_ah.AND = false;

        /* Disable for Outport: '<S327>/Send CAN2' */
        localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN2_b.Equal7 = false;

        /* Disable for Outport: '<S327>/Receive CAN2' */
        localB->Receptionsubstasks_ah.AND1 = false;
        localDW->COMMTaskOutputControl2_MODE = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMM Task - Output Control2' */

      /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Emulator' */
      if (localDW->COMMTaskOutputEmulator_MODE) {
        /* Disable for Enabled SubSystem: '<S328>/Reception substasks' */
        if (localDW->Receptionsubstasks_b.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_b,
            &localDW->Receptionsubstasks_b);
        }

        /* End of Disable for SubSystem: '<S328>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S328>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_MODE_c) {
          /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN1' */
          if (localDW->CheckmsgtransmissionCAN1_i.CheckmsgtransmissionCAN1_MODE)
          {
            CheckmsgtransmissionCAN_Disable(&localB->CheckmsgtransmissionCAN1_i,
              &localDW->CheckmsgtransmissionCAN1_i);
          }

          /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN1' */

          /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN2' */
          if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
          {
            CheckmsgtransmissionC_g_Disable(&localB->CheckmsgtransmissionCAN2_c,
              &localDW->CheckmsgtransmissionCAN2_c);
          }

          /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN2' */

          /* Disable for Outport: '<S408>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

          /* Disable for Outport: '<S408>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
          localDW->Transmissionsubtasks_MODE_c = false;
        }

        /* End of Disable for SubSystem: '<S328>/Transmission subtasks' */

        /* Disable for Outport: '<S328>/Send CAN1' */
        localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

        /* Disable for Outport: '<S328>/Receive CAN1' */
        localB->Receptionsubstasks_b.AND = false;

        /* Disable for Outport: '<S328>/Send CAN2' */
        localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

        /* Disable for Outport: '<S328>/Receive CAN2' */
        localB->Receptionsubstasks_b.AND1 = false;
        localDW->COMMTaskOutputEmulator_MODE = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMM Task - Output Emulator' */

      /* Disable for Enabled SubSystem: '<S90>/COMM Task - Sensor_Values' */
      if (localDW->COMMTaskSensor_Values_MODE) {
        /* Disable for Enabled SubSystem: '<S329>/Reception substasks' */
        if (localDW->Receptionsubstasks_gp.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_gp,
            &localDW->Receptionsubstasks_gp);
        }

        /* End of Disable for SubSystem: '<S329>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S329>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_MODE_l) {
          /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN1' */
          if (localDW->CheckmsgtransmissionCAN1_MODE_f) {
            /* Disable for Outport: '<S440>/Send CAN1' */
            localB->Equal7_e = false;
            localDW->CheckmsgtransmissionCAN1_MODE_f = false;
          }

          /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN1' */

          /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN2' */
          if (localDW->CheckmsgtransmissionCAN2_MODE_k) {
            /* Disable for Outport: '<S441>/Send CAN2' */
            localB->Equal7_p = false;
            localDW->CheckmsgtransmissionCAN2_MODE_k = false;
          }

          /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN2' */

          /* Disable for Outport: '<S438>/Send CAN1' */
          localB->Equal7_e = false;

          /* Disable for Outport: '<S438>/Send CAN2' */
          localB->Equal7_p = false;
          localDW->Transmissionsubtasks_MODE_l = false;
        }

        /* End of Disable for SubSystem: '<S329>/Transmission subtasks' */

        /* Disable for Outport: '<S329>/Send CAN1' */
        localB->Equal7_e = false;

        /* Disable for Outport: '<S329>/Receive CAN1' */
        localB->Receptionsubstasks_gp.AND = false;

        /* Disable for Outport: '<S329>/Send CAN2' */
        localB->Equal7_p = false;

        /* Disable for Outport: '<S329>/Receive CAN2' */
        localB->Receptionsubstasks_gp.AND1 = false;
        localDW->COMMTaskSensor_Values_MODE = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMM Task - Sensor_Values' */

      /* Disable for Enabled SubSystem: '<S90>/COMM Task - Set_Values' */
      if (localDW->COMMTaskSet_Values_MODE) {
        /* Disable for Enabled SubSystem: '<S330>/Reception substasks' */
        if (localDW->Receptionsubstasks_ga.Receptionsubstasks_MODE) {
          Receptionsubstasks_Disable(&localB->Receptionsubstasks_ga,
            &localDW->Receptionsubstasks_ga);
        }

        /* End of Disable for SubSystem: '<S330>/Reception substasks' */

        /* Disable for Enabled SubSystem: '<S330>/Transmission subtasks' */
        if (localDW->Transmissionsubtasks_MODE) {
          /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN1' */
          if (localDW->CheckmsgtransmissionCAN1_MODE) {
            /* Disable for Outport: '<S470>/Send CAN1' */
            localB->Equal7_l = false;
            localDW->CheckmsgtransmissionCAN1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN1' */

          /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN2' */
          if (localDW->CheckmsgtransmissionCAN2_MODE) {
            /* Disable for Outport: '<S471>/Send CAN2' */
            localB->Equal7 = false;
            localDW->CheckmsgtransmissionCAN2_MODE = false;
          }

          /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN2' */

          /* Disable for Outport: '<S468>/Send CAN1' */
          localB->Equal7_l = false;

          /* Disable for Outport: '<S468>/Send CAN2' */
          localB->Equal7 = false;
          localDW->Transmissionsubtasks_MODE = false;
        }

        /* End of Disable for SubSystem: '<S330>/Transmission subtasks' */

        /* Disable for Outport: '<S330>/Send CAN1' */
        localB->Equal7_l = false;

        /* Disable for Outport: '<S330>/Receive CAN1' */
        localB->Receptionsubstasks_ga.AND = false;

        /* Disable for Outport: '<S330>/Send CAN2' */
        localB->Equal7 = false;

        /* Disable for Outport: '<S330>/Receive CAN2' */
        localB->Receptionsubstasks_ga.AND1 = false;
        localDW->COMMTaskSet_Values_MODE = false;
      }

      /* End of Disable for SubSystem: '<S90>/COMM Task - Set_Values' */

      /* Disable for Enabled SubSystem: '<S90>/COMM Task - Sync bc 1' */
      if (localDW->COMMTaskSyncbc1.COMMTaskSyncbc0_MODE) {
        COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1,
          &localDW->COMMTaskSyncbc1);
      }

      /* End of Disable for SubSystem: '<S90>/COMM Task - Sync bc 1' */

      /* Disable for Outport: '<S90>/Send_Message_CAN1' */
      localB->OR1 = false;

      /* Disable for Outport: '<S90>/Send_Message_CAN2' */
      localB->OR4 = false;

      /* Disable for Outport: '<S90>/Receive_Message_CAN1' */
      localB->OR3 = false;

      /* Disable for Outport: '<S90>/Receive_Message_CAN2' */
      localB->OR2 = false;
      localDW->controllerbasiccycle1_MODE = false;
    }

    /* End of Disable for SubSystem: '<S41>/controller basic cycle 1' */

    /* Disable for Outport: '<S41>/Send_Message_CAN1' */
    localB->signal1 = false;

    /* Disable for Outport: '<S41>/Send_Message_CAN2' */
    localB->signal2 = false;

    /* Disable for Outport: '<S41>/Receive_Message_CAN1' */
    localB->signal3 = false;

    /* Disable for Outport: '<S41>/Receive_Message_CAN2' */
    localB->signal4 = false;
    localDW->MatrixCycleManager_MODE = false;
  }

  /* End of Disable for SubSystem: '<S18>/Matrix Cycle Manager' */

  /* Disable for Chart: '<S18>/Chart1' incorporates:
   *  SubSystem: '<S6>/CAN1 Recieve'
   */
  CAN1Recieve_Disable(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h);

  /* Disable for Chart: '<S18>/Chart2' incorporates:
   *  SubSystem: '<S6>/CAN2 Recieve'
   */
  CAN2Recieve_Disable(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b);

  /* Disable for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A0' */
  if (localDW->DEBUGToggledigitalpinA0_MODE) {
    localDW->DEBUGToggledigitalpinA0_MODE = false;
  }

  /* End of Disable for SubSystem: '<S18>/DEBUG - Toggle digital pin A0' */

  /* Disable for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A1' */
  if (localDW->DEBUGToggledigitalpinA1_MODE) {
    localDW->DEBUGToggledigitalpinA1_MODE = false;
  }

  /* End of Disable for SubSystem: '<S18>/DEBUG - Toggle digital pin A1' */

  /* Disable for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A4' */
  if (localDW->DEBUGToggledigitalpinA4_MODE) {
    localDW->DEBUGToggledigitalpinA4_MODE = false;
  }

  /* End of Disable for SubSystem: '<S18>/DEBUG - Toggle digital pin A4' */

  /* Disable for Chart: '<S18>/Chart4' incorporates:
   *  SubSystem: '<S6>/Measure EXecution time'
   */
  MeasureEXecutiontime_Disable(&localDW->MeasureEXecutiontime_d);
}

/* Start for function-call system: '<S6>/CAN Management' */
void CANManagement_Start(rtDW_CANManagement *localDW)
{
  /* Start for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A2' */
  /* Start for M-S-Function: '<S44>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN7, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S18>/DEBUG - Toggle digital pin A2' */

  /* Start for DataStoreMemory: '<S18>/Data Store Memory13' */
  localDW->Initialization_flag = true;

  /* Start for Enabled SubSystem: '<S18>/Matrix Cycle Manager' */
  /* Start for Enabled SubSystem: '<S41>/controller basic cycle 1' */
  /* Start for Enabled SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */
  /* Start for Enabled SubSystem: '<S340>/Update Msg buffer' */
  /* Start for DataStoreMemory: '<S639>/Data Store Memory' */
  localDW->mc_counter = 1.0;

  /* End of Start for SubSystem: '<S340>/Update Msg buffer' */
  /* End of Start for SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */

  /* Start for DataStoreMemory: '<S90>/Data Store Memory18' */
  localDW->rx_data_incr_time = 1.0;

  /* End of Start for SubSystem: '<S41>/controller basic cycle 1' */
  /* End of Start for SubSystem: '<S18>/Matrix Cycle Manager' */

  /* Start for Chart: '<S18>/Chart1' incorporates:
   *  SubSystem: '<S6>/CAN1 Recieve'
   */
  CAN1Recieve_Start();

  /* Start for Chart: '<S18>/Chart2' incorporates:
   *  SubSystem: '<S6>/CAN2 Recieve'
   */
  CAN2Recieve_Start();

  /* Start for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A0' */
  /* Start for M-S-Function: '<S42>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTC_PIN0, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S18>/DEBUG - Toggle digital pin A0' */

  /* Start for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A1' */
  /* Start for M-S-Function: '<S43>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN6, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S18>/DEBUG - Toggle digital pin A1' */

  /* Start for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A4' */
  /* Start for M-S-Function: '<S45>/Level-2 M-file S-Function' */

  /* configure the digital output */
  DigoutConfigure(DIGOUT_PORTF_PIN9, DIGOUT_CFG_OPENDRAIN);

  /* End of Start for SubSystem: '<S18>/DEBUG - Toggle digital pin A4' */

  /* Start for Chart: '<S18>/Chart4' incorporates:
   *  SubSystem: '<S6>/Measure EXecution time'
   */
  MeasureEXecutiontime_Start();
}

/* Output and update for function-call system: '<S6>/CAN Management' */
void CANManagement(rtB_CANManagement *localB, const rtC_CANManagement *localC,
                   rtDW_CANManagement *localDW, real_T *rtd_Board_ID, uint16_T
                   *rtd_Local_Ticks, real_T *rtd_Master_ID, msg_buffer_type
                   *rtd_Msg_Rx_CAN1, msg_buffer_type *rtd_Msg_Rx_CAN2, uint16_T *
                   rtd_Msg_Rx_Ticks_CAN1, uint16_T *rtd_Msg_Rx_Ticks_CAN2,
                   msg_buffer_type *rtd_Msg_Tx_CAN1, msg_buffer_type
                   *rtd_Msg_Tx_CAN2, boolean_T *rtd_New_Msg_Ready_CAN1,
                   boolean_T *rtd_New_Msg_Ready_CAN2, uint32_T *rtd_RxID_CAN1,
                   uint32_T *rtd_RxID_CAN2, uint8_T *rtd_Rx_State_CAN1, uint8_T *
                   rtd_Rx_State_CAN2, boolean_T *rtd_Toggle_Pin_A0, uint32_T
                   *rtd_TxID_CAN1, uint32_T *rtd_TxID_CAN2, real_T
                   *rtd_Tx_msg_count_CAN1, real_T *rtd_Tx_msg_count_CAN2)
{
  int32_T sigIdx;
  int_T linIx;
  boolean_T rtb_OR1_l;
  uint16_T rtb_DataStoreRead8_o5;
  boolean_T rtb_Equal_e2;
  real_T rtb_Minus_ch;
  real_T rtb_Fix1_e;
  boolean_T rtb_AND1_g0;
  boolean_T rtb_AND2_n;
  boolean_T rtb_AND6_f;
  boolean_T rtb_AND8_k;
  boolean_T rtb_AND7_m;
  real_T rtb_Plus1_b;
  real_T rtb_Plus2_p;
  int8_T rtb_FindNonzeroElements[3];
  real_T rtb_signal1[18];
  real_T rtb_signal2[18];
  boolean_T rtb_AND17_f;
  boolean_T rtb_AND17;
  boolean_T rtb_AND1_pd;
  boolean_T rtb_AND1_ob;
  boolean_T rtb_AND1_hy;
  boolean_T rtb_AND1_dc;
  boolean_T rtb_Equal2_m;
  boolean_T rtb_NOT_im;
  boolean_T rtb_Equal2_hs;
  boolean_T rtb_NOT_l;
  boolean_T rtb_Equal2_o;
  boolean_T rtb_NOT_d;
  boolean_T rtb_AND1_c;
  boolean_T rtb_AND1_aq;
  boolean_T rtb_AND1_ga;
  boolean_T rtb_AND1_a;
  boolean_T rtb_AND1_jv;
  boolean_T rtb_AND1_h2;
  boolean_T rtb_OR_m;
  boolean_T rtb_NOT_jz;
  boolean_T rtb_OR_a;
  boolean_T rtb_NOT_k;
  boolean_T rtb_NOT_nc;
  boolean_T rtb_NOT_es;
  boolean_T rtb_NOT_ac;
  uint8_T rtb_Switch_j_Buffer_1;
  uint8_T rtb_Switch_j_Buffer_2;
  uint8_T rtb_Switch_j_Buffer_3;
  uint8_T rtb_Switch_j_Buffer_4;
  uint8_T rtb_Switch_j_Buffer_5;
  uint8_T rtb_Switch_j_Buffer_6;
  boolean_T rtb_NOT_g;
  uint8_T rtb_Cast9;
  uint8_T rtb_Cast10;
  uint8_T rtb_Cast11;
  uint8_T rtb_Cast12;
  uint8_T rtb_Cast15;
  uint8_T rtb_Cast17;
  uint8_T rtb_Cast18;
  uint8_T rtb_Cast19;
  boolean_T rtb_NOT_fg;
  uint16_T rtb_DataStoreRead_nk;
  boolean_T rtb_AND_fw;
  boolean_T rtb_AND1_p4;
  uint8_T rtb_Cast_jx;
  uint8_T rtb_Cast_a;
  uint8_T rtb_Cast_n;
  uint8_T rtb_Cast_mj;
  uint8_T rtb_Cast_ez;
  uint8_T rtb_Cast_j;
  uint8_T rtb_Cast_h;
  uint8_T rtb_Cast_f;
  uint8_T rtb_Cast_i;
  uint8_T rtb_Cast_l;
  uint8_T rtb_Cast_m;
  uint8_T rtb_Cast4_e;
  uint8_T rtb_Cast1_n;
  uint8_T rtb_Cast18_p;
  uint8_T rtb_Cast9_k;
  uint8_T rtb_Cast4_c;
  uint8_T rtb_Cast1_c;
  uint8_T rtb_Cast18_f;
  uint8_T rtb_Cast9_o;
  uint32_T qY;
  uint32_T qY_0;
  uint16_T u0;
  uint16_T u1;
  int32_T exitg1;

  /* Outputs for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A2' incorporates:
   *  EnablePort: '<S37>/Enable'
   */
  /* Constant: '<S18>/Constant2' */
  if (0.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA2_MODE) {
      localDW->DEBUGToggledigitalpinA2_MODE = true;
    }

    /* Switch: '<S37>/Switch' incorporates:
     *  DataStoreRead: '<S37>/Data Store Read'
     */
    if (localDW->A2_Pin_State) {
      /* DataStoreWrite: '<S37>/Data Store Write1' incorporates:
       *  Constant: '<S37>/Constant1'
       */
      localDW->A2_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S37>/Data Store Write1' incorporates:
       *  Constant: '<S37>/Constant'
       */
      localDW->A2_Pin_State = true;
    }

    /* End of Switch: '<S37>/Switch' */
    /* DataStoreRead: '<S37>/Data Store Read1' */
    localB->DataStoreRead1_o = localDW->A2_Pin_State;

    /* Update for M-S-Function: '<S44>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o == 0) {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN7, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA2_MODE) {
      localDW->DEBUGToggledigitalpinA2_MODE = false;
    }
  }

  /* End of Constant: '<S18>/Constant2' */
  /* End of Outputs for SubSystem: '<S18>/DEBUG - Toggle digital pin A2' */

  /* Outputs for Enabled SubSystem: '<S18>/Initialization' incorporates:
   *  EnablePort: '<S39>/Enable'
   */
  /* DataStoreRead: '<S18>/Data Store Read' incorporates:
   *  Constant: '<S39>/Board nr1'
   *  Constant: '<S47>/SET'
   *  DataStoreRead: '<S39>/Data Store Read1'
   *  Logic: '<S39>/AND'
   *  Logic: '<S39>/OR'
   *  RelationalOperator: '<S39>/Equal'
   */
  if (localDW->Initialization_flag) {
    if (!localDW->Initialization_MODE) {
      localDW->Initialization_MODE = true;
    }

    /* Logic: '<S39>/OR1' */
    rtb_OR1_l = ((*rtd_New_Msg_Ready_CAN1) || (*rtd_New_Msg_Ready_CAN2));

    /* Outputs for Enabled SubSystem: '<S39>/RoleID and Global Time init' incorporates:
     *  EnablePort: '<S47>/Enable'
     */
    if (((*rtd_Board_ID == 1.0) && localDW->Initialization_Timeout) || rtb_OR1_l)
    {
      if (!localDW->RoleIDandGlobalTimeinit_MODE) {
        localDW->RoleIDandGlobalTimeinit_MODE = true;
      }

      /* Outputs for Enabled SubSystem: '<S47>/Global Time Initialization Slave' incorporates:
       *  EnablePort: '<S49>/Enable'
       */
      if (rtb_OR1_l) {
        /* DataStoreWrite: '<S49>/Data Store Write4' incorporates:
         *  Constant: '<S49>/SET1 '
         */
        localDW->BC0_Sync_processed = true;

        /* RelationalOperator: '<S49>/Equal' incorporates:
         *  Constant: '<S49>/Constant'
         */
        rtb_Equal_e2 = (*rtd_New_Msg_Ready_CAN1 == 1.0);

        /* Switch: '<S49>/Switch' incorporates:
         *  DataStoreRead: '<S49>/Data Store Read1'
         *  DataStoreRead: '<S49>/Data Store Read2'
         */
        if (rtb_Equal_e2) {
          rtb_Switch_j_Buffer_1 = rtd_Msg_Rx_CAN1->Buffer_1;
          rtb_Switch_j_Buffer_2 = rtd_Msg_Rx_CAN1->Buffer_2;
          rtb_Switch_j_Buffer_3 = rtd_Msg_Rx_CAN1->Buffer_3;
          rtb_Switch_j_Buffer_4 = rtd_Msg_Rx_CAN1->Buffer_4;
          rtb_Switch_j_Buffer_5 = rtd_Msg_Rx_CAN1->Buffer_5;
          rtb_Switch_j_Buffer_6 = rtd_Msg_Rx_CAN1->Buffer_6;
        } else {
          rtb_Switch_j_Buffer_1 = rtd_Msg_Rx_CAN2->Buffer_1;
          rtb_Switch_j_Buffer_2 = rtd_Msg_Rx_CAN2->Buffer_2;
          rtb_Switch_j_Buffer_3 = rtd_Msg_Rx_CAN2->Buffer_3;
          rtb_Switch_j_Buffer_4 = rtd_Msg_Rx_CAN2->Buffer_4;
          rtb_Switch_j_Buffer_5 = rtd_Msg_Rx_CAN2->Buffer_5;
          rtb_Switch_j_Buffer_6 = rtd_Msg_Rx_CAN2->Buffer_6;
        }

        /* End of Switch: '<S49>/Switch' */

        /* Outputs for Atomic SubSystem: '<S51>/Bit Shift' */
        BitShift(rtb_Switch_j_Buffer_2, &localB->BitShift_d);

        /* End of Outputs for SubSystem: '<S51>/Bit Shift' */

        /* Outputs for Atomic SubSystem: '<S51>/Bit Shift1' */
        BitShift1(localB->BitShift_d.y, &localB->BitShift1_n);

        /* End of Outputs for SubSystem: '<S51>/Bit Shift1' */

        /* Sum: '<S51>/Minus' */
        rtb_Fix1_e = rtb_Switch_j_Buffer_2 - localB->BitShift1_n.y;

        /* Product: '<S51>/Divide' */
        rtb_Plus1_b = rtb_Fix1_e / localC->Power1_iz;

        /* Rounding: '<S51>/Fix1' */
        if (rtb_Plus1_b < 0.0) {
          rtb_Minus_ch = ceil(rtb_Plus1_b);
        } else {
          rtb_Minus_ch = floor(rtb_Plus1_b);
        }

        /* End of Rounding: '<S51>/Fix1' */

        /* Switch: '<S51>/Switch' incorporates:
         *  DataStoreWrite: '<S49>/Data Store Write'
         *  Gain: '<S51>/Gain1'
         *  Product: '<S51>/Multiply'
         *  Product: '<S51>/Multiply1'
         *  Sum: '<S51>/Minus1'
         *  Sum: '<S51>/Minus2'
         */
        if (localB->BitShift_d.y > ((uint8_T)0U)) {
          localDW->torque_fr_integral = ((rtb_Fix1_e - rtb_Minus_ch *
            localC->Power1_iz) * localC->Power_b + rtb_Minus_ch) * (-1.0);
        } else {
          localDW->torque_fr_integral = (rtb_Fix1_e - rtb_Minus_ch *
            localC->Power1_iz) * localC->Power_b + rtb_Minus_ch;
        }

        /* End of Switch: '<S51>/Switch' */

        /* Outputs for Atomic SubSystem: '<S50>/Bit Shift3' */
        BitShift3(rtb_Switch_j_Buffer_1, &localB->BitShift3_i);

        /* End of Outputs for SubSystem: '<S50>/Bit Shift3' */

        /* Outputs for Atomic SubSystem: '<S50>/Bit Shift1' */
        /* MATLAB Function: '<S57>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S62>:1' */
        /* '<S62>:1:8' */
        Rx_init_mc = (uint8_T)((uint32_T)localB->BitShift3_i.y >> 5);

        /* End of Outputs for SubSystem: '<S50>/Bit Shift1' */

        /* Switch: '<S49>/Switch1' */
        if (rtb_Equal_e2) {
          /* DataTypeConversion: '<S49>/Cast' incorporates:
           *  Constant: '<S49>/Constant1'
           *  Constant: '<S49>/Constant3'
           *  Constant: '<S49>/delay_estimation_1'
           *  Product: '<S49>/Multiply'
           *  Sum: '<S49>/Sum'
           */
          Rx_init_LT = (uint16_T)((5.0 * (real_T)Rx_init_mc + 0.0) + 1.0);
        } else {
          /* DataTypeConversion: '<S49>/Cast' incorporates:
           *  Constant: '<S49>/Constant2'
           *  Constant: '<S49>/Constant3'
           *  Constant: '<S49>/delay_estimation_2'
           *  Product: '<S49>/Multiply1'
           *  Sum: '<S49>/Sum1'
           */
          Rx_init_LT = (uint16_T)((8.0 * (real_T)Rx_init_mc + 0.0) + 1.0);
        }

        /* End of Switch: '<S49>/Switch1' */

        /* DataStoreWrite: '<S49>/Data Store Write1' */
        *rtd_Local_Ticks = Rx_init_LT;

        /* Outputs for Atomic SubSystem: '<S50>/Bit Shift' */
        /* MATLAB Function: '<S56>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S61>:1' */
        /* '<S61>:1:8' */
        Rx_init_bc = (uint8_T)((uint32_T)rtb_Switch_j_Buffer_1 >> 7);

        /* End of Outputs for SubSystem: '<S50>/Bit Shift' */

        /* DataStoreWrite: '<S49>/Data Store Write2' */
        localDW->basic_cycle_count = Rx_init_bc;

        /* Outputs for Atomic SubSystem: '<S50>/Bit Shift4' */
        BitShift4(rtb_Switch_j_Buffer_1, &localB->BitShift4_d);

        /* End of Outputs for SubSystem: '<S50>/Bit Shift4' */

        /* Outputs for Atomic SubSystem: '<S50>/Bit Shift2' */
        /* MATLAB Function: '<S58>/bit_shift' */
        /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S63>:1' */
        /* '<S63>:1:8' */
        Rx_init_id = (uint8_T)((uint32_T)localB->BitShift4_d.y >> 4);

        /* End of Outputs for SubSystem: '<S50>/Bit Shift2' */

        /* DataStoreWrite: '<S49>/Data Store Write3' incorporates:
         *  DataTypeConversion: '<S49>/Cast1'
         */
        *rtd_Master_ID = Rx_init_id;

        /* Outputs for Atomic SubSystem: '<S52>/Bit Shift' */
        BitShift(rtb_Switch_j_Buffer_3, &localB->BitShift_f);

        /* End of Outputs for SubSystem: '<S52>/Bit Shift' */

        /* Outputs for Atomic SubSystem: '<S52>/Bit Shift1' */
        BitShift1(localB->BitShift_f.y, &localB->BitShift1_e);

        /* End of Outputs for SubSystem: '<S52>/Bit Shift1' */

        /* Sum: '<S52>/Minus' */
        rtb_Minus_ch = rtb_Switch_j_Buffer_3 - localB->BitShift1_e.y;

        /* Product: '<S52>/Divide' */
        rtb_Plus1_b = rtb_Minus_ch / localC->Power1_kj;

        /* Rounding: '<S52>/Fix1' */
        if (rtb_Plus1_b < 0.0) {
          rtb_Fix1_e = ceil(rtb_Plus1_b);
        } else {
          rtb_Fix1_e = floor(rtb_Plus1_b);
        }

        /* End of Rounding: '<S52>/Fix1' */

        /* Switch: '<S52>/Switch' incorporates:
         *  DataStoreWrite: '<S49>/Data Store Write5'
         *  Gain: '<S52>/Gain1'
         *  Product: '<S52>/Multiply'
         *  Product: '<S52>/Multiply1'
         *  Sum: '<S52>/Minus1'
         *  Sum: '<S52>/Minus2'
         */
        if (localB->BitShift_f.y > ((uint8_T)0U)) {
          localDW->torque_ar_integral = ((rtb_Minus_ch - rtb_Fix1_e *
            localC->Power1_kj) * localC->Power_lov + rtb_Fix1_e) * (-1.0);
        } else {
          localDW->torque_ar_integral = (rtb_Minus_ch - rtb_Fix1_e *
            localC->Power1_kj) * localC->Power_lov + rtb_Fix1_e;
        }

        /* End of Switch: '<S52>/Switch' */

        /* Outputs for Atomic SubSystem: '<S53>/Bit Shift' */
        BitShift(rtb_Switch_j_Buffer_4, &localB->BitShift_br);

        /* End of Outputs for SubSystem: '<S53>/Bit Shift' */

        /* Outputs for Atomic SubSystem: '<S53>/Bit Shift1' */
        BitShift1(localB->BitShift_br.y, &localB->BitShift1_k);

        /* End of Outputs for SubSystem: '<S53>/Bit Shift1' */

        /* Sum: '<S53>/Minus' */
        rtb_Minus_ch = rtb_Switch_j_Buffer_4 - localB->BitShift1_k.y;

        /* Product: '<S53>/Divide' */
        rtb_Plus1_b = rtb_Minus_ch / localC->Power1_ds;

        /* Rounding: '<S53>/Fix1' */
        if (rtb_Plus1_b < 0.0) {
          rtb_Fix1_e = ceil(rtb_Plus1_b);
        } else {
          rtb_Fix1_e = floor(rtb_Plus1_b);
        }

        /* End of Rounding: '<S53>/Fix1' */

        /* Switch: '<S53>/Switch' incorporates:
         *  DataStoreWrite: '<S49>/Data Store Write6'
         *  Gain: '<S53>/Gain1'
         *  Product: '<S53>/Multiply'
         *  Product: '<S53>/Multiply1'
         *  Sum: '<S53>/Minus1'
         *  Sum: '<S53>/Minus2'
         */
        if (localB->BitShift_br.y > ((uint8_T)0U)) {
          localDW->speed_integral = ((rtb_Minus_ch - rtb_Fix1_e *
            localC->Power1_ds) * localC->Power_c + rtb_Fix1_e) * (-1.0);
        } else {
          localDW->speed_integral = (rtb_Minus_ch - rtb_Fix1_e *
            localC->Power1_ds) * localC->Power_c + rtb_Fix1_e;
        }

        /* End of Switch: '<S53>/Switch' */

        /* Outputs for Atomic SubSystem: '<S54>/Bit Shift' */
        BitShift(rtb_Switch_j_Buffer_5, &localB->BitShift_b0);

        /* End of Outputs for SubSystem: '<S54>/Bit Shift' */

        /* Outputs for Atomic SubSystem: '<S54>/Bit Shift1' */
        BitShift1(localB->BitShift_b0.y, &localB->BitShift1_nw);

        /* End of Outputs for SubSystem: '<S54>/Bit Shift1' */

        /* Sum: '<S54>/Minus' */
        rtb_Minus_ch = rtb_Switch_j_Buffer_5 - localB->BitShift1_nw.y;

        /* Product: '<S54>/Divide' */
        rtb_Plus1_b = rtb_Minus_ch / localC->Power1_or;

        /* Rounding: '<S54>/Fix1' */
        if (rtb_Plus1_b < 0.0) {
          rtb_Fix1_e = ceil(rtb_Plus1_b);
        } else {
          rtb_Fix1_e = floor(rtb_Plus1_b);
        }

        /* End of Rounding: '<S54>/Fix1' */

        /* Switch: '<S54>/Switch' incorporates:
         *  DataStoreWrite: '<S49>/Data Store Write7'
         *  Gain: '<S54>/Gain1'
         *  Product: '<S54>/Multiply'
         *  Product: '<S54>/Multiply1'
         *  Sum: '<S54>/Minus1'
         *  Sum: '<S54>/Minus2'
         */
        if (localB->BitShift_b0.y > ((uint8_T)0U)) {
          localDW->delta_f_est = ((rtb_Minus_ch - rtb_Fix1_e * localC->Power1_or)
            * localC->Power_au + rtb_Fix1_e) * (-1.0);
        } else {
          localDW->delta_f_est = (rtb_Minus_ch - rtb_Fix1_e * localC->Power1_or)
            * localC->Power_au + rtb_Fix1_e;
        }

        /* End of Switch: '<S54>/Switch' */

        /* Outputs for Atomic SubSystem: '<S55>/Bit Shift' */
        BitShift(rtb_Switch_j_Buffer_6, &localB->BitShift_l);

        /* End of Outputs for SubSystem: '<S55>/Bit Shift' */

        /* Outputs for Atomic SubSystem: '<S55>/Bit Shift1' */
        BitShift1(localB->BitShift_l.y, &localB->BitShift1_h);

        /* End of Outputs for SubSystem: '<S55>/Bit Shift1' */

        /* Sum: '<S55>/Minus' */
        rtb_Minus_ch = rtb_Switch_j_Buffer_6 - localB->BitShift1_h.y;

        /* Product: '<S55>/Divide' */
        rtb_Plus1_b = rtb_Minus_ch / localC->Power1_bc;

        /* Rounding: '<S55>/Fix1' */
        if (rtb_Plus1_b < 0.0) {
          rtb_Fix1_e = ceil(rtb_Plus1_b);
        } else {
          rtb_Fix1_e = floor(rtb_Plus1_b);
        }

        /* End of Rounding: '<S55>/Fix1' */

        /* Switch: '<S55>/Switch' incorporates:
         *  DataStoreWrite: '<S49>/Data Store Write8'
         *  Gain: '<S55>/Gain1'
         *  Product: '<S55>/Multiply'
         *  Product: '<S55>/Multiply1'
         *  Sum: '<S55>/Minus1'
         *  Sum: '<S55>/Minus2'
         */
        if (localB->BitShift_l.y > ((uint8_T)0U)) {
          localDW->delta_a_est = ((rtb_Minus_ch - rtb_Fix1_e * localC->Power1_bc)
            * localC->Power_j + rtb_Fix1_e) * (-1.0);
        } else {
          localDW->delta_a_est = (rtb_Minus_ch - rtb_Fix1_e * localC->Power1_bc)
            * localC->Power_j + rtb_Fix1_e;
        }

        /* End of Switch: '<S55>/Switch' */
      }

      /* End of Outputs for SubSystem: '<S47>/Global Time Initialization Slave' */

      /* Outputs for Enabled SubSystem: '<S47>/Global Time Initialization Master' incorporates:
       *  EnablePort: '<S48>/Enable'
       */
      if (localDW->Initialization_Timeout) {
        /* DataStoreWrite: '<S48>/Data Store Write3' incorporates:
         *  Constant: '<S48>/Board nr1'
         */
        *rtd_Master_ID = 1.0;

        /* DataStoreWrite: '<S48>/Data Store Write' */
        *rtd_Local_Ticks = localC->Cast_i;

        /* DataStoreWrite: '<S48>/Data Store Write1' */
        localDW->basic_cycle_count = localC->Cast1;
      }

      /* End of Outputs for SubSystem: '<S47>/Global Time Initialization Master' */

      /* Switch: '<S47>/Switch2' incorporates:
       *  Constant: '<S47>/Constant1'
       *  DataStoreWrite: '<S47>/Data Store Write'
       *  Switch: '<S47>/Switch1'
       */
      if (rtb_OR1_l) {
        localDW->Role_ID = 2.0;
      } else {
        if (localDW->Initialization_Timeout) {
          /* Switch: '<S47>/Switch1' incorporates:
           *  Constant: '<S47>/Constant'
           *  DataStoreWrite: '<S47>/Data Store Write'
           */
          localDW->Role_ID = 1.0;
        }
      }

      /* End of Switch: '<S47>/Switch2' */

      /* DataStoreWrite: '<S47>/Data Store Write3' incorporates:
       *  Constant: '<S47>/RESET2'
       */
      *rtd_New_Msg_Ready_CAN1 = false;

      /* DataStoreWrite: '<S47>/Data Store Write5' incorporates:
       *  Constant: '<S47>/RESET3'
       */
      *rtd_New_Msg_Ready_CAN2 = false;

      /* DataStoreWrite: '<S47>/Data Store Write4' incorporates:
       *  Constant: '<S47>/RESET'
       */
      localDW->Initialization_Timeout = false;

      /* DataStoreWrite: '<S47>/Data Store Write2' incorporates:
       *  Constant: '<S47>/RESET1'
       */
      localDW->Delay_Counter = 0.0;
      localB->SET = 1.0;
    } else {
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S47>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S39>/RoleID and Global Time init' */

    /* Logic: '<S39>/NOT' incorporates:
     *  Constant: '<S39>/Board nr1'
     *  Constant: '<S47>/SET'
     *  DataStoreRead: '<S39>/Data Store Read1'
     *  DataStoreWrite: '<S39>/Data Store Write1'
     *  Logic: '<S39>/AND'
     *  Logic: '<S39>/OR'
     *  RelationalOperator: '<S39>/Equal'
     */
    localDW->Initialization_flag = (localB->SET == 0.0);

    /* RelationalOperator: '<S46>/GreaterThan' incorporates:
     *  Constant: '<S39>/Constant'
     *  DataStoreRead: '<S46>/Data Store Read1'
     *  DataStoreWrite: '<S39>/Data Store Write'
     */
    localDW->Initialization_Timeout = (localDW->Delay_Counter >= 500.0);

    /* Switch: '<S46>/Switch' incorporates:
     *  Constant: '<S46>/Increment1'
     *  Constant: '<S46>/Reset'
     *  DataStoreRead: '<S46>/Data Store Read'
     *  DataStoreWrite: '<S39>/Data Store Write'
     *  DataStoreWrite: '<S46>/Data Store Write2'
     *  Sum: '<S46>/Add2'
     */
    if (localDW->Initialization_Timeout) {
      localDW->Delay_Counter = (-1.0);
    } else {
      localDW->Delay_Counter += 1.0;
    }

    /* End of Switch: '<S46>/Switch' */
  } else {
    if (localDW->Initialization_MODE) {
      /* Disable for Enabled SubSystem: '<S39>/RoleID and Global Time init' */
      if (localDW->RoleIDandGlobalTimeinit_MODE) {
        /* Disable for Outport: '<S47>/Finish Initialization' */
        localB->SET = 0.0;
        localDW->RoleIDandGlobalTimeinit_MODE = false;
      }

      /* End of Disable for SubSystem: '<S39>/RoleID and Global Time init' */
      localDW->Initialization_MODE = false;
    }
  }

  /* End of DataStoreRead: '<S18>/Data Store Read' */
  /* End of Outputs for SubSystem: '<S18>/Initialization' */

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant5'
   *  Constant: '<S18>/Constant6'
   *  DataStoreRead: '<S18>/Data Store Read9'
   *  RelationalOperator: '<S18>/Equal1'
   */
  if (localDW->basic_cycle_count == 0.0) {
    rtb_Minus_ch = 212.0;
  } else {
    rtb_Minus_ch = 288.0;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Outputs for Enabled SubSystem: '<S18>/Basic Cycle Increment' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* RelationalOperator: '<S18>/Equal' */
  if (*rtd_Local_Ticks == rtb_Minus_ch) {
    /* DataStoreWrite: '<S29>/Data Store Write' incorporates:
     *  Constant: '<S29>/Reset'
     */
    *rtd_Local_Ticks = ((uint16_T)0U);

    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S29>/Increment'
     *  DataStoreRead: '<S29>/Data Store Read4'
     *  DataStoreRead: '<S29>/Data Store Read5'
     *  RelationalOperator: '<S29>/LessThanOrEqual'
     *  Sum: '<S29>/Add'
     */
    if (localDW->basic_cycle_count < localC->Add1) {
      bacic_cycle_s = (uint8_T)((uint32_T)localDW->basic_cycle_count + ((uint8_T)
        1U));
    } else {
      bacic_cycle_s = localC->Cast_e;
    }

    /* End of Switch: '<S29>/Switch' */

    /* DataStoreWrite: '<S29>/Data Store Write3' */
    localDW->basic_cycle_count = bacic_cycle_s;
  }

  /* End of RelationalOperator: '<S18>/Equal' */
  /* End of Outputs for SubSystem: '<S18>/Basic Cycle Increment' */

  /* Outputs for Enabled SubSystem: '<S18>/Matrix Cycle Manager' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  /* Logic: '<S18>/NOT1' incorporates:
   *  Constant: '<S101>/Constant4'
   *  Constant: '<S103>/Constant4'
   *  Constant: '<S105>/Constant4'
   *  Constant: '<S107>/Constant4'
   *  Constant: '<S344>/Constant4'
   *  Constant: '<S41>/Constant1'
   *  Constant: '<S438>/Constant6'
   *  Constant: '<S438>/Constant7'
   *  Constant: '<S440>/Constant22'
   *  Constant: '<S440>/Constant24'
   *  Constant: '<S440>/Constant8'
   *  Constant: '<S441>/Constant22'
   *  Constant: '<S441>/Constant24'
   *  Constant: '<S441>/Constant8'
   *  Constant: '<S442>/Constant'
   *  Constant: '<S468>/Constant6'
   *  Constant: '<S468>/Constant7'
   *  Constant: '<S470>/Constant22'
   *  Constant: '<S470>/Constant24'
   *  Constant: '<S470>/Constant8'
   *  Constant: '<S471>/Constant22'
   *  Constant: '<S471>/Constant24'
   *  Constant: '<S471>/Constant8'
   *  Constant: '<S472>/Constant'
   *  Constant: '<S89>/Constant'
   *  Constant: '<S89>/Constant12'
   *  Constant: '<S89>/Constant14'
   *  Constant: '<S89>/Constant17'
   *  Constant: '<S89>/Constant19'
   *  Constant: '<S89>/Constant2'
   *  Constant: '<S89>/Constant21'
   *  Constant: '<S89>/Constant23'
   *  Constant: '<S89>/Constant25'
   *  Constant: '<S89>/Constant27'
   *  Constant: '<S89>/Constant28'
   *  Constant: '<S89>/Constant3'
   *  Constant: '<S89>/Constant31'
   *  Constant: '<S89>/Constant33'
   *  Constant: '<S89>/Constant6'
   *  Constant: '<S89>/Constant8'
   *  Constant: '<S89>/Constant9'
   *  Constant: '<S90>/Constant'
   *  Constant: '<S90>/Constant12'
   *  Constant: '<S90>/Constant14'
   *  Constant: '<S90>/Constant16'
   *  Constant: '<S90>/Constant21'
   *  Constant: '<S90>/Constant23'
   *  Constant: '<S90>/Constant25'
   *  Constant: '<S90>/Constant27'
   *  Constant: '<S90>/Constant28'
   *  Constant: '<S90>/Constant31'
   *  Constant: '<S90>/Constant33'
   *  Constant: '<S90>/Constant35'
   *  Constant: '<S90>/Constant37'
   *  Constant: '<S90>/Constant38'
   *  Constant: '<S90>/Constant4'
   *  Constant: '<S90>/Constant5'
   *  Constant: '<S90>/Constant6'
   *  Constant: '<S90>/Constant7'
   *  DataStoreRead: '<S101>/Data Store Read1'
   *  DataStoreRead: '<S103>/Data Store Read5'
   *  DataStoreRead: '<S105>/Data Store Read5'
   *  DataStoreRead: '<S107>/Data Store Read5'
   *  DataStoreRead: '<S18>/Data Store Read8'
   *  DataStoreRead: '<S332>/Data Store Read1'
   *  DataStoreRead: '<S332>/Data Store Read2'
   *  DataStoreRead: '<S333>/Data Store Read1'
   *  DataStoreRead: '<S333>/Data Store Read2'
   *  DataStoreRead: '<S334>/Data Store Read1'
   *  DataStoreRead: '<S334>/Data Store Read2'
   *  DataStoreRead: '<S344>/Data Store Read1'
   *  DataStoreRead: '<S41>/Data Store Read10'
   *  DataStoreRead: '<S639>/Data Store Read6'
   *  DataStoreRead: '<S692>/Data Store Read6'
   *  DataStoreRead: '<S764>/Data Store Read'
   *  DataStoreRead: '<S765>/Data Store Read1'
   *  Logic: '<S100>/AND'
   *  Logic: '<S101>/AND'
   *  Logic: '<S103>/AND'
   *  Logic: '<S104>/AND'
   *  Logic: '<S105>/AND'
   *  Logic: '<S106>/AND'
   *  Logic: '<S107>/AND'
   *  Logic: '<S108>/AND'
   *  Logic: '<S332>/AND'
   *  Logic: '<S332>/NOT'
   *  Logic: '<S332>/OR'
   *  Logic: '<S333>/AND'
   *  Logic: '<S333>/NOT'
   *  Logic: '<S333>/OR'
   *  Logic: '<S334>/AND'
   *  Logic: '<S334>/NOT'
   *  Logic: '<S334>/OR'
   *  Logic: '<S337>/AND'
   *  Logic: '<S338>/AND'
   *  Logic: '<S339>/AND'
   *  Logic: '<S340>/AND'
   *  Logic: '<S340>/AND2'
   *  Logic: '<S341>/AND'
   *  Logic: '<S341>/AND2'
   *  Logic: '<S342>/AND'
   *  Logic: '<S343>/AND'
   *  Logic: '<S343>/AND1'
   *  Logic: '<S343>/AND2'
   *  Logic: '<S344>/AND'
   *  Logic: '<S438>/AND'
   *  Logic: '<S438>/AND1'
   *  Logic: '<S468>/AND'
   *  Logic: '<S468>/AND1'
   *  Logic: '<S639>/NOT1'
   *  Logic: '<S666>/NOT2'
   *  Logic: '<S692>/NOT1'
   *  Logic: '<S766>/AND14'
   *  Logic: '<S89>/AND1'
   *  Logic: '<S89>/AND10'
   *  Logic: '<S89>/AND11'
   *  Logic: '<S89>/AND12'
   *  Logic: '<S89>/AND13'
   *  Logic: '<S89>/AND14'
   *  Logic: '<S89>/AND15'
   *  Logic: '<S89>/AND16'
   *  Logic: '<S89>/AND18'
   *  Logic: '<S89>/AND19'
   *  Logic: '<S89>/AND2'
   *  Logic: '<S89>/AND3'
   *  Logic: '<S89>/AND4'
   *  Logic: '<S89>/AND5'
   *  Logic: '<S89>/AND6'
   *  Logic: '<S89>/AND7'
   *  Logic: '<S89>/AND8'
   *  Logic: '<S89>/AND9'
   *  Logic: '<S89>/NOT1'
   *  Logic: '<S90>/AND1'
   *  Logic: '<S90>/AND10'
   *  Logic: '<S90>/AND11'
   *  Logic: '<S90>/AND12'
   *  Logic: '<S90>/AND13'
   *  Logic: '<S90>/AND14'
   *  Logic: '<S90>/AND15'
   *  Logic: '<S90>/AND16'
   *  Logic: '<S90>/AND18'
   *  Logic: '<S90>/AND19'
   *  Logic: '<S90>/AND2'
   *  Logic: '<S90>/AND20'
   *  Logic: '<S90>/AND3'
   *  Logic: '<S90>/AND4'
   *  Logic: '<S90>/AND5'
   *  Logic: '<S90>/AND6'
   *  Logic: '<S90>/AND7'
   *  Logic: '<S90>/AND8'
   *  Logic: '<S90>/AND9'
   *  Logic: '<S90>/NOT2'
   *  Logic: '<S98>/AND'
   *  Math: '<S440>/Mod'
   *  Math: '<S441>/Mod'
   *  Math: '<S470>/Mod'
   *  Math: '<S471>/Mod'
   *  RelationalOperator: '<S101>/Equal'
   *  RelationalOperator: '<S101>/Equal2'
   *  RelationalOperator: '<S102>/Equal'
   *  RelationalOperator: '<S103>/Equal'
   *  RelationalOperator: '<S103>/Equal2'
   *  RelationalOperator: '<S105>/Equal'
   *  RelationalOperator: '<S105>/Equal2'
   *  RelationalOperator: '<S107>/Equal'
   *  RelationalOperator: '<S107>/Equal2'
   *  RelationalOperator: '<S332>/Equal'
   *  RelationalOperator: '<S333>/Equal'
   *  RelationalOperator: '<S334>/Equal'
   *  RelationalOperator: '<S336>/Equal2'
   *  RelationalOperator: '<S340>/Equal1'
   *  RelationalOperator: '<S341>/Equal1'
   *  RelationalOperator: '<S343>/Equal'
   *  RelationalOperator: '<S343>/Equal1'
   *  RelationalOperator: '<S343>/Equal3'
   *  RelationalOperator: '<S344>/Equal'
   *  RelationalOperator: '<S344>/Equal2'
   *  RelationalOperator: '<S408>/Equal16'
   *  RelationalOperator: '<S41>/Equal1'
   *  RelationalOperator: '<S438>/Equal16'
   *  RelationalOperator: '<S438>/GreaterThan2'
   *  RelationalOperator: '<S438>/GreaterThan3'
   *  RelationalOperator: '<S440>/Equal4'
   *  RelationalOperator: '<S441>/Equal4'
   *  RelationalOperator: '<S468>/Equal16'
   *  RelationalOperator: '<S468>/GreaterThan2'
   *  RelationalOperator: '<S468>/GreaterThan3'
   *  RelationalOperator: '<S470>/Equal4'
   *  RelationalOperator: '<S471>/Equal4'
   *  RelationalOperator: '<S89>/GreaterThan10'
   *  RelationalOperator: '<S89>/GreaterThan11'
   *  RelationalOperator: '<S89>/GreaterThan12'
   *  RelationalOperator: '<S89>/GreaterThan13'
   *  RelationalOperator: '<S89>/GreaterThan14'
   *  RelationalOperator: '<S89>/GreaterThan15'
   *  RelationalOperator: '<S89>/GreaterThan16'
   *  RelationalOperator: '<S89>/GreaterThan17'
   *  RelationalOperator: '<S89>/GreaterThan18'
   *  RelationalOperator: '<S89>/GreaterThan19'
   *  RelationalOperator: '<S89>/GreaterThan2'
   *  RelationalOperator: '<S89>/GreaterThan20'
   *  RelationalOperator: '<S89>/GreaterThan21'
   *  RelationalOperator: '<S89>/GreaterThan22'
   *  RelationalOperator: '<S89>/GreaterThan23'
   *  RelationalOperator: '<S89>/GreaterThan24'
   *  RelationalOperator: '<S89>/GreaterThan25'
   *  RelationalOperator: '<S89>/GreaterThan26'
   *  RelationalOperator: '<S89>/GreaterThan27'
   *  RelationalOperator: '<S89>/GreaterThan28'
   *  RelationalOperator: '<S89>/GreaterThan29'
   *  RelationalOperator: '<S89>/GreaterThan3'
   *  RelationalOperator: '<S89>/GreaterThan30'
   *  RelationalOperator: '<S89>/GreaterThan31'
   *  RelationalOperator: '<S89>/GreaterThan32'
   *  RelationalOperator: '<S89>/GreaterThan33'
   *  RelationalOperator: '<S89>/GreaterThan4'
   *  RelationalOperator: '<S89>/GreaterThan5'
   *  RelationalOperator: '<S89>/GreaterThan6'
   *  RelationalOperator: '<S89>/GreaterThan7'
   *  RelationalOperator: '<S89>/GreaterThan8'
   *  RelationalOperator: '<S89>/GreaterThan9'
   *  RelationalOperator: '<S90>/GreaterThan10'
   *  RelationalOperator: '<S90>/GreaterThan11'
   *  RelationalOperator: '<S90>/GreaterThan12'
   *  RelationalOperator: '<S90>/GreaterThan13'
   *  RelationalOperator: '<S90>/GreaterThan14'
   *  RelationalOperator: '<S90>/GreaterThan15'
   *  RelationalOperator: '<S90>/GreaterThan16'
   *  RelationalOperator: '<S90>/GreaterThan17'
   *  RelationalOperator: '<S90>/GreaterThan18'
   *  RelationalOperator: '<S90>/GreaterThan19'
   *  RelationalOperator: '<S90>/GreaterThan2'
   *  RelationalOperator: '<S90>/GreaterThan20'
   *  RelationalOperator: '<S90>/GreaterThan21'
   *  RelationalOperator: '<S90>/GreaterThan22'
   *  RelationalOperator: '<S90>/GreaterThan23'
   *  RelationalOperator: '<S90>/GreaterThan24'
   *  RelationalOperator: '<S90>/GreaterThan25'
   *  RelationalOperator: '<S90>/GreaterThan26'
   *  RelationalOperator: '<S90>/GreaterThan27'
   *  RelationalOperator: '<S90>/GreaterThan28'
   *  RelationalOperator: '<S90>/GreaterThan29'
   *  RelationalOperator: '<S90>/GreaterThan3'
   *  RelationalOperator: '<S90>/GreaterThan30'
   *  RelationalOperator: '<S90>/GreaterThan31'
   *  RelationalOperator: '<S90>/GreaterThan32'
   *  RelationalOperator: '<S90>/GreaterThan33'
   *  RelationalOperator: '<S90>/GreaterThan34'
   *  RelationalOperator: '<S90>/GreaterThan35'
   *  RelationalOperator: '<S90>/GreaterThan4'
   *  RelationalOperator: '<S90>/GreaterThan5'
   *  RelationalOperator: '<S90>/GreaterThan6'
   *  RelationalOperator: '<S90>/GreaterThan7'
   *  RelationalOperator: '<S90>/GreaterThan8'
   *  RelationalOperator: '<S90>/GreaterThan9'
   *  RelationalOperator: '<S96>/Equal'
   *  RelationalOperator: '<S97>/Equal'
   *  RelationalOperator: '<S98>/Equal2'
   *  RelationalOperator: '<S99>/Equal2'
   *  Sum: '<S440>/Minus'
   *  Sum: '<S441>/Minus'
   *  Sum: '<S470>/Minus'
   *  Sum: '<S471>/Minus'
   */
  if (!localDW->Initialization_flag) {
    if (!localDW->MatrixCycleManager_MODE) {
      localDW->MatrixCycleManager_MODE = true;
    }

    /* RelationalOperator: '<S41>/Equal' incorporates:
     *  Constant: '<S41>/Constant'
     *  DataStoreRead: '<S41>/Data Store Read10'
     */
    rtb_OR1_l = (localDW->basic_cycle_count == 0.0);

    /* Outputs for Enabled SubSystem: '<S41>/controller basic cycle 0' incorporates:
     *  EnablePort: '<S89>/Enable'
     */
    if (rtb_OR1_l) {
      if (!localDW->controllerbasiccycle0_MODE) {
        localDW->controllerbasiccycle0_MODE = true;
      }

      /* DataStoreRead: '<S89>/Data Store Read8' */
      rtb_DataStoreRead8_o5 = *rtd_Local_Ticks;

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Check Timeouts' incorporates:
       *  EnablePort: '<S96>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S96>/Timeout and Board error counter' incorporates:
       *  EnablePort: '<S196>/Enable'
       */
      if ((*rtd_Local_Ticks >= 196.0) && (*rtd_Local_Ticks < localC->Sum14_h) &&
          (*rtd_Local_Ticks == 196.0)) {
        /* Logic: '<S196>/AND' incorporates:
         *  Constant: '<S196>/Constant'
         *  DataStoreRead: '<S196>/Data Store Read1'
         *  Logic: '<S196>/NOT'
         *  RelationalOperator: '<S196>/Equal'
         */
        rtb_Equal_e2 = ((1.0 != *rtd_Board_ID) && (!localDW->BC0_Vote1_processed));

        /* Switch: '<S196>/Switch2' incorporates:
         *  Constant: '<S196>/Constant6'
         *  DataStoreRead: '<S196>/Data Store Read5'
         *  DataStoreWrite: '<S196>/Data Store Write1'
         *  Sum: '<S196>/Plus'
         */
        if (rtb_Equal_e2) {
          localDW->Board1_error_counter += 1.0;
        }

        /* End of Switch: '<S196>/Switch2' */

        /* Logic: '<S196>/AND1' incorporates:
         *  Constant: '<S196>/Constant3'
         *  DataStoreRead: '<S196>/Data Store Read2'
         *  Logic: '<S196>/NOT1'
         *  RelationalOperator: '<S196>/Equal1'
         */
        rtb_AND1_g0 = ((2.0 != *rtd_Board_ID) && (!localDW->BC0_Vote2_processed));

        /* Switch: '<S196>/Switch1' incorporates:
         *  Constant: '<S196>/Constant1'
         *  DataStoreRead: '<S196>/Data Store Read6'
         *  DataStoreWrite: '<S196>/Data Store Write2'
         *  Sum: '<S196>/Plus1'
         */
        if (rtb_AND1_g0) {
          localDW->Board2_error_counter += 1.0;
        }

        /* End of Switch: '<S196>/Switch1' */

        /* Logic: '<S196>/AND2' incorporates:
         *  Constant: '<S196>/Constant4'
         *  DataStoreRead: '<S196>/Data Store Read3'
         *  Logic: '<S196>/NOT2'
         *  RelationalOperator: '<S196>/Equal2'
         */
        rtb_AND2_n = ((3.0 != *rtd_Board_ID) && (!localDW->BC0_Vote3_processed));

        /* Switch: '<S196>/Switch3' incorporates:
         *  Constant: '<S196>/Constant2'
         *  DataStoreRead: '<S196>/Data Store Read8'
         *  DataStoreWrite: '<S196>/Data Store Write3'
         *  Sum: '<S196>/Plus2'
         */
        if (rtb_AND2_n) {
          localDW->Board3_error_counter += 1.0;
        }

        /* End of Switch: '<S196>/Switch3' */

        /* Logic: '<S196>/NOT3' incorporates:
         *  DataStoreRead: '<S196>/Data Store Read13'
         */
        rtb_AND6_f = !localDW->BC0_Sync_processed;

        /* Logic: '<S196>/AND8' incorporates:
         *  Constant: '<S196>/Constant10'
         *  Constant: '<S196>/Constant9'
         *  Logic: '<S196>/AND5'
         *  Logic: '<S196>/NOT3'
         *  RelationalOperator: '<S196>/Equal5'
         *  RelationalOperator: '<S196>/Equal6'
         */
        rtb_AND8_k = (rtb_AND6_f && ((*rtd_Master_ID == 3.0) && (3.0 !=
          *rtd_Board_ID)));

        /* Switch: '<S196>/Switch4' incorporates:
         *  Constant: '<S196>/Constant13'
         *  DataStoreRead: '<S196>/Data Store Read18'
         *  DataStoreWrite: '<S196>/Data Store Write5'
         *  Sum: '<S196>/Plus3'
         */
        if (rtb_AND8_k) {
          localDW->Board3_error_counter += 1.0;
        }

        /* End of Switch: '<S196>/Switch4' */

        /* Logic: '<S196>/AND7' incorporates:
         *  Constant: '<S196>/Constant11'
         *  Constant: '<S196>/Constant8'
         *  Logic: '<S196>/AND4'
         *  Logic: '<S196>/NOT3'
         *  RelationalOperator: '<S196>/Equal4'
         *  RelationalOperator: '<S196>/Equal7'
         */
        rtb_AND7_m = (rtb_AND6_f && ((*rtd_Master_ID == 2.0) && (2.0 !=
          *rtd_Board_ID)));

        /* Switch: '<S196>/Switch5' incorporates:
         *  Constant: '<S196>/Constant14'
         *  DataStoreRead: '<S196>/Data Store Read20'
         *  DataStoreWrite: '<S196>/Data Store Write6'
         *  Sum: '<S196>/Plus4'
         */
        if (rtb_AND7_m) {
          localDW->Board2_error_counter += 1.0;
        }

        /* End of Switch: '<S196>/Switch5' */

        /* Logic: '<S196>/AND6' incorporates:
         *  Constant: '<S196>/Constant12'
         *  Constant: '<S196>/Constant7'
         *  Logic: '<S196>/AND3'
         *  Logic: '<S196>/NOT3'
         *  RelationalOperator: '<S196>/Equal3'
         *  RelationalOperator: '<S196>/Equal8'
         */
        rtb_AND6_f = (rtb_AND6_f && ((*rtd_Master_ID == 1.0) && (1.0 !=
          *rtd_Board_ID)));

        /* Switch: '<S196>/Switch6' incorporates:
         *  Constant: '<S196>/Constant15'
         *  DataStoreRead: '<S196>/Data Store Read22'
         *  DataStoreWrite: '<S196>/Data Store Write7'
         *  Sum: '<S196>/Plus5'
         */
        if (rtb_AND6_f) {
          localDW->Board1_error_counter += 1.0;
        }

        /* End of Switch: '<S196>/Switch6' */

        /* Logic: '<S196>/OR' incorporates:
         *  DataStoreWrite: '<S196>/Data Store Write8'
         */
        localDW->Toggle_Pin_A1 = (rtb_Equal_e2 || rtb_AND1_g0 || rtb_AND2_n ||
          rtb_AND6_f || rtb_AND7_m || rtb_AND8_k);

        /* Switch: '<S197>/Switch' incorporates:
         *  Constant: '<S197>/Constant'
         *  DataStoreRead: '<S197>/Data Store Read'
         *  DataStoreRead: '<S197>/Data Store Read1'
         *  Sum: '<S197>/Plus'
         */
        if (rtb_Equal_e2) {
          TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter + 1.0;
        } else {
          TM1_timeout_counter_s = localDW->BC0_TM1_timeout_counter;
        }

        /* End of Switch: '<S197>/Switch' */

        /* DataStoreWrite: '<S197>/Data Store Write' */
        localDW->BC0_TM1_timeout_counter = TM1_timeout_counter_s;

        /* Switch: '<S198>/Switch' incorporates:
         *  Constant: '<S198>/Constant'
         *  DataStoreRead: '<S198>/Data Store Read'
         *  DataStoreRead: '<S198>/Data Store Read1'
         *  Sum: '<S198>/Plus'
         */
        if (rtb_AND1_g0) {
          TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter + 1.0;
        } else {
          TM2_timeout_counter_s = localDW->BC0_TM2_timeout_counter;
        }

        /* End of Switch: '<S198>/Switch' */

        /* DataStoreWrite: '<S198>/Data Store Write' */
        localDW->BC0_TM2_timeout_counter = TM2_timeout_counter_s;

        /* Switch: '<S199>/Switch' incorporates:
         *  Constant: '<S199>/Constant'
         *  DataStoreRead: '<S199>/Data Store Read'
         *  DataStoreRead: '<S199>/Data Store Read1'
         *  Sum: '<S199>/Plus'
         */
        if (rtb_AND2_n) {
          TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter + 1.0;
        } else {
          TM3_timeout_counter_s = localDW->BC0_TM3_timeout_counter;
        }

        /* End of Switch: '<S199>/Switch' */

        /* DataStoreWrite: '<S199>/Data Store Write' */
        localDW->BC0_TM3_timeout_counter = TM3_timeout_counter_s;

        /* DataStoreWrite: '<S196>/Data Store Write4' incorporates:
         *  Constant: '<S196>/Constant5'
         */
        *rtd_Toggle_Pin_A0 = true;
      }

      /* End of Outputs for SubSystem: '<S96>/Timeout and Board error counter' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - Check Timeouts' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - New Master' incorporates:
       *  EnablePort: '<S97>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S97>/New Master' incorporates:
       *  EnablePort: '<S200>/Enable'
       */
      if ((*rtd_Local_Ticks >= 200.0) && (*rtd_Local_Ticks < localC->Sum15_j) &&
          (*rtd_Local_Ticks == 200.0)) {
        /* MinMax: '<S201>/Max1' incorporates:
         *  DataStoreRead: '<S201>/Data Store Read25'
         */
        if (localDW->Votes_count.First_Board > localDW->Votes_count.Second_Board)
        {
          rtb_Fix1_e = localDW->Votes_count.First_Board;
        } else {
          rtb_Fix1_e = localDW->Votes_count.Second_Board;
        }

        if (rtb_Fix1_e <= localDW->Votes_count.Third_Board) {
          rtb_Fix1_e = localDW->Votes_count.Third_Board;
        }

        /* RelationalOperator: '<S201>/Equal' incorporates:
         *  Constant: '<S201>/Constant'
         *  DataStoreWrite: '<S200>/Data Store Write'
         *  MinMax: '<S201>/Max1'
         */
        localDW->Reset_Board = (0.0 == rtb_Fix1_e);

        /* Sum: '<S201>/Plus' incorporates:
         *  Constant: '<S201>/Constant15'
         *  DataStoreRead: '<S201>/Data Store Read25'
         *  DataStoreRead: '<S201>/Data Store Read29'
         *  RelationalOperator: '<S201>/Equal17'
         */
        rtb_Minus_ch = (real_T)(1.0 == localDW->Own_Vote) +
          localDW->Votes_count.First_Board;

        /* Sum: '<S201>/Plus1' incorporates:
         *  Constant: '<S201>/Constant16'
         *  DataStoreRead: '<S201>/Data Store Read25'
         *  DataStoreRead: '<S201>/Data Store Read29'
         *  RelationalOperator: '<S201>/Equal18'
         */
        rtb_Plus1_b = (real_T)(2.0 == localDW->Own_Vote) +
          localDW->Votes_count.Second_Board;

        /* Sum: '<S201>/Plus2' incorporates:
         *  Constant: '<S201>/Constant17'
         *  DataStoreRead: '<S201>/Data Store Read25'
         *  DataStoreRead: '<S201>/Data Store Read29'
         *  RelationalOperator: '<S201>/Equal19'
         */
        rtb_Plus2_p = (real_T)(3.0 == localDW->Own_Vote) +
          localDW->Votes_count.Third_Board;

        /* MinMax: '<S201>/Max' */
        if (rtb_Minus_ch > rtb_Plus1_b) {
          rtb_Fix1_e = rtb_Minus_ch;
        } else {
          rtb_Fix1_e = rtb_Plus1_b;
        }

        if (rtb_Fix1_e <= rtb_Plus2_p) {
          rtb_Fix1_e = rtb_Plus2_p;
        }

        /* Find: '<S201>/Find Nonzero Elements' incorporates:
         *  Constant: '<S202>/Constant'
         *  MinMax: '<S201>/Max'
         *  RelationalOperator: '<S202>/Compare'
         *  Sum: '<S201>/Subtract'
         */
        sigIdx = 0;
        if (rtb_Minus_ch - rtb_Fix1_e == 0.0) {
          rtb_FindNonzeroElements[0] = 0;
          sigIdx = 1;
        }

        if (rtb_Plus1_b - rtb_Fix1_e == 0.0) {
          rtb_FindNonzeroElements[sigIdx] = 1;
          sigIdx++;
        }

        if (rtb_Plus2_p - rtb_Fix1_e == 0.0) {
          rtb_FindNonzeroElements[sigIdx] = 2;
          sigIdx++;
        }

        localDW->FindNonzeroElements_DIMS1 = sigIdx;

        /* End of Find: '<S201>/Find Nonzero Elements' */

        /* MinMax: '<S201>/Min' */
        linIx = rtb_FindNonzeroElements[0];
        for (sigIdx = 1; sigIdx < localDW->FindNonzeroElements_DIMS1; sigIdx++)
        {
          if (linIx >= rtb_FindNonzeroElements[sigIdx]) {
            linIx = rtb_FindNonzeroElements[sigIdx];
          }
        }

        /* Sum: '<S201>/Minus' incorporates:
         *  Constant: '<S201>/Index Corrector'
         *  MinMax: '<S201>/Min'
         */
        rtb_Fix1_e = (real_T)linIx + 1.0;

        /* DataStoreWrite: '<S200>/Data Store Write13' */
        *rtd_Master_ID = rtb_Fix1_e;

        /* Switch: '<S200>/Switch16' incorporates:
         *  Constant: '<S200>/Constant10'
         *  Constant: '<S200>/Constant9'
         *  DataStoreWrite: '<S200>/Data Store Write15'
         *  RelationalOperator: '<S200>/Equal6'
         */
        if (rtb_Fix1_e == *rtd_Board_ID) {
          localDW->Role_ID = 1.0;
        } else {
          localDW->Role_ID = 2.0;
        }

        /* End of Switch: '<S200>/Switch16' */

        /* DataStoreWrite: '<S200>/Data Store Write3' incorporates:
         *  Constant: '<S200>/Constant3'
         */
        *rtd_Toggle_Pin_A0 = true;
      }

      /* End of Outputs for SubSystem: '<S97>/New Master' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - New Master' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Reset Board' incorporates:
       *  EnablePort: '<S98>/Enable'
       */
      if ((*rtd_Local_Ticks >= 208.0) && (*rtd_Local_Ticks < localC->Sum17_a)) {
        /* DataStoreRead: '<S98>/Data Store Read' */
        reset_s = localDW->Reset_Board;

        /* Outputs for Enabled SubSystem: '<S98>/RESET Board - Return to initialization' incorporates:
         *  EnablePort: '<S203>/Enable'
         */
        if ((*rtd_Local_Ticks == 208.0) && reset_s) {
          /* DataStoreWrite: '<S203>/Data Store Write' */
          localDW->Reset_Board = localC->Cast_p;

          /* DataStoreWrite: '<S203>/Data Store Write1' */
          *rtd_New_Msg_Ready_CAN1 = localC->Cast_p;

          /* DataStoreWrite: '<S203>/Data Store Write10' */
          *rtd_New_Msg_Ready_CAN2 = localC->Cast_p;

          /* DataStoreWrite: '<S203>/Data Store Write2' */
          localDW->Initialization_flag = localC->NOT;

          /* DataStoreWrite: '<S203>/Data Store Write4' incorporates:
           *  Constant: '<S203>/Constant'
           */
          localDW->Role_ID = 0.0;

          /* DataStoreWrite: '<S203>/Data Store Write5' incorporates:
           *  Constant: '<S203>/Constant'
           */
          *rtd_Master_ID = 0.0;

          /* DataStoreWrite: '<S203>/Data Store Write6' */
          *rtd_Rx_State_CAN1 = localC->Cast6;

          /* DataStoreWrite: '<S203>/Data Store Write9' */
          *rtd_Rx_State_CAN2 = localC->Cast6;

          /* DataStoreWrite: '<S203>/Data Store Write3' incorporates:
           *  Constant: '<S203>/Constant1'
           */
          *rtd_RxID_CAN1 = 1U;

          /* DataStoreWrite: '<S203>/Data Store Write8' incorporates:
           *  Constant: '<S203>/Constant1'
           */
          *rtd_RxID_CAN2 = 1U;

          /* DataStoreWrite: '<S203>/Data Store Write7' incorporates:
           *  Constant: '<S203>/Constant3'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S98>/RESET Board - Return to initialization' */
      }

      /* End of Outputs for SubSystem: '<S89>/COMP Task - Reset Board' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Reset Variables BC0' incorporates:
       *  EnablePort: '<S99>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S99>/Reset variables' incorporates:
       *  EnablePort: '<S204>/Enable'
       */
      if ((*rtd_Local_Ticks >= 204.0) && (*rtd_Local_Ticks < localC->Sum16_h) &&
          (*rtd_Local_Ticks == 204.0)) {
        /* DataStoreWrite: '<S204>/Data Store Write1' */
        localDW->BC0_Sync_processed = localC->Cast_h;

        /* DataStoreWrite: '<S204>/Data Store Write16' incorporates:
         *  Constant: '<S204>/Constant'
         */
        localDW->Votes_count.First_Board = 0.0;
        localDW->Votes_count.Second_Board = 0.0;
        localDW->Votes_count.Third_Board = 0.0;

        /* DataStoreWrite: '<S204>/Data Store Write2' */
        localDW->BC0_Vote1_processed = localC->Cast_h;

        /* DataStoreWrite: '<S204>/Data Store Write3' */
        localDW->BC0_Vote2_processed = localC->Cast_h;

        /* DataStoreWrite: '<S204>/Data Store Write4' */
        localDW->BC0_Vote3_processed = localC->Cast_h;

        /* DataStoreWrite: '<S204>/Data Store Write5' incorporates:
         *  Constant: '<S204>/Constant3'
         */
        *rtd_Toggle_Pin_A0 = true;
      }

      /* End of Outputs for SubSystem: '<S99>/Reset variables' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - Reset Variables BC0' */

      /* Logic: '<S89>/NOT1' incorporates:
       *  Constant: '<S89>/Constant12'
       *  Constant: '<S89>/Constant14'
       *  Constant: '<S89>/Constant25'
       *  Constant: '<S89>/Constant31'
       *  DataStoreRead: '<S89>/Data Store Read6'
       *  Logic: '<S89>/AND13'
       *  Logic: '<S89>/AND14'
       *  Logic: '<S89>/AND15'
       *  Logic: '<S89>/AND16'
       *  Logic: '<S89>/NOT3'
       *  Logic: '<S98>/AND'
       *  RelationalOperator: '<S89>/GreaterThan26'
       *  RelationalOperator: '<S89>/GreaterThan27'
       *  RelationalOperator: '<S89>/GreaterThan28'
       *  RelationalOperator: '<S89>/GreaterThan29'
       *  RelationalOperator: '<S89>/GreaterThan30'
       *  RelationalOperator: '<S89>/GreaterThan31'
       *  RelationalOperator: '<S89>/GreaterThan32'
       *  RelationalOperator: '<S89>/GreaterThan33'
       *  RelationalOperator: '<S96>/Equal'
       *  RelationalOperator: '<S97>/Equal'
       *  RelationalOperator: '<S98>/Equal2'
       *  RelationalOperator: '<S99>/Equal2'
       */
      rtb_AND2_n = !localDW->BC0_Sync_processed;

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Sync bc0 check' incorporates:
       *  EnablePort: '<S100>/Enable'
       */
      if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1_j) &&
          rtb_AND2_n) {
        if (!localDW->COMPTaskSyncbc0check_MODE) {
          localDW->COMPTaskSyncbc0check_MODE = true;
        }

        /* RelationalOperator: '<S100>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 40.0);

        /* RelationalOperator: '<S100>/Equal5' incorporates:
         *  Constant: '<S100>/Constant26'
         *  DataStoreRead: '<S100>/Data Store Read6'
         */
        rtb_AND1_g0 = (localDW->Role_ID == 2.0);

        /* Outputs for Enabled SubSystem: '<S100>/Process_Messages' incorporates:
         *  EnablePort: '<S205>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_ek) {
            localDW->Process_Messages_MODE_ek = true;
          }

          /* Outputs for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S207>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_f) {
              localDW->DemuxmessageCAN1andcheckcoher_f = true;
            }

            /* Outputs for Atomic SubSystem: '<S209>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_f);

            /* End of Outputs for SubSystem: '<S209>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S209>/Bit Shift1' */
            /* MATLAB Function: '<S212>/bit_shift' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S217>:1' */
            /* '<S217>:1:8' */
            Rx_mc_sync0_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_f.y >> 5);

            /* End of Outputs for SubSystem: '<S209>/Bit Shift1' */

            /* Switch: '<S210>/Switch' incorporates:
             *  Constant: '<S210>/Constant'
             *  Constant: '<S210>/Constant1'
             *  DataStoreRead: '<S210>/Data Store Read1'
             *  DataStoreWrite: '<S210>/Data Store Write'
             *  RelationalOperator: '<S210>/GreaterThan'
             *  Sum: '<S210>/Plus'
             */
            if (Rx_mc_sync0_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S210>/Switch' */

            /* Outputs for Atomic SubSystem: '<S209>/Bit Shift' */
            /* MATLAB Function: '<S211>/bit_shift' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S216>:1' */
            /* '<S216>:1:8' */
            Rx_bc_sync0_CAN1 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN1->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S209>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S209>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_c);

            /* End of Outputs for SubSystem: '<S209>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S209>/Bit Shift2' */
            /* MATLAB Function: '<S213>/bit_shift' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S218>:1' */
            /* '<S218>:1:8' */
            Rx_id_sync0_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_c.y >> 4);

            /* End of Outputs for SubSystem: '<S209>/Bit Shift2' */

            /* Logic: '<S207>/AND' incorporates:
             *  Constant: '<S100>/Constant'
             *  RelationalOperator: '<S207>/Equal'
             *  RelationalOperator: '<S207>/Equal1'
             */
            localB->AND_e = ((Rx_bc_sync0_CAN1 == 0.0) && (Rx_id_sync0_CAN1 ==
              *rtd_Master_ID));

            /* SignalConversion: '<S207>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            localB->Buffer_2_c = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S207>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            localB->Buffer_3_j = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S207>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            localB->Buffer_4_g4 = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S207>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            localB->Buffer_5_i = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S207>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            localB->Buffer_6_dg = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S207>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            localB->Buffer_7_hu = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S207>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read'
             */
            localB->Buffer_8_e = rtd_Msg_Rx_CAN1->Buffer_8;
            localB->Constant_fi = ((uint8_T)0U);
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_f) {
              /* Disable for Outport: '<S207>/CAN1_msg_coherent' */
              localB->AND_e = false;
              localDW->DemuxmessageCAN1andcheckcoher_f = false;
            }
          }

          /* End of Outputs for SubSystem: '<S205>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S208>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcohe_me) {
              localDW->DemuxmessageCAN1andcheckcohe_me = true;
            }

            /* Outputs for Atomic SubSystem: '<S221>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_p);

            /* End of Outputs for SubSystem: '<S221>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S221>/Bit Shift1' */
            /* MATLAB Function: '<S224>/bit_shift' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S229>:1' */
            /* '<S229>:1:8' */
            Rx_mc_sync0_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_p.y >> 5);

            /* End of Outputs for SubSystem: '<S221>/Bit Shift1' */

            /* Switch: '<S222>/Switch' incorporates:
             *  Constant: '<S222>/Constant'
             *  Constant: '<S222>/Constant1'
             *  DataStoreRead: '<S222>/Data Store Read1'
             *  DataStoreWrite: '<S222>/Data Store Write'
             *  RelationalOperator: '<S222>/GreaterThan'
             *  Sum: '<S222>/Plus'
             */
            if (Rx_mc_sync0_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S222>/Switch' */

            /* Outputs for Atomic SubSystem: '<S221>/Bit Shift' */
            /* MATLAB Function: '<S223>/bit_shift' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S228>:1' */
            /* '<S228>:1:8' */
            Rx_bc_sync0_CAN2 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN2->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S221>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S221>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_h);

            /* End of Outputs for SubSystem: '<S221>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S221>/Bit Shift2' */
            /* MATLAB Function: '<S225>/bit_shift' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S230>:1' */
            /* '<S230>:1:8' */
            Rx_id_sync0_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_h.y >> 4);

            /* End of Outputs for SubSystem: '<S221>/Bit Shift2' */

            /* Logic: '<S208>/AND' incorporates:
             *  Constant: '<S100>/Constant'
             *  RelationalOperator: '<S208>/Equal'
             *  RelationalOperator: '<S208>/Equal1'
             */
            localB->AND_b = ((Rx_bc_sync0_CAN2 == 0.0) && (Rx_id_sync0_CAN2 ==
              *rtd_Master_ID));

            /* SignalConversion: '<S208>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            localB->Buffer_2_h = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S208>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            localB->Buffer_3_ph = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S208>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            localB->Buffer_4_g = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S208>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            localB->Buffer_5_f = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S208>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            localB->Buffer_6_e = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S208>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            localB->Buffer_7_l = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S208>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S100>/Data Store Read3'
             */
            localB->Buffer_8_h = rtd_Msg_Rx_CAN2->Buffer_8;
            localB->Constant_hl = ((uint8_T)0U);
          } else {
            if (localDW->DemuxmessageCAN1andcheckcohe_me) {
              /* Disable for Outport: '<S208>/CAN2_msg_coherent' */
              localB->AND_b = false;
              localDW->DemuxmessageCAN1andcheckcohe_me = false;
            }
          }

          /* End of Outputs for SubSystem: '<S205>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S205>/Switch' incorporates:
           *  Constant: '<S207>/Constant'
           *  Constant: '<S208>/Constant'
           *  DataStoreRead: '<S100>/Data Store Read'
           *  DataStoreRead: '<S100>/Data Store Read3'
           *  DataStoreWrite: '<S205>/Data Store Write'
           */
          if (localB->AND_e) {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_fi;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_c;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_j;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_g4;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_i;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_dg;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_hu;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_e;
          } else {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_hl;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_h;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_ph;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_g;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_f;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_e;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_l;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_h;
          }

          /* End of Switch: '<S205>/Switch' */

          /* Switch: '<S205>/Switch1' incorporates:
           *  Constant: '<S205>/Constant'
           *  Constant: '<S205>/Constant1'
           *  Constant: '<S205>/delay_estimation_1'
           *  Constant: '<S205>/delay_estimation_2'
           *  Constant: '<S89>/Constant'
           *  Product: '<S205>/Multiply'
           *  Product: '<S205>/Multiply1'
           *  Sum: '<S205>/Minus'
           *  Sum: '<S205>/Minus1'
           *  Sum: '<S205>/Sum'
           *  Sum: '<S205>/Sum1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_Sync_bc0_s = ((5.0 * (real_T)Rx_mc_sync0_CAN1 + 0.0) + 1.0) -
              (real_T)*rtd_Msg_Rx_Ticks_CAN1;
          } else {
            Desync_Sync_bc0_s = ((8.0 * (real_T)Rx_mc_sync0_CAN2 + 0.0) + 1.0) -
              (real_T)*rtd_Msg_Rx_Ticks_CAN2;
          }

          /* End of Switch: '<S205>/Switch1' */

          /* DataStoreWrite: '<S205>/Data Store Write1' */
          localDW->Desync_Ticks = Desync_Sync_bc0_s;

          /* Logic: '<S205>/OR' incorporates:
           *  DataStoreWrite: '<S205>/Data Store Write2'
           */
          localDW->new_msg_Rx_l = (localB->AND_e || localB->AND_b);

          /* DataStoreWrite: '<S205>/Data Store Write3' incorporates:
           *  Constant: '<S205>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;
        } else {
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f) {
              /* Disable for Outport: '<S207>/CAN1_msg_coherent' */
              localB->AND_e = false;
              localDW->DemuxmessageCAN1andcheckcoher_f = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_me) {
              /* Disable for Outport: '<S208>/CAN2_msg_coherent' */
              localB->AND_b = false;
              localDW->DemuxmessageCAN1andcheckcohe_me = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }
        }

        /* End of Outputs for SubSystem: '<S100>/Process_Messages' */

        /* Logic: '<S100>/AND1' incorporates:
         *  Logic: '<S100>/AND'
         *  Logic: '<S100>/NOT'
         */
        rtb_AND1_pd = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S100>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_pd, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S100>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S100>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f) {
              /* Disable for Outport: '<S207>/CAN1_msg_coherent' */
              localB->AND_e = false;
              localDW->DemuxmessageCAN1andcheckcoher_f = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_me) {
              /* Disable for Outport: '<S208>/CAN2_msg_coherent' */
              localB->AND_b = false;
              localDW->DemuxmessageCAN1andcheckcohe_me = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S100>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S89>/COMP Task - Sync bc0 check' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Update LT' incorporates:
       *  EnablePort: '<S101>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S101>/Local Time Update' incorporates:
       *  EnablePort: '<S233>/Enable'
       */
      if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2_n) &&
          rtb_AND2_n && ((*rtd_Local_Ticks == 44.0) && (localDW->Role_ID == 2.0)))
      {
        /* RelationalOperator: '<S233>/GreaterThan' incorporates:
         *  Constant: '<S233>/Constant4'
         *  DataStoreRead: '<S233>/Data Store Read1'
         *  DataStoreWrite: '<S233>/Data Store Write'
         */
        localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

        /* Logic: '<S233>/NOT' incorporates:
         *  DataStoreWrite: '<S233>/Data Store Write'
         */
        rtb_NOT_g = !localDW->Desync_Positive;

        /* Outputs for Enabled SubSystem: '<S233>/Desync_Negative' */
        Desync_Negative(rtb_NOT_g, 44.0, &localDW->Desync_Ticks, rtd_Local_Ticks);

        /* End of Outputs for SubSystem: '<S233>/Desync_Negative' */

        /* DataStoreWrite: '<S233>/Data Store Write13' incorporates:
         *  Constant: '<S233>/Constant3'
         */
        localDW->BC0_Sync_processed = true;

        /* DataStoreWrite: '<S233>/Data Store Write3' incorporates:
         *  Constant: '<S233>/Constant1'
         */
        *rtd_Toggle_Pin_A0 = true;
      }

      /* End of Outputs for SubSystem: '<S101>/Local Time Update' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - Update LT' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Vote Decision' incorporates:
       *  EnablePort: '<S102>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S102>/Vote Decision' incorporates:
       *  EnablePort: '<S235>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 48.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum3_h) && (*rtd_Local_Ticks == 48.0)) {
        /* Switch: '<S236>/Switch' incorporates:
         *  Constant: '<S235>/Constant'
         *  Constant: '<S236>/MAX error count'
         *  DataStoreRead: '<S235>/Data Store Read'
         *  DataStoreRead: '<S235>/Data Store Read1'
         *  Logic: '<S236>/AND'
         *  Logic: '<S236>/NOT'
         *  Logic: '<S236>/OR'
         *  RelationalOperator: '<S236>/Equal1'
         *  RelationalOperator: '<S236>/Equal2'
         */
        if ((1.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 1.0) &&
             (!localDW->BC0_Sync_processed))) {
          rtb_Fix1_e = 4294967295U;
        } else {
          rtb_Fix1_e = localDW->Board1_error_counter;
        }

        /* End of Switch: '<S236>/Switch' */

        /* Switch: '<S237>/Switch' incorporates:
         *  Constant: '<S235>/Constant1'
         *  Constant: '<S237>/MAX error count'
         *  DataStoreRead: '<S235>/Data Store Read'
         *  DataStoreRead: '<S235>/Data Store Read2'
         *  Logic: '<S237>/AND'
         *  Logic: '<S237>/NOT'
         *  Logic: '<S237>/OR'
         *  RelationalOperator: '<S237>/Equal1'
         *  RelationalOperator: '<S237>/Equal2'
         */
        if ((2.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 2.0) &&
             (!localDW->BC0_Sync_processed))) {
          rtb_Minus_ch = 4294967295U;
        } else {
          rtb_Minus_ch = localDW->Board2_error_counter;
        }

        /* End of Switch: '<S237>/Switch' */

        /* Switch: '<S238>/Switch' incorporates:
         *  Constant: '<S235>/Constant2'
         *  Constant: '<S238>/MAX error count'
         *  DataStoreRead: '<S235>/Data Store Read'
         *  DataStoreRead: '<S235>/Data Store Read3'
         *  Logic: '<S238>/AND'
         *  Logic: '<S238>/NOT'
         *  Logic: '<S238>/OR'
         *  RelationalOperator: '<S238>/Equal1'
         *  RelationalOperator: '<S238>/Equal2'
         */
        if ((3.0 == *rtd_Board_ID) || ((*rtd_Master_ID == 3.0) &&
             (!localDW->BC0_Sync_processed))) {
          rtb_Plus1_b = 4294967295U;
        } else {
          rtb_Plus1_b = localDW->Board3_error_counter;
        }

        /* End of Switch: '<S238>/Switch' */

        /* MinMax: '<S235>/Max' */
        if (rtb_Fix1_e < rtb_Minus_ch) {
          rtb_Plus2_p = rtb_Fix1_e;
        } else {
          rtb_Plus2_p = rtb_Minus_ch;
        }

        if (rtb_Plus2_p < rtb_Plus1_b) {
          rtb_Plus1_b = rtb_Plus2_p;
        }

        /* End of MinMax: '<S235>/Max' */

        /* Switch: '<S235>/Switch5' incorporates:
         *  DataStoreRead: '<S235>/Data Store Read'
         *  RelationalOperator: '<S235>/Equal'
         *  RelationalOperator: '<S235>/Equal5'
         *  Switch: '<S235>/Switch6'
         *  Switch: '<S235>/Switch7'
         */
        if (localDW->BC0_Sync_processed) {
          /* DataTypeConversion: '<S235>/Cast' */
          Vote_s = (uint8_T)*rtd_Master_ID;
        } else if (rtb_Fix1_e == rtb_Plus1_b) {
          /* Switch: '<S235>/Switch6' incorporates:
           *  Constant: '<S235>/Constant4'
           *  DataTypeConversion: '<S235>/Cast'
           */
          Vote_s = (uint8_T)1.0;
        } else if (rtb_Plus1_b == rtb_Minus_ch) {
          /* Switch: '<S235>/Switch7' incorporates:
           *  Constant: '<S235>/Constant5'
           *  DataTypeConversion: '<S235>/Cast'
           */
          Vote_s = (uint8_T)2.0;
        } else {
          /* DataTypeConversion: '<S235>/Cast' incorporates:
           *  Constant: '<S235>/Constant6'
           *  Switch: '<S235>/Switch7'
           */
          Vote_s = (uint8_T)3.0;
        }

        /* End of Switch: '<S235>/Switch5' */

        /* DataStoreWrite: '<S235>/Data Store Write5' */
        localDW->Own_Vote = Vote_s;

        /* DataStoreWrite: '<S235>/Data Store Write3' incorporates:
         *  Constant: '<S235>/Constant3'
         */
        *rtd_Toggle_Pin_A0 = true;
      }

      /* End of Outputs for SubSystem: '<S102>/Vote Decision' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - Vote Decision' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Vote1 Count' incorporates:
       *  EnablePort: '<S103>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S103>/Vote Count 1' incorporates:
       *  EnablePort: '<S239>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 96.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum7_p) && ((*rtd_Local_Ticks == 96.0) &&
           localDW->new_msg_Rx_l && (*rtd_Board_ID != 1.0))) {
        /* DataStoreWrite: '<S239>/Data Store Write12' incorporates:
         *  Constant: '<S239>/Constant10'
         *  Constant: '<S239>/Constant11'
         *  Constant: '<S239>/Constant12'
         *  DataStoreRead: '<S103>/Data Store Read4'
         *  DataStoreRead: '<S239>/Data Store Read15'
         *  DataStoreRead: '<S239>/Data Store Read16'
         *  DataStoreRead: '<S239>/Data Store Read17'
         *  RelationalOperator: '<S239>/Equal13'
         *  RelationalOperator: '<S239>/Equal15'
         *  RelationalOperator: '<S239>/Equal17'
         *  Sum: '<S239>/Add'
         *  Sum: '<S239>/Add1'
         *  Sum: '<S239>/Add2'
         */
        localDW->Votes_count.Third_Board += (real_T)(3.0 ==
          localDW->Msg_Rx_d.Buffer_2);
        localDW->Votes_count.First_Board += (real_T)(1.0 ==
          localDW->Msg_Rx_d.Buffer_2);
        localDW->Votes_count.Second_Board += (real_T)(2.0 ==
          localDW->Msg_Rx_d.Buffer_2);

        /* DataStoreWrite: '<S239>/Data Store Write3' incorporates:
         *  Constant: '<S239>/Constant1'
         */
        *rtd_Toggle_Pin_A0 = true;

        /* DataStoreWrite: '<S239>/Data Store Write' incorporates:
         *  Constant: '<S239>/HIGH'
         */
        localDW->BC0_Vote1_processed = true;
      }

      /* End of Outputs for SubSystem: '<S103>/Vote Count 1' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - Vote1 Count' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Vote1 check' incorporates:
       *  EnablePort: '<S104>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 92.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum6_p)) {
        if (!localDW->COMPTaskVote1check_MODE) {
          localDW->COMPTaskVote1check_MODE = true;
        }

        /* RelationalOperator: '<S104>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 92.0);

        /* RelationalOperator: '<S104>/Equal6' incorporates:
         *  Constant: '<S104>/Constant34'
         */
        rtb_AND1_g0 = (*rtd_Board_ID != 1.0);

        /* Outputs for Enabled SubSystem: '<S104>/Process_Messages1' incorporates:
         *  EnablePort: '<S240>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages1_MODE) {
            localDW->Process_Messages1_MODE = true;
          }

          /* Outputs for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S242>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcohe_dz) {
              localDW->DemuxmessageCAN1andcheckcohe_dz = true;
            }

            /* Outputs for Atomic SubSystem: '<S244>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_a);

            /* End of Outputs for SubSystem: '<S244>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S244>/Bit Shift1' */
            /* MATLAB Function: '<S247>/bit_shift' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S252>:1' */
            /* '<S252>:1:8' */
            Rx_mc_vote1_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_a.y >> 5);

            /* End of Outputs for SubSystem: '<S244>/Bit Shift1' */

            /* Switch: '<S245>/Switch' incorporates:
             *  Constant: '<S245>/Constant'
             *  Constant: '<S245>/Constant1'
             *  DataStoreRead: '<S245>/Data Store Read1'
             *  DataStoreWrite: '<S245>/Data Store Write'
             *  RelationalOperator: '<S245>/GreaterThan'
             *  Sum: '<S245>/Plus'
             */
            if (Rx_mc_vote1_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S245>/Switch' */

            /* SignalConversion: '<S242>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            localB->Buffer_2_m = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S242>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            localB->Buffer_3_k = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S242>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            localB->Buffer_4_d = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S242>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            localB->Buffer_5_a = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S242>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            localB->Buffer_6_ke = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S242>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            localB->Buffer_7_m = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S242>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            localB->Buffer_8_d = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S242>/Cast To Double' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            Rx_temporal_vote1_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_py = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S244>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_i);

            /* End of Outputs for SubSystem: '<S244>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S244>/Bit Shift2' */
            /* MATLAB Function: '<S248>/bit_shift' incorporates:
             *  Constant: '<S242>/Constant'
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S253>:1' */
            /* '<S253>:1:8' */
            Rx_id_vote1_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_i.y >> 4);

            /* End of Outputs for SubSystem: '<S244>/Bit Shift2' */

            /* RelationalOperator: '<S242>/Equal' incorporates:
             *  Constant: '<S104>/Constant1'
             */
            localB->Equal_h = (Rx_id_vote1_CAN1 == 1.0);

            /* Outputs for Atomic SubSystem: '<S244>/Bit Shift' */
            /* MATLAB Function: '<S246>/bit_shift' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S251>:1' */
            /* '<S251>:1:8' */
            Rx_bc_vote1_CAN1 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN1->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S244>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
              /* Disable for Outport: '<S242>/CAN1_msg_coherent' */
              localB->Equal_h = false;
              localDW->DemuxmessageCAN1andcheckcohe_dz = false;
            }
          }

          /* End of Outputs for SubSystem: '<S240>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S243>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_g) {
              localDW->DemuxmessageCAN1andcheckcoher_g = true;
            }

            /* Outputs for Atomic SubSystem: '<S256>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_e);

            /* End of Outputs for SubSystem: '<S256>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S256>/Bit Shift1' */
            /* MATLAB Function: '<S259>/bit_shift' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S264>:1' */
            /* '<S264>:1:8' */
            Rx_mc_vote1_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_e.y >> 5);

            /* End of Outputs for SubSystem: '<S256>/Bit Shift1' */

            /* Switch: '<S257>/Switch' incorporates:
             *  Constant: '<S257>/Constant'
             *  Constant: '<S257>/Constant1'
             *  DataStoreRead: '<S257>/Data Store Read1'
             *  DataStoreWrite: '<S257>/Data Store Write'
             *  RelationalOperator: '<S257>/GreaterThan'
             *  Sum: '<S257>/Plus'
             */
            if (Rx_mc_vote1_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S257>/Switch' */

            /* SignalConversion: '<S243>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            localB->Buffer_2_j = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S243>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            localB->Buffer_3_h = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S243>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            localB->Buffer_4_c = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S243>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            localB->Buffer_5_g = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S243>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            localB->Buffer_6_k = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S243>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            localB->Buffer_7_f = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S243>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            localB->Buffer_8_i = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S243>/Cast To Double' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            Rx_temporal_vote1_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_d = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S256>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_k);

            /* End of Outputs for SubSystem: '<S256>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S256>/Bit Shift2' */
            /* MATLAB Function: '<S260>/bit_shift' incorporates:
             *  Constant: '<S243>/Constant'
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S265>:1' */
            /* '<S265>:1:8' */
            Rx_id_vote1_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_k.y >> 4);

            /* End of Outputs for SubSystem: '<S256>/Bit Shift2' */

            /* RelationalOperator: '<S243>/Equal' incorporates:
             *  Constant: '<S104>/Constant1'
             */
            localB->Equal_c = (Rx_id_vote1_CAN2 == 1.0);

            /* Outputs for Atomic SubSystem: '<S256>/Bit Shift' */
            /* MATLAB Function: '<S258>/bit_shift' incorporates:
             *  DataStoreRead: '<S104>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S263>:1' */
            /* '<S263>:1:8' */
            Rx_bc_vote1_CAN2 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN2->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S256>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_g) {
              /* Disable for Outport: '<S243>/CAN2_msg_coherent' */
              localB->Equal_c = false;
              localDW->DemuxmessageCAN1andcheckcoher_g = false;
            }
          }

          /* End of Outputs for SubSystem: '<S240>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S240>/Switch' incorporates:
           *  Constant: '<S242>/Constant'
           *  Constant: '<S243>/Constant'
           *  DataStoreRead: '<S104>/Data Store Read'
           *  DataStoreRead: '<S104>/Data Store Read3'
           *  DataStoreWrite: '<S240>/Data Store Write'
           */
          if (localB->Equal_h) {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_py;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_m;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_k;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_d;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_a;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_ke;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_m;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_d;
          } else {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_d;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_j;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_h;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_c;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_g;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_k;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_f;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_i;
          }

          /* End of Switch: '<S240>/Switch' */

          /* Sum: '<S240>/Sum' incorporates:
           *  Constant: '<S240>/Constant'
           *  Constant: '<S240>/delay_estimation_1'
           *  Constant: '<S89>/Constant3'
           *  Product: '<S240>/Multiply'
           */
          expected_LT_vote1_CAN1_s = (5.0 * (real_T)Rx_mc_vote1_CAN1 + 52.0) +
            1.0;

          /* Sum: '<S240>/Sum1' incorporates:
           *  Constant: '<S240>/Constant1'
           *  Constant: '<S240>/delay_estimation_2'
           *  Constant: '<S89>/Constant3'
           *  Product: '<S240>/Multiply1'
           */
          expected_LT_vote1_CAN2_s = (8.0 * (real_T)Rx_mc_vote1_CAN2 + 52.0) +
            1.0;

          /* DataStoreWrite: '<S240>/Data Store Write3' incorporates:
           *  Constant: '<S240>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S240>/Data Store Read' */
          Rx_msg_ticks_vote1_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S240>/OR' incorporates:
           *  DataStoreWrite: '<S240>/Data Store Write2'
           */
          localDW->new_msg_Rx_l = (localB->Equal_h || localB->Equal_c);

          /* DataStoreRead: '<S240>/Data Store Read1' */
          Rx_msg_ticks_vote1_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S240>/Switch1' incorporates:
           *  Sum: '<S240>/Minus'
           *  Sum: '<S240>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_Vote1_s = expected_LT_vote1_CAN1_s - (real_T)
              Rx_msg_ticks_vote1_CAN1_s;
          } else {
            Desync_Vote1_s = expected_LT_vote1_CAN2_s - (real_T)
              Rx_msg_ticks_vote1_CAN2_s;
          }

          /* End of Switch: '<S240>/Switch1' */
        } else {
          if (localDW->Process_Messages1_MODE) {
            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
              /* Disable for Outport: '<S242>/CAN1_msg_coherent' */
              localB->Equal_h = false;
              localDW->DemuxmessageCAN1andcheckcohe_dz = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g) {
              /* Disable for Outport: '<S243>/CAN2_msg_coherent' */
              localB->Equal_c = false;
              localDW->DemuxmessageCAN1andcheckcoher_g = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages1_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S104>/Process_Messages1' */

        /* Logic: '<S104>/AND1' incorporates:
         *  Logic: '<S104>/AND'
         *  Logic: '<S104>/NOT'
         */
        rtb_AND1_ob = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S104>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_ob, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S104>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S104>/Process_Messages1' */
          if (localDW->Process_Messages1_MODE) {
            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
              /* Disable for Outport: '<S242>/CAN1_msg_coherent' */
              localB->Equal_h = false;
              localDW->DemuxmessageCAN1andcheckcohe_dz = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g) {
              /* Disable for Outport: '<S243>/CAN2_msg_coherent' */
              localB->Equal_c = false;
              localDW->DemuxmessageCAN1andcheckcoher_g = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S104>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S89>/COMP Task - Vote1 check' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Vote2 Count' incorporates:
       *  EnablePort: '<S105>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S105>/Vote Count 2' incorporates:
       *  EnablePort: '<S268>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 144.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum10_c) && ((*rtd_Local_Ticks == 144.0) &&
           localDW->new_msg_Rx_l && (*rtd_Board_ID != 2.0))) {
        /* DataStoreWrite: '<S268>/Data Store Write12' incorporates:
         *  Constant: '<S268>/Constant10'
         *  Constant: '<S268>/Constant11'
         *  Constant: '<S268>/Constant12'
         *  DataStoreRead: '<S105>/Data Store Read4'
         *  DataStoreRead: '<S268>/Data Store Read15'
         *  DataStoreRead: '<S268>/Data Store Read16'
         *  DataStoreRead: '<S268>/Data Store Read17'
         *  RelationalOperator: '<S268>/Equal13'
         *  RelationalOperator: '<S268>/Equal15'
         *  RelationalOperator: '<S268>/Equal17'
         *  Sum: '<S268>/Add'
         *  Sum: '<S268>/Add1'
         *  Sum: '<S268>/Add2'
         */
        localDW->Votes_count.Third_Board += (real_T)(3.0 ==
          localDW->Msg_Rx_d.Buffer_2);
        localDW->Votes_count.First_Board += (real_T)(1.0 ==
          localDW->Msg_Rx_d.Buffer_2);
        localDW->Votes_count.Second_Board += (real_T)(2.0 ==
          localDW->Msg_Rx_d.Buffer_2);

        /* DataStoreWrite: '<S268>/Data Store Write3' incorporates:
         *  Constant: '<S268>/Constant1'
         */
        *rtd_Toggle_Pin_A0 = true;

        /* DataStoreWrite: '<S268>/Data Store Write' incorporates:
         *  Constant: '<S268>/HIGH'
         */
        localDW->BC0_Vote2_processed = true;
      }

      /* End of Outputs for SubSystem: '<S105>/Vote Count 2' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - Vote2 Count' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Vote2 check' incorporates:
       *  EnablePort: '<S106>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 140.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum9_m)) {
        if (!localDW->COMPTaskVote2check_MODE) {
          localDW->COMPTaskVote2check_MODE = true;
        }

        /* RelationalOperator: '<S106>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 140.0);

        /* RelationalOperator: '<S106>/Equal6' incorporates:
         *  Constant: '<S106>/Constant34'
         */
        rtb_AND1_g0 = (*rtd_Board_ID != 2.0);

        /* Outputs for Enabled SubSystem: '<S106>/Process_Messages' incorporates:
         *  EnablePort: '<S269>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_mw) {
            localDW->Process_Messages_MODE_mw = true;
          }

          /* Outputs for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S271>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_p) {
              localDW->DemuxmessageCAN1andcheckcoher_p = true;
            }

            /* Outputs for Atomic SubSystem: '<S273>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_o);

            /* End of Outputs for SubSystem: '<S273>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S273>/Bit Shift1' */
            /* MATLAB Function: '<S276>/bit_shift' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S281>:1' */
            /* '<S281>:1:8' */
            Rx_mc_vote2_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_o.y >> 5);

            /* End of Outputs for SubSystem: '<S273>/Bit Shift1' */

            /* Switch: '<S274>/Switch' incorporates:
             *  Constant: '<S274>/Constant'
             *  Constant: '<S274>/Constant1'
             *  DataStoreRead: '<S274>/Data Store Read1'
             *  DataStoreWrite: '<S274>/Data Store Write'
             *  RelationalOperator: '<S274>/GreaterThan'
             *  Sum: '<S274>/Plus'
             */
            if (Rx_mc_vote2_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S274>/Switch' */

            /* SignalConversion: '<S271>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            localB->Buffer_2_it3ijayq1ie4nsk = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S271>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            localB->Buffer_3_pbhdvltovrlf3o2 = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S271>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            localB->Buffer_4_krhrmip3cqzje2l = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S271>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            localB->Buffer_5_bna4sop3eopq42d = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S271>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            localB->Buffer_6_dincyjkp43qw1gs = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S271>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            localB->Buffer_7_hzjkpfzb3wqrt2l = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S271>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            localB->Buffer_8_prbyejt0irlnmc4 = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S271>/Cast To Double' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            Rx_temporal_vote2_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_g5 = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S273>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_j);

            /* End of Outputs for SubSystem: '<S273>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S273>/Bit Shift2' */
            /* MATLAB Function: '<S277>/bit_shift' incorporates:
             *  Constant: '<S271>/Constant'
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S282>:1' */
            /* '<S282>:1:8' */
            Rx_id_vote2_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_j.y >> 4);

            /* End of Outputs for SubSystem: '<S273>/Bit Shift2' */

            /* RelationalOperator: '<S271>/Equal' incorporates:
             *  Constant: '<S106>/Constant1'
             */
            localB->Equal_o3 = (Rx_id_vote2_CAN1 == 2.0);

            /* Outputs for Atomic SubSystem: '<S273>/Bit Shift' */
            /* MATLAB Function: '<S275>/bit_shift' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S280>:1' */
            /* '<S280>:1:8' */
            Rx_bc_vote2_CAN1 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN1->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S273>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_p) {
              /* Disable for Outport: '<S271>/CAN1_msg_coherent' */
              localB->Equal_o3 = false;
              localDW->DemuxmessageCAN1andcheckcoher_p = false;
            }
          }

          /* End of Outputs for SubSystem: '<S269>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S272>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_d) {
              localDW->DemuxmessageCAN1andcheckcoher_d = true;
            }

            /* Outputs for Atomic SubSystem: '<S285>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_c);

            /* End of Outputs for SubSystem: '<S285>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S285>/Bit Shift1' */
            /* MATLAB Function: '<S288>/bit_shift' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S293>:1' */
            /* '<S293>:1:8' */
            Rx_mc_vote2_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_c.y >> 5);

            /* End of Outputs for SubSystem: '<S285>/Bit Shift1' */

            /* Switch: '<S286>/Switch' incorporates:
             *  Constant: '<S286>/Constant'
             *  Constant: '<S286>/Constant1'
             *  DataStoreRead: '<S286>/Data Store Read1'
             *  DataStoreWrite: '<S286>/Data Store Write'
             *  RelationalOperator: '<S286>/GreaterThan'
             *  Sum: '<S286>/Plus'
             */
            if (Rx_mc_vote2_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S286>/Switch' */

            /* SignalConversion: '<S272>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            localB->Buffer_2_it3ijayq1ie4ns = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S272>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            localB->Buffer_3_pbhdvltovrlf3o = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S272>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            localB->Buffer_4_krhrmip3cqzje2 = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S272>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            localB->Buffer_5_bna4sop3eopq42 = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S272>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            localB->Buffer_6_dincyjkp43qw1g = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S272>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            localB->Buffer_7_hzjkpfzb3wqrt2 = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S272>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            localB->Buffer_8_prbyejt0irlnmc = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S272>/Cast To Double' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            Rx_temporal_vote2_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_h4 = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S285>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_n);

            /* End of Outputs for SubSystem: '<S285>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S285>/Bit Shift2' */
            /* MATLAB Function: '<S289>/bit_shift' incorporates:
             *  Constant: '<S272>/Constant'
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S294>:1' */
            /* '<S294>:1:8' */
            Rx_id_vote2_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_n.y >> 4);

            /* End of Outputs for SubSystem: '<S285>/Bit Shift2' */

            /* RelationalOperator: '<S272>/Equal' incorporates:
             *  Constant: '<S106>/Constant1'
             */
            localB->Equal_fk = (Rx_id_vote2_CAN2 == 2.0);

            /* Outputs for Atomic SubSystem: '<S285>/Bit Shift' */
            /* MATLAB Function: '<S287>/bit_shift' incorporates:
             *  DataStoreRead: '<S106>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S292>:1' */
            /* '<S292>:1:8' */
            Rx_bc_vote2_CAN2 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN2->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S285>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_d) {
              /* Disable for Outport: '<S272>/CAN2_msg_coherent' */
              localB->Equal_fk = false;
              localDW->DemuxmessageCAN1andcheckcoher_d = false;
            }
          }

          /* End of Outputs for SubSystem: '<S269>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S269>/Switch' incorporates:
           *  Constant: '<S271>/Constant'
           *  Constant: '<S272>/Constant'
           *  DataStoreRead: '<S106>/Data Store Read'
           *  DataStoreRead: '<S106>/Data Store Read3'
           *  DataStoreWrite: '<S269>/Data Store Write'
           */
          if (localB->Equal_o3) {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_g5;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_it3ijayq1ie4nsk;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_pbhdvltovrlf3o2;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_krhrmip3cqzje2l;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_bna4sop3eopq42d;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_dincyjkp43qw1gs;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_hzjkpfzb3wqrt2l;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_prbyejt0irlnmc4;
          } else {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_h4;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_it3ijayq1ie4ns;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_pbhdvltovrlf3o;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_krhrmip3cqzje2;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_bna4sop3eopq42;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_dincyjkp43qw1g;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_hzjkpfzb3wqrt2;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_prbyejt0irlnmc;
          }

          /* End of Switch: '<S269>/Switch' */

          /* Sum: '<S269>/Sum' incorporates:
           *  Constant: '<S269>/Constant'
           *  Constant: '<S269>/delay_estimation_1'
           *  Constant: '<S89>/Constant28'
           *  Product: '<S269>/Multiply'
           */
          expected_LT_vote2_CAN1_s = (5.0 * (real_T)Rx_mc_vote2_CAN1 + 100.0) +
            1.0;

          /* Sum: '<S269>/Sum1' incorporates:
           *  Constant: '<S269>/Constant1'
           *  Constant: '<S269>/delay_estimation_2'
           *  Constant: '<S89>/Constant28'
           *  Product: '<S269>/Multiply1'
           */
          expected_LT_vote2_CAN2_s = (8.0 * (real_T)Rx_mc_vote2_CAN2 + 100.0) +
            1.0;

          /* DataStoreWrite: '<S269>/Data Store Write3' incorporates:
           *  Constant: '<S269>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S269>/Data Store Read' */
          Rx_msg_ticks_vote2_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S269>/OR' incorporates:
           *  DataStoreWrite: '<S269>/Data Store Write2'
           */
          localDW->new_msg_Rx_l = (localB->Equal_o3 || localB->Equal_fk);

          /* DataStoreRead: '<S269>/Data Store Read1' */
          Rx_msg_ticks_vote2_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S269>/Switch1' incorporates:
           *  Sum: '<S269>/Minus'
           *  Sum: '<S269>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_Vote2_s = expected_LT_vote2_CAN1_s - (real_T)
              Rx_msg_ticks_vote2_CAN1_s;
          } else {
            Desync_Vote2_s = expected_LT_vote2_CAN2_s - (real_T)
              Rx_msg_ticks_vote2_CAN2_s;
          }

          /* End of Switch: '<S269>/Switch1' */
        } else {
          if (localDW->Process_Messages_MODE_mw) {
            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_p) {
              /* Disable for Outport: '<S271>/CAN1_msg_coherent' */
              localB->Equal_o3 = false;
              localDW->DemuxmessageCAN1andcheckcoher_p = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_d) {
              /* Disable for Outport: '<S272>/CAN2_msg_coherent' */
              localB->Equal_fk = false;
              localDW->DemuxmessageCAN1andcheckcoher_d = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_mw = false;
          }
        }

        /* End of Outputs for SubSystem: '<S106>/Process_Messages' */

        /* Logic: '<S106>/AND1' incorporates:
         *  Logic: '<S106>/AND'
         *  Logic: '<S106>/NOT'
         */
        rtb_AND1_hy = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S106>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_hy, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S106>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S106>/Process_Messages' */
          if (localDW->Process_Messages_MODE_mw) {
            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_p) {
              /* Disable for Outport: '<S271>/CAN1_msg_coherent' */
              localB->Equal_o3 = false;
              localDW->DemuxmessageCAN1andcheckcoher_p = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_d) {
              /* Disable for Outport: '<S272>/CAN2_msg_coherent' */
              localB->Equal_fk = false;
              localDW->DemuxmessageCAN1andcheckcoher_d = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_mw = false;
          }

          /* End of Disable for SubSystem: '<S106>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S89>/COMP Task - Vote2 check' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Vote3 Count' incorporates:
       *  EnablePort: '<S107>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S107>/Vote Count 3' incorporates:
       *  EnablePort: '<S297>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 192.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum11_i) && ((*rtd_Local_Ticks == 192.0) &&
           localDW->new_msg_Rx_l && (*rtd_Board_ID != 3.0))) {
        /* DataStoreWrite: '<S297>/Data Store Write12' incorporates:
         *  Constant: '<S297>/Constant10'
         *  Constant: '<S297>/Constant11'
         *  Constant: '<S297>/Constant12'
         *  DataStoreRead: '<S107>/Data Store Read4'
         *  DataStoreRead: '<S297>/Data Store Read15'
         *  DataStoreRead: '<S297>/Data Store Read16'
         *  DataStoreRead: '<S297>/Data Store Read17'
         *  RelationalOperator: '<S297>/Equal13'
         *  RelationalOperator: '<S297>/Equal15'
         *  RelationalOperator: '<S297>/Equal17'
         *  Sum: '<S297>/Add'
         *  Sum: '<S297>/Add1'
         *  Sum: '<S297>/Add2'
         */
        localDW->Votes_count.Third_Board += (real_T)(3.0 ==
          localDW->Msg_Rx_d.Buffer_2);
        localDW->Votes_count.First_Board += (real_T)(1.0 ==
          localDW->Msg_Rx_d.Buffer_2);
        localDW->Votes_count.Second_Board += (real_T)(2.0 ==
          localDW->Msg_Rx_d.Buffer_2);

        /* DataStoreWrite: '<S297>/Data Store Write3' incorporates:
         *  Constant: '<S297>/Constant1'
         */
        *rtd_Toggle_Pin_A0 = true;

        /* DataStoreWrite: '<S297>/Data Store Write' incorporates:
         *  Constant: '<S297>/HIGH'
         */
        localDW->BC0_Vote3_processed = true;
      }

      /* End of Outputs for SubSystem: '<S107>/Vote Count 3' */
      /* End of Outputs for SubSystem: '<S89>/COMP Task - Vote3 Count' */

      /* Outputs for Enabled SubSystem: '<S89>/COMP Task - Vote3 check' incorporates:
       *  EnablePort: '<S108>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 188.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum13_o)) {
        if (!localDW->COMPTaskVote3check_MODE) {
          localDW->COMPTaskVote3check_MODE = true;
        }

        /* RelationalOperator: '<S108>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 188.0);

        /* RelationalOperator: '<S108>/Equal6' incorporates:
         *  Constant: '<S108>/Constant34'
         */
        rtb_AND1_g0 = (*rtd_Board_ID != 3.0);

        /* Outputs for Enabled SubSystem: '<S108>/Process_Messages' incorporates:
         *  EnablePort: '<S298>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_f) {
            localDW->Process_Messages_MODE_f = true;
          }

          /* Outputs for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S300>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_e) {
              localDW->DemuxmessageCAN1andcheckcoher_e = true;
            }

            /* Outputs for Atomic SubSystem: '<S302>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_j);

            /* End of Outputs for SubSystem: '<S302>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S302>/Bit Shift1' */
            /* MATLAB Function: '<S305>/bit_shift' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S310>:1' */
            /* '<S310>:1:8' */
            Rx_mc_vote3_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_j.y >> 5);

            /* End of Outputs for SubSystem: '<S302>/Bit Shift1' */

            /* Switch: '<S303>/Switch' incorporates:
             *  Constant: '<S303>/Constant'
             *  Constant: '<S303>/Constant1'
             *  DataStoreRead: '<S303>/Data Store Read1'
             *  DataStoreWrite: '<S303>/Data Store Write'
             *  RelationalOperator: '<S303>/GreaterThan'
             *  Sum: '<S303>/Plus'
             */
            if (Rx_mc_vote3_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S303>/Switch' */

            /* SignalConversion: '<S300>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            localB->Buffer_2_it3ijayq1ie4n = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S300>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            localB->Buffer_3_pbhdvltovrlf3 = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S300>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            localB->Buffer_4_krhrmip3cqzje = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S300>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            localB->Buffer_5_bna4sop3eopq4 = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S300>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            localB->Buffer_6_dincyjkp43qw1 = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S300>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            localB->Buffer_7_hzjkpfzb3wqrt = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S300>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            localB->Buffer_8_prbyejt0irlnm = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S300>/Cast To Double' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            Rx_temporal_vote3_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_jb = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S302>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_m);

            /* End of Outputs for SubSystem: '<S302>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S302>/Bit Shift2' */
            /* MATLAB Function: '<S306>/bit_shift' incorporates:
             *  Constant: '<S300>/Constant'
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S311>:1' */
            /* '<S311>:1:8' */
            Rx_id_vote3_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_m.y >> 4);

            /* End of Outputs for SubSystem: '<S302>/Bit Shift2' */

            /* RelationalOperator: '<S300>/Equal' incorporates:
             *  Constant: '<S108>/Constant1'
             */
            localB->Equal_dl = (Rx_id_vote3_CAN1 == 3.0);

            /* Outputs for Atomic SubSystem: '<S302>/Bit Shift' */
            /* MATLAB Function: '<S304>/bit_shift' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S309>:1' */
            /* '<S309>:1:8' */
            Rx_bc_vote3_CAN1 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN1->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S302>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_e) {
              /* Disable for Outport: '<S300>/CAN1_msg_coherent' */
              localB->Equal_dl = false;
              localDW->DemuxmessageCAN1andcheckcoher_e = false;
            }
          }

          /* End of Outputs for SubSystem: '<S298>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S301>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_j) {
              localDW->DemuxmessageCAN1andcheckcoher_j = true;
            }

            /* Outputs for Atomic SubSystem: '<S314>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_b);

            /* End of Outputs for SubSystem: '<S314>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S314>/Bit Shift1' */
            /* MATLAB Function: '<S317>/bit_shift' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S322>:1' */
            /* '<S322>:1:8' */
            Rx_mc_vote3_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_b.y >> 5);

            /* End of Outputs for SubSystem: '<S314>/Bit Shift1' */

            /* Switch: '<S315>/Switch' incorporates:
             *  Constant: '<S315>/Constant'
             *  Constant: '<S315>/Constant1'
             *  DataStoreRead: '<S315>/Data Store Read1'
             *  DataStoreWrite: '<S315>/Data Store Write'
             *  RelationalOperator: '<S315>/GreaterThan'
             *  Sum: '<S315>/Plus'
             */
            if (Rx_mc_vote3_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S315>/Switch' */

            /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            localB->Buffer_2_it3ijayq1ie4 = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            localB->Buffer_3_pbhdvltovrlf = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            localB->Buffer_4_krhrmip3cqzj = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            localB->Buffer_5_bna4sop3eopq = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            localB->Buffer_6_dincyjkp43qw = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            localB->Buffer_7_hzjkpfzb3wqr = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S301>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            localB->Buffer_8_prbyejt0irln = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S301>/Cast To Double' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            Rx_temporal_vote3_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_m = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S314>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_ic);

            /* End of Outputs for SubSystem: '<S314>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S314>/Bit Shift2' */
            /* MATLAB Function: '<S318>/bit_shift' incorporates:
             *  Constant: '<S301>/Constant'
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S323>:1' */
            /* '<S323>:1:8' */
            Rx_id_vote3_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_ic.y >> 4);

            /* End of Outputs for SubSystem: '<S314>/Bit Shift2' */

            /* RelationalOperator: '<S301>/Equal' incorporates:
             *  Constant: '<S108>/Constant1'
             */
            localB->Equal_k = (Rx_id_vote3_CAN2 == 3.0);

            /* Outputs for Atomic SubSystem: '<S314>/Bit Shift' */
            /* MATLAB Function: '<S316>/bit_shift' incorporates:
             *  DataStoreRead: '<S108>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S321>:1' */
            /* '<S321>:1:8' */
            Rx_bc_vote3_CAN2 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN2->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S314>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_j) {
              /* Disable for Outport: '<S301>/CAN2_msg_coherent' */
              localB->Equal_k = false;
              localDW->DemuxmessageCAN1andcheckcoher_j = false;
            }
          }

          /* End of Outputs for SubSystem: '<S298>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S298>/Switch' incorporates:
           *  Constant: '<S300>/Constant'
           *  Constant: '<S301>/Constant'
           *  DataStoreRead: '<S108>/Data Store Read'
           *  DataStoreRead: '<S108>/Data Store Read3'
           *  DataStoreWrite: '<S298>/Data Store Write'
           */
          if (localB->Equal_dl) {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_jb;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_it3ijayq1ie4n;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_pbhdvltovrlf3;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_krhrmip3cqzje;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_bna4sop3eopq4;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_dincyjkp43qw1;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_hzjkpfzb3wqrt;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_prbyejt0irlnm;
          } else {
            localDW->Msg_Rx_d.Buffer_1 = localB->Constant_m;
            localDW->Msg_Rx_d.Buffer_2 = localB->Buffer_2_it3ijayq1ie4;
            localDW->Msg_Rx_d.Buffer_3 = localB->Buffer_3_pbhdvltovrlf;
            localDW->Msg_Rx_d.Buffer_4 = localB->Buffer_4_krhrmip3cqzj;
            localDW->Msg_Rx_d.Buffer_5 = localB->Buffer_5_bna4sop3eopq;
            localDW->Msg_Rx_d.Buffer_6 = localB->Buffer_6_dincyjkp43qw;
            localDW->Msg_Rx_d.Buffer_7 = localB->Buffer_7_hzjkpfzb3wqr;
            localDW->Msg_Rx_d.Buffer_8 = localB->Buffer_8_prbyejt0irln;
          }

          /* End of Switch: '<S298>/Switch' */

          /* Sum: '<S298>/Sum' incorporates:
           *  Constant: '<S298>/Constant'
           *  Constant: '<S298>/delay_estimation_1'
           *  Constant: '<S89>/Constant9'
           *  Product: '<S298>/Multiply'
           */
          expected_LT_vote3_CAN1_s = (5.0 * (real_T)Rx_mc_vote3_CAN1 + 148.0) +
            1.0;

          /* Sum: '<S298>/Sum1' incorporates:
           *  Constant: '<S298>/Constant1'
           *  Constant: '<S298>/delay_estimation_2'
           *  Constant: '<S89>/Constant9'
           *  Product: '<S298>/Multiply1'
           */
          expected_LT_vote3_CAN2_s = (8.0 * (real_T)Rx_mc_vote3_CAN2 + 148.0) +
            1.0;

          /* DataStoreWrite: '<S298>/Data Store Write3' incorporates:
           *  Constant: '<S298>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S298>/Data Store Read' */
          Rx_msg_ticks_vote3_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S298>/OR' incorporates:
           *  DataStoreWrite: '<S298>/Data Store Write2'
           */
          localDW->new_msg_Rx_l = (localB->Equal_dl || localB->Equal_k);

          /* DataStoreRead: '<S298>/Data Store Read1' */
          Rx_msg_ticks_vote3_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S298>/Switch1' incorporates:
           *  Sum: '<S298>/Minus'
           *  Sum: '<S298>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_Vote3_s = expected_LT_vote3_CAN1_s - (real_T)
              Rx_msg_ticks_vote3_CAN1_s;
          } else {
            Desync_Vote3_s = expected_LT_vote3_CAN2_s - (real_T)
              Rx_msg_ticks_vote3_CAN2_s;
          }

          /* End of Switch: '<S298>/Switch1' */
        } else {
          if (localDW->Process_Messages_MODE_f) {
            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_e) {
              /* Disable for Outport: '<S300>/CAN1_msg_coherent' */
              localB->Equal_dl = false;
              localDW->DemuxmessageCAN1andcheckcoher_e = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j) {
              /* Disable for Outport: '<S301>/CAN2_msg_coherent' */
              localB->Equal_k = false;
              localDW->DemuxmessageCAN1andcheckcoher_j = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_f = false;
          }
        }

        /* End of Outputs for SubSystem: '<S108>/Process_Messages' */

        /* Logic: '<S108>/AND1' incorporates:
         *  Logic: '<S108>/AND'
         *  Logic: '<S108>/NOT'
         */
        rtb_AND1_dc = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S108>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_dc, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S108>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S108>/Process_Messages' */
          if (localDW->Process_Messages_MODE_f) {
            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_e) {
              /* Disable for Outport: '<S300>/CAN1_msg_coherent' */
              localB->Equal_dl = false;
              localDW->DemuxmessageCAN1andcheckcoher_e = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j) {
              /* Disable for Outport: '<S301>/CAN2_msg_coherent' */
              localB->Equal_k = false;
              localDW->DemuxmessageCAN1andcheckcoher_j = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_f = false;
          }

          /* End of Disable for SubSystem: '<S108>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S89>/COMP Task - Vote3 check' */

      /* Logic: '<S89>/AND17' incorporates:
       *  Constant: '<S101>/Constant4'
       *  Constant: '<S103>/Constant4'
       *  Constant: '<S105>/Constant4'
       *  Constant: '<S107>/Constant4'
       *  Constant: '<S89>/Constant'
       *  Constant: '<S89>/Constant17'
       *  Constant: '<S89>/Constant19'
       *  Constant: '<S89>/Constant2'
       *  Constant: '<S89>/Constant21'
       *  Constant: '<S89>/Constant23'
       *  Constant: '<S89>/Constant27'
       *  Constant: '<S89>/Constant33'
       *  Constant: '<S89>/Constant6'
       *  Constant: '<S89>/Constant8'
       *  DataStoreRead: '<S101>/Data Store Read1'
       *  DataStoreRead: '<S103>/Data Store Read5'
       *  DataStoreRead: '<S105>/Data Store Read5'
       *  DataStoreRead: '<S107>/Data Store Read5'
       *  DataStoreRead: '<S89>/Data Store Read11'
       *  Logic: '<S100>/AND'
       *  Logic: '<S101>/AND'
       *  Logic: '<S103>/AND'
       *  Logic: '<S104>/AND'
       *  Logic: '<S105>/AND'
       *  Logic: '<S106>/AND'
       *  Logic: '<S107>/AND'
       *  Logic: '<S108>/AND'
       *  Logic: '<S89>/AND'
       *  Logic: '<S89>/AND1'
       *  Logic: '<S89>/AND11'
       *  Logic: '<S89>/AND12'
       *  Logic: '<S89>/AND18'
       *  Logic: '<S89>/AND19'
       *  Logic: '<S89>/AND2'
       *  Logic: '<S89>/AND3'
       *  Logic: '<S89>/AND5'
       *  Logic: '<S89>/AND6'
       *  Logic: '<S89>/AND8'
       *  Logic: '<S89>/AND9'
       *  Logic: '<S89>/NOT1'
       *  Logic: '<S89>/NOT2'
       *  RelationalOperator: '<S101>/Equal'
       *  RelationalOperator: '<S101>/Equal2'
       *  RelationalOperator: '<S102>/Equal'
       *  RelationalOperator: '<S103>/Equal'
       *  RelationalOperator: '<S103>/Equal2'
       *  RelationalOperator: '<S105>/Equal'
       *  RelationalOperator: '<S105>/Equal2'
       *  RelationalOperator: '<S107>/Equal'
       *  RelationalOperator: '<S107>/Equal2'
       *  RelationalOperator: '<S89>/GreaterThan'
       *  RelationalOperator: '<S89>/GreaterThan1'
       *  RelationalOperator: '<S89>/GreaterThan10'
       *  RelationalOperator: '<S89>/GreaterThan11'
       *  RelationalOperator: '<S89>/GreaterThan12'
       *  RelationalOperator: '<S89>/GreaterThan13'
       *  RelationalOperator: '<S89>/GreaterThan14'
       *  RelationalOperator: '<S89>/GreaterThan15'
       *  RelationalOperator: '<S89>/GreaterThan16'
       *  RelationalOperator: '<S89>/GreaterThan17'
       *  RelationalOperator: '<S89>/GreaterThan2'
       *  RelationalOperator: '<S89>/GreaterThan20'
       *  RelationalOperator: '<S89>/GreaterThan21'
       *  RelationalOperator: '<S89>/GreaterThan22'
       *  RelationalOperator: '<S89>/GreaterThan23'
       *  RelationalOperator: '<S89>/GreaterThan3'
       *  RelationalOperator: '<S89>/GreaterThan4'
       *  RelationalOperator: '<S89>/GreaterThan5'
       *  RelationalOperator: '<S89>/GreaterThan6'
       *  RelationalOperator: '<S89>/GreaterThan7'
       */
      rtb_AND17_f = ((rtb_DataStoreRead8_o5 >= 0.0) && (rtb_DataStoreRead8_o5 <
        localC->Sum4_p) && (!localDW->BC0_Sync_processed));

      /* Outputs for Enabled SubSystem: '<S89>/COMM Task - Sync bc 0' */
      COMMTaskSyncbc0(rtb_AND17_f, 0.0, &localB->COMMTaskSyncbc0_b,
                      &localC->COMMTaskSyncbc0_b, &localDW->COMMTaskSyncbc0_b,
                      rtd_Board_ID, rtd_Local_Ticks, &localDW->Msg_Rx_d,
                      rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                      rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                      rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                      rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                      rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                      &localDW->delta_a_est, &localDW->delta_f_est,
                      &localDW->new_msg_Rx_l, &localDW->speed_integral,
                      &localDW->torque_ar_integral, &localDW->torque_fr_integral);

      /* End of Outputs for SubSystem: '<S89>/COMM Task - Sync bc 0' */

      /* Outputs for Enabled SubSystem: '<S89>/COMM Task - Vote1' incorporates:
       *  EnablePort: '<S93>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 52.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum5_d)) {
        if (!localDW->COMMTaskVote1_MODE) {
          localDW->COMMTaskVote1_MODE = true;
        }

        /* RelationalOperator: '<S93>/Equal2' incorporates:
         *  Constant: '<S93>/Constant3'
         */
        rtb_Equal2_m = (*rtd_Board_ID == 1.0);

        /* Logic: '<S93>/NOT' */
        rtb_NOT_im = !rtb_Equal2_m;

        /* Outputs for Enabled SubSystem: '<S93>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_im, 52.0, &localB->Receptionsubstasks_k,
                           &localC->Receptionsubstasks_k,
                           &localDW->Receptionsubstasks_k, rtd_Local_Ticks,
                           &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx_l);

        /* End of Outputs for SubSystem: '<S93>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S93>/Transmission subtasks' */
        Transmissionsubtasks(rtb_Equal2_m, 52.0,
                             &localB->Transmissionsubtasks_ik,
                             &localC->Transmissionsubtasks_ik,
                             &localDW->Transmissionsubtasks_ik, rtd_Board_ID,
                             rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                             &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
                             rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
                             &localDW->basic_cycle_count);

        /* End of Outputs for SubSystem: '<S93>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S93>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S93>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S93>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_ik.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_ik,
              &localDW->Transmissionsubtasks_ik);
          }

          /* End of Disable for SubSystem: '<S93>/Transmission subtasks' */

          /* Disable for Outport: '<S93>/Send CAN1' */
          localB->Transmissionsubtasks_ik.Equal7_i = false;

          /* Disable for Outport: '<S93>/Receive CAN1' */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S93>/Send CAN2' */
          localB->Transmissionsubtasks_ik.Equal7 = false;

          /* Disable for Outport: '<S93>/Receive CAN2' */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S89>/COMM Task - Vote1' */

      /* Outputs for Enabled SubSystem: '<S89>/COMM Task - Vote2' incorporates:
       *  EnablePort: '<S94>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 100.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum8_a)) {
        if (!localDW->COMMTaskVote2_MODE) {
          localDW->COMMTaskVote2_MODE = true;
        }

        /* RelationalOperator: '<S94>/Equal2' incorporates:
         *  Constant: '<S94>/Constant3'
         */
        rtb_Equal2_hs = (*rtd_Board_ID == 2.0);

        /* Logic: '<S94>/NOT' */
        rtb_NOT_l = !rtb_Equal2_hs;

        /* Outputs for Enabled SubSystem: '<S94>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_l, 100.0, &localB->Receptionsubstasks_g,
                           &localC->Receptionsubstasks_g,
                           &localDW->Receptionsubstasks_g, rtd_Local_Ticks,
                           &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx_l);

        /* End of Outputs for SubSystem: '<S94>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S94>/Transmission subtasks' */
        Transmissionsubtasks(rtb_Equal2_hs, 100.0,
                             &localB->Transmissionsubtasks_l,
                             &localC->Transmissionsubtasks_l,
                             &localDW->Transmissionsubtasks_l, rtd_Board_ID,
                             rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                             &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
                             rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
                             &localDW->basic_cycle_count);

        /* End of Outputs for SubSystem: '<S94>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S94>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S94>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S94>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S94>/Transmission subtasks' */

          /* Disable for Outport: '<S94>/Send CAN1' */
          localB->Transmissionsubtasks_l.Equal7_i = false;

          /* Disable for Outport: '<S94>/Receive CAN1' */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for Outport: '<S94>/Send CAN2' */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S94>/Receive CAN2' */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S89>/COMM Task - Vote2' */

      /* Outputs for Enabled SubSystem: '<S89>/COMM Task - Vote3' incorporates:
       *  EnablePort: '<S95>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 148.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum12_n)) {
        if (!localDW->COMMTaskVote3_MODE) {
          localDW->COMMTaskVote3_MODE = true;
        }

        /* RelationalOperator: '<S95>/Equal2' incorporates:
         *  Constant: '<S95>/Constant3'
         */
        rtb_Equal2_o = (*rtd_Board_ID == 3.0);

        /* Logic: '<S95>/NOT' */
        rtb_NOT_d = !rtb_Equal2_o;

        /* Outputs for Enabled SubSystem: '<S95>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_d, 148.0, &localB->Receptionsubstasks_e,
                           &localC->Receptionsubstasks_e,
                           &localDW->Receptionsubstasks_e, rtd_Local_Ticks,
                           &localDW->Msg_Rx_d, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx_l);

        /* End of Outputs for SubSystem: '<S95>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S95>/Transmission subtasks' */
        Transmissionsubtasks(rtb_Equal2_o, 148.0,
                             &localB->Transmissionsubtasks_g,
                             &localC->Transmissionsubtasks_g,
                             &localDW->Transmissionsubtasks_g, rtd_Board_ID,
                             rtd_Local_Ticks, rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2,
                             &localDW->Own_Vote, rtd_TxID_CAN1, rtd_TxID_CAN2,
                             rtd_Tx_msg_count_CAN1, rtd_Tx_msg_count_CAN2,
                             &localDW->basic_cycle_count);

        /* End of Outputs for SubSystem: '<S95>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S95>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S95>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S95>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_g.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_g,
              &localDW->Transmissionsubtasks_g);
          }

          /* End of Disable for SubSystem: '<S95>/Transmission subtasks' */

          /* Disable for Outport: '<S95>/Send CAN1' */
          localB->Transmissionsubtasks_g.Equal7_i = false;

          /* Disable for Outport: '<S95>/Receive CAN1' */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for Outport: '<S95>/Send CAN2' */
          localB->Transmissionsubtasks_g.Equal7 = false;

          /* Disable for Outport: '<S95>/Receive CAN2' */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S89>/COMM Task - Vote3' */

      /* Logic: '<S89>/OR1' incorporates:
       *  Constant: '<S89>/Constant'
       *  Constant: '<S89>/Constant28'
       *  Constant: '<S89>/Constant3'
       *  Constant: '<S89>/Constant9'
       *  Logic: '<S89>/AND10'
       *  Logic: '<S89>/AND4'
       *  Logic: '<S89>/AND7'
       *  RelationalOperator: '<S89>/GreaterThan18'
       *  RelationalOperator: '<S89>/GreaterThan19'
       *  RelationalOperator: '<S89>/GreaterThan24'
       *  RelationalOperator: '<S89>/GreaterThan25'
       *  RelationalOperator: '<S89>/GreaterThan8'
       *  RelationalOperator: '<S89>/GreaterThan9'
       */
      localB->OR1_o = (localB->COMMTaskSyncbc0_b.Equal7_a ||
                       localB->Transmissionsubtasks_ik.Equal7_i ||
                       localB->Transmissionsubtasks_l.Equal7_i ||
                       localB->Transmissionsubtasks_g.Equal7_i);

      /* Logic: '<S89>/OR2' */
      localB->OR2_p = (localB->COMMTaskSyncbc0_b.Receptionsubstasks_h.AND ||
                       localB->Receptionsubstasks_k.AND ||
                       localB->Receptionsubstasks_g.AND ||
                       localB->Receptionsubstasks_e.AND);

      /* Logic: '<S89>/OR3' */
      localB->OR3_b = (localB->COMMTaskSyncbc0_b.Receptionsubstasks_h.AND1 ||
                       localB->Receptionsubstasks_k.AND1 ||
                       localB->Receptionsubstasks_g.AND1 ||
                       localB->Receptionsubstasks_e.AND1);

      /* Logic: '<S89>/OR4' */
      localB->OR4_o = (localB->COMMTaskSyncbc0_b.Equal7 ||
                       localB->Transmissionsubtasks_ik.Equal7 ||
                       localB->Transmissionsubtasks_l.Equal7 ||
                       localB->Transmissionsubtasks_g.Equal7);
    } else {
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S100>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f) {
              /* Disable for Outport: '<S207>/CAN1_msg_coherent' */
              localB->AND_e = false;
              localDW->DemuxmessageCAN1andcheckcoher_f = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_me) {
              /* Disable for Outport: '<S208>/CAN2_msg_coherent' */
              localB->AND_b = false;
              localDW->DemuxmessageCAN1andcheckcohe_me = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S100>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S104>/Process_Messages1' */
          if (localDW->Process_Messages1_MODE) {
            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
              /* Disable for Outport: '<S242>/CAN1_msg_coherent' */
              localB->Equal_h = false;
              localDW->DemuxmessageCAN1andcheckcohe_dz = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g) {
              /* Disable for Outport: '<S243>/CAN2_msg_coherent' */
              localB->Equal_c = false;
              localDW->DemuxmessageCAN1andcheckcoher_g = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S104>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S106>/Process_Messages' */
          if (localDW->Process_Messages_MODE_mw) {
            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_p) {
              /* Disable for Outport: '<S271>/CAN1_msg_coherent' */
              localB->Equal_o3 = false;
              localDW->DemuxmessageCAN1andcheckcoher_p = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_d) {
              /* Disable for Outport: '<S272>/CAN2_msg_coherent' */
              localB->Equal_fk = false;
              localDW->DemuxmessageCAN1andcheckcoher_d = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_mw = false;
          }

          /* End of Disable for SubSystem: '<S106>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S108>/Process_Messages' */
          if (localDW->Process_Messages_MODE_f) {
            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_e) {
              /* Disable for Outport: '<S300>/CAN1_msg_coherent' */
              localB->Equal_dl = false;
              localDW->DemuxmessageCAN1andcheckcoher_e = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j) {
              /* Disable for Outport: '<S301>/CAN2_msg_coherent' */
              localB->Equal_k = false;
              localDW->DemuxmessageCAN1andcheckcoher_j = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_f = false;
          }

          /* End of Disable for SubSystem: '<S108>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
            &localDW->COMMTaskSyncbc0_b);
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S93>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S93>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S93>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_ik.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_ik,
              &localDW->Transmissionsubtasks_ik);
          }

          /* End of Disable for SubSystem: '<S93>/Transmission subtasks' */

          /* Disable for Outport: '<S93>/Send CAN1' */
          localB->Transmissionsubtasks_ik.Equal7_i = false;

          /* Disable for Outport: '<S93>/Receive CAN1' */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S93>/Send CAN2' */
          localB->Transmissionsubtasks_ik.Equal7 = false;

          /* Disable for Outport: '<S93>/Receive CAN2' */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S94>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S94>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S94>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S94>/Transmission subtasks' */

          /* Disable for Outport: '<S94>/Send CAN1' */
          localB->Transmissionsubtasks_l.Equal7_i = false;

          /* Disable for Outport: '<S94>/Receive CAN1' */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for Outport: '<S94>/Send CAN2' */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S94>/Receive CAN2' */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S95>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S95>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S95>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_g.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_g,
              &localDW->Transmissionsubtasks_g);
          }

          /* End of Disable for SubSystem: '<S95>/Transmission subtasks' */

          /* Disable for Outport: '<S95>/Send CAN1' */
          localB->Transmissionsubtasks_g.Equal7_i = false;

          /* Disable for Outport: '<S95>/Receive CAN1' */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for Outport: '<S95>/Send CAN2' */
          localB->Transmissionsubtasks_g.Equal7 = false;

          /* Disable for Outport: '<S95>/Receive CAN2' */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Vote3' */

        /* Disable for Outport: '<S89>/Send_Message_CAN1' */
        localB->OR1_o = false;

        /* Disable for Outport: '<S89>/Send_Message_CAN2' */
        localB->OR4_o = false;

        /* Disable for Outport: '<S89>/Receive_Message_CAN1' */
        localB->OR2_p = false;

        /* Disable for Outport: '<S89>/Receive_Message_CAN2' */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S41>/controller basic cycle 0' */

    /* Outputs for Enabled SubSystem: '<S41>/controller basic cycle 1' incorporates:
     *  EnablePort: '<S90>/Enable'
     */
    if (localDW->basic_cycle_count == 1.0) {
      if (!localDW->controllerbasiccycle1_MODE) {
        localDW->controllerbasiccycle1_MODE = true;
      }

      /* DataStoreRead: '<S90>/Data Store Read1' */
      rtb_DataStoreRead8_o5 = *rtd_Local_Ticks;

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Calculate Speed' incorporates:
       *  EnablePort: '<S332>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S332>/Calculate speed' incorporates:
       *  EnablePort: '<S527>/Enable'
       */
      if ((*rtd_Local_Ticks >= 144.0) && (*rtd_Local_Ticks < localC->Sum10) &&
          ((*rtd_Local_Ticks == 144.0) && ((!localDW->Error_SetValues_NotRX) &&
            (!localDW->Error_SensorValues_NotRX)))) {
        /* Gain: '<S527>/Gain4' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read'
         *  DataStoreRead: '<S527>/Data Store Read1'
         *  DataStoreRead: '<S527>/Data Store Read2'
         *  DataStoreRead: '<S527>/Data Store Read3'
         *  Gain: '<S527>/Gain'
         *  Gain: '<S527>/Gain1'
         *  Gain: '<S527>/Gain2'
         *  Gain: '<S527>/Gain3'
         *  Sum: '<S527>/Sum'
         */
        v_est_s = (((0.1 * localDW->theta_dot_fr + 0.1 * localDW->theta_dot_fl)
                    + 0.1 * localDW->theta_dot_ar) + 0.1 * localDW->theta_dot_al)
          * 0.25;

        /* Sum: '<S527>/Sum1' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read5'
         *  DataStoreWrite: '<S527>/Data Store Write'
         */
        rtb_Fix1_e = localDW->v_set_stored - v_est_s;

        /* Sum: '<S529>/Minus2' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read6'
         *  DataStoreRead: '<S527>/Data Store Read7'
         *  DataStoreRead: '<S527>/Data Store Read9'
         *  Gain: '<S529>/Gain'
         *  Product: '<S529>/Multiply'
         *  Sum: '<S529>/Minus'
         */
        v_integral_s = (rtb_Fix1_e + localDW->speed_error_prev) * 0.5 *
          localDW->rx_data_incr_time + localDW->speed_integral;

        /* Saturate: '<S527>/Saturation4' */
        if (v_integral_s > 10.0) {
          localDW->speed_integral = 10.0;
        } else if (v_integral_s < (-10.0)) {
          localDW->speed_integral = (-10.0);
        } else {
          localDW->speed_integral = v_integral_s;
        }

        /* End of Saturate: '<S527>/Saturation4' */

        /* Product: '<S528>/Divide' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read6'
         *  DataStoreRead: '<S527>/Data Store Read7'
         *  DataStoreWrite: '<S527>/Data Store Write3'
         *  Sum: '<S528>/Minus'
         */
        rtb_Minus_ch = (rtb_Fix1_e - localDW->speed_error_prev) /
          localDW->rx_data_incr_time;

        /* DataStoreWrite: '<S527>/Data Store Write9' incorporates:
         *  Constant: '<S527>/Constant1'
         */
        *rtd_Toggle_Pin_A0 = true;

        /* DataStoreWrite: '<S527>/Data Store Write1' */
        localDW->speed_error_prev = rtb_Fix1_e;

        /* Sum: '<S527>/Sum2' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read10'
         *  DataStoreRead: '<S527>/Data Store Read11'
         *  Gain: '<S527>/Gain5'
         *  Gain: '<S527>/Gain6'
         *  Gain: '<S527>/Gain7'
         */
        v_ctreff_s = (speed_k_p * rtb_Fix1_e + speed_k_i *
                      localDW->speed_integral) + speed_k_d * rtb_Minus_ch;

        /* Sum: '<S527>/Sum3' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read12'
         *  DataStoreWrite: '<S527>/Data Store Write4'
         */
        rtb_Plus2_p = v_ctreff_s + localDW->torque_fr_out;

        /* Saturate: '<S527>/Saturation' */
        if (rtb_Plus2_p > 5.0) {
          torque_fr_set_s = 5.0;
        } else if (rtb_Plus2_p < (-5.0)) {
          torque_fr_set_s = (-5.0);
        } else {
          torque_fr_set_s = rtb_Plus2_p;
        }

        /* End of Saturate: '<S527>/Saturation' */

        /* DataStoreWrite: '<S527>/Data Store Write6' */
        localDW->torque_fr_set = torque_fr_set_s;

        /* Sum: '<S527>/Sum4' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read14'
         *  DataStoreWrite: '<S527>/Data Store Write4'
         */
        rtb_Plus2_p = v_ctreff_s + localDW->torque_fl_out;

        /* Saturate: '<S527>/Saturation1' */
        if (rtb_Plus2_p > 5.0) {
          torque_fl_set_s = 5.0;
        } else if (rtb_Plus2_p < (-5.0)) {
          torque_fl_set_s = (-5.0);
        } else {
          torque_fl_set_s = rtb_Plus2_p;
        }

        /* End of Saturate: '<S527>/Saturation1' */

        /* DataStoreWrite: '<S527>/Data Store Write5' */
        localDW->torque_fl_set = torque_fl_set_s;

        /* Sum: '<S527>/Sum5' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read15'
         *  DataStoreWrite: '<S527>/Data Store Write4'
         */
        rtb_Plus2_p = v_ctreff_s + localDW->torque_ar_out;

        /* Saturate: '<S527>/Saturation2' */
        if (rtb_Plus2_p > 5.0) {
          torque_ar_set_s = 5.0;
        } else if (rtb_Plus2_p < (-5.0)) {
          torque_ar_set_s = (-5.0);
        } else {
          torque_ar_set_s = rtb_Plus2_p;
        }

        /* End of Saturate: '<S527>/Saturation2' */

        /* DataStoreWrite: '<S527>/Data Store Write7' */
        localDW->torque_ar_set = torque_ar_set_s;

        /* Sum: '<S527>/Sum6' incorporates:
         *  DataStoreRead: '<S527>/Data Store Read16'
         *  DataStoreWrite: '<S527>/Data Store Write4'
         */
        rtb_Plus2_p = v_ctreff_s + localDW->torque_al_out;

        /* Saturate: '<S527>/Saturation3' */
        if (rtb_Plus2_p > 5.0) {
          torque_al_set_s = 5.0;
        } else if (rtb_Plus2_p < (-5.0)) {
          torque_al_set_s = (-5.0);
        } else {
          torque_al_set_s = rtb_Plus2_p;
        }

        /* End of Saturate: '<S527>/Saturation3' */

        /* DataStoreWrite: '<S527>/Data Store Write8' */
        localDW->torque_al_set = torque_al_set_s;
      }

      /* End of Outputs for SubSystem: '<S332>/Calculate speed' */
      /* End of Outputs for SubSystem: '<S90>/COMP Task - Calculate Speed' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Calculate Steer' incorporates:
       *  EnablePort: '<S333>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S333>/Calculate steering' incorporates:
       *  EnablePort: '<S530>/Enable'
       */
      if ((*rtd_Local_Ticks >= 136.0) && (*rtd_Local_Ticks < localC->Sum8) && ((*
            rtd_Local_Ticks == 136.0) && ((!localDW->Error_SetValues_NotRX) && (
             !localDW->Error_SensorValues_NotRX)))) {
        /* DataStoreRead: '<S530>/Data Store Read1' */
        theta_fr_stored_s = localDW->theta_fr_stored;

        /* Product: '<S534>/Divide' incorporates:
         *  Constant: '<S530>/Constant'
         *  DataStoreRead: '<S530>/Data Store Read5'
         *  DataStoreWrite: '<S530>/Data Store Write4'
         *  Sum: '<S534>/Minus'
         */
        localDW->theta_dot_fr = (theta_fr_stored_s - 0.0) /
          localDW->rx_data_incr_time;

        /* DataStoreWrite: '<S530>/Data Store Write8' incorporates:
         *  Constant: '<S530>/Constant4'
         */
        *rtd_Toggle_Pin_A0 = true;

        /* DataStoreRead: '<S530>/Data Store Read' */
        theta_fl_stored_s = localDW->theta_fl_stored;

        /* Product: '<S533>/Divide' incorporates:
         *  Constant: '<S530>/Constant1'
         *  DataStoreRead: '<S530>/Data Store Read7'
         *  DataStoreWrite: '<S530>/Data Store Write5'
         *  Sum: '<S533>/Minus'
         */
        localDW->theta_dot_fl = (theta_fl_stored_s - 0.0) /
          localDW->rx_data_incr_time;

        /* Gain: '<S530>/Gain4' incorporates:
         *  DataStoreWrite: '<S530>/Data Store Write4'
         *  DataStoreWrite: '<S530>/Data Store Write5'
         *  Gain: '<S530>/Gain'
         *  Gain: '<S530>/Gain1'
         *  Sum: '<S530>/Minus'
         */
        delta_dot_f_s = (0.1 * localDW->theta_dot_fr - 0.1 *
                         localDW->theta_dot_fl) * 1.6666666666666667;

        /* DataStoreRead: '<S530>/Data Store Read2' */
        theta_ar_stored_s = localDW->theta_ar_stored;

        /* Product: '<S532>/Divide' incorporates:
         *  Constant: '<S530>/Constant2'
         *  DataStoreRead: '<S530>/Data Store Read9'
         *  DataStoreWrite: '<S530>/Data Store Write6'
         *  Sum: '<S532>/Minus'
         */
        localDW->theta_dot_ar = (theta_ar_stored_s - 0.0) /
          localDW->rx_data_incr_time;

        /* DataStoreRead: '<S530>/Data Store Read3' */
        theta_al_stored_s = localDW->theta_al_stored;

        /* Product: '<S531>/Divide' incorporates:
         *  Constant: '<S530>/Constant3'
         *  DataStoreRead: '<S530>/Data Store Read12'
         *  DataStoreWrite: '<S530>/Data Store Write7'
         *  Sum: '<S531>/Minus'
         */
        localDW->theta_dot_al = (theta_al_stored_s - 0.0) /
          localDW->rx_data_incr_time;

        /* Gain: '<S530>/Gain5' incorporates:
         *  DataStoreWrite: '<S530>/Data Store Write6'
         *  DataStoreWrite: '<S530>/Data Store Write7'
         *  Gain: '<S530>/Gain2'
         *  Gain: '<S530>/Gain3'
         *  Sum: '<S530>/Minus1'
         */
        delta_dot_a_s = (0.1 * localDW->theta_dot_ar - 0.1 *
                         localDW->theta_dot_al) * 1.6666666666666667;

        /* DataStoreRead: '<S530>/Data Store Read20' */
        delta_f_est_current_s = localDW->delta_f_est;

        /* DataStoreRead: '<S530>/Data Store Read22' */
        delta_dot_f_prev_s = localDW->delta_dot_f_prev;

        /* DataStoreRead: '<S530>/Data Store Read16' */
        rx_data_t_steerF_s = localDW->rx_data_incr_time;

        /* Sum: '<S536>/Minus2' incorporates:
         *  Gain: '<S536>/Gain'
         *  Product: '<S536>/Multiply'
         *  Sum: '<S536>/Minus'
         */
        delta_f_est_s = (delta_dot_f_s + delta_dot_f_prev_s) * 0.5 *
          rx_data_t_steerF_s + delta_f_est_current_s;

        /* Saturate: '<S530>/Saturation' */
        if (delta_f_est_s > 1.0) {
          localDW->delta_f_est = 1.0;
        } else if (delta_f_est_s < (-1.0)) {
          localDW->delta_f_est = (-1.0);
        } else {
          localDW->delta_f_est = delta_f_est_s;
        }

        /* End of Saturate: '<S530>/Saturation' */

        /* DataStoreWrite: '<S530>/Data Store Write2' */
        localDW->delta_dot_f_prev = delta_dot_f_s;

        /* DataStoreRead: '<S530>/Data Store Read21' */
        delta_a_est_current_s = localDW->delta_a_est;

        /* DataStoreRead: '<S530>/Data Store Read23' */
        delta_dot_a_prev_s = localDW->delta_dot_a_prev;

        /* DataStoreRead: '<S530>/Data Store Read18' */
        rx_data_t_steerA_s = localDW->rx_data_incr_time;

        /* Sum: '<S535>/Minus2' incorporates:
         *  Gain: '<S535>/Gain'
         *  Product: '<S535>/Multiply'
         *  Sum: '<S535>/Minus'
         */
        delta_a_est_s = (delta_dot_a_s + delta_dot_a_prev_s) * 0.5 *
          rx_data_t_steerA_s + delta_a_est_current_s;

        /* Saturate: '<S530>/Saturation1' */
        if (delta_a_est_s > 1.0) {
          localDW->delta_a_est = 1.0;
        } else if (delta_a_est_s < (-1.0)) {
          localDW->delta_a_est = (-1.0);
        } else {
          localDW->delta_a_est = delta_a_est_s;
        }

        /* End of Saturate: '<S530>/Saturation1' */

        /* DataStoreWrite: '<S530>/Data Store Write3' */
        localDW->delta_dot_a_prev = delta_dot_a_s;
      }

      /* End of Outputs for SubSystem: '<S333>/Calculate steering' */
      /* End of Outputs for SubSystem: '<S90>/COMP Task - Calculate Steer' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Calculate Torque' incorporates:
       *  EnablePort: '<S334>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S334>/Calculate torque' incorporates:
       *  EnablePort: '<S537>/Enable'
       */
      if ((*rtd_Local_Ticks >= 140.0) && (*rtd_Local_Ticks < localC->Sum9) && ((*
            rtd_Local_Ticks == 140.0) && ((!localDW->Error_SetValues_NotRX) && (
             !localDW->Error_SensorValues_NotRX)))) {
        /* Sum: '<S537>/Minus' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read2'
         *  DataStoreRead: '<S537>/Data Store Read3'
         */
        rtb_Fix1_e = localDW->delta_f_set_stored - localDW->delta_f_est;

        /* Sum: '<S537>/Minus1' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read4'
         *  DataStoreRead: '<S537>/Data Store Read5'
         */
        rtb_Minus_ch = localDW->delta_a_set_stored - localDW->delta_a_est;

        /* Sum: '<S541>/Minus2' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read6'
         *  DataStoreRead: '<S537>/Data Store Read8'
         *  DataStoreRead: '<S537>/Data Store Read9'
         *  Gain: '<S541>/Gain'
         *  Product: '<S541>/Multiply'
         *  Sum: '<S541>/Minus'
         */
        rtb_Plus2_p = (rtb_Fix1_e + localDW->delta_f_error_prev) * 0.5 *
          localDW->rx_data_incr_time + localDW->torque_fr_integral;

        /* Saturate: '<S537>/Saturation' */
        if (rtb_Plus2_p > 5.0) {
          localDW->torque_fr_integral = 5.0;
        } else if (rtb_Plus2_p < (-5.0)) {
          localDW->torque_fr_integral = (-5.0);
        } else {
          localDW->torque_fr_integral = rtb_Plus2_p;
        }

        /* End of Saturate: '<S537>/Saturation' */

        /* Product: '<S539>/Divide' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read6'
         *  DataStoreRead: '<S537>/Data Store Read9'
         *  DataStoreWrite: '<S537>/Data Store Write6'
         *  Sum: '<S539>/Minus'
         */
        rtb_Plus1_b = (rtb_Fix1_e - localDW->delta_f_error_prev) /
          localDW->rx_data_incr_time;

        /* Sum: '<S540>/Minus2' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read10'
         *  DataStoreRead: '<S537>/Data Store Read11'
         *  DataStoreRead: '<S537>/Data Store Read6'
         *  Gain: '<S540>/Gain'
         *  Product: '<S540>/Multiply'
         *  Sum: '<S540>/Minus'
         */
        rtb_Plus2_p = (rtb_Minus_ch + localDW->delta_a_error_prev) * 0.5 *
          localDW->rx_data_incr_time + localDW->torque_ar_integral;

        /* Saturate: '<S537>/Saturation1' */
        if (rtb_Plus2_p > 5.0) {
          localDW->torque_ar_integral = 5.0;
        } else if (rtb_Plus2_p < (-5.0)) {
          localDW->torque_ar_integral = (-5.0);
        } else {
          localDW->torque_ar_integral = rtb_Plus2_p;
        }

        /* End of Saturate: '<S537>/Saturation1' */

        /* Product: '<S538>/Divide' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read11'
         *  DataStoreRead: '<S537>/Data Store Read6'
         *  DataStoreWrite: '<S537>/Data Store Write8'
         *  Sum: '<S538>/Minus'
         */
        rtb_Plus2_p = (rtb_Minus_ch - localDW->delta_a_error_prev) /
          localDW->rx_data_incr_time;

        /* DataStoreWrite: '<S537>/Data Store Write5' */
        localDW->delta_f_error_prev = rtb_Fix1_e;

        /* DataStoreWrite: '<S537>/Data Store Write9' */
        localDW->delta_a_error_prev = rtb_Minus_ch;

        /* DataStoreWrite: '<S537>/Data Store Write10' incorporates:
         *  Constant: '<S537>/Constant1'
         */
        *rtd_Toggle_Pin_A0 = true;

        /* Sum: '<S537>/Sum' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read12'
         *  DataStoreRead: '<S537>/Data Store Read13'
         *  DataStoreWrite: '<S537>/Data Store Write'
         *  Gain: '<S537>/Gain2'
         *  Gain: '<S537>/Gain3'
         *  Gain: '<S537>/Gain4'
         */
        localDW->torque_fr_out = (torque_f_k_p * rtb_Fix1_e + torque_f_k_i *
          localDW->torque_fr_integral) + torque_f_k_d * rtb_Plus1_b;

        /* Sum: '<S537>/Sum1' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read14'
         *  DataStoreRead: '<S537>/Data Store Read15'
         *  DataStoreWrite: '<S537>/Data Store Write2'
         *  Gain: '<S537>/Gain5'
         *  Gain: '<S537>/Gain6'
         *  Gain: '<S537>/Gain7'
         */
        localDW->torque_ar_out = (torque_a_k_p * rtb_Minus_ch + torque_a_k_i *
          localDW->torque_ar_integral) + torque_a_k_d * rtb_Plus2_p;

        /* Gain: '<S537>/Gain' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read'
         *  DataStoreWrite: '<S537>/Data Store Write1'
         */
        localDW->torque_fl_out = (-1.0) * localDW->torque_fr_out;

        /* Gain: '<S537>/Gain1' incorporates:
         *  DataStoreRead: '<S537>/Data Store Read1'
         *  DataStoreWrite: '<S537>/Data Store Write3'
         */
        localDW->torque_al_out = (-1.0) * localDW->torque_ar_out;
      }

      /* End of Outputs for SubSystem: '<S334>/Calculate torque' */
      /* End of Outputs for SubSystem: '<S90>/COMP Task - Calculate Torque' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Reset Variables BC1' incorporates:
       *  EnablePort: '<S336>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S336>/Reset Variables' incorporates:
       *  EnablePort: '<S550>/Enable'
       */
      if ((*rtd_Local_Ticks >= 284.0) && (*rtd_Local_Ticks < localC->Sum18) && (*
           rtd_Local_Ticks == 284.0)) {
        /* DataStoreWrite: '<S550>/Data Store Write1' incorporates:
         *  Constant: '<S550>/Constant'
         */
        localDW->BC1_Sync_processed = false;

        /* DataStoreWrite: '<S550>/Data Store Write3' incorporates:
         *  Constant: '<S550>/Constant3'
         */
        *rtd_Toggle_Pin_A0 = true;
      }

      /* End of Outputs for SubSystem: '<S336>/Reset Variables' */
      /* End of Outputs for SubSystem: '<S90>/COMP Task - Reset Variables BC1' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' incorporates:
       *  EnablePort: '<S337>/Enable'
       */
      if ((*rtd_Local_Ticks >= 188.0) && (*rtd_Local_Ticks < localC->Sum13)) {
        if (!localDW->COMPTaskRx_Output_Control1_Chec) {
          localDW->COMPTaskRx_Output_Control1_Chec = true;
        }

        /* Switch: '<S551>/Switch' incorporates:
         *  Constant: '<S551>/Constant4'
         *  Constant: '<S551>/Constant5'
         *  Constant: '<S551>/Constant8'
         *  RelationalOperator: '<S551>/Equal4'
         */
        if (*rtd_Board_ID == 1.0) {
          rtb_Fix1_e = 2.0;
        } else {
          rtb_Fix1_e = 1.0;
        }

        /* End of Switch: '<S551>/Switch' */

        /* RelationalOperator: '<S337>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 188.0);

        /* RelationalOperator: '<S337>/Equal16' incorporates:
         *  Constant: '<S337>/Constant78'
         *  DataStoreRead: '<S337>/Data Store Read30'
         */
        rtb_AND1_g0 = (localDW->Role_ID == 1.0);

        /* Outputs for Enabled SubSystem: '<S337>/Process_Messages' incorporates:
         *  EnablePort: '<S552>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_h) {
            localDW->Process_Messages_MODE_h = true;
          }

          /* Outputs for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S554>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcohe_ce) {
              localDW->DemuxmessageCAN1andcheckcohe_ce = true;
            }

            /* Outputs for Atomic SubSystem: '<S556>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_ew);

            /* End of Outputs for SubSystem: '<S556>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S556>/Bit Shift1' */
            /* MATLAB Function: '<S559>/bit_shift' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S564>:1' */
            /* '<S564>:1:8' */
            Rx_mc_outcontrol1_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_ew.y >>
              5);

            /* End of Outputs for SubSystem: '<S556>/Bit Shift1' */

            /* Switch: '<S557>/Switch' incorporates:
             *  Constant: '<S557>/Constant'
             *  Constant: '<S557>/Constant1'
             *  DataStoreRead: '<S557>/Data Store Read1'
             *  DataStoreWrite: '<S557>/Data Store Write'
             *  RelationalOperator: '<S557>/GreaterThan'
             *  Sum: '<S557>/Plus'
             */
            if (Rx_mc_outcontrol1_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S557>/Switch' */

            /* SignalConversion: '<S554>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            localB->Buffer_2_it3ijayq1ie = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S554>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            localB->Buffer_3_pbhdvltovrl = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S554>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            localB->Buffer_4_krhrmip3cqz = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S554>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            localB->Buffer_5_bna4sop3eop = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S554>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            localB->Buffer_6_dincyjkp43q = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S554>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            localB->Buffer_7_hzjkpfzb3wq = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S554>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            localB->Buffer_8_prbyejt0irl = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S554>/Cast To Double' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            Rx_temporal_outcontrol1_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_j = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S556>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_b);

            /* End of Outputs for SubSystem: '<S556>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S556>/Bit Shift2' */
            /* MATLAB Function: '<S560>/bit_shift' incorporates:
             *  Constant: '<S554>/Constant'
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S565>:1' */
            /* '<S565>:1:8' */
            Rx_id_outcontrol1_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_b.y >>
              4);

            /* End of Outputs for SubSystem: '<S556>/Bit Shift2' */

            /* RelationalOperator: '<S554>/Equal' */
            localB->Equal_i2 = (Rx_id_outcontrol1_CAN1 == rtb_Fix1_e);

            /* Outputs for Atomic SubSystem: '<S556>/Bit Shift' */
            /* MATLAB Function: '<S558>/bit_shift' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S563>:1' */
            /* '<S563>:1:8' */
            Rx_bc_outcontrol1_CAN1 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN1->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S556>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcohe_ce) {
              /* Disable for Outport: '<S554>/CAN1_msg_coherent' */
              localB->Equal_i2 = false;
              localDW->DemuxmessageCAN1andcheckcohe_ce = false;
            }
          }

          /* End of Outputs for SubSystem: '<S552>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S555>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_a) {
              localDW->DemuxmessageCAN1andcheckcoher_a = true;
            }

            /* Outputs for Atomic SubSystem: '<S568>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_g);

            /* End of Outputs for SubSystem: '<S568>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S568>/Bit Shift1' */
            /* MATLAB Function: '<S571>/bit_shift' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S576>:1' */
            /* '<S576>:1:8' */
            Rx_mc_outcontrol1_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_g.y >>
              5);

            /* End of Outputs for SubSystem: '<S568>/Bit Shift1' */

            /* Switch: '<S569>/Switch' incorporates:
             *  Constant: '<S569>/Constant'
             *  Constant: '<S569>/Constant1'
             *  DataStoreRead: '<S569>/Data Store Read1'
             *  DataStoreWrite: '<S569>/Data Store Write'
             *  RelationalOperator: '<S569>/GreaterThan'
             *  Sum: '<S569>/Plus'
             */
            if (Rx_mc_outcontrol1_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S569>/Switch' */

            /* SignalConversion: '<S555>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            localB->Buffer_2_it3ijayq1i = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S555>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            localB->Buffer_3_pbhdvltovr = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S555>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            localB->Buffer_4_krhrmip3cq = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S555>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            localB->Buffer_5_bna4sop3eo = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S555>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            localB->Buffer_6_dincyjkp43 = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S555>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            localB->Buffer_7_hzjkpfzb3w = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S555>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            localB->Buffer_8_prbyejt0ir = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S555>/Cast To Double' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            Rx_temporal_outcontrol1_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_n = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S568>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_e);

            /* End of Outputs for SubSystem: '<S568>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S568>/Bit Shift2' */
            /* MATLAB Function: '<S572>/bit_shift' incorporates:
             *  Constant: '<S555>/Constant'
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S577>:1' */
            /* '<S577>:1:8' */
            Rx_id_outcontrol1_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_e.y >>
              4);

            /* End of Outputs for SubSystem: '<S568>/Bit Shift2' */

            /* RelationalOperator: '<S555>/Equal' */
            localB->Equal_b = (Rx_id_outcontrol1_CAN2 == rtb_Fix1_e);

            /* Outputs for Atomic SubSystem: '<S568>/Bit Shift' */
            /* MATLAB Function: '<S570>/bit_shift' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S575>:1' */
            /* '<S575>:1:8' */
            Rx_bc_outcontrol1_CAN2 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN2->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S568>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_a) {
              /* Disable for Outport: '<S555>/CAN2_msg_coherent' */
              localB->Equal_b = false;
              localDW->DemuxmessageCAN1andcheckcoher_a = false;
            }
          }

          /* End of Outputs for SubSystem: '<S552>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S552>/Switch' incorporates:
           *  Constant: '<S554>/Constant'
           *  Constant: '<S555>/Constant'
           *  DataStoreRead: '<S337>/Data Store Read'
           *  DataStoreRead: '<S337>/Data Store Read3'
           *  DataStoreWrite: '<S552>/Data Store Write'
           */
          if (localB->Equal_i2) {
            localDW->output_control1_msg.Buffer_1 = localB->Constant_j;
            localDW->output_control1_msg.Buffer_2 = localB->Buffer_2_it3ijayq1ie;
            localDW->output_control1_msg.Buffer_3 = localB->Buffer_3_pbhdvltovrl;
            localDW->output_control1_msg.Buffer_4 = localB->Buffer_4_krhrmip3cqz;
            localDW->output_control1_msg.Buffer_5 = localB->Buffer_5_bna4sop3eop;
            localDW->output_control1_msg.Buffer_6 = localB->Buffer_6_dincyjkp43q;
            localDW->output_control1_msg.Buffer_7 = localB->Buffer_7_hzjkpfzb3wq;
            localDW->output_control1_msg.Buffer_8 = localB->Buffer_8_prbyejt0irl;
          } else {
            localDW->output_control1_msg.Buffer_1 = localB->Constant_n;
            localDW->output_control1_msg.Buffer_2 = localB->Buffer_2_it3ijayq1i;
            localDW->output_control1_msg.Buffer_3 = localB->Buffer_3_pbhdvltovr;
            localDW->output_control1_msg.Buffer_4 = localB->Buffer_4_krhrmip3cq;
            localDW->output_control1_msg.Buffer_5 = localB->Buffer_5_bna4sop3eo;
            localDW->output_control1_msg.Buffer_6 = localB->Buffer_6_dincyjkp43;
            localDW->output_control1_msg.Buffer_7 = localB->Buffer_7_hzjkpfzb3w;
            localDW->output_control1_msg.Buffer_8 = localB->Buffer_8_prbyejt0ir;
          }

          /* End of Switch: '<S552>/Switch' */

          /* Sum: '<S552>/Sum' incorporates:
           *  Constant: '<S552>/Constant'
           *  Constant: '<S552>/delay_estimation_1'
           *  Constant: '<S90>/Constant38'
           *  Product: '<S552>/Multiply'
           */
          expected_LT_outcontrol1_CAN1_s = (5.0 * (real_T)Rx_mc_outcontrol1_CAN1
            + 148.0) + 1.0;

          /* Sum: '<S552>/Sum1' incorporates:
           *  Constant: '<S552>/Constant1'
           *  Constant: '<S552>/delay_estimation_2'
           *  Constant: '<S90>/Constant38'
           *  Product: '<S552>/Multiply1'
           */
          expected_LT_outcontrol1_CAN2_s = (8.0 * (real_T)Rx_mc_outcontrol1_CAN2
            + 148.0) + 1.0;

          /* DataStoreWrite: '<S552>/Data Store Write3' incorporates:
           *  Constant: '<S552>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S552>/Data Store Read' */
          Rx_msg_ticks_outcontrol1_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S552>/OR' */
          out1_rx_s = (localB->Equal_i2 || localB->Equal_b);

          /* DataStoreWrite: '<S552>/Data Store Write4' */
          localDW->output_control1_rx = out1_rx_s;

          /* DataStoreRead: '<S552>/Data Store Read1' */
          Rx_msg_ticks_outcontrol1_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S552>/Switch1' incorporates:
           *  Sum: '<S552>/Minus'
           *  Sum: '<S552>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_outcontrol1_s = expected_LT_outcontrol1_CAN1_s - (real_T)
              Rx_msg_ticks_outcontrol1_CAN1_s;
          } else {
            Desync_outcontrol1_s = expected_LT_outcontrol1_CAN2_s - (real_T)
              Rx_msg_ticks_outcontrol1_CAN2_s;
          }

          /* End of Switch: '<S552>/Switch1' */
        } else {
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ce) {
              /* Disable for Outport: '<S554>/CAN1_msg_coherent' */
              localB->Equal_i2 = false;
              localDW->DemuxmessageCAN1andcheckcohe_ce = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_a) {
              /* Disable for Outport: '<S555>/CAN2_msg_coherent' */
              localB->Equal_b = false;
              localDW->DemuxmessageCAN1andcheckcoher_a = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }
        }

        /* End of Outputs for SubSystem: '<S337>/Process_Messages' */

        /* Logic: '<S337>/AND1' incorporates:
         *  Logic: '<S337>/AND'
         *  Logic: '<S337>/NOT'
         */
        rtb_AND1_c = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S337>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_c, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S337>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskRx_Output_Control1_Chec) {
          /* Disable for Enabled SubSystem: '<S337>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ce) {
              /* Disable for Outport: '<S554>/CAN1_msg_coherent' */
              localB->Equal_i2 = false;
              localDW->DemuxmessageCAN1andcheckcohe_ce = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_a) {
              /* Disable for Outport: '<S555>/CAN2_msg_coherent' */
              localB->Equal_b = false;
              localDW->DemuxmessageCAN1andcheckcoher_a = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S337>/Process_Messages' */
          localDW->COMPTaskRx_Output_Control1_Chec = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' incorporates:
       *  EnablePort: '<S338>/Enable'
       */
      if ((*rtd_Local_Ticks >= 232.0) && (*rtd_Local_Ticks < localC->Sum14)) {
        if (!localDW->COMPTaskRx_Output_Control2_Chec) {
          localDW->COMPTaskRx_Output_Control2_Chec = true;
        }

        /* Switch: '<S580>/Switch' incorporates:
         *  Constant: '<S580>/Constant4'
         *  Constant: '<S580>/Constant5'
         *  Constant: '<S580>/Constant8'
         *  RelationalOperator: '<S580>/Equal4'
         */
        if (*rtd_Board_ID == 3.0) {
          rtb_Fix1_e = 2.0;
        } else {
          rtb_Fix1_e = 3.0;
        }

        /* End of Switch: '<S580>/Switch' */

        /* RelationalOperator: '<S338>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 232.0);

        /* RelationalOperator: '<S338>/Equal16' incorporates:
         *  Constant: '<S338>/Constant78'
         *  DataStoreRead: '<S338>/Data Store Read30'
         */
        rtb_AND1_g0 = (localDW->Role_ID == 1.0);

        /* Outputs for Enabled SubSystem: '<S338>/Process_Messages' incorporates:
         *  EnablePort: '<S581>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_g) {
            localDW->Process_Messages_MODE_g = true;
          }

          /* Outputs for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S583>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcohe_nj) {
              localDW->DemuxmessageCAN1andcheckcohe_nj = true;
            }

            /* Outputs for Atomic SubSystem: '<S585>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_ih);

            /* End of Outputs for SubSystem: '<S585>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S585>/Bit Shift1' */
            /* MATLAB Function: '<S588>/bit_shift' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S593>:1' */
            /* '<S593>:1:8' */
            Rx_mc_outcontrol2_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_ih.y >>
              5);

            /* End of Outputs for SubSystem: '<S585>/Bit Shift1' */

            /* Switch: '<S586>/Switch' incorporates:
             *  Constant: '<S586>/Constant'
             *  Constant: '<S586>/Constant1'
             *  DataStoreRead: '<S586>/Data Store Read1'
             *  DataStoreWrite: '<S586>/Data Store Write'
             *  RelationalOperator: '<S586>/GreaterThan'
             *  Sum: '<S586>/Plus'
             */
            if (Rx_mc_outcontrol2_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S586>/Switch' */

            /* SignalConversion: '<S583>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            localB->Buffer_2_it3ijayq1 = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S583>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            localB->Buffer_3_pbhdvltov = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S583>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            localB->Buffer_4_krhrmip3c = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S583>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            localB->Buffer_5_bna4sop3e = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S583>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            localB->Buffer_6_dincyjkp4 = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S583>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            localB->Buffer_7_hzjkpfzb3 = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S583>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            localB->Buffer_8_prbyejt0i = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S583>/Cast To Double' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            Rx_temporal_outcontrol2_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_p3 = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S585>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_cz);

            /* End of Outputs for SubSystem: '<S585>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S585>/Bit Shift2' */
            /* MATLAB Function: '<S589>/bit_shift' incorporates:
             *  Constant: '<S583>/Constant'
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S594>:1' */
            /* '<S594>:1:8' */
            Rx_id_outcontrol2_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_cz.y >>
              4);

            /* End of Outputs for SubSystem: '<S585>/Bit Shift2' */

            /* RelationalOperator: '<S583>/Equal' */
            localB->Equal_i = (Rx_id_outcontrol2_CAN1 == rtb_Fix1_e);

            /* Outputs for Atomic SubSystem: '<S585>/Bit Shift' */
            /* MATLAB Function: '<S587>/bit_shift' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S592>:1' */
            /* '<S592>:1:8' */
            Rx_bc_outcontrol2_CAN1 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN1->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S585>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcohe_nj) {
              /* Disable for Outport: '<S583>/CAN1_msg_coherent' */
              localB->Equal_i = false;
              localDW->DemuxmessageCAN1andcheckcohe_nj = false;
            }
          }

          /* End of Outputs for SubSystem: '<S581>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S584>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_n) {
              localDW->DemuxmessageCAN1andcheckcoher_n = true;
            }

            /* Outputs for Atomic SubSystem: '<S597>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_m);

            /* End of Outputs for SubSystem: '<S597>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S597>/Bit Shift1' */
            /* MATLAB Function: '<S600>/bit_shift' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S605>:1' */
            /* '<S605>:1:8' */
            Rx_mc_outcontrol2_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_m.y >>
              5);

            /* End of Outputs for SubSystem: '<S597>/Bit Shift1' */

            /* Switch: '<S598>/Switch' incorporates:
             *  Constant: '<S598>/Constant'
             *  Constant: '<S598>/Constant1'
             *  DataStoreRead: '<S598>/Data Store Read1'
             *  DataStoreWrite: '<S598>/Data Store Write'
             *  RelationalOperator: '<S598>/GreaterThan'
             *  Sum: '<S598>/Plus'
             */
            if (Rx_mc_outcontrol2_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S598>/Switch' */

            /* SignalConversion: '<S584>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            localB->Buffer_2_it3ijayq = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S584>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            localB->Buffer_3_pbhdvlto = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S584>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            localB->Buffer_4_krhrmip3 = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S584>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            localB->Buffer_5_bna4sop3 = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S584>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            localB->Buffer_6_dincyjkp = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S584>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            localB->Buffer_7_hzjkpfzb = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S584>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            localB->Buffer_8_prbyejt0 = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S584>/Cast To Double' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            Rx_temporal_outcontrol2_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_p = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S597>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_kr);

            /* End of Outputs for SubSystem: '<S597>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S597>/Bit Shift2' */
            /* MATLAB Function: '<S601>/bit_shift' incorporates:
             *  Constant: '<S584>/Constant'
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S606>:1' */
            /* '<S606>:1:8' */
            Rx_id_outcontrol2_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_kr.y >>
              4);

            /* End of Outputs for SubSystem: '<S597>/Bit Shift2' */

            /* RelationalOperator: '<S584>/Equal' */
            localB->Equal_o = (Rx_id_outcontrol2_CAN2 == rtb_Fix1_e);

            /* Outputs for Atomic SubSystem: '<S597>/Bit Shift' */
            /* MATLAB Function: '<S599>/bit_shift' incorporates:
             *  DataStoreRead: '<S338>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S604>:1' */
            /* '<S604>:1:8' */
            Rx_bc_outcontrol2_CAN2 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN2->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S597>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_n) {
              /* Disable for Outport: '<S584>/CAN2_msg_coherent' */
              localB->Equal_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_n = false;
            }
          }

          /* End of Outputs for SubSystem: '<S581>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S581>/Switch' incorporates:
           *  Constant: '<S583>/Constant'
           *  Constant: '<S584>/Constant'
           *  DataStoreRead: '<S338>/Data Store Read'
           *  DataStoreRead: '<S338>/Data Store Read3'
           *  DataStoreWrite: '<S581>/Data Store Write'
           */
          if (localB->Equal_i) {
            localDW->output_control2_msg.Buffer_1 = localB->Constant_p3;
            localDW->output_control2_msg.Buffer_2 = localB->Buffer_2_it3ijayq1;
            localDW->output_control2_msg.Buffer_3 = localB->Buffer_3_pbhdvltov;
            localDW->output_control2_msg.Buffer_4 = localB->Buffer_4_krhrmip3c;
            localDW->output_control2_msg.Buffer_5 = localB->Buffer_5_bna4sop3e;
            localDW->output_control2_msg.Buffer_6 = localB->Buffer_6_dincyjkp4;
            localDW->output_control2_msg.Buffer_7 = localB->Buffer_7_hzjkpfzb3;
            localDW->output_control2_msg.Buffer_8 = localB->Buffer_8_prbyejt0i;
          } else {
            localDW->output_control2_msg.Buffer_1 = localB->Constant_p;
            localDW->output_control2_msg.Buffer_2 = localB->Buffer_2_it3ijayq;
            localDW->output_control2_msg.Buffer_3 = localB->Buffer_3_pbhdvlto;
            localDW->output_control2_msg.Buffer_4 = localB->Buffer_4_krhrmip3;
            localDW->output_control2_msg.Buffer_5 = localB->Buffer_5_bna4sop3;
            localDW->output_control2_msg.Buffer_6 = localB->Buffer_6_dincyjkp;
            localDW->output_control2_msg.Buffer_7 = localB->Buffer_7_hzjkpfzb;
            localDW->output_control2_msg.Buffer_8 = localB->Buffer_8_prbyejt0;
          }

          /* End of Switch: '<S581>/Switch' */

          /* Sum: '<S581>/Sum' incorporates:
           *  Constant: '<S581>/Constant'
           *  Constant: '<S581>/delay_estimation_1'
           *  Constant: '<S90>/Constant37'
           *  Product: '<S581>/Multiply'
           */
          expected_LT_outcontrol2_CAN1_s = (5.0 * (real_T)Rx_mc_outcontrol2_CAN1
            + 192.0) + 1.0;

          /* Sum: '<S581>/Sum1' incorporates:
           *  Constant: '<S581>/Constant1'
           *  Constant: '<S581>/delay_estimation_2'
           *  Constant: '<S90>/Constant37'
           *  Product: '<S581>/Multiply1'
           */
          expected_LT_outcontrol2_CAN2_s = (8.0 * (real_T)Rx_mc_outcontrol2_CAN2
            + 192.0) + 1.0;

          /* DataStoreWrite: '<S581>/Data Store Write3' incorporates:
           *  Constant: '<S581>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S581>/Data Store Read' */
          Rx_msg_ticks_outcontrol2_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S581>/OR' */
          out2_rx_s = (localB->Equal_i || localB->Equal_o);

          /* DataStoreWrite: '<S581>/Data Store Write4' */
          localDW->output_control2_rx = out2_rx_s;

          /* DataStoreRead: '<S581>/Data Store Read1' */
          Rx_msg_ticks_outcontrol2_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S581>/Switch1' incorporates:
           *  Sum: '<S581>/Minus'
           *  Sum: '<S581>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_outcontrol2_s = expected_LT_outcontrol2_CAN1_s - (real_T)
              Rx_msg_ticks_outcontrol2_CAN1_s;
          } else {
            Desync_outcontrol2_s = expected_LT_outcontrol2_CAN2_s - (real_T)
              Rx_msg_ticks_outcontrol2_CAN2_s;
          }

          /* End of Switch: '<S581>/Switch1' */
        } else {
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_nj) {
              /* Disable for Outport: '<S583>/CAN1_msg_coherent' */
              localB->Equal_i = false;
              localDW->DemuxmessageCAN1andcheckcohe_nj = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n) {
              /* Disable for Outport: '<S584>/CAN2_msg_coherent' */
              localB->Equal_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_n = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }
        }

        /* End of Outputs for SubSystem: '<S338>/Process_Messages' */

        /* Logic: '<S338>/AND1' incorporates:
         *  Logic: '<S338>/AND'
         *  Logic: '<S338>/NOT'
         */
        rtb_AND1_aq = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S338>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_aq, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S338>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskRx_Output_Control2_Chec) {
          /* Disable for Enabled SubSystem: '<S338>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_nj) {
              /* Disable for Outport: '<S583>/CAN1_msg_coherent' */
              localB->Equal_i = false;
              localDW->DemuxmessageCAN1andcheckcohe_nj = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n) {
              /* Disable for Outport: '<S584>/CAN2_msg_coherent' */
              localB->Equal_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_n = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S338>/Process_Messages' */
          localDW->COMPTaskRx_Output_Control2_Chec = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' incorporates:
       *  EnablePort: '<S339>/Enable'
       */
      if ((*rtd_Local_Ticks >= 208.0) && (*rtd_Local_Ticks < localC->Sum17)) {
        if (!localDW->COMPTaskRx_Output_Emulator_Chec) {
          localDW->COMPTaskRx_Output_Emulator_Chec = true;
        }

        /* RelationalOperator: '<S339>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 208.0);

        /* RelationalOperator: '<S339>/Equal15' incorporates:
         *  Constant: '<S339>/Constant93'
         */
        rtb_AND1_g0 = (*rtd_Board_ID == 5.0);

        /* Outputs for Enabled SubSystem: '<S339>/Process_Messages' incorporates:
         *  EnablePort: '<S609>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_o) {
            localDW->Process_Messages_MODE_o = true;
          }

          /* Outputs for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S611>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcohe_h0) {
              localDW->DemuxmessageCAN1andcheckcohe_h0 = true;
            }

            /* Outputs for Atomic SubSystem: '<S613>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_it);

            /* End of Outputs for SubSystem: '<S613>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S613>/Bit Shift1' */
            /* MATLAB Function: '<S616>/bit_shift' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S621>:1' */
            /* '<S621>:1:8' */
            Rx_mc_outemulator_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_it.y >>
              5);

            /* End of Outputs for SubSystem: '<S613>/Bit Shift1' */

            /* Switch: '<S614>/Switch' incorporates:
             *  Constant: '<S614>/Constant'
             *  Constant: '<S614>/Constant1'
             *  DataStoreRead: '<S614>/Data Store Read1'
             *  DataStoreWrite: '<S614>/Data Store Write'
             *  RelationalOperator: '<S614>/GreaterThan'
             *  Sum: '<S614>/Plus'
             */
            if (Rx_mc_outemulator_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S614>/Switch' */

            /* SignalConversion: '<S611>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            localB->Buffer_2_it3ijay = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S611>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            localB->Buffer_3_pbhdvlt = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S611>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            localB->Buffer_4_krhrmip = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S611>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            localB->Buffer_5_bna4sop = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S611>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            localB->Buffer_6_dincyjk = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S611>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            localB->Buffer_7_hzjkpfz = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S611>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            localB->Buffer_8_prbyejt = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S611>/Cast To Double' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            Rx_temporal_outemulator_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_e = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S613>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_a);

            /* End of Outputs for SubSystem: '<S613>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S613>/Bit Shift2' */
            /* MATLAB Function: '<S617>/bit_shift' incorporates:
             *  Constant: '<S611>/Constant'
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S622>:1' */
            /* '<S622>:1:8' */
            Rx_id_outemulator_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_a.y >>
              4);

            /* End of Outputs for SubSystem: '<S613>/Bit Shift2' */

            /* RelationalOperator: '<S611>/Equal' */
            localB->Equal_d = (Rx_id_outemulator_CAN1 == *rtd_Master_ID);

            /* Outputs for Atomic SubSystem: '<S613>/Bit Shift' */
            /* MATLAB Function: '<S615>/bit_shift' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S620>:1' */
            /* '<S620>:1:8' */
            Rx_bc_outemulator_CAN1 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN1->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S613>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcohe_h0) {
              /* Disable for Outport: '<S611>/CAN1_msg_coherent' */
              localB->Equal_d = false;
              localDW->DemuxmessageCAN1andcheckcohe_h0 = false;
            }
          }

          /* End of Outputs for SubSystem: '<S609>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S612>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcohe_hb) {
              localDW->DemuxmessageCAN1andcheckcohe_hb = true;
            }

            /* Outputs for Atomic SubSystem: '<S625>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_m0);

            /* End of Outputs for SubSystem: '<S625>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S625>/Bit Shift1' */
            /* MATLAB Function: '<S628>/bit_shift' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S633>:1' */
            /* '<S633>:1:8' */
            Rx_mc_outemulator_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_m0.y >>
              5);

            /* End of Outputs for SubSystem: '<S625>/Bit Shift1' */

            /* Switch: '<S626>/Switch' incorporates:
             *  Constant: '<S626>/Constant'
             *  Constant: '<S626>/Constant1'
             *  DataStoreRead: '<S626>/Data Store Read1'
             *  DataStoreWrite: '<S626>/Data Store Write'
             *  RelationalOperator: '<S626>/GreaterThan'
             *  Sum: '<S626>/Plus'
             */
            if (Rx_mc_outemulator_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S626>/Switch' */

            /* SignalConversion: '<S612>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            localB->Buffer_2_it3ija = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S612>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            localB->Buffer_3_pbhdvl = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S612>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            localB->Buffer_4_krhrmi = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S612>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            localB->Buffer_5_bna4so = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S612>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            localB->Buffer_6_dincyj = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S612>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            localB->Buffer_7_hzjkpf = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S612>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            localB->Buffer_8_prbyej = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S612>/Cast To Double' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            Rx_temporal_outemulator_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_b = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S625>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_az);

            /* End of Outputs for SubSystem: '<S625>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S625>/Bit Shift2' */
            /* MATLAB Function: '<S629>/bit_shift' incorporates:
             *  Constant: '<S612>/Constant'
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S634>:1' */
            /* '<S634>:1:8' */
            Rx_id_outemulator_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_az.y >>
              4);

            /* End of Outputs for SubSystem: '<S625>/Bit Shift2' */

            /* RelationalOperator: '<S612>/Equal' */
            localB->Equal_g = (Rx_id_outemulator_CAN2 == *rtd_Master_ID);

            /* Outputs for Atomic SubSystem: '<S625>/Bit Shift' */
            /* MATLAB Function: '<S627>/bit_shift' incorporates:
             *  DataStoreRead: '<S339>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S632>:1' */
            /* '<S632>:1:8' */
            Rx_bc_outemulator_CAN2 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN2->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S625>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcohe_hb) {
              /* Disable for Outport: '<S612>/CAN2_msg_coherent' */
              localB->Equal_g = false;
              localDW->DemuxmessageCAN1andcheckcohe_hb = false;
            }
          }

          /* End of Outputs for SubSystem: '<S609>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S609>/Switch' incorporates:
           *  Constant: '<S611>/Constant'
           *  Constant: '<S612>/Constant'
           *  DataStoreRead: '<S339>/Data Store Read'
           *  DataStoreRead: '<S339>/Data Store Read3'
           *  DataStoreWrite: '<S609>/Data Store Write'
           */
          if (localB->Equal_d) {
            localDW->Msg_Rx.Buffer_1 = localB->Constant_e;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2_it3ijay;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3_pbhdvlt;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4_krhrmip;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5_bna4sop;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6_dincyjk;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7_hzjkpfz;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8_prbyejt;
          } else {
            localDW->Msg_Rx.Buffer_1 = localB->Constant_b;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2_it3ija;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3_pbhdvl;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4_krhrmi;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5_bna4so;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6_dincyj;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7_hzjkpf;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8_prbyej;
          }

          /* End of Switch: '<S609>/Switch' */

          /* Sum: '<S609>/Sum' incorporates:
           *  Constant: '<S609>/Constant'
           *  Constant: '<S609>/delay_estimation_1'
           *  Constant: '<S90>/Constant25'
           *  Product: '<S609>/Multiply'
           */
          expected_LT_outemulator_CAN1_s = (5.0 * (real_T)Rx_mc_outemulator_CAN1
            + 240.0) + 1.0;

          /* Sum: '<S609>/Sum1' incorporates:
           *  Constant: '<S609>/Constant1'
           *  Constant: '<S609>/delay_estimation_2'
           *  Constant: '<S90>/Constant25'
           *  Product: '<S609>/Multiply1'
           */
          expected_LT_outemulator_CAN2_s = (8.0 * (real_T)Rx_mc_outemulator_CAN2
            + 240.0) + 1.0;

          /* DataStoreWrite: '<S609>/Data Store Write3' incorporates:
           *  Constant: '<S609>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S609>/Data Store Read' */
          Rx_msg_ticks_outemulator_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S609>/OR' incorporates:
           *  DataStoreWrite: '<S609>/Data Store Write2'
           */
          localDW->new_msg_Rx = (localB->Equal_d || localB->Equal_g);

          /* DataStoreRead: '<S609>/Data Store Read1' */
          Rx_msg_ticks_outemulator_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S609>/Switch1' incorporates:
           *  Sum: '<S609>/Minus'
           *  Sum: '<S609>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_outemulator_s = expected_LT_outemulator_CAN1_s - (real_T)
              Rx_msg_ticks_outemulator_CAN1_s;
          } else {
            Desync_outemulator_s = expected_LT_outemulator_CAN2_s - (real_T)
              Rx_msg_ticks_outemulator_CAN2_s;
          }

          /* End of Switch: '<S609>/Switch1' */
        } else {
          if (localDW->Process_Messages_MODE_o) {
            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_h0) {
              /* Disable for Outport: '<S611>/CAN1_msg_coherent' */
              localB->Equal_d = false;
              localDW->DemuxmessageCAN1andcheckcohe_h0 = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_hb) {
              /* Disable for Outport: '<S612>/CAN2_msg_coherent' */
              localB->Equal_g = false;
              localDW->DemuxmessageCAN1andcheckcohe_hb = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_o = false;
          }
        }

        /* End of Outputs for SubSystem: '<S339>/Process_Messages' */

        /* Logic: '<S339>/AND1' incorporates:
         *  Logic: '<S339>/AND'
         *  Logic: '<S339>/NOT'
         */
        rtb_AND1_ga = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S339>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_ga, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S339>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskRx_Output_Emulator_Chec) {
          /* Disable for Enabled SubSystem: '<S339>/Process_Messages' */
          if (localDW->Process_Messages_MODE_o) {
            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_h0) {
              /* Disable for Outport: '<S611>/CAN1_msg_coherent' */
              localB->Equal_d = false;
              localDW->DemuxmessageCAN1andcheckcohe_h0 = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_hb) {
              /* Disable for Outport: '<S612>/CAN2_msg_coherent' */
              localB->Equal_g = false;
              localDW->DemuxmessageCAN1andcheckcohe_hb = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_o = false;
          }

          /* End of Disable for SubSystem: '<S339>/Process_Messages' */
          localDW->COMPTaskRx_Output_Emulator_Chec = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' incorporates:
       *  EnablePort: '<S340>/Enable'
       */
      if ((*rtd_Local_Ticks >= 132.0) && (*rtd_Local_Ticks < localC->Sum7)) {
        if (!localDW->COMPTaskRx_Sensor_Values_Check_) {
          localDW->COMPTaskRx_Sensor_Values_Check_ = true;
        }

        /* RelationalOperator: '<S340>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 132.0);

        /* RelationalOperator: '<S340>/Equal13' incorporates:
         *  Constant: '<S340>/Constant68'
         */
        rtb_AND1_g0 = (*rtd_Board_ID != 5.0);

        /* Outputs for Enabled SubSystem: '<S340>/Process_Messages' incorporates:
         *  EnablePort: '<S637>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_e) {
            localDW->Process_Messages_MODE_e = true;
          }

          /* Outputs for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S640>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_k) {
              localDW->DemuxmessageCAN1andcheckcoher_k = true;
            }

            /* Outputs for Atomic SubSystem: '<S642>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_fd);

            /* End of Outputs for SubSystem: '<S642>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S642>/Bit Shift1' */
            /* MATLAB Function: '<S645>/bit_shift' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S650>:1' */
            /* '<S650>:1:8' */
            Rx_mc_sensorvalues_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_fd.y
              >> 5);

            /* End of Outputs for SubSystem: '<S642>/Bit Shift1' */

            /* Switch: '<S643>/Switch' incorporates:
             *  Constant: '<S643>/Constant'
             *  Constant: '<S643>/Constant1'
             *  DataStoreRead: '<S643>/Data Store Read1'
             *  DataStoreWrite: '<S643>/Data Store Write'
             *  RelationalOperator: '<S643>/GreaterThan'
             *  Sum: '<S643>/Plus'
             */
            if (Rx_mc_sensorvalues_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S643>/Switch' */

            /* SignalConversion: '<S640>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            localB->Buffer_2_it3ij = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S640>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            localB->Buffer_3_pbhdv = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S640>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            localB->Buffer_4_krhrm = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S640>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            localB->Buffer_5_bna4s = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S640>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            localB->Buffer_6_dincy = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S640>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            localB->Buffer_7_hzjkp = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S640>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            localB->Buffer_8_prbye = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S640>/Cast To Double' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            Rx_temporal_sensorvalues_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_h = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S642>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_m4);

            /* End of Outputs for SubSystem: '<S642>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S642>/Bit Shift2' */
            /* MATLAB Function: '<S646>/bit_shift' incorporates:
             *  Constant: '<S640>/Constant'
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S651>:1' */
            /* '<S651>:1:8' */
            Rx_id_sensorvalues_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_m4.y
              >> 4);

            /* End of Outputs for SubSystem: '<S642>/Bit Shift2' */

            /* RelationalOperator: '<S640>/Equal' incorporates:
             *  Constant: '<S340>/Constant2'
             */
            localB->Equal_j = (Rx_id_sensorvalues_CAN1 == 5.0);

            /* Outputs for Atomic SubSystem: '<S642>/Bit Shift' */
            /* MATLAB Function: '<S644>/bit_shift' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S649>:1' */
            /* '<S649>:1:8' */
            Rx_bc_sensorvalues_CAN1 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN1->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S642>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_k) {
              /* Disable for Outport: '<S640>/CAN1_msg_coherent' */
              localB->Equal_j = false;
              localDW->DemuxmessageCAN1andcheckcoher_k = false;
            }
          }

          /* End of Outputs for SubSystem: '<S637>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S641>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcohe_m4) {
              localDW->DemuxmessageCAN1andcheckcohe_m4 = true;
            }

            /* Outputs for Atomic SubSystem: '<S654>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_jk);

            /* End of Outputs for SubSystem: '<S654>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S654>/Bit Shift1' */
            /* MATLAB Function: '<S657>/bit_shift' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S662>:1' */
            /* '<S662>:1:8' */
            Rx_mc_sensorvalues_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_jk.y
              >> 5);

            /* End of Outputs for SubSystem: '<S654>/Bit Shift1' */

            /* Switch: '<S655>/Switch' incorporates:
             *  Constant: '<S655>/Constant'
             *  Constant: '<S655>/Constant1'
             *  DataStoreRead: '<S655>/Data Store Read1'
             *  DataStoreWrite: '<S655>/Data Store Write'
             *  RelationalOperator: '<S655>/GreaterThan'
             *  Sum: '<S655>/Plus'
             */
            if (Rx_mc_sensorvalues_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S655>/Switch' */

            /* SignalConversion: '<S641>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            localB->Buffer_2_it3i = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S641>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            localB->Buffer_3_pbhd = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S641>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            localB->Buffer_4_krhr = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S641>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            localB->Buffer_5_bna4 = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S641>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            localB->Buffer_6_dinc = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S641>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            localB->Buffer_7_hzjk = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S641>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            localB->Buffer_8_prby = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S641>/Cast To Double' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            Rx_temporal_sensorvalues_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_a = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S654>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_i4);

            /* End of Outputs for SubSystem: '<S654>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S654>/Bit Shift2' */
            /* MATLAB Function: '<S658>/bit_shift' incorporates:
             *  Constant: '<S641>/Constant'
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S663>:1' */
            /* '<S663>:1:8' */
            Rx_id_sensorvalues_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_i4.y
              >> 4);

            /* End of Outputs for SubSystem: '<S654>/Bit Shift2' */

            /* RelationalOperator: '<S641>/Equal' incorporates:
             *  Constant: '<S340>/Constant2'
             */
            localB->Equal_a = (Rx_id_sensorvalues_CAN2 == 5.0);

            /* Outputs for Atomic SubSystem: '<S654>/Bit Shift' */
            /* MATLAB Function: '<S656>/bit_shift' incorporates:
             *  DataStoreRead: '<S340>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S661>:1' */
            /* '<S661>:1:8' */
            Rx_bc_sensorvalues_CAN2 = (uint8_T)((uint32_T)
              rtd_Msg_Rx_CAN2->Buffer_1 >> 7);

            /* End of Outputs for SubSystem: '<S654>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcohe_m4) {
              /* Disable for Outport: '<S641>/CAN2_msg_coherent' */
              localB->Equal_a = false;
              localDW->DemuxmessageCAN1andcheckcohe_m4 = false;
            }
          }

          /* End of Outputs for SubSystem: '<S637>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S637>/Switch' incorporates:
           *  Constant: '<S640>/Constant'
           *  Constant: '<S641>/Constant'
           *  DataStoreRead: '<S340>/Data Store Read'
           *  DataStoreRead: '<S340>/Data Store Read3'
           *  DataStoreWrite: '<S637>/Data Store Write'
           */
          if (localB->Equal_j) {
            localDW->Msg_Rx.Buffer_1 = localB->Constant_h;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2_it3ij;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3_pbhdv;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4_krhrm;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5_bna4s;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6_dincy;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7_hzjkp;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8_prbye;
          } else {
            localDW->Msg_Rx.Buffer_1 = localB->Constant_a;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2_it3i;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3_pbhd;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4_krhr;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5_bna4;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6_dinc;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7_hzjk;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8_prby;
          }

          /* End of Switch: '<S637>/Switch' */

          /* Sum: '<S637>/Sum' incorporates:
           *  Constant: '<S637>/Constant'
           *  Constant: '<S637>/delay_estimation_1'
           *  Constant: '<S90>/Constant35'
           *  Product: '<S637>/Multiply'
           */
          expected_LT_sensorvalues_CAN1_s = (5.0 * (real_T)
            Rx_mc_sensorvalues_CAN1 + 92.0) + 1.0;

          /* Sum: '<S637>/Sum1' incorporates:
           *  Constant: '<S637>/Constant1'
           *  Constant: '<S637>/delay_estimation_2'
           *  Constant: '<S90>/Constant35'
           *  Product: '<S637>/Multiply1'
           */
          expected_LT_sensorvalues_CAN2_s = (8.0 * (real_T)
            Rx_mc_sensorvalues_CAN2 + 92.0) + 1.0;

          /* DataStoreWrite: '<S637>/Data Store Write3' incorporates:
           *  Constant: '<S637>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S637>/Data Store Read' */
          Rx_msg_ticks_sensorvalues_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S637>/OR' incorporates:
           *  DataStoreWrite: '<S637>/Data Store Write2'
           */
          localDW->new_msg_Rx = (localB->Equal_j || localB->Equal_a);

          /* DataStoreRead: '<S637>/Data Store Read1' */
          Rx_msg_ticks_sensorvalues_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S637>/Switch1' incorporates:
           *  Sum: '<S637>/Minus'
           *  Sum: '<S637>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_sensorvalues_s = expected_LT_sensorvalues_CAN1_s - (real_T)
              Rx_msg_ticks_sensorvalues_CAN1_s;
          } else {
            Desync_sensorvalues_s = expected_LT_sensorvalues_CAN2_s - (real_T)
              Rx_msg_ticks_sensorvalues_CAN2_s;
          }

          /* End of Switch: '<S637>/Switch1' */
        } else {
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_k) {
              /* Disable for Outport: '<S640>/CAN1_msg_coherent' */
              localB->Equal_j = false;
              localDW->DemuxmessageCAN1andcheckcoher_k = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_m4) {
              /* Disable for Outport: '<S641>/CAN2_msg_coherent' */
              localB->Equal_a = false;
              localDW->DemuxmessageCAN1andcheckcohe_m4 = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }
        }

        /* End of Outputs for SubSystem: '<S340>/Process_Messages' */

        /* Logic: '<S340>/AND1' incorporates:
         *  Logic: '<S340>/AND'
         *  Logic: '<S340>/NOT'
         */
        rtb_AND1_a = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S340>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_a, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S340>/Reset Tx msg counter' */

        /* Outputs for Enabled SubSystem: '<S340>/Update Msg buffer' incorporates:
         *  EnablePort: '<S639>/Enable'
         */
        if ((*rtd_Local_Ticks == localC->Plus_a) && rtb_AND1_g0) {
          /* DataStoreRead: '<S639>/Data Store Read5' */
          new_sensor_rx_s = localDW->new_msg_Rx;

          /* Outputs for Enabled SubSystem: '<S639>/Sensor Values Rx Update' incorporates:
           *  EnablePort: '<S666>/Enable'
           */
          if (new_sensor_rx_s) {
            /* Logic: '<S666>/OR' incorporates:
             *  DataStoreRead: '<S666>/Data Store Read'
             *  DataStoreRead: '<S666>/Data Store Read1'
             */
            rtb_Equal_e2 = (localDW->Error_SetValues_NotRX ||
                            localDW->Error_SensorValues_NotRX);

            /* Outputs for Enabled SubSystem: '<S666>/Not enough inputs' incorporates:
             *  EnablePort: '<S669>/Enable'
             */
            if (rtb_Equal_e2) {
              /* DataStoreWrite: '<S669>/Data Store Write1' incorporates:
               *  Constant: '<S669>/Constant'
               *  DataStoreRead: '<S669>/Data Store Read'
               *  Sum: '<S669>/Minus'
               */
              localDW->mc_counter += 1.0;
            }

            /* End of Outputs for SubSystem: '<S666>/Not enough inputs' */

            /* Outputs for Enabled SubSystem: '<S666>/Inputs Rx OK' incorporates:
             *  EnablePort: '<S668>/Enable'
             */
            if (!rtb_Equal_e2) {
              /* Product: '<S668>/Multiply' incorporates:
               *  DataStoreRead: '<S668>/Data Store Read'
               *  DataStoreWrite: '<S668>/Data Store Write'
               */
              localDW->rx_data_incr_time = localC->Gain_l1 * localDW->mc_counter;

              /* DataStoreWrite: '<S668>/Data Store Write1' incorporates:
               *  Constant: '<S668>/Constant1'
               */
              localDW->mc_counter = 1.0;
            }

            /* End of Outputs for SubSystem: '<S666>/Inputs Rx OK' */

            /* Outputs for Atomic SubSystem: '<S670>/Bit Shift' */
            BitShift(localDW->Msg_Rx.Buffer_2, &localB->BitShift_lv);

            /* End of Outputs for SubSystem: '<S670>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S670>/Bit Shift1' */
            BitShift1(localB->BitShift_lv.y, &localB->BitShift1_bd);

            /* End of Outputs for SubSystem: '<S670>/Bit Shift1' */

            /* Sum: '<S670>/Minus' incorporates:
             *  DataStoreRead: '<S639>/Data Store Read6'
             *  DataTypeConversion: '<S670>/Cast1'
             *  Logic: '<S666>/NOT2'
             */
            rtb_Fix1_e = localDW->Msg_Rx.Buffer_2 - localB->BitShift1_bd.y;

            /* Product: '<S670>/Divide' */
            rtb_Plus1_b = rtb_Fix1_e / localC->Power1_oe;

            /* Rounding: '<S670>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Minus_ch = ceil(rtb_Plus1_b);
            } else {
              rtb_Minus_ch = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S670>/Fix1' */

            /* Switch: '<S670>/Switch' incorporates:
             *  DataStoreWrite: '<S666>/Data Store Write'
             *  Gain: '<S670>/Gain1'
             *  Product: '<S670>/Multiply'
             *  Product: '<S670>/Multiply1'
             *  Sum: '<S670>/Minus1'
             *  Sum: '<S670>/Minus2'
             */
            if (localB->BitShift_lv.y > ((uint8_T)0U)) {
              localDW->theta_fr_stored = ((rtb_Fix1_e - rtb_Minus_ch *
                localC->Power1_oe) * localC->Power_l + rtb_Minus_ch) * (-1.0);
            } else {
              localDW->theta_fr_stored = (rtb_Fix1_e - rtb_Minus_ch *
                localC->Power1_oe) * localC->Power_l + rtb_Minus_ch;
            }

            /* End of Switch: '<S670>/Switch' */

            /* Outputs for Atomic SubSystem: '<S671>/Bit Shift' */
            BitShift(localDW->Msg_Rx.Buffer_3, &localB->BitShift_ju);

            /* End of Outputs for SubSystem: '<S671>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S671>/Bit Shift1' */
            BitShift1(localB->BitShift_ju.y, &localB->BitShift1_d);

            /* End of Outputs for SubSystem: '<S671>/Bit Shift1' */

            /* Sum: '<S671>/Minus' incorporates:
             *  DataStoreRead: '<S639>/Data Store Read6'
             *  DataTypeConversion: '<S671>/Cast1'
             */
            rtb_Minus_ch = localDW->Msg_Rx.Buffer_3 - localB->BitShift1_d.y;

            /* Product: '<S671>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power1_ij;

            /* Rounding: '<S671>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Fix1_e = ceil(rtb_Plus1_b);
            } else {
              rtb_Fix1_e = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S671>/Fix1' */

            /* Switch: '<S671>/Switch' incorporates:
             *  DataStoreWrite: '<S666>/Data Store Write1'
             *  Gain: '<S671>/Gain1'
             *  Product: '<S671>/Multiply'
             *  Product: '<S671>/Multiply1'
             *  Sum: '<S671>/Minus1'
             *  Sum: '<S671>/Minus2'
             */
            if (localB->BitShift_ju.y > ((uint8_T)0U)) {
              localDW->theta_fl_stored = ((rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_ij) * localC->Power_a + rtb_Fix1_e) * (-1.0);
            } else {
              localDW->theta_fl_stored = (rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_ij) * localC->Power_a + rtb_Fix1_e;
            }

            /* End of Switch: '<S671>/Switch' */

            /* Outputs for Atomic SubSystem: '<S672>/Bit Shift' */
            BitShift(localDW->Msg_Rx.Buffer_4, &localB->BitShift_n);

            /* End of Outputs for SubSystem: '<S672>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S672>/Bit Shift1' */
            BitShift1(localB->BitShift_n.y, &localB->BitShift1_dm);

            /* End of Outputs for SubSystem: '<S672>/Bit Shift1' */

            /* Sum: '<S672>/Minus' incorporates:
             *  DataStoreRead: '<S639>/Data Store Read6'
             *  DataTypeConversion: '<S672>/Cast1'
             */
            rtb_Minus_ch = localDW->Msg_Rx.Buffer_4 - localB->BitShift1_dm.y;

            /* Product: '<S672>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power1_j;

            /* Rounding: '<S672>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Fix1_e = ceil(rtb_Plus1_b);
            } else {
              rtb_Fix1_e = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S672>/Fix1' */

            /* Switch: '<S672>/Switch' incorporates:
             *  DataStoreWrite: '<S666>/Data Store Write2'
             *  Gain: '<S672>/Gain1'
             *  Product: '<S672>/Multiply'
             *  Product: '<S672>/Multiply1'
             *  Sum: '<S672>/Minus1'
             *  Sum: '<S672>/Minus2'
             */
            if (localB->BitShift_n.y > ((uint8_T)0U)) {
              localDW->theta_ar_stored = ((rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_j) * localC->Power_k + rtb_Fix1_e) * (-1.0);
            } else {
              localDW->theta_ar_stored = (rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_j) * localC->Power_k + rtb_Fix1_e;
            }

            /* End of Switch: '<S672>/Switch' */

            /* Outputs for Atomic SubSystem: '<S673>/Bit Shift' */
            BitShift(localDW->Msg_Rx.Buffer_5, &localB->BitShift_gn);

            /* End of Outputs for SubSystem: '<S673>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S673>/Bit Shift1' */
            BitShift1(localB->BitShift_gn.y, &localB->BitShift1_if);

            /* End of Outputs for SubSystem: '<S673>/Bit Shift1' */

            /* Sum: '<S673>/Minus' incorporates:
             *  DataStoreRead: '<S639>/Data Store Read6'
             *  DataTypeConversion: '<S673>/Cast1'
             */
            rtb_Minus_ch = localDW->Msg_Rx.Buffer_5 - localB->BitShift1_if.y;

            /* Product: '<S673>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power1_io;

            /* Rounding: '<S673>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Fix1_e = ceil(rtb_Plus1_b);
            } else {
              rtb_Fix1_e = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S673>/Fix1' */

            /* Switch: '<S673>/Switch' incorporates:
             *  DataStoreWrite: '<S666>/Data Store Write3'
             *  Gain: '<S673>/Gain1'
             *  Product: '<S673>/Multiply'
             *  Product: '<S673>/Multiply1'
             *  Sum: '<S673>/Minus1'
             *  Sum: '<S673>/Minus2'
             */
            if (localB->BitShift_gn.y > ((uint8_T)0U)) {
              localDW->theta_al_stored = ((rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_io) * localC->Power_ol + rtb_Fix1_e) * (-1.0);
            } else {
              localDW->theta_al_stored = (rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_io) * localC->Power_ol + rtb_Fix1_e;
            }

            /* End of Switch: '<S673>/Switch' */

            /* DataStoreWrite: '<S666>/Data Store Write4' incorporates:
             *  Constant: '<S666>/Constant'
             */
            localDW->Error_SensorValues_NotRX = false;
          }

          /* End of Outputs for SubSystem: '<S639>/Sensor Values Rx Update' */

          /* Outputs for Enabled SubSystem: '<S639>/Sensor Values not Rx Update' incorporates:
           *  EnablePort: '<S667>/Enable'
           */
          if (!new_sensor_rx_s) {
            /* DataStoreWrite: '<S667>/Data Store Write' incorporates:
             *  Constant: '<S667>/Constant'
             */
            localDW->Error_SensorValues_NotRX = true;

            /* DataStoreWrite: '<S667>/Data Store Write1' incorporates:
             *  Constant: '<S667>/Constant1'
             *  DataStoreRead: '<S667>/Data Store Read'
             *  Sum: '<S667>/Minus'
             */
            localDW->mc_counter += 1.0;
          }

          /* End of Outputs for SubSystem: '<S639>/Sensor Values not Rx Update' */
        }

        /* End of Outputs for SubSystem: '<S340>/Update Msg buffer' */
      } else {
        if (localDW->COMPTaskRx_Sensor_Values_Check_) {
          /* Disable for Enabled SubSystem: '<S340>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_k) {
              /* Disable for Outport: '<S640>/CAN1_msg_coherent' */
              localB->Equal_j = false;
              localDW->DemuxmessageCAN1andcheckcoher_k = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_m4) {
              /* Disable for Outport: '<S641>/CAN2_msg_coherent' */
              localB->Equal_a = false;
              localDW->DemuxmessageCAN1andcheckcohe_m4 = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S340>/Process_Messages' */
          localDW->COMPTaskRx_Sensor_Values_Check_ = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' incorporates:
       *  EnablePort: '<S341>/Enable'
       */
      if ((*rtd_Local_Ticks >= 88.0) && (*rtd_Local_Ticks < localC->Sum5)) {
        if (!localDW->COMPTaskRx_Set_Values_Check_MOD) {
          localDW->COMPTaskRx_Set_Values_Check_MOD = true;
        }

        /* RelationalOperator: '<S341>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 88.0);

        /* RelationalOperator: '<S341>/Equal13' incorporates:
         *  Constant: '<S341>/Constant57'
         */
        rtb_AND1_g0 = (*rtd_Board_ID != 4.0);

        /* Outputs for Enabled SubSystem: '<S341>/Process_Messages' incorporates:
         *  EnablePort: '<S690>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE_m) {
            localDW->Process_Messages_MODE_m = true;
          }

          /* Outputs for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S693>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_m) {
              localDW->DemuxmessageCAN1andcheckcoher_m = true;
            }

            /* Outputs for Atomic SubSystem: '<S695>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_ft);

            /* End of Outputs for SubSystem: '<S695>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S695>/Bit Shift1' */
            /* MATLAB Function: '<S698>/bit_shift' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S703>:1' */
            /* '<S703>:1:8' */
            Rx_mc_setvalues_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_ft.y >>
              5);

            /* End of Outputs for SubSystem: '<S695>/Bit Shift1' */

            /* Switch: '<S696>/Switch' incorporates:
             *  Constant: '<S696>/Constant'
             *  Constant: '<S696>/Constant1'
             *  DataStoreRead: '<S696>/Data Store Read1'
             *  DataStoreWrite: '<S696>/Data Store Write'
             *  RelationalOperator: '<S696>/GreaterThan'
             *  Sum: '<S696>/Plus'
             */
            if (Rx_mc_setvalues_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S696>/Switch' */

            /* SignalConversion: '<S693>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            localB->Buffer_2_it3 = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S693>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            localB->Buffer_3_pbh = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S693>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            localB->Buffer_4_krh = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S693>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            localB->Buffer_5_bna = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S693>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            localB->Buffer_6_din = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S693>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            localB->Buffer_7_hzj = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S693>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            localB->Buffer_8_prb = rtd_Msg_Rx_CAN1->Buffer_8;

            /* DataTypeConversion: '<S693>/Cast To Double' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            Rx_temporal_setvalues_CAN1 = rtd_Msg_Rx_CAN1->Buffer_1;
            localB->Constant_o = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S695>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_ey);

            /* End of Outputs for SubSystem: '<S695>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S695>/Bit Shift2' */
            /* MATLAB Function: '<S699>/bit_shift' incorporates:
             *  Constant: '<S693>/Constant'
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S704>:1' */
            /* '<S704>:1:8' */
            Rx_id_setvalues_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_ey.y >>
              4);

            /* End of Outputs for SubSystem: '<S695>/Bit Shift2' */

            /* RelationalOperator: '<S693>/Equal' incorporates:
             *  Constant: '<S341>/Constant51'
             */
            localB->Equal_f = (Rx_id_setvalues_CAN1 == 4.0);

            /* Outputs for Atomic SubSystem: '<S695>/Bit Shift' */
            /* MATLAB Function: '<S697>/bit_shift' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S702>:1' */
            /* '<S702>:1:8' */
            Rx_bc_setvalues_CAN1 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN1->Buffer_1
              >> 7);

            /* End of Outputs for SubSystem: '<S695>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_m) {
              /* Disable for Outport: '<S693>/CAN1_msg_coherent' */
              localB->Equal_f = false;
              localDW->DemuxmessageCAN1andcheckcoher_m = false;
            }
          }

          /* End of Outputs for SubSystem: '<S690>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S694>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_h) {
              localDW->DemuxmessageCAN1andcheckcoher_h = true;
            }

            /* Outputs for Atomic SubSystem: '<S707>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_gu);

            /* End of Outputs for SubSystem: '<S707>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S707>/Bit Shift1' */
            /* MATLAB Function: '<S710>/bit_shift' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S715>:1' */
            /* '<S715>:1:8' */
            Rx_mc_setvalues_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_gu.y >>
              5);

            /* End of Outputs for SubSystem: '<S707>/Bit Shift1' */

            /* Switch: '<S708>/Switch' incorporates:
             *  Constant: '<S708>/Constant'
             *  Constant: '<S708>/Constant1'
             *  DataStoreRead: '<S708>/Data Store Read1'
             *  DataStoreWrite: '<S708>/Data Store Write'
             *  RelationalOperator: '<S708>/GreaterThan'
             *  Sum: '<S708>/Plus'
             */
            if (Rx_mc_setvalues_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S708>/Switch' */

            /* SignalConversion: '<S694>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            localB->Buffer_2_it = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S694>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            localB->Buffer_3_pb = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S694>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            localB->Buffer_4_kr = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S694>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            localB->Buffer_5_bn = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S694>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            localB->Buffer_6_di = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S694>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            localB->Buffer_7_hz = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S694>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            localB->Buffer_8_pr = rtd_Msg_Rx_CAN2->Buffer_8;

            /* DataTypeConversion: '<S694>/Cast To Double' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            Rx_temporal_setvalues_CAN2 = rtd_Msg_Rx_CAN2->Buffer_1;
            localB->Constant_g = ((uint8_T)0U);

            /* Outputs for Atomic SubSystem: '<S707>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_kq);

            /* End of Outputs for SubSystem: '<S707>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S707>/Bit Shift2' */
            /* MATLAB Function: '<S711>/bit_shift' incorporates:
             *  Constant: '<S694>/Constant'
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S716>:1' */
            /* '<S716>:1:8' */
            Rx_id_setvalues_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_kq.y >>
              4);

            /* End of Outputs for SubSystem: '<S707>/Bit Shift2' */

            /* RelationalOperator: '<S694>/Equal' incorporates:
             *  Constant: '<S341>/Constant51'
             */
            localB->Equal = (Rx_id_setvalues_CAN2 == 4.0);

            /* Outputs for Atomic SubSystem: '<S707>/Bit Shift' */
            /* MATLAB Function: '<S709>/bit_shift' incorporates:
             *  DataStoreRead: '<S341>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S714>:1' */
            /* '<S714>:1:8' */
            Rx_bc_setvalues_CAN2 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN2->Buffer_1
              >> 7);

            /* End of Outputs for SubSystem: '<S707>/Bit Shift' */
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_h) {
              /* Disable for Outport: '<S694>/CAN2_msg_coherent' */
              localB->Equal = false;
              localDW->DemuxmessageCAN1andcheckcoher_h = false;
            }
          }

          /* End of Outputs for SubSystem: '<S690>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S690>/Switch' incorporates:
           *  Constant: '<S693>/Constant'
           *  Constant: '<S694>/Constant'
           *  DataStoreRead: '<S341>/Data Store Read'
           *  DataStoreRead: '<S341>/Data Store Read3'
           *  DataStoreWrite: '<S690>/Data Store Write'
           */
          if (localB->Equal_f) {
            localDW->Msg_Rx.Buffer_1 = localB->Constant_o;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2_it3;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3_pbh;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4_krh;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5_bna;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6_din;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7_hzj;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8_prb;
          } else {
            localDW->Msg_Rx.Buffer_1 = localB->Constant_g;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2_it;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3_pb;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4_kr;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5_bn;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6_di;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7_hz;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8_pr;
          }

          /* End of Switch: '<S690>/Switch' */

          /* Sum: '<S690>/Sum' incorporates:
           *  Constant: '<S690>/Constant'
           *  Constant: '<S690>/delay_estimation_1'
           *  Constant: '<S90>/Constant5'
           *  Product: '<S690>/Multiply'
           */
          expected_LT_setvalues_CAN1_s = (5.0 * (real_T)Rx_mc_setvalues_CAN1 +
            48.0) + 1.0;

          /* Sum: '<S690>/Sum1' incorporates:
           *  Constant: '<S690>/Constant1'
           *  Constant: '<S690>/delay_estimation_2'
           *  Constant: '<S90>/Constant5'
           *  Product: '<S690>/Multiply1'
           */
          expected_LT_setvalues_CAN2_s = (8.0 * (real_T)Rx_mc_setvalues_CAN2 +
            48.0) + 1.0;

          /* DataStoreWrite: '<S690>/Data Store Write3' incorporates:
           *  Constant: '<S690>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* DataStoreRead: '<S690>/Data Store Read' */
          Rx_msg_ticks_setvalues_CAN1_s = *rtd_Msg_Rx_Ticks_CAN1;

          /* Logic: '<S690>/OR' incorporates:
           *  DataStoreWrite: '<S690>/Data Store Write1'
           */
          localDW->new_msg_Rx = (localB->Equal_f || localB->Equal);

          /* DataStoreRead: '<S690>/Data Store Read1' */
          Rx_msg_ticks_setvalues_CAN2_s = *rtd_Msg_Rx_Ticks_CAN2;

          /* Switch: '<S690>/Switch1' incorporates:
           *  Sum: '<S690>/Minus'
           *  Sum: '<S690>/Minus1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_setvalues_s = expected_LT_setvalues_CAN1_s - (real_T)
              Rx_msg_ticks_setvalues_CAN1_s;
          } else {
            Desync_setvalues_s = expected_LT_setvalues_CAN2_s - (real_T)
              Rx_msg_ticks_setvalues_CAN2_s;
          }

          /* End of Switch: '<S690>/Switch1' */
        } else {
          if (localDW->Process_Messages_MODE_m) {
            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m) {
              /* Disable for Outport: '<S693>/CAN1_msg_coherent' */
              localB->Equal_f = false;
              localDW->DemuxmessageCAN1andcheckcoher_m = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_h) {
              /* Disable for Outport: '<S694>/CAN2_msg_coherent' */
              localB->Equal = false;
              localDW->DemuxmessageCAN1andcheckcoher_h = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_m = false;
          }
        }

        /* End of Outputs for SubSystem: '<S341>/Process_Messages' */

        /* Logic: '<S341>/AND1' incorporates:
         *  Logic: '<S341>/AND'
         *  Logic: '<S341>/NOT'
         */
        rtb_AND1_jv = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S341>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_jv, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S341>/Reset Tx msg counter' */

        /* Outputs for Enabled SubSystem: '<S341>/Update Msg buffer' incorporates:
         *  EnablePort: '<S692>/Enable'
         */
        if ((*rtd_Local_Ticks == localC->Plus_h) && rtb_AND1_g0) {
          /* DataStoreRead: '<S692>/Data Store Read5' */
          new_set_rx_s = localDW->new_msg_Rx;

          /* Outputs for Enabled SubSystem: '<S692>/Set Values Update' incorporates:
           *  EnablePort: '<S719>/Enable'
           */
          if (new_set_rx_s) {
            /* Outputs for Atomic SubSystem: '<S722>/Bit Shift' */
            BitShift(localDW->Msg_Rx.Buffer_3, &localB->BitShift_j5);

            /* End of Outputs for SubSystem: '<S722>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S722>/Bit Shift1' */
            BitShift1(localB->BitShift_j5.y, &localB->BitShift1_o);

            /* End of Outputs for SubSystem: '<S722>/Bit Shift1' */

            /* Sum: '<S722>/Minus' incorporates:
             *  DataStoreRead: '<S692>/Data Store Read6'
             *  DataTypeConversion: '<S722>/Cast1'
             */
            rtb_Fix1_e = localDW->Msg_Rx.Buffer_3 - localB->BitShift1_o.y;

            /* Product: '<S722>/Divide' */
            rtb_Plus1_b = rtb_Fix1_e / localC->Power1_px;

            /* Rounding: '<S722>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Minus_ch = ceil(rtb_Plus1_b);
            } else {
              rtb_Minus_ch = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S722>/Fix1' */

            /* Switch: '<S722>/Switch' incorporates:
             *  DataStoreWrite: '<S719>/Data Store Write'
             *  Gain: '<S722>/Gain1'
             *  Product: '<S722>/Multiply'
             *  Product: '<S722>/Multiply1'
             *  Sum: '<S722>/Minus1'
             *  Sum: '<S722>/Minus2'
             */
            if (localB->BitShift_j5.y > ((uint8_T)0U)) {
              localDW->delta_a_set_stored = ((rtb_Fix1_e - rtb_Minus_ch *
                localC->Power1_px) * localC->Power_n + rtb_Minus_ch) * (-1.0);
            } else {
              localDW->delta_a_set_stored = (rtb_Fix1_e - rtb_Minus_ch *
                localC->Power1_px) * localC->Power_n + rtb_Minus_ch;
            }

            /* End of Switch: '<S722>/Switch' */

            /* Outputs for Atomic SubSystem: '<S721>/Bit Shift' */
            BitShift(localDW->Msg_Rx.Buffer_2, &localB->BitShift_cl);

            /* End of Outputs for SubSystem: '<S721>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S721>/Bit Shift1' */
            BitShift1(localB->BitShift_cl.y, &localB->BitShift1_pg);

            /* End of Outputs for SubSystem: '<S721>/Bit Shift1' */

            /* Sum: '<S721>/Minus' incorporates:
             *  DataStoreRead: '<S692>/Data Store Read6'
             *  DataTypeConversion: '<S721>/Cast1'
             */
            rtb_Minus_ch = localDW->Msg_Rx.Buffer_2 - localB->BitShift1_pg.y;

            /* Product: '<S721>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power1_o;

            /* Rounding: '<S721>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Fix1_e = ceil(rtb_Plus1_b);
            } else {
              rtb_Fix1_e = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S721>/Fix1' */

            /* Switch: '<S721>/Switch' incorporates:
             *  DataStoreWrite: '<S719>/Data Store Write1'
             *  Gain: '<S721>/Gain1'
             *  Product: '<S721>/Multiply'
             *  Product: '<S721>/Multiply1'
             *  Sum: '<S721>/Minus1'
             *  Sum: '<S721>/Minus2'
             */
            if (localB->BitShift_cl.y > ((uint8_T)0U)) {
              localDW->delta_f_set_stored = ((rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_o) * localC->Power_o + rtb_Fix1_e) * (-1.0);
            } else {
              localDW->delta_f_set_stored = (rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_o) * localC->Power_o + rtb_Fix1_e;
            }

            /* End of Switch: '<S721>/Switch' */

            /* Outputs for Atomic SubSystem: '<S723>/Bit Shift' */
            BitShift(localDW->Msg_Rx.Buffer_4, &localB->BitShift_a);

            /* End of Outputs for SubSystem: '<S723>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S723>/Bit Shift1' */
            BitShift1(localB->BitShift_a.y, &localB->BitShift1_b2);

            /* End of Outputs for SubSystem: '<S723>/Bit Shift1' */

            /* Sum: '<S723>/Minus' incorporates:
             *  DataStoreRead: '<S692>/Data Store Read6'
             *  DataTypeConversion: '<S723>/Cast1'
             */
            rtb_Minus_ch = localDW->Msg_Rx.Buffer_4 - localB->BitShift1_b2.y;

            /* Product: '<S723>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power1_e;

            /* Rounding: '<S723>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Fix1_e = ceil(rtb_Plus1_b);
            } else {
              rtb_Fix1_e = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S723>/Fix1' */

            /* Switch: '<S723>/Switch' incorporates:
             *  DataStoreWrite: '<S719>/Data Store Write2'
             *  Gain: '<S723>/Gain1'
             *  Product: '<S723>/Multiply'
             *  Product: '<S723>/Multiply1'
             *  Sum: '<S723>/Minus1'
             *  Sum: '<S723>/Minus2'
             */
            if (localB->BitShift_a.y > ((uint8_T)0U)) {
              localDW->v_set_stored = ((rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_e) * localC->Power_hw + rtb_Fix1_e) * (-1.0);
            } else {
              localDW->v_set_stored = (rtb_Minus_ch - rtb_Fix1_e *
                localC->Power1_e) * localC->Power_hw + rtb_Fix1_e;
            }

            /* End of Switch: '<S723>/Switch' */

            /* DataStoreWrite: '<S719>/Data Store Write3' incorporates:
             *  Constant: '<S719>/Constant'
             */
            localDW->Error_SetValues_NotRX = false;
          }

          /* End of Outputs for SubSystem: '<S692>/Set Values Update' */

          /* Outputs for Enabled SubSystem: '<S692>/Set Values not Rx' incorporates:
           *  EnablePort: '<S720>/Enable'
           */
          if (!new_set_rx_s) {
            /* DataStoreWrite: '<S720>/Data Store Write' incorporates:
             *  Constant: '<S720>/Constant'
             */
            localDW->Error_SetValues_NotRX = true;
          }

          /* End of Outputs for SubSystem: '<S692>/Set Values not Rx' */
        }

        /* End of Outputs for SubSystem: '<S341>/Update Msg buffer' */
      } else {
        if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
          /* Disable for Enabled SubSystem: '<S341>/Process_Messages' */
          if (localDW->Process_Messages_MODE_m) {
            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m) {
              /* Disable for Outport: '<S693>/CAN1_msg_coherent' */
              localB->Equal_f = false;
              localDW->DemuxmessageCAN1andcheckcoher_m = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_h) {
              /* Disable for Outport: '<S694>/CAN2_msg_coherent' */
              localB->Equal = false;
              localDW->DemuxmessageCAN1andcheckcoher_h = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_m = false;
          }

          /* End of Disable for SubSystem: '<S341>/Process_Messages' */
          localDW->COMPTaskRx_Set_Values_Check_MOD = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' */

      /* Logic: '<S90>/NOT2' incorporates:
       *  Constant: '<S90>/Constant12'
       *  Constant: '<S90>/Constant16'
       *  Constant: '<S90>/Constant21'
       *  Constant: '<S90>/Constant23'
       *  Constant: '<S90>/Constant27'
       *  Constant: '<S90>/Constant28'
       *  Constant: '<S90>/Constant31'
       *  Constant: '<S90>/Constant33'
       *  Constant: '<S90>/Constant7'
       *  DataStoreRead: '<S332>/Data Store Read1'
       *  DataStoreRead: '<S332>/Data Store Read2'
       *  DataStoreRead: '<S333>/Data Store Read1'
       *  DataStoreRead: '<S333>/Data Store Read2'
       *  DataStoreRead: '<S334>/Data Store Read1'
       *  DataStoreRead: '<S334>/Data Store Read2'
       *  DataStoreRead: '<S639>/Data Store Read6'
       *  DataStoreRead: '<S692>/Data Store Read6'
       *  DataStoreRead: '<S90>/Data Store Read6'
       *  Logic: '<S332>/AND'
       *  Logic: '<S332>/NOT'
       *  Logic: '<S332>/OR'
       *  Logic: '<S333>/AND'
       *  Logic: '<S333>/NOT'
       *  Logic: '<S333>/OR'
       *  Logic: '<S334>/AND'
       *  Logic: '<S334>/NOT'
       *  Logic: '<S334>/OR'
       *  Logic: '<S337>/AND'
       *  Logic: '<S338>/AND'
       *  Logic: '<S339>/AND'
       *  Logic: '<S340>/AND'
       *  Logic: '<S340>/AND2'
       *  Logic: '<S341>/AND'
       *  Logic: '<S341>/AND2'
       *  Logic: '<S639>/NOT1'
       *  Logic: '<S666>/NOT2'
       *  Logic: '<S692>/NOT1'
       *  Logic: '<S90>/AND11'
       *  Logic: '<S90>/AND13'
       *  Logic: '<S90>/AND16'
       *  Logic: '<S90>/AND20'
       *  Logic: '<S90>/AND4'
       *  Logic: '<S90>/AND6'
       *  Logic: '<S90>/AND7'
       *  Logic: '<S90>/AND8'
       *  Logic: '<S90>/AND9'
       *  Logic: '<S90>/NOT5'
       *  RelationalOperator: '<S332>/Equal'
       *  RelationalOperator: '<S333>/Equal'
       *  RelationalOperator: '<S334>/Equal'
       *  RelationalOperator: '<S336>/Equal2'
       *  RelationalOperator: '<S340>/Equal1'
       *  RelationalOperator: '<S341>/Equal1'
       *  RelationalOperator: '<S90>/GreaterThan12'
       *  RelationalOperator: '<S90>/GreaterThan13'
       *  RelationalOperator: '<S90>/GreaterThan14'
       *  RelationalOperator: '<S90>/GreaterThan15'
       *  RelationalOperator: '<S90>/GreaterThan16'
       *  RelationalOperator: '<S90>/GreaterThan17'
       *  RelationalOperator: '<S90>/GreaterThan18'
       *  RelationalOperator: '<S90>/GreaterThan19'
       *  RelationalOperator: '<S90>/GreaterThan20'
       *  RelationalOperator: '<S90>/GreaterThan21'
       *  RelationalOperator: '<S90>/GreaterThan26'
       *  RelationalOperator: '<S90>/GreaterThan27'
       *  RelationalOperator: '<S90>/GreaterThan32'
       *  RelationalOperator: '<S90>/GreaterThan33'
       *  RelationalOperator: '<S90>/GreaterThan34'
       *  RelationalOperator: '<S90>/GreaterThan35'
       *  RelationalOperator: '<S90>/GreaterThan8'
       *  RelationalOperator: '<S90>/GreaterThan9'
       */
      rtb_AND2_n = !localDW->BC1_Sync_processed;

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Sync bc1 check' incorporates:
       *  EnablePort: '<S342>/Enable'
       */
      if ((*rtd_Local_Ticks >= 40.0) && (*rtd_Local_Ticks < localC->Sum1) &&
          rtb_AND2_n) {
        if (!localDW->COMPTaskSyncbc1check_MODE) {
          localDW->COMPTaskSyncbc1check_MODE = true;
        }

        /* RelationalOperator: '<S342>/Equal' */
        rtb_Equal_e2 = (*rtd_Local_Ticks == 40.0);

        /* RelationalOperator: '<S342>/Equal5' incorporates:
         *  Constant: '<S342>/Constant26'
         *  DataStoreRead: '<S342>/Data Store Read6'
         */
        rtb_AND1_g0 = (localDW->Role_ID == 2.0);

        /* Outputs for Enabled SubSystem: '<S342>/Process_Messages' incorporates:
         *  EnablePort: '<S736>/Enable'
         */
        if (rtb_Equal_e2 && rtb_AND1_g0) {
          if (!localDW->Process_Messages_MODE) {
            localDW->Process_Messages_MODE = true;
          }

          /* Outputs for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence' incorporates:
           *  EnablePort: '<S738>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            if (!localDW->DemuxmessageCAN1andcheckcoher_c) {
              localDW->DemuxmessageCAN1andcheckcoher_c = true;
            }

            /* Outputs for Atomic SubSystem: '<S740>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift3_as);

            /* End of Outputs for SubSystem: '<S740>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S740>/Bit Shift1' */
            /* MATLAB Function: '<S743>/bit_shift' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S748>:1' */
            /* '<S748>:1:8' */
            Rx_mc_sync1_CAN1 = (uint8_T)((uint32_T)localB->BitShift3_as.y >> 5);

            /* End of Outputs for SubSystem: '<S740>/Bit Shift1' */

            /* Switch: '<S741>/Switch' incorporates:
             *  Constant: '<S741>/Constant'
             *  Constant: '<S741>/Constant1'
             *  DataStoreRead: '<S741>/Data Store Read1'
             *  DataStoreWrite: '<S741>/Data Store Write'
             *  RelationalOperator: '<S741>/GreaterThan'
             *  Sum: '<S741>/Plus'
             */
            if (Rx_mc_sync1_CAN1 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S741>/Switch' */

            /* Outputs for Atomic SubSystem: '<S740>/Bit Shift' */
            /* MATLAB Function: '<S742>/bit_shift' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S747>:1' */
            /* '<S747>:1:8' */
            Rx_bc_sync1_CAN1 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN1->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S740>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S740>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN1->Buffer_1, &localB->BitShift4_iv);

            /* End of Outputs for SubSystem: '<S740>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S740>/Bit Shift2' */
            /* MATLAB Function: '<S744>/bit_shift' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S749>:1' */
            /* '<S749>:1:8' */
            Rx_id_sync1_CAN1 = (uint8_T)((uint32_T)localB->BitShift4_iv.y >> 4);

            /* End of Outputs for SubSystem: '<S740>/Bit Shift2' */

            /* Logic: '<S738>/AND' incorporates:
             *  Constant: '<S342>/Constant'
             *  RelationalOperator: '<S738>/Equal'
             *  RelationalOperator: '<S738>/Equal1'
             */
            localB->AND_o = ((Rx_bc_sync1_CAN1 == 1.0) && (Rx_id_sync1_CAN1 ==
              *rtd_Master_ID));

            /* SignalConversion: '<S738>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            localB->Buffer_2_i = rtd_Msg_Rx_CAN1->Buffer_2;

            /* SignalConversion: '<S738>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            localB->Buffer_3_p = rtd_Msg_Rx_CAN1->Buffer_3;

            /* SignalConversion: '<S738>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            localB->Buffer_4_k = rtd_Msg_Rx_CAN1->Buffer_4;

            /* SignalConversion: '<S738>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            localB->Buffer_5_b = rtd_Msg_Rx_CAN1->Buffer_5;

            /* SignalConversion: '<S738>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            localB->Buffer_6_d = rtd_Msg_Rx_CAN1->Buffer_6;

            /* SignalConversion: '<S738>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            localB->Buffer_7_h = rtd_Msg_Rx_CAN1->Buffer_7;

            /* SignalConversion: '<S738>/BusConversion_InsertedFor_CAN1_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read'
             */
            localB->Buffer_8_p = rtd_Msg_Rx_CAN1->Buffer_8;
            localB->Constant_f = ((uint8_T)0U);
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoher_c) {
              /* Disable for Outport: '<S738>/CAN1_msg_coherent' */
              localB->AND_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_c = false;
            }
          }

          /* End of Outputs for SubSystem: '<S736>/Demux message CAN1 and check coherence' */

          /* Outputs for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence1' incorporates:
           *  EnablePort: '<S739>/Enable'
           */
          if (*rtd_New_Msg_Ready_CAN2) {
            if (!localDW->DemuxmessageCAN1andcheckcoheren) {
              localDW->DemuxmessageCAN1andcheckcoheren = true;
            }

            /* Outputs for Atomic SubSystem: '<S752>/Bit Shift3' */
            BitShift3(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift3_b0);

            /* End of Outputs for SubSystem: '<S752>/Bit Shift3' */

            /* Outputs for Atomic SubSystem: '<S752>/Bit Shift1' */
            /* MATLAB Function: '<S755>/bit_shift' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S760>:1' */
            /* '<S760>:1:8' */
            Rx_mc_sync1_CAN2 = (uint8_T)((uint32_T)localB->BitShift3_b0.y >> 5);

            /* End of Outputs for SubSystem: '<S752>/Bit Shift1' */

            /* Switch: '<S753>/Switch' incorporates:
             *  Constant: '<S753>/Constant'
             *  Constant: '<S753>/Constant1'
             *  DataStoreRead: '<S753>/Data Store Read1'
             *  DataStoreWrite: '<S753>/Data Store Write'
             *  RelationalOperator: '<S753>/GreaterThan'
             *  Sum: '<S753>/Plus'
             */
            if (Rx_mc_sync1_CAN2 > 1.0) {
              localDW->msg_count_DEBUG += 1.0;
            }

            /* End of Switch: '<S753>/Switch' */

            /* Outputs for Atomic SubSystem: '<S752>/Bit Shift' */
            /* MATLAB Function: '<S754>/bit_shift' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S759>:1' */
            /* '<S759>:1:8' */
            Rx_bc_sync1_CAN2 = (uint8_T)((uint32_T)rtd_Msg_Rx_CAN2->Buffer_1 >>
              7);

            /* End of Outputs for SubSystem: '<S752>/Bit Shift' */

            /* Outputs for Atomic SubSystem: '<S752>/Bit Shift4' */
            BitShift4(rtd_Msg_Rx_CAN2->Buffer_1, &localB->BitShift4_p);

            /* End of Outputs for SubSystem: '<S752>/Bit Shift4' */

            /* Outputs for Atomic SubSystem: '<S752>/Bit Shift2' */
            /* MATLAB Function: '<S756>/bit_shift' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S761>:1' */
            /* '<S761>:1:8' */
            Rx_id_sync1_CAN2 = (uint8_T)((uint32_T)localB->BitShift4_p.y >> 4);

            /* End of Outputs for SubSystem: '<S752>/Bit Shift2' */

            /* Logic: '<S739>/AND' incorporates:
             *  Constant: '<S342>/Constant'
             *  RelationalOperator: '<S739>/Equal'
             *  RelationalOperator: '<S739>/Equal1'
             */
            localB->AND = ((Rx_bc_sync1_CAN2 == 1.0) && (Rx_id_sync1_CAN2 ==
              *rtd_Master_ID));

            /* SignalConversion: '<S739>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            localB->Buffer_2 = rtd_Msg_Rx_CAN2->Buffer_2;

            /* SignalConversion: '<S739>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            localB->Buffer_3 = rtd_Msg_Rx_CAN2->Buffer_3;

            /* SignalConversion: '<S739>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            localB->Buffer_4 = rtd_Msg_Rx_CAN2->Buffer_4;

            /* SignalConversion: '<S739>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            localB->Buffer_5 = rtd_Msg_Rx_CAN2->Buffer_5;

            /* SignalConversion: '<S739>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            localB->Buffer_6 = rtd_Msg_Rx_CAN2->Buffer_6;

            /* SignalConversion: '<S739>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            localB->Buffer_7 = rtd_Msg_Rx_CAN2->Buffer_7;

            /* SignalConversion: '<S739>/BusConversion_InsertedFor_CAN2_msg_at_inport_0' incorporates:
             *  DataStoreRead: '<S342>/Data Store Read3'
             */
            localB->Buffer_8 = rtd_Msg_Rx_CAN2->Buffer_8;
            localB->Constant = ((uint8_T)0U);
          } else {
            if (localDW->DemuxmessageCAN1andcheckcoheren) {
              /* Disable for Outport: '<S739>/CAN2_msg_coherent' */
              localB->AND = false;
              localDW->DemuxmessageCAN1andcheckcoheren = false;
            }
          }

          /* End of Outputs for SubSystem: '<S736>/Demux message CAN1 and check coherence1' */

          /* Switch: '<S736>/Switch' incorporates:
           *  Constant: '<S738>/Constant'
           *  Constant: '<S739>/Constant'
           *  DataStoreRead: '<S342>/Data Store Read'
           *  DataStoreRead: '<S342>/Data Store Read3'
           *  DataStoreWrite: '<S736>/Data Store Write'
           */
          if (localB->AND_o) {
            localDW->Msg_Rx.Buffer_1 = localB->Constant_f;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2_i;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3_p;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4_k;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5_b;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6_d;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7_h;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8_p;
          } else {
            localDW->Msg_Rx.Buffer_1 = localB->Constant;
            localDW->Msg_Rx.Buffer_2 = localB->Buffer_2;
            localDW->Msg_Rx.Buffer_3 = localB->Buffer_3;
            localDW->Msg_Rx.Buffer_4 = localB->Buffer_4;
            localDW->Msg_Rx.Buffer_5 = localB->Buffer_5;
            localDW->Msg_Rx.Buffer_6 = localB->Buffer_6;
            localDW->Msg_Rx.Buffer_7 = localB->Buffer_7;
            localDW->Msg_Rx.Buffer_8 = localB->Buffer_8;
          }

          /* End of Switch: '<S736>/Switch' */

          /* Switch: '<S736>/Switch1' incorporates:
           *  Constant: '<S736>/Constant'
           *  Constant: '<S736>/Constant1'
           *  Constant: '<S736>/delay_estimation_1'
           *  Constant: '<S736>/delay_estimation_2'
           *  Product: '<S736>/Multiply'
           *  Product: '<S736>/Multiply1'
           *  Sum: '<S736>/Minus'
           *  Sum: '<S736>/Minus1'
           *  Sum: '<S736>/Sum'
           *  Sum: '<S736>/Sum1'
           */
          if (*rtd_New_Msg_Ready_CAN1) {
            Desync_Sync_bc1_s = ((5.0 * (real_T)Rx_mc_sync1_CAN1 + 40.0) + 1.0)
              - (real_T)*rtd_Msg_Rx_Ticks_CAN1;
          } else {
            Desync_Sync_bc1_s = ((8.0 * (real_T)Rx_mc_sync1_CAN2 + 40.0) + 1.0)
              - (real_T)*rtd_Msg_Rx_Ticks_CAN2;
          }

          /* End of Switch: '<S736>/Switch1' */

          /* DataStoreWrite: '<S736>/Data Store Write1' */
          localDW->Desync_Ticks = Desync_Sync_bc1_s;

          /* Logic: '<S736>/OR' incorporates:
           *  DataStoreWrite: '<S736>/Data Store Write2'
           */
          localDW->new_msg_Rx = (localB->AND_o || localB->AND);

          /* DataStoreWrite: '<S736>/Data Store Write3' incorporates:
           *  Constant: '<S736>/Constant2'
           */
          *rtd_Toggle_Pin_A0 = true;
        } else {
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c) {
              /* Disable for Outport: '<S738>/CAN1_msg_coherent' */
              localB->AND_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_c = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoheren) {
              /* Disable for Outport: '<S739>/CAN2_msg_coherent' */
              localB->AND = false;
              localDW->DemuxmessageCAN1andcheckcoheren = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S342>/Process_Messages' */

        /* Logic: '<S342>/AND1' incorporates:
         *  Logic: '<S342>/AND'
         *  Logic: '<S342>/NOT'
         */
        rtb_AND1_h2 = (rtb_Equal_e2 && (!rtb_AND1_g0));

        /* Outputs for Enabled SubSystem: '<S342>/Reset Tx msg counter' */
        ResetTxmsgcounter(rtb_AND1_h2, rtd_Tx_msg_count_CAN1,
                          rtd_Tx_msg_count_CAN2);

        /* End of Outputs for SubSystem: '<S342>/Reset Tx msg counter' */
      } else {
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S342>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c) {
              /* Disable for Outport: '<S738>/CAN1_msg_coherent' */
              localB->AND_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_c = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoheren) {
              /* Disable for Outport: '<S739>/CAN2_msg_coherent' */
              localB->AND = false;
              localDW->DemuxmessageCAN1andcheckcoheren = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S342>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMP Task - Sync bc1 check' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - TMR' incorporates:
       *  EnablePort: '<S343>/Enable'
       */
      if ((*rtd_Local_Ticks >= 236.0) && (*rtd_Local_Ticks < localC->Sum15)) {
        if (!localDW->COMPTaskTMR_MODE) {
          localDW->COMPTaskTMR_MODE = true;
        }

        /* RelationalOperator: '<S343>/Equal2' incorporates:
         *  Constant: '<S343>/Constant1'
         *  DataStoreRead: '<S343>/Data Store Read'
         */
        rtb_Equal_e2 = (localDW->Role_ID == 1.0);

        /* Outputs for Enabled SubSystem: '<S343>/TMR_load_msgs_1' incorporates:
         *  EnablePort: '<S764>/Enable'
         */
        if ((*rtd_Local_Ticks == 236.0) && rtb_Equal_e2) {
          /* Outputs for Atomic SubSystem: '<S767>/Bit Shift' */
          BitShift(localDW->output_control1_msg.Buffer_2, &localB->BitShift_p2);

          /* End of Outputs for SubSystem: '<S767>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S767>/Bit Shift1' */
          BitShift1(localB->BitShift_p2.y, &localB->BitShift1_bg);

          /* End of Outputs for SubSystem: '<S767>/Bit Shift1' */

          /* Sum: '<S767>/Minus' incorporates:
           *  DataStoreRead: '<S764>/Data Store Read'
           *  DataTypeConversion: '<S767>/Cast1'
           */
          rtb_Fix1_e = localDW->output_control1_msg.Buffer_2 -
            localB->BitShift1_bg.y;

          /* Product: '<S767>/Divide' */
          rtb_Plus1_b = rtb_Fix1_e / localC->Power1_i5;

          /* Rounding: '<S767>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Minus_ch = ceil(rtb_Plus1_b);
          } else {
            rtb_Minus_ch = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S767>/Fix1' */

          /* Switch: '<S767>/Switch' incorporates:
           *  DataStoreWrite: '<S764>/Data Store Write'
           *  Gain: '<S767>/Gain1'
           *  Product: '<S767>/Multiply'
           *  Product: '<S767>/Multiply1'
           *  Sum: '<S767>/Minus1'
           *  Sum: '<S767>/Minus2'
           */
          if (localB->BitShift_p2.y > ((uint8_T)0U)) {
            localDW->tau_fr_out1 = ((rtb_Fix1_e - rtb_Minus_ch *
              localC->Power1_i5) * localC->Power_h + rtb_Minus_ch) * (-1.0);
          } else {
            localDW->tau_fr_out1 = (rtb_Fix1_e - rtb_Minus_ch *
              localC->Power1_i5) * localC->Power_h + rtb_Minus_ch;
          }

          /* End of Switch: '<S767>/Switch' */

          /* Outputs for Atomic SubSystem: '<S768>/Bit Shift' */
          BitShift(localDW->output_control1_msg.Buffer_3, &localB->BitShift_pt);

          /* End of Outputs for SubSystem: '<S768>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S768>/Bit Shift1' */
          BitShift1(localB->BitShift_pt.y, &localB->BitShift1_dk);

          /* End of Outputs for SubSystem: '<S768>/Bit Shift1' */

          /* Sum: '<S768>/Minus' incorporates:
           *  DataStoreRead: '<S764>/Data Store Read'
           *  DataTypeConversion: '<S768>/Cast1'
           */
          rtb_Minus_ch = localDW->output_control1_msg.Buffer_3 -
            localB->BitShift1_dk.y;

          /* Product: '<S768>/Divide' */
          rtb_Plus1_b = rtb_Minus_ch / localC->Power1_m;

          /* Rounding: '<S768>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Fix1_e = ceil(rtb_Plus1_b);
          } else {
            rtb_Fix1_e = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S768>/Fix1' */

          /* Switch: '<S768>/Switch' incorporates:
           *  DataStoreWrite: '<S764>/Data Store Write1'
           *  Gain: '<S768>/Gain1'
           *  Product: '<S768>/Multiply'
           *  Product: '<S768>/Multiply1'
           *  Sum: '<S768>/Minus1'
           *  Sum: '<S768>/Minus2'
           */
          if (localB->BitShift_pt.y > ((uint8_T)0U)) {
            localDW->tau_fl_out1 = ((rtb_Minus_ch - rtb_Fix1_e *
              localC->Power1_m) * localC->Power_d + rtb_Fix1_e) * (-1.0);
          } else {
            localDW->tau_fl_out1 = (rtb_Minus_ch - rtb_Fix1_e * localC->Power1_m)
              * localC->Power_d + rtb_Fix1_e;
          }

          /* End of Switch: '<S768>/Switch' */

          /* Outputs for Atomic SubSystem: '<S769>/Bit Shift' */
          BitShift(localDW->output_control1_msg.Buffer_4, &localB->BitShift_aa);

          /* End of Outputs for SubSystem: '<S769>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S769>/Bit Shift1' */
          BitShift1(localB->BitShift_aa.y, &localB->BitShift1_gq);

          /* End of Outputs for SubSystem: '<S769>/Bit Shift1' */

          /* Sum: '<S769>/Minus' incorporates:
           *  DataStoreRead: '<S764>/Data Store Read'
           *  DataTypeConversion: '<S769>/Cast1'
           */
          rtb_Minus_ch = localDW->output_control1_msg.Buffer_4 -
            localB->BitShift1_gq.y;

          /* Product: '<S769>/Divide' */
          rtb_Plus1_b = rtb_Minus_ch / localC->Power1_k;

          /* Rounding: '<S769>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Fix1_e = ceil(rtb_Plus1_b);
          } else {
            rtb_Fix1_e = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S769>/Fix1' */

          /* Switch: '<S769>/Switch' incorporates:
           *  DataStoreWrite: '<S764>/Data Store Write2'
           *  Gain: '<S769>/Gain1'
           *  Product: '<S769>/Multiply'
           *  Product: '<S769>/Multiply1'
           *  Sum: '<S769>/Minus1'
           *  Sum: '<S769>/Minus2'
           */
          if (localB->BitShift_aa.y > ((uint8_T)0U)) {
            localDW->tau_ar_out1 = ((rtb_Minus_ch - rtb_Fix1_e *
              localC->Power1_k) * localC->Power_d5 + rtb_Fix1_e) * (-1.0);
          } else {
            localDW->tau_ar_out1 = (rtb_Minus_ch - rtb_Fix1_e * localC->Power1_k)
              * localC->Power_d5 + rtb_Fix1_e;
          }

          /* End of Switch: '<S769>/Switch' */

          /* Outputs for Atomic SubSystem: '<S770>/Bit Shift' */
          BitShift(localDW->output_control1_msg.Buffer_5, &localB->BitShift_hx);

          /* End of Outputs for SubSystem: '<S770>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S770>/Bit Shift1' */
          BitShift1(localB->BitShift_hx.y, &localB->BitShift1_a1u);

          /* End of Outputs for SubSystem: '<S770>/Bit Shift1' */

          /* Sum: '<S770>/Minus' incorporates:
           *  DataStoreRead: '<S764>/Data Store Read'
           *  DataTypeConversion: '<S770>/Cast1'
           */
          rtb_Minus_ch = localDW->output_control1_msg.Buffer_5 -
            localB->BitShift1_a1u.y;

          /* Product: '<S770>/Divide' */
          rtb_Plus1_b = rtb_Minus_ch / localC->Power1_p;

          /* Rounding: '<S770>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Fix1_e = ceil(rtb_Plus1_b);
          } else {
            rtb_Fix1_e = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S770>/Fix1' */

          /* Switch: '<S770>/Switch' incorporates:
           *  DataStoreWrite: '<S764>/Data Store Write3'
           *  Gain: '<S770>/Gain1'
           *  Product: '<S770>/Multiply'
           *  Product: '<S770>/Multiply1'
           *  Sum: '<S770>/Minus1'
           *  Sum: '<S770>/Minus2'
           */
          if (localB->BitShift_hx.y > ((uint8_T)0U)) {
            localDW->tau_al_out1 = ((rtb_Minus_ch - rtb_Fix1_e *
              localC->Power1_p) * localC->Power_e + rtb_Fix1_e) * (-1.0);
          } else {
            localDW->tau_al_out1 = (rtb_Minus_ch - rtb_Fix1_e * localC->Power1_p)
              * localC->Power_e + rtb_Fix1_e;
          }

          /* End of Switch: '<S770>/Switch' */

          /* DataStoreWrite: '<S764>/Data Store Write4' incorporates:
           *  DataStoreRead: '<S764>/Data Store Read'
           */
          localDW->set_miss_out1 = localDW->output_control1_msg.Buffer_6;

          /* DataStoreWrite: '<S764>/Data Store Write5' incorporates:
           *  DataStoreRead: '<S764>/Data Store Read'
           */
          localDW->sensor_miss_out1 = localDW->output_control1_msg.Buffer_7;

          /* DataStoreWrite: '<S764>/Data Store Write19' incorporates:
           *  Constant: '<S764>/Constant8'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S343>/TMR_load_msgs_1' */

        /* Outputs for Enabled SubSystem: '<S343>/TMR_load_msgs_2' incorporates:
         *  EnablePort: '<S765>/Enable'
         */
        if ((*rtd_Local_Ticks == localC->Plus1) && rtb_Equal_e2) {
          /* Outputs for Atomic SubSystem: '<S787>/Bit Shift' */
          BitShift(localDW->output_control2_msg.Buffer_2, &localB->BitShift_fh);

          /* End of Outputs for SubSystem: '<S787>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S787>/Bit Shift1' */
          BitShift1(localB->BitShift_fh.y, &localB->BitShift1_pi);

          /* End of Outputs for SubSystem: '<S787>/Bit Shift1' */

          /* Sum: '<S787>/Minus' incorporates:
           *  DataStoreRead: '<S765>/Data Store Read1'
           *  DataTypeConversion: '<S787>/Cast1'
           */
          rtb_Fix1_e = localDW->output_control2_msg.Buffer_2 -
            localB->BitShift1_pi.y;

          /* Product: '<S787>/Divide' */
          rtb_Plus1_b = rtb_Fix1_e / localC->Power1;

          /* Rounding: '<S787>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Minus_ch = ceil(rtb_Plus1_b);
          } else {
            rtb_Minus_ch = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S787>/Fix1' */

          /* Switch: '<S787>/Switch' incorporates:
           *  DataStoreWrite: '<S765>/Data Store Write6'
           *  Gain: '<S787>/Gain1'
           *  Product: '<S787>/Multiply'
           *  Product: '<S787>/Multiply1'
           *  Sum: '<S787>/Minus1'
           *  Sum: '<S787>/Minus2'
           */
          if (localB->BitShift_fh.y > ((uint8_T)0U)) {
            localDW->tau_fr_out2 = ((rtb_Fix1_e - rtb_Minus_ch * localC->Power1)
              * localC->Power + rtb_Minus_ch) * (-1.0);
          } else {
            localDW->tau_fr_out2 = (rtb_Fix1_e - rtb_Minus_ch * localC->Power1) *
              localC->Power + rtb_Minus_ch;
          }

          /* End of Switch: '<S787>/Switch' */

          /* Outputs for Atomic SubSystem: '<S788>/Bit Shift' */
          BitShift(localDW->output_control2_msg.Buffer_3, &localB->BitShift_l0);

          /* End of Outputs for SubSystem: '<S788>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S788>/Bit Shift1' */
          BitShift1(localB->BitShift_l0.y, &localB->BitShift1_hf);

          /* End of Outputs for SubSystem: '<S788>/Bit Shift1' */

          /* Sum: '<S788>/Minus' incorporates:
           *  DataStoreRead: '<S765>/Data Store Read1'
           *  DataTypeConversion: '<S788>/Cast1'
           */
          rtb_Minus_ch = localDW->output_control2_msg.Buffer_3 -
            localB->BitShift1_hf.y;

          /* Product: '<S788>/Divide' */
          rtb_Plus1_b = rtb_Minus_ch / localC->Power1_i;

          /* Rounding: '<S788>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Fix1_e = ceil(rtb_Plus1_b);
          } else {
            rtb_Fix1_e = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S788>/Fix1' */

          /* Switch: '<S788>/Switch' incorporates:
           *  DataStoreWrite: '<S765>/Data Store Write7'
           *  Gain: '<S788>/Gain1'
           *  Product: '<S788>/Multiply'
           *  Product: '<S788>/Multiply1'
           *  Sum: '<S788>/Minus1'
           *  Sum: '<S788>/Minus2'
           */
          if (localB->BitShift_l0.y > ((uint8_T)0U)) {
            localDW->tau_fl_out2 = ((rtb_Minus_ch - rtb_Fix1_e *
              localC->Power1_i) * localC->Power_p + rtb_Fix1_e) * (-1.0);
          } else {
            localDW->tau_fl_out2 = (rtb_Minus_ch - rtb_Fix1_e * localC->Power1_i)
              * localC->Power_p + rtb_Fix1_e;
          }

          /* End of Switch: '<S788>/Switch' */

          /* Outputs for Atomic SubSystem: '<S789>/Bit Shift' */
          BitShift(localDW->output_control2_msg.Buffer_4, &localB->BitShift_ax);

          /* End of Outputs for SubSystem: '<S789>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S789>/Bit Shift1' */
          BitShift1(localB->BitShift_ax.y, &localB->BitShift1_df);

          /* End of Outputs for SubSystem: '<S789>/Bit Shift1' */

          /* Sum: '<S789>/Minus' incorporates:
           *  DataStoreRead: '<S765>/Data Store Read1'
           *  DataTypeConversion: '<S789>/Cast1'
           */
          rtb_Minus_ch = localDW->output_control2_msg.Buffer_4 -
            localB->BitShift1_df.y;

          /* Product: '<S789>/Divide' */
          rtb_Plus1_b = rtb_Minus_ch / localC->Power1_g;

          /* Rounding: '<S789>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Fix1_e = ceil(rtb_Plus1_b);
          } else {
            rtb_Fix1_e = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S789>/Fix1' */

          /* Switch: '<S789>/Switch' incorporates:
           *  DataStoreWrite: '<S765>/Data Store Write8'
           *  Gain: '<S789>/Gain1'
           *  Product: '<S789>/Multiply'
           *  Product: '<S789>/Multiply1'
           *  Sum: '<S789>/Minus1'
           *  Sum: '<S789>/Minus2'
           */
          if (localB->BitShift_ax.y > ((uint8_T)0U)) {
            localDW->tau_ar_out2 = ((rtb_Minus_ch - rtb_Fix1_e *
              localC->Power1_g) * localC->Power_m + rtb_Fix1_e) * (-1.0);
          } else {
            localDW->tau_ar_out2 = (rtb_Minus_ch - rtb_Fix1_e * localC->Power1_g)
              * localC->Power_m + rtb_Fix1_e;
          }

          /* End of Switch: '<S789>/Switch' */

          /* Outputs for Atomic SubSystem: '<S790>/Bit Shift' */
          BitShift(localDW->output_control2_msg.Buffer_5, &localB->BitShift_av);

          /* End of Outputs for SubSystem: '<S790>/Bit Shift' */

          /* Outputs for Atomic SubSystem: '<S790>/Bit Shift1' */
          BitShift1(localB->BitShift_av.y, &localB->BitShift1_j);

          /* End of Outputs for SubSystem: '<S790>/Bit Shift1' */

          /* Sum: '<S790>/Minus' incorporates:
           *  DataStoreRead: '<S765>/Data Store Read1'
           *  DataTypeConversion: '<S790>/Cast1'
           */
          rtb_Minus_ch = localDW->output_control2_msg.Buffer_5 -
            localB->BitShift1_j.y;

          /* Product: '<S790>/Divide' */
          rtb_Plus1_b = rtb_Minus_ch / localC->Power1_gk;

          /* Rounding: '<S790>/Fix1' */
          if (rtb_Plus1_b < 0.0) {
            rtb_Fix1_e = ceil(rtb_Plus1_b);
          } else {
            rtb_Fix1_e = floor(rtb_Plus1_b);
          }

          /* End of Rounding: '<S790>/Fix1' */

          /* Switch: '<S790>/Switch' incorporates:
           *  DataStoreWrite: '<S765>/Data Store Write9'
           *  Gain: '<S790>/Gain1'
           *  Product: '<S790>/Multiply'
           *  Product: '<S790>/Multiply1'
           *  Sum: '<S790>/Minus1'
           *  Sum: '<S790>/Minus2'
           */
          if (localB->BitShift_av.y > ((uint8_T)0U)) {
            localDW->tau_al_out2 = ((rtb_Minus_ch - rtb_Fix1_e *
              localC->Power1_gk) * localC->Power_f + rtb_Fix1_e) * (-1.0);
          } else {
            localDW->tau_al_out2 = (rtb_Minus_ch - rtb_Fix1_e *
              localC->Power1_gk) * localC->Power_f + rtb_Fix1_e;
          }

          /* End of Switch: '<S790>/Switch' */

          /* DataStoreWrite: '<S765>/Data Store Write10' incorporates:
           *  DataStoreRead: '<S765>/Data Store Read1'
           */
          localDW->set_miss_out2 = localDW->output_control2_msg.Buffer_6;

          /* DataStoreWrite: '<S765>/Data Store Write11' incorporates:
           *  DataStoreRead: '<S765>/Data Store Read1'
           */
          localDW->sensor_miss_out2 = localDW->output_control2_msg.Buffer_7;

          /* DataStoreWrite: '<S765>/Data Store Write19' incorporates:
           *  Constant: '<S765>/Constant8'
           */
          *rtd_Toggle_Pin_A0 = true;
        }

        /* End of Outputs for SubSystem: '<S343>/TMR_load_msgs_2' */

        /* Outputs for Enabled SubSystem: '<S343>/TMR_main' incorporates:
         *  EnablePort: '<S766>/Enable'
         */
        if ((*rtd_Local_Ticks == localC->Plus) && rtb_Equal_e2) {
          if (!localDW->TMR_main_MODE) {
            localDW->TMR_main_MODE = true;
          }

          /* Logic: '<S766>/AND12' incorporates:
           *  DataStoreRead: '<S766>/Data Store Read2'
           *  DataStoreRead: '<S766>/Data Store Read4'
           *  DataStoreRead: '<S766>/Data Store Read5'
           *  Logic: '<S766>/NOT'
           *  Logic: '<S766>/NOT1'
           */
          rtb_Equal_e2 = (localDW->output_control1_rx && (localDW->set_miss_out1
            == 0) && (localDW->sensor_miss_out1 == 0));

          /* Outputs for Enabled SubSystem: '<S766>/Agreement Out1' incorporates:
           *  EnablePort: '<S807>/Enable'
           */
          if (rtb_Equal_e2) {
            if (!localDW->AgreementOut1_MODE) {
              localDW->AgreementOut1_MODE = true;
            }

            /* Logic: '<S807>/AND' incorporates:
             *  DataStoreRead: '<S807>/Data Store Read'
             *  DataStoreRead: '<S807>/Data Store Read4'
             *  RelationalOperator: '<S807>/GreaterThan'
             *  RelationalOperator: '<S807>/GreaterThan1'
             *  Sum: '<S807>/Plus'
             *  Sum: '<S807>/Plus1'
             */
            tau_fr1_agree_s = ((localDW->torque_fr_set <= localDW->tau_fr_out1 +
                                localC->Gain_a) && (localDW->torque_fr_set >=
              localDW->tau_fr_out1 - localC->Gain1_o));

            /* Logic: '<S807>/AND1' incorporates:
             *  DataStoreRead: '<S807>/Data Store Read1'
             *  DataStoreRead: '<S807>/Data Store Read5'
             *  RelationalOperator: '<S807>/GreaterThan2'
             *  RelationalOperator: '<S807>/GreaterThan3'
             *  Sum: '<S807>/Plus2'
             *  Sum: '<S807>/Plus3'
             */
            tau_fl1_agree_s = ((localDW->torque_fl_set <= localDW->tau_fl_out1 +
                                localC->Gain2_n) && (localDW->torque_fl_set >=
              localDW->tau_fl_out1 - localC->Gain3_m));

            /* Logic: '<S807>/AND2' incorporates:
             *  DataStoreRead: '<S807>/Data Store Read2'
             *  DataStoreRead: '<S807>/Data Store Read6'
             *  RelationalOperator: '<S807>/GreaterThan4'
             *  RelationalOperator: '<S807>/GreaterThan5'
             *  Sum: '<S807>/Plus4'
             *  Sum: '<S807>/Plus5'
             */
            tau_ar1_agree_s = ((localDW->torque_ar_set <= localDW->tau_ar_out1 +
                                localC->Gain4_e) && (localDW->torque_ar_set >=
              localDW->tau_ar_out1 - localC->Gain5_n));

            /* Logic: '<S807>/AND3' incorporates:
             *  DataStoreRead: '<S807>/Data Store Read3'
             *  DataStoreRead: '<S807>/Data Store Read7'
             *  RelationalOperator: '<S807>/GreaterThan6'
             *  RelationalOperator: '<S807>/GreaterThan7'
             *  Sum: '<S807>/Plus6'
             *  Sum: '<S807>/Plus7'
             */
            tau_al1_agree_s = ((localDW->torque_al_set <= localDW->tau_al_out1 +
                                localC->Gain6_l) && (localDW->torque_al_set >=
              localDW->tau_al_out1 - localC->Gain7_o));
          } else {
            if (localDW->AgreementOut1_MODE) {
              /* Disable for Outport: '<S807>/tau_fr_agree' */
              tau_fr1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_fl_agree ' */
              tau_fl1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_ar_agree' */
              tau_ar1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_al_agree' */
              tau_al1_agree_s = false;
              localDW->AgreementOut1_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S766>/Agreement Out1' */

          /* Logic: '<S766>/AND13' incorporates:
           *  DataStoreRead: '<S766>/Data Store Read3'
           *  DataStoreRead: '<S766>/Data Store Read6'
           *  DataStoreRead: '<S766>/Data Store Read7'
           *  Logic: '<S766>/NOT2'
           *  Logic: '<S766>/NOT3'
           */
          rtb_AND1_g0 = (localDW->output_control2_rx && (localDW->set_miss_out2 ==
            0) && (localDW->sensor_miss_out2 == 0));

          /* Outputs for Enabled SubSystem: '<S766>/Agreement Out2' incorporates:
           *  EnablePort: '<S808>/Enable'
           */
          if (rtb_AND1_g0) {
            if (!localDW->AgreementOut2_MODE) {
              localDW->AgreementOut2_MODE = true;
            }

            /* Logic: '<S808>/AND' incorporates:
             *  DataStoreRead: '<S808>/Data Store Read'
             *  DataStoreRead: '<S808>/Data Store Read4'
             *  RelationalOperator: '<S808>/GreaterThan'
             *  RelationalOperator: '<S808>/GreaterThan1'
             *  Sum: '<S808>/Plus'
             *  Sum: '<S808>/Plus1'
             */
            tau_fr2_agree_s = ((localDW->torque_fr_set <= localDW->tau_fr_out2 +
                                localC->Gain_b) && (localDW->torque_fr_set >=
              localDW->tau_fr_out2 - localC->Gain1_a));

            /* Logic: '<S808>/AND1' incorporates:
             *  DataStoreRead: '<S808>/Data Store Read1'
             *  DataStoreRead: '<S808>/Data Store Read5'
             *  RelationalOperator: '<S808>/GreaterThan2'
             *  RelationalOperator: '<S808>/GreaterThan3'
             *  Sum: '<S808>/Plus2'
             *  Sum: '<S808>/Plus3'
             */
            tau_fl2_agree_s = ((localDW->torque_fl_set <= localDW->tau_fl_out2 +
                                localC->Gain2_j) && (localDW->torque_fl_set >=
              localDW->tau_fl_out2 - localC->Gain3_k));

            /* Logic: '<S808>/AND2' incorporates:
             *  DataStoreRead: '<S808>/Data Store Read2'
             *  DataStoreRead: '<S808>/Data Store Read6'
             *  RelationalOperator: '<S808>/GreaterThan4'
             *  RelationalOperator: '<S808>/GreaterThan5'
             *  Sum: '<S808>/Plus4'
             *  Sum: '<S808>/Plus5'
             */
            tau_ar2_agree_s = ((localDW->torque_ar_set <= localDW->tau_ar_out2 +
                                localC->Gain4_m) && (localDW->torque_ar_set >=
              localDW->tau_ar_out2 - localC->Gain5_b));

            /* Logic: '<S808>/AND3' incorporates:
             *  DataStoreRead: '<S808>/Data Store Read3'
             *  DataStoreRead: '<S808>/Data Store Read7'
             *  RelationalOperator: '<S808>/GreaterThan6'
             *  RelationalOperator: '<S808>/GreaterThan7'
             *  Sum: '<S808>/Plus6'
             *  Sum: '<S808>/Plus7'
             */
            tau_al2_agree_s = ((localDW->torque_al_set <= localDW->tau_al_out2 +
                                localC->Gain6_o) && (localDW->torque_al_set >=
              localDW->tau_al_out2 - localC->Gain7_e));
          } else {
            if (localDW->AgreementOut2_MODE) {
              /* Disable for Outport: '<S808>/tau_fr_agree' */
              tau_fr2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_fl_agree ' */
              tau_fl2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_ar_agree' */
              tau_ar2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_al_agree' */
              tau_al2_agree_s = false;
              localDW->AgreementOut2_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S766>/Agreement Out2' */

          /* Outputs for Enabled SubSystem: '<S766>/Agreement Out3' incorporates:
           *  EnablePort: '<S809>/Enable'
           */
          if (rtb_Equal_e2 && rtb_AND1_g0) {
            if (!localDW->AgreementOut3_MODE) {
              localDW->AgreementOut3_MODE = true;
            }

            /* Logic: '<S809>/AND' incorporates:
             *  DataStoreRead: '<S809>/Data Store Read'
             *  DataStoreRead: '<S809>/Data Store Read4'
             *  RelationalOperator: '<S809>/GreaterThan'
             *  RelationalOperator: '<S809>/GreaterThan1'
             *  Sum: '<S809>/Plus'
             *  Sum: '<S809>/Plus1'
             */
            tau_fr_agree_s = ((localDW->tau_fr_out2 <= localDW->tau_fr_out1 +
                               localC->Gain) && (localDW->tau_fr_out2 >=
              localDW->tau_fr_out1 - localC->Gain1));

            /* Logic: '<S809>/AND1' incorporates:
             *  DataStoreRead: '<S809>/Data Store Read1'
             *  DataStoreRead: '<S809>/Data Store Read5'
             *  RelationalOperator: '<S809>/GreaterThan2'
             *  RelationalOperator: '<S809>/GreaterThan3'
             *  Sum: '<S809>/Plus2'
             *  Sum: '<S809>/Plus3'
             */
            tau_fl_agree_s = ((localDW->tau_fl_out2 <= localDW->tau_fl_out1 +
                               localC->Gain2) && (localDW->tau_fl_out2 >=
              localDW->tau_fl_out1 - localC->Gain3));

            /* Logic: '<S809>/AND2' incorporates:
             *  DataStoreRead: '<S809>/Data Store Read2'
             *  DataStoreRead: '<S809>/Data Store Read6'
             *  RelationalOperator: '<S809>/GreaterThan4'
             *  RelationalOperator: '<S809>/GreaterThan5'
             *  Sum: '<S809>/Plus4'
             *  Sum: '<S809>/Plus5'
             */
            tau_ar_agree_s = ((localDW->tau_ar_out2 <= localDW->tau_ar_out1 +
                               localC->Gain4) && (localDW->tau_ar_out2 >=
              localDW->tau_ar_out1 - localC->Gain5));

            /* Logic: '<S809>/AND3' incorporates:
             *  DataStoreRead: '<S809>/Data Store Read3'
             *  DataStoreRead: '<S809>/Data Store Read7'
             *  RelationalOperator: '<S809>/GreaterThan6'
             *  RelationalOperator: '<S809>/GreaterThan7'
             *  Sum: '<S809>/Plus6'
             *  Sum: '<S809>/Plus7'
             */
            tau_al_agree_s = ((localDW->tau_al_out2 <= localDW->tau_al_out1 +
                               localC->Gain6) && (localDW->tau_al_out2 >=
              localDW->tau_al_out1 - localC->Gain7));
          } else {
            if (localDW->AgreementOut3_MODE) {
              /* Disable for Outport: '<S809>/tau_fr_agree' */
              tau_fr_agree_s = false;

              /* Disable for Outport: '<S809>/tau_fl_agree ' */
              tau_fl_agree_s = false;

              /* Disable for Outport: '<S809>/tau_ar_agree' */
              tau_ar_agree_s = false;

              /* Disable for Outport: '<S809>/tau_al_agree' */
              tau_al_agree_s = false;
              localDW->AgreementOut3_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S766>/Agreement Out3' */

          /* DataStoreWrite: '<S766>/Data Store Write19' incorporates:
           *  Constant: '<S766>/Constant8'
           *  Logic: '<S766>/AND14'
           */
          *rtd_Toggle_Pin_A0 = true;

          /* Switch: '<S766>/Switch' incorporates:
           *  Logic: '<S766>/AND'
           */
          if ((!tau_fr_agree_s) || (!tau_fr1_agree_s)) {
            /* Switch: '<S766>/Switch1' incorporates:
             *  Logic: '<S766>/AND1'
             *  Logic: '<S766>/AND2'
             *  Switch: '<S766>/Switch2'
             */
            if (tau_fr_agree_s && tau_fr2_agree_s) {
              /* DataStoreWrite: '<S766>/Data Store Write12' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read9'
               */
              localDW->torque_fr_set = localDW->tau_fr_out2;
            } else if (tau_fr1_agree_s && tau_fr2_agree_s) {
              /* Switch: '<S766>/Switch2' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read8'
               *  DataStoreWrite: '<S766>/Data Store Write12'
               */
              localDW->torque_fr_set = localDW->tau_fr_out1;
            } else {
              /* DataStoreWrite: '<S766>/Data Store Write12' incorporates:
               *  Constant: '<S766>/Constant'
               *  Switch: '<S766>/Switch2'
               */
              localDW->torque_fr_set = ((uint8_T)0U);
            }

            /* End of Switch: '<S766>/Switch1' */
          }

          /* End of Switch: '<S766>/Switch' */

          /* Switch: '<S766>/Switch3' incorporates:
           *  Logic: '<S766>/AND3'
           */
          if ((!tau_fl1_agree_s) || (!tau_fl2_agree_s)) {
            /* Switch: '<S766>/Switch4' incorporates:
             *  Logic: '<S766>/AND4'
             *  Logic: '<S766>/AND5'
             *  Switch: '<S766>/Switch5'
             */
            if (tau_fl1_agree_s && tau_fl_agree_s) {
              /* DataStoreWrite: '<S766>/Data Store Write13' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read13'
               */
              localDW->torque_fl_set = localDW->tau_fl_out2;
            } else if (tau_fl2_agree_s && tau_fl_agree_s) {
              /* Switch: '<S766>/Switch5' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read12'
               *  DataStoreWrite: '<S766>/Data Store Write13'
               */
              localDW->torque_fl_set = localDW->tau_fl_out1;
            } else {
              /* DataStoreWrite: '<S766>/Data Store Write13' incorporates:
               *  Constant: '<S766>/Constant1'
               *  Switch: '<S766>/Switch5'
               */
              localDW->torque_fl_set = ((uint8_T)0U);
            }

            /* End of Switch: '<S766>/Switch4' */
          }

          /* End of Switch: '<S766>/Switch3' */

          /* Switch: '<S766>/Switch6' incorporates:
           *  Logic: '<S766>/AND6'
           */
          if ((!tau_ar1_agree_s) || (!tau_ar2_agree_s)) {
            /* Switch: '<S766>/Switch7' incorporates:
             *  Logic: '<S766>/AND7'
             *  Logic: '<S766>/AND8'
             *  Switch: '<S766>/Switch8'
             */
            if (tau_ar1_agree_s && tau_ar_agree_s) {
              /* DataStoreWrite: '<S766>/Data Store Write14' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read16'
               */
              localDW->torque_ar_set = localDW->tau_ar_out2;
            } else if (tau_ar2_agree_s && tau_ar_agree_s) {
              /* Switch: '<S766>/Switch8' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read15'
               *  DataStoreWrite: '<S766>/Data Store Write14'
               */
              localDW->torque_ar_set = localDW->tau_ar_out1;
            } else {
              /* DataStoreWrite: '<S766>/Data Store Write14' incorporates:
               *  Constant: '<S766>/Constant2'
               *  Switch: '<S766>/Switch8'
               */
              localDW->torque_ar_set = ((uint8_T)0U);
            }

            /* End of Switch: '<S766>/Switch7' */
          }

          /* End of Switch: '<S766>/Switch6' */

          /* Switch: '<S766>/Switch9' incorporates:
           *  Logic: '<S766>/AND9'
           */
          if ((!tau_al1_agree_s) || (!tau_al2_agree_s)) {
            /* Switch: '<S766>/Switch10' incorporates:
             *  Logic: '<S766>/AND10'
             *  Logic: '<S766>/AND11'
             *  Switch: '<S766>/Switch11'
             */
            if (tau_al1_agree_s && tau_al_agree_s) {
              /* DataStoreWrite: '<S766>/Data Store Write15' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read19'
               */
              localDW->torque_al_set = localDW->tau_al_out2;
            } else if (tau_al2_agree_s && tau_al_agree_s) {
              /* Switch: '<S766>/Switch11' incorporates:
               *  DataStoreRead: '<S766>/Data Store Read18'
               *  DataStoreWrite: '<S766>/Data Store Write15'
               */
              localDW->torque_al_set = localDW->tau_al_out1;
            } else {
              /* DataStoreWrite: '<S766>/Data Store Write15' incorporates:
               *  Constant: '<S766>/Constant3'
               *  Switch: '<S766>/Switch11'
               */
              localDW->torque_al_set = ((uint8_T)0U);
            }

            /* End of Switch: '<S766>/Switch10' */
          }

          /* End of Switch: '<S766>/Switch9' */

          /* DataStoreRead: '<S766>/Data Store Read24' */
          TMR_miss_set = localDW->Error_SetValues_NotRX;

          /* DataStoreRead: '<S766>/Data Store Read20' */
          TMR_miss1_set = localDW->set_miss_out1;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift' */
          /* MATLAB Function: '<S810>/bit_shift' incorporates:
           *  DataTypeConversion: '<S766>/Cast'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S831>:1' */
          /* '<S831>:1:6' */
          shift1_s = (uint8_T)(TMR_miss1_set << 1);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift' */

          /* DataStoreRead: '<S766>/Data Store Read22' */
          TMR_miss2_set = localDW->set_miss_out2;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift1' */
          /* MATLAB Function: '<S811>/bit_shift' incorporates:
           *  DataTypeConversion: '<S766>/Cast1'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S832>:1' */
          /* '<S832>:1:6' */
          shift2_s = (uint8_T)(TMR_miss2_set << 2);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift1' */

          /* DataStoreRead: '<S766>/Data Store Read25' */
          TMR_miss_sensor = localDW->Error_SensorValues_NotRX;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift2' */
          /* MATLAB Function: '<S822>/bit_shift' incorporates:
           *  DataTypeConversion: '<S766>/Cast2'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S843>:1' */
          /* '<S843>:1:6' */
          shift3_s = (uint8_T)(TMR_miss_sensor << 3);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift2' */

          /* DataStoreRead: '<S766>/Data Store Read21' */
          TMR_miss1_sensor = localDW->sensor_miss_out1;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift3' */
          /* MATLAB Function: '<S824>/bit_shift' incorporates:
           *  DataTypeConversion: '<S766>/Cast3'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S845>:1' */
          /* '<S845>:1:6' */
          shift4_s = (uint8_T)(TMR_miss1_sensor << 4);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift3' */

          /* DataStoreRead: '<S766>/Data Store Read23' */
          TMR_miss2_sensor = localDW->sensor_miss_out2;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift4' */
          /* MATLAB Function: '<S825>/bit_shift' incorporates:
           *  DataTypeConversion: '<S766>/Cast4'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S846>:1' */
          /* '<S846>:1:6' */
          shift5_s = (uint8_T)(TMR_miss2_sensor << 5);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift4' */

          /* Logic: '<S766>/NOT4' incorporates:
           *  DataStoreRead: '<S766>/Data Store Read26'
           */
          TMR_miss_out1 = !localDW->output_control1_rx;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift5' */
          /* MATLAB Function: '<S826>/bit_shift' incorporates:
           *  DataTypeConversion: '<S766>/Cast5'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S847>:1' */
          /* '<S847>:1:6' */
          shift6_s = (uint8_T)(TMR_miss_out1 << 6);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift5' */

          /* Logic: '<S766>/NOT5' incorporates:
           *  DataStoreRead: '<S766>/Data Store Read27'
           */
          TMR_miss_out2 = !localDW->output_control2_rx;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift6' */
          /* MATLAB Function: '<S827>/bit_shift' incorporates:
           *  DataTypeConversion: '<S766>/Cast6'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S848>:1' */
          /* '<S848>:1:6' */
          shift7_s = (uint8_T)(TMR_miss_out2 << 7);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift6' */

          /* Sum: '<S766>/Sum' incorporates:
           *  DataTypeConversion: '<S766>/Cast8'
           */
          error_log1_s = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
            ((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
            ((uint32_T)(uint8_T)((uint32_T)TMR_miss_set + shift1_s) + shift2_s)
            + shift3_s) + shift4_s) + shift5_s) + shift6_s) + shift7_s);

          /* DataTypeConversion: '<S766>/Cast9' */
          rtb_Cast9 = tau_fl1_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift7' */
          BitShift3(rtb_Cast9, &localB->BitShift7);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift7' */

          /* DataTypeConversion: '<S766>/Cast10' */
          rtb_Cast10 = tau_ar1_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift8' */
          BitShift19(rtb_Cast10, &localB->BitShift8);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift8' */

          /* DataTypeConversion: '<S766>/Cast11' */
          rtb_Cast11 = tau_al1_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift9' */
          BitShift20(rtb_Cast11, &localB->BitShift9);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift9' */

          /* DataTypeConversion: '<S766>/Cast12' */
          rtb_Cast12 = tau_fr2_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift10' */
          BitShift4(rtb_Cast12, &localB->BitShift10);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift10' */

          /* DataTypeConversion: '<S766>/Cast15' */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S834>:1' */
          /* '<S834>:1:6' */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S835>:1' */
          /* '<S835>:1:6' */
          rtb_Cast15 = tau_al2_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift13' */
          BitShift1(rtb_Cast15, &localB->BitShift13);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift13' */

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift11' */
          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift12' */
          /* Sum: '<S766>/Sum1' incorporates:
           *  DataTypeConversion: '<S766>/Cast13'
           *  DataTypeConversion: '<S766>/Cast14'
           *  DataTypeConversion: '<S766>/Cast7'
           *  MATLAB Function: '<S813>/bit_shift'
           *  MATLAB Function: '<S814>/bit_shift'
           */
          error_log2_s = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
            ((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
            ((uint32_T)(uint8_T)((uint32_T)tau_fr1_agree_s + localB->BitShift7.y)
             + localB->BitShift8.y) + localB->BitShift9.y) +
            localB->BitShift10.y) + (tau_fl2_agree_s << 5)) + (tau_ar2_agree_s <<
            6)) + localB->BitShift13.y);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift12' */
          /* End of Outputs for SubSystem: '<S766>/Bit Shift11' */

          /* DataTypeConversion: '<S766>/Cast17' */
          rtb_Cast17 = tau_fl_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift18' */
          BitShift3(rtb_Cast17, &localB->BitShift18);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift18' */

          /* DataTypeConversion: '<S766>/Cast18' */
          rtb_Cast18 = tau_ar_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift19' */
          BitShift19(rtb_Cast18, &localB->BitShift19_l);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift19' */

          /* DataTypeConversion: '<S766>/Cast19' */
          rtb_Cast19 = tau_al_agree_s;

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift20' */
          BitShift20(rtb_Cast19, &localB->BitShift20_a);

          /* End of Outputs for SubSystem: '<S766>/Bit Shift20' */

          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift14' */
          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift15' */
          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift16' */
          /* Outputs for Atomic SubSystem: '<S766>/Bit Shift17' */
          /* Sum: '<S766>/Sum2' incorporates:
           *  Constant: '<S766>/Constant4'
           *  Constant: '<S766>/Constant5'
           *  Constant: '<S766>/Constant6'
           *  Constant: '<S766>/Constant7'
           *  DataTypeConversion: '<S766>/Cast16'
           *  MATLAB Function: '<S816>/bit_shift'
           *  MATLAB Function: '<S817>/bit_shift'
           *  MATLAB Function: '<S818>/bit_shift'
           *  MATLAB Function: '<S819>/bit_shift'
           */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S837>:1' */
          /* '<S837>:1:6' */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S838>:1' */
          /* '<S838>:1:6' */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S839>:1' */
          /* '<S839>:1:6' */
          /* MATLAB Function 'Logic and Bit Operations/Bit Shift/bit_shift': '<S840>:1' */
          /* '<S840>:1:6' */
          error_log3_s = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
            ((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)
            ((uint32_T)(uint8_T)((uint32_T)tau_fr_agree_s + localB->BitShift18.y)
             + localB->BitShift19_l.y) + localB->BitShift20_a.y) + (uint8_T)
            (((uint8_T)0U) << 4)) + (uint8_T)(((uint8_T)0U) << 5)) + (uint8_T)
            (((uint8_T)0U) << 6)) + (uint8_T)(((uint8_T)0U) << 7));

          /* End of Outputs for SubSystem: '<S766>/Bit Shift17' */
          /* End of Outputs for SubSystem: '<S766>/Bit Shift16' */
          /* End of Outputs for SubSystem: '<S766>/Bit Shift15' */
          /* End of Outputs for SubSystem: '<S766>/Bit Shift14' */

          /* DataStoreWrite: '<S766>/Data Store Write16' */
          localDW->error_log_1 = error_log1_s;

          /* DataStoreWrite: '<S766>/Data Store Write17' */
          localDW->error_log_2 = error_log2_s;

          /* DataStoreWrite: '<S766>/Data Store Write18' */
          localDW->error_log_3 = error_log3_s;
        } else {
          if (localDW->TMR_main_MODE) {
            /* Disable for Enabled SubSystem: '<S766>/Agreement Out1' */
            if (localDW->AgreementOut1_MODE) {
              /* Disable for Outport: '<S807>/tau_fr_agree' */
              tau_fr1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_fl_agree ' */
              tau_fl1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_ar_agree' */
              tau_ar1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_al_agree' */
              tau_al1_agree_s = false;
              localDW->AgreementOut1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out1' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out2' */
            if (localDW->AgreementOut2_MODE) {
              /* Disable for Outport: '<S808>/tau_fr_agree' */
              tau_fr2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_fl_agree ' */
              tau_fl2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_ar_agree' */
              tau_ar2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_al_agree' */
              tau_al2_agree_s = false;
              localDW->AgreementOut2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out2' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out3' */
            if (localDW->AgreementOut3_MODE) {
              /* Disable for Outport: '<S809>/tau_fr_agree' */
              tau_fr_agree_s = false;

              /* Disable for Outport: '<S809>/tau_fl_agree ' */
              tau_fl_agree_s = false;

              /* Disable for Outport: '<S809>/tau_ar_agree' */
              tau_ar_agree_s = false;

              /* Disable for Outport: '<S809>/tau_al_agree' */
              tau_al_agree_s = false;
              localDW->AgreementOut3_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out3' */
            localDW->TMR_main_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S343>/TMR_main' */
      } else {
        if (localDW->COMPTaskTMR_MODE) {
          /* Disable for Enabled SubSystem: '<S343>/TMR_main' */
          if (localDW->TMR_main_MODE) {
            /* Disable for Enabled SubSystem: '<S766>/Agreement Out1' */
            if (localDW->AgreementOut1_MODE) {
              /* Disable for Outport: '<S807>/tau_fr_agree' */
              tau_fr1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_fl_agree ' */
              tau_fl1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_ar_agree' */
              tau_ar1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_al_agree' */
              tau_al1_agree_s = false;
              localDW->AgreementOut1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out1' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out2' */
            if (localDW->AgreementOut2_MODE) {
              /* Disable for Outport: '<S808>/tau_fr_agree' */
              tau_fr2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_fl_agree ' */
              tau_fl2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_ar_agree' */
              tau_ar2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_al_agree' */
              tau_al2_agree_s = false;
              localDW->AgreementOut2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out2' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out3' */
            if (localDW->AgreementOut3_MODE) {
              /* Disable for Outport: '<S809>/tau_fr_agree' */
              tau_fr_agree_s = false;

              /* Disable for Outport: '<S809>/tau_fl_agree ' */
              tau_fl_agree_s = false;

              /* Disable for Outport: '<S809>/tau_ar_agree' */
              tau_ar_agree_s = false;

              /* Disable for Outport: '<S809>/tau_al_agree' */
              tau_al_agree_s = false;
              localDW->AgreementOut3_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out3' */
            localDW->TMR_main_MODE = false;
          }

          /* End of Disable for SubSystem: '<S343>/TMR_main' */
          localDW->COMPTaskTMR_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMP Task - TMR' */

      /* Outputs for Enabled SubSystem: '<S90>/COMP Task - Update LT' incorporates:
       *  EnablePort: '<S344>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S344>/Local Time Update' incorporates:
       *  EnablePort: '<S852>/Enable'
       */
      if ((*rtd_Local_Ticks >= 44.0) && (*rtd_Local_Ticks < localC->Sum2) &&
          rtb_AND2_n && ((*rtd_Local_Ticks == 44.0) && (localDW->Role_ID == 2.0)))
      {
        /* RelationalOperator: '<S852>/GreaterThan' incorporates:
         *  Constant: '<S852>/Constant4'
         *  DataStoreRead: '<S852>/Data Store Read1'
         *  DataStoreWrite: '<S852>/Data Store Write'
         */
        localDW->Desync_Positive = (localDW->Desync_Ticks > 0.0);

        /* Logic: '<S852>/NOT' incorporates:
         *  DataStoreWrite: '<S852>/Data Store Write'
         */
        rtb_NOT_fg = !localDW->Desync_Positive;

        /* Outputs for Enabled SubSystem: '<S852>/Desync_Negative' */
        Desync_Negative(rtb_NOT_fg, 44.0, &localDW->Desync_Ticks,
                        rtd_Local_Ticks);

        /* End of Outputs for SubSystem: '<S852>/Desync_Negative' */

        /* DataStoreWrite: '<S852>/Data Store Write13' incorporates:
         *  Constant: '<S852>/Constant3'
         */
        localDW->BC1_Sync_processed = true;

        /* DataStoreWrite: '<S852>/Data Store Write3' incorporates:
         *  Constant: '<S852>/Constant1'
         */
        *rtd_Toggle_Pin_A0 = true;
      }

      /* End of Outputs for SubSystem: '<S344>/Local Time Update' */
      /* End of Outputs for SubSystem: '<S90>/COMP Task - Update LT' */

      /* Logic: '<S90>/AND17' incorporates:
       *  Constant: '<S344>/Constant4'
       *  Constant: '<S90>/Constant'
       *  Constant: '<S90>/Constant14'
       *  Constant: '<S90>/Constant4'
       *  Constant: '<S90>/Constant6'
       *  DataStoreRead: '<S344>/Data Store Read1'
       *  DataStoreRead: '<S764>/Data Store Read'
       *  DataStoreRead: '<S765>/Data Store Read1'
       *  DataStoreRead: '<S90>/Data Store Read11'
       *  Logic: '<S342>/AND'
       *  Logic: '<S343>/AND'
       *  Logic: '<S343>/AND1'
       *  Logic: '<S343>/AND2'
       *  Logic: '<S344>/AND'
       *  Logic: '<S766>/AND14'
       *  Logic: '<S90>/AND'
       *  Logic: '<S90>/AND1'
       *  Logic: '<S90>/AND14'
       *  Logic: '<S90>/AND18'
       *  Logic: '<S90>/AND19'
       *  Logic: '<S90>/AND2'
       *  Logic: '<S90>/NOT2'
       *  Logic: '<S90>/NOT4'
       *  RelationalOperator: '<S343>/Equal'
       *  RelationalOperator: '<S343>/Equal1'
       *  RelationalOperator: '<S343>/Equal3'
       *  RelationalOperator: '<S344>/Equal'
       *  RelationalOperator: '<S344>/Equal2'
       *  RelationalOperator: '<S90>/GreaterThan'
       *  RelationalOperator: '<S90>/GreaterThan1'
       *  RelationalOperator: '<S90>/GreaterThan2'
       *  RelationalOperator: '<S90>/GreaterThan28'
       *  RelationalOperator: '<S90>/GreaterThan29'
       *  RelationalOperator: '<S90>/GreaterThan3'
       *  RelationalOperator: '<S90>/GreaterThan4'
       *  RelationalOperator: '<S90>/GreaterThan5'
       */
      rtb_AND17 = ((rtb_DataStoreRead8_o5 >= 0.0) && (rtb_DataStoreRead8_o5 <
        localC->Sum4) && (!localDW->BC1_Sync_processed));

      /* Outputs for Enabled SubSystem: '<S90>/COMM Task - Output Control1' incorporates:
       *  EnablePort: '<S326>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 148.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum12)) {
        if (!localDW->COMMTaskOutputControl1_MODE) {
          localDW->COMMTaskOutputControl1_MODE = true;
        }

        /* Logic: '<S345>/OR' incorporates:
         *  Constant: '<S345>/Constant'
         *  Constant: '<S345>/Constant1'
         *  Constant: '<S345>/Constant2'
         *  Constant: '<S345>/Constant3'
         *  DataStoreRead: '<S345>/Data Store Read1'
         *  Logic: '<S345>/AND'
         *  Logic: '<S345>/AND1'
         *  RelationalOperator: '<S345>/Equal1'
         *  RelationalOperator: '<S345>/Equal11'
         *  RelationalOperator: '<S345>/Equal2'
         *  RelationalOperator: '<S345>/Equal3'
         */
        rtb_OR_m = (((*rtd_Board_ID == 1.0) && (localDW->Role_ID != 1.0)) ||
                    ((*rtd_Board_ID == 2.0) && (*rtd_Master_ID == 1.0)));

        /* Logic: '<S326>/NOT' */
        rtb_NOT_jz = !rtb_OR_m;

        /* Outputs for Enabled SubSystem: '<S326>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_jz, 148.0, &localB->Receptionsubstasks_a,
                           &localC->Receptionsubstasks_a,
                           &localDW->Receptionsubstasks_a, rtd_Local_Ticks,
                           &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S326>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S326>/Transmission subtasks' */
        Transmissionsubtasks_i(rtb_OR_m, 148.0, &localB->Transmissionsubtasks_ic,
          &localC->Transmissionsubtasks_ic, &localDW->Transmissionsubtasks_ic,
          rtd_Board_ID, &localDW->Error_SensorValues_NotRX,
          &localDW->Error_SetValues_NotRX, rtd_Local_Ticks, rtd_Msg_Tx_CAN1,
          rtd_Msg_Tx_CAN2, rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
          rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
          &localDW->torque_al_set, &localDW->torque_ar_set,
          &localDW->torque_fl_set, &localDW->torque_fr_set);

        /* End of Outputs for SubSystem: '<S326>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskOutputControl1_MODE) {
          /* Disable for Enabled SubSystem: '<S326>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S326>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S326>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_ic.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_ic,
              &localDW->Transmissionsubtasks_ic);
          }

          /* End of Disable for SubSystem: '<S326>/Transmission subtasks' */

          /* Disable for Outport: '<S326>/Send CAN1' */
          localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN1_e.Equal7 =
            false;

          /* Disable for Outport: '<S326>/Receive CAN1' */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for Outport: '<S326>/Send CAN2' */
          localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN2_b.Equal7 =
            false;

          /* Disable for Outport: '<S326>/Receive CAN2' */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskOutputControl1_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMM Task - Output Control1' */

      /* Outputs for Enabled SubSystem: '<S90>/COMM Task - Output Control2' incorporates:
       *  EnablePort: '<S327>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 192.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum11)) {
        if (!localDW->COMMTaskOutputControl2_MODE) {
          localDW->COMMTaskOutputControl2_MODE = true;
        }

        /* Logic: '<S376>/OR' incorporates:
         *  Constant: '<S376>/Constant'
         *  Constant: '<S376>/Constant1'
         *  Constant: '<S376>/Constant2'
         *  Constant: '<S376>/Constant3'
         *  DataStoreRead: '<S376>/Data Store Read1'
         *  Logic: '<S376>/AND'
         *  Logic: '<S376>/AND1'
         *  RelationalOperator: '<S376>/Equal1'
         *  RelationalOperator: '<S376>/Equal11'
         *  RelationalOperator: '<S376>/Equal2'
         *  RelationalOperator: '<S376>/Equal3'
         */
        rtb_OR_a = (((*rtd_Board_ID == 3.0) && (localDW->Role_ID != 1.0)) ||
                    ((*rtd_Board_ID == 2.0) && (*rtd_Master_ID == 3.0)));

        /* Logic: '<S327>/NOT' */
        rtb_NOT_k = !rtb_OR_a;

        /* Outputs for Enabled SubSystem: '<S327>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_k, 192.0, &localB->Receptionsubstasks_ah,
                           &localC->Receptionsubstasks_ah,
                           &localDW->Receptionsubstasks_ah, rtd_Local_Ticks,
                           &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S327>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S327>/Transmission subtasks' */
        Transmissionsubtasks_i(rtb_OR_a, 192.0, &localB->Transmissionsubtasks_m,
          &localC->Transmissionsubtasks_m, &localDW->Transmissionsubtasks_m,
          rtd_Board_ID, &localDW->Error_SensorValues_NotRX,
          &localDW->Error_SetValues_NotRX, rtd_Local_Ticks, rtd_Msg_Tx_CAN1,
          rtd_Msg_Tx_CAN2, rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
          rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
          &localDW->torque_al_set, &localDW->torque_ar_set,
          &localDW->torque_fl_set, &localDW->torque_fr_set);

        /* End of Outputs for SubSystem: '<S327>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskOutputControl2_MODE) {
          /* Disable for Enabled SubSystem: '<S327>/Reception substasks' */
          if (localDW->Receptionsubstasks_ah.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_ah,
              &localDW->Receptionsubstasks_ah);
          }

          /* End of Disable for SubSystem: '<S327>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S327>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_m.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_m,
              &localDW->Transmissionsubtasks_m);
          }

          /* End of Disable for SubSystem: '<S327>/Transmission subtasks' */

          /* Disable for Outport: '<S327>/Send CAN1' */
          localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN1_e.Equal7 =
            false;

          /* Disable for Outport: '<S327>/Receive CAN1' */
          localB->Receptionsubstasks_ah.AND = false;

          /* Disable for Outport: '<S327>/Send CAN2' */
          localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN2_b.Equal7 =
            false;

          /* Disable for Outport: '<S327>/Receive CAN2' */
          localB->Receptionsubstasks_ah.AND1 = false;
          localDW->COMMTaskOutputControl2_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMM Task - Output Control2' */

      /* Outputs for Enabled SubSystem: '<S90>/COMM Task - Output Emulator' incorporates:
       *  EnablePort: '<S328>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 240.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum16)) {
        if (!localDW->COMMTaskOutputEmulator_MODE) {
          localDW->COMMTaskOutputEmulator_MODE = true;
        }

        /* RelationalOperator: '<S328>/Equal17' incorporates:
         *  Constant: '<S328>/Constant98'
         *  DataStoreRead: '<S328>/Data Store Read31'
         */
        rtb_Equal_e2 = (localDW->Role_ID == 1.0);

        /* Logic: '<S328>/NOT' */
        rtb_NOT_nc = !rtb_Equal_e2;

        /* Outputs for Enabled SubSystem: '<S328>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_nc, 240.0, &localB->Receptionsubstasks_b,
                           &localC->Receptionsubstasks_b,
                           &localDW->Receptionsubstasks_b, rtd_Local_Ticks,
                           &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S328>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S328>/Transmission subtasks' incorporates:
         *  EnablePort: '<S408>/Enable'
         */
        if (rtb_Equal_e2) {
          if (!localDW->Transmissionsubtasks_MODE_c) {
            localDW->Transmissionsubtasks_MODE_c = true;
          }

          /* DataStoreRead: '<S408>/Data Store Read' */
          rtb_DataStoreRead_nk = *rtd_Local_Ticks;

          /* RelationalOperator: '<S408>/Equal2' */
          rtb_Equal_e2 = (rtb_DataStoreRead_nk > 240.0);

          /* Logic: '<S408>/AND' incorporates:
           *  Constant: '<S408>/Constant6'
           *  RelationalOperator: '<S408>/GreaterThan2'
           */
          rtb_AND_fw = (rtb_Equal_e2 && (*rtd_Tx_msg_count_CAN1 <= 7.0));

          /* Logic: '<S408>/AND1' incorporates:
           *  Constant: '<S408>/Constant7'
           *  RelationalOperator: '<S408>/GreaterThan3'
           */
          rtb_AND1_p4 = (rtb_Equal_e2 && (*rtd_Tx_msg_count_CAN2 <= 7.0));

          /* Outputs for Enabled SubSystem: '<S408>/Msg_Value_Data_Encoded' incorporates:
           *  EnablePort: '<S412>/Enable'
           */
          if (rtb_DataStoreRead_nk == 240.0) {
            /* DataStoreRead: '<S412>/Data Store Read4' */
            localB->DataStoreRead4 = localDW->error_log_1;

            /* DataStoreRead: '<S412>/Data Store Read5' */
            localB->DataStoreRead5 = localDW->error_log_2;

            /* DataStoreRead: '<S412>/Data Store Read6' */
            localB->DataStoreRead6 = localDW->error_log_3;

            /* Switch: '<S425>/Switch2' incorporates:
             *  Constant: '<S412>/Constant10'
             *  Constant: '<S412>/Constant9'
             *  DataStoreRead: '<S412>/Data Store Read1'
             *  RelationalOperator: '<S425>/LessThanOrEqual1'
             *  RelationalOperator: '<S425>/LessThanOrEqual2'
             *  Switch: '<S425>/Switch1'
             */
            if (5.0 < localDW->torque_fl_set) {
              /* Switch: '<S425>/Switch' */
              rtb_Fix1_e = 5.0;
            } else if (localDW->torque_fl_set >= (-5.0)) {
              /* Switch: '<S425>/Switch1' */
              rtb_Fix1_e = localDW->torque_fl_set;
            } else {
              rtb_Fix1_e = (-5.0);
            }

            /* End of Switch: '<S425>/Switch2' */

            /* RelationalOperator: '<S425>/GreaterThan' incorporates:
             *  Constant: '<S425>/Constant'
             */
            rtb_Equal_e2 = (rtb_Fix1_e < 0.0);

            /* Abs: '<S425>/Abs' */
            rtb_Fix1_e = fabs(rtb_Fix1_e);

            /* Rounding: '<S425>/Fix' */
            rtb_Minus_ch = floor(rtb_Fix1_e);

            /* Sum: '<S425>/Minus' */
            rtb_Fix1_e -= rtb_Minus_ch;

            /* DataTypeConversion: '<S425>/Cast' */
            rtb_Cast_jx = rtb_Equal_e2;

            /* Outputs for Atomic SubSystem: '<S425>/Bit Shift' */
            BitShift1(rtb_Cast_jx, &localB->BitShift_g);

            /* End of Outputs for SubSystem: '<S425>/Bit Shift' */

            /* Product: '<S425>/Multiply' */
            rtb_Minus_ch *= localC->Power1_ga;

            /* Product: '<S425>/Divide' */
            rtb_Plus1_b = rtb_Fix1_e / localC->Power_h4;

            /* Rounding: '<S425>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S425>/Fix1' */

            /* Sum: '<S425>/Plus' incorporates:
             *  DataTypeConversion: '<S425>/Cast1'
             *  DataTypeConversion: '<S425>/Cast2'
             */
            localB->Plus_d = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_g.y + (uint8_T)rtb_Minus_ch) + (uint8_T)
              rtb_Plus1_b);

            /* Switch: '<S426>/Switch2' incorporates:
             *  Constant: '<S412>/Constant6'
             *  Constant: '<S412>/Constant7'
             *  DataStoreRead: '<S412>/Data Store Read7'
             *  RelationalOperator: '<S426>/LessThanOrEqual1'
             *  RelationalOperator: '<S426>/LessThanOrEqual2'
             *  Switch: '<S426>/Switch1'
             */
            if (5.0 < localDW->torque_fr_set) {
              /* Switch: '<S426>/Switch' */
              rtb_Minus_ch = 5.0;
            } else if (localDW->torque_fr_set >= (-5.0)) {
              /* Switch: '<S426>/Switch1' */
              rtb_Minus_ch = localDW->torque_fr_set;
            } else {
              rtb_Minus_ch = (-5.0);
            }

            /* End of Switch: '<S426>/Switch2' */

            /* RelationalOperator: '<S426>/GreaterThan' incorporates:
             *  Constant: '<S426>/Constant'
             */
            rtb_Equal_e2 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S426>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S426>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S426>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S426>/Cast' */
            rtb_Cast_a = rtb_Equal_e2;

            /* Outputs for Atomic SubSystem: '<S426>/Bit Shift' */
            BitShift1(rtb_Cast_a, &localB->BitShift_h0);

            /* End of Outputs for SubSystem: '<S426>/Bit Shift' */

            /* Product: '<S426>/Multiply' */
            rtb_Fix1_e *= localC->Power1_b;

            /* Product: '<S426>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_ng;

            /* Rounding: '<S426>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S426>/Fix1' */

            /* Sum: '<S426>/Plus' incorporates:
             *  DataTypeConversion: '<S426>/Cast1'
             *  DataTypeConversion: '<S426>/Cast2'
             */
            localB->Plus_i1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_h0.y + (uint8_T)rtb_Fix1_e) + (uint8_T)
              rtb_Plus1_b);

            /* Switch: '<S427>/Switch2' incorporates:
             *  Constant: '<S412>/Constant11'
             *  Constant: '<S412>/Constant13'
             *  DataStoreRead: '<S412>/Data Store Read2'
             *  RelationalOperator: '<S427>/LessThanOrEqual1'
             *  RelationalOperator: '<S427>/LessThanOrEqual2'
             *  Switch: '<S427>/Switch1'
             */
            if (5.0 < localDW->torque_ar_set) {
              /* Switch: '<S427>/Switch' */
              rtb_Minus_ch = 5.0;
            } else if (localDW->torque_ar_set >= (-5.0)) {
              /* Switch: '<S427>/Switch1' */
              rtb_Minus_ch = localDW->torque_ar_set;
            } else {
              rtb_Minus_ch = (-5.0);
            }

            /* End of Switch: '<S427>/Switch2' */

            /* RelationalOperator: '<S427>/GreaterThan' incorporates:
             *  Constant: '<S427>/Constant'
             */
            rtb_Equal_e2 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S427>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S427>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S427>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S427>/Cast' */
            rtb_Cast_n = rtb_Equal_e2;

            /* Outputs for Atomic SubSystem: '<S427>/Bit Shift' */
            BitShift1(rtb_Cast_n, &localB->BitShift_e);

            /* End of Outputs for SubSystem: '<S427>/Bit Shift' */

            /* Product: '<S427>/Multiply' */
            rtb_Fix1_e *= localC->Power1_fl;

            /* Product: '<S427>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_fq;

            /* Rounding: '<S427>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S427>/Fix1' */

            /* Sum: '<S427>/Plus' incorporates:
             *  DataTypeConversion: '<S427>/Cast1'
             *  DataTypeConversion: '<S427>/Cast2'
             */
            localB->Plus_m = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_e.y + (uint8_T)rtb_Fix1_e) + (uint8_T)rtb_Plus1_b);

            /* Switch: '<S428>/Switch2' incorporates:
             *  Constant: '<S412>/Constant14'
             *  Constant: '<S412>/Constant16'
             *  DataStoreRead: '<S412>/Data Store Read3'
             *  RelationalOperator: '<S428>/LessThanOrEqual1'
             *  RelationalOperator: '<S428>/LessThanOrEqual2'
             *  Switch: '<S428>/Switch1'
             */
            if (5.0 < localDW->torque_al_set) {
              /* Switch: '<S428>/Switch' */
              rtb_Minus_ch = 5.0;
            } else if (localDW->torque_al_set >= (-5.0)) {
              /* Switch: '<S428>/Switch1' */
              rtb_Minus_ch = localDW->torque_al_set;
            } else {
              rtb_Minus_ch = (-5.0);
            }

            /* End of Switch: '<S428>/Switch2' */

            /* RelationalOperator: '<S428>/GreaterThan' incorporates:
             *  Constant: '<S428>/Constant'
             */
            rtb_Equal_e2 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S428>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S428>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S428>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S428>/Cast' */
            rtb_Cast_mj = rtb_Equal_e2;

            /* Outputs for Atomic SubSystem: '<S428>/Bit Shift' */
            BitShift1(rtb_Cast_mj, &localB->BitShift_c);

            /* End of Outputs for SubSystem: '<S428>/Bit Shift' */

            /* Product: '<S428>/Multiply' */
            rtb_Fix1_e *= localC->Power1_hz;

            /* Product: '<S428>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_i4;

            /* Rounding: '<S428>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S428>/Fix1' */

            /* Sum: '<S428>/Plus' incorporates:
             *  DataTypeConversion: '<S428>/Cast1'
             *  DataTypeConversion: '<S428>/Cast2'
             */
            localB->Plus_h = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_c.y + (uint8_T)rtb_Fix1_e) + (uint8_T)rtb_Plus1_b);
          }

          /* End of Outputs for SubSystem: '<S408>/Msg_Value_Data_Encoded' */

          /* Outputs for Enabled SubSystem: '<S408>/Check msg transmission CAN1' */
          CheckmsgtransmissionCAN1(rtb_AND_fw, rtb_DataStoreRead_nk, 240.0,
            localB->Plus_i1, localB->Plus_d, localB->Plus_m, localB->Plus_h,
            localB->DataStoreRead4, localB->DataStoreRead5,
            localB->DataStoreRead6, &localB->CheckmsgtransmissionCAN1_i,
            &localC->CheckmsgtransmissionCAN1_i,
            &localDW->CheckmsgtransmissionCAN1_i, rtd_Board_ID, rtd_Msg_Tx_CAN1,
            rtd_TxID_CAN1, rtd_Tx_msg_count_CAN1, &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S408>/Check msg transmission CAN1' */

          /* Outputs for Enabled SubSystem: '<S408>/Check msg transmission CAN2' */
          CheckmsgtransmissionCAN2(rtb_AND1_p4, rtb_DataStoreRead_nk, 240.0,
            localB->Plus_i1, localB->Plus_d, localB->Plus_m, localB->Plus_h,
            localB->DataStoreRead4, localB->DataStoreRead5,
            localB->DataStoreRead6, &localB->CheckmsgtransmissionCAN2_c,
            &localC->CheckmsgtransmissionCAN2_c,
            &localDW->CheckmsgtransmissionCAN2_c, rtd_Board_ID, rtd_Msg_Tx_CAN2,
            rtd_TxID_CAN2, rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count);

          /* End of Outputs for SubSystem: '<S408>/Check msg transmission CAN2' */
        } else {
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_i.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_i,
                 &localDW->CheckmsgtransmissionCAN1_i);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_g_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S408>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

            /* Disable for Outport: '<S408>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }
        }

        /* End of Outputs for SubSystem: '<S328>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskOutputEmulator_MODE) {
          /* Disable for Enabled SubSystem: '<S328>/Reception substasks' */
          if (localDW->Receptionsubstasks_b.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_b,
              &localDW->Receptionsubstasks_b);
          }

          /* End of Disable for SubSystem: '<S328>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S328>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_i.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_i,
                 &localDW->CheckmsgtransmissionCAN1_i);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_g_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S408>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

            /* Disable for Outport: '<S408>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S328>/Transmission subtasks' */

          /* Disable for Outport: '<S328>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

          /* Disable for Outport: '<S328>/Receive CAN1' */
          localB->Receptionsubstasks_b.AND = false;

          /* Disable for Outport: '<S328>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S328>/Receive CAN2' */
          localB->Receptionsubstasks_b.AND1 = false;
          localDW->COMMTaskOutputEmulator_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMM Task - Output Emulator' */

      /* Outputs for Enabled SubSystem: '<S90>/COMM Task - Sensor_Values' incorporates:
       *  EnablePort: '<S329>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 92.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum6)) {
        if (!localDW->COMMTaskSensor_Values_MODE) {
          localDW->COMMTaskSensor_Values_MODE = true;
        }

        /* RelationalOperator: '<S329>/Equal12' incorporates:
         *  Constant: '<S329>/Constant66'
         */
        rtb_Equal_e2 = (*rtd_Board_ID == 5.0);

        /* Logic: '<S329>/NOT' */
        rtb_NOT_es = !rtb_Equal_e2;

        /* Outputs for Enabled SubSystem: '<S329>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_es, 92.0, &localB->Receptionsubstasks_gp,
                           &localC->Receptionsubstasks_gp,
                           &localDW->Receptionsubstasks_gp, rtd_Local_Ticks,
                           &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S329>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S329>/Transmission subtasks' incorporates:
         *  EnablePort: '<S438>/Enable'
         */
        if (rtb_Equal_e2) {
          if (!localDW->Transmissionsubtasks_MODE_l) {
            localDW->Transmissionsubtasks_MODE_l = true;
          }

          /* RelationalOperator: '<S438>/Equal2' */
          rtb_Equal_e2 = (*rtd_Local_Ticks > 92.0);

          /* Outputs for Enabled SubSystem: '<S438>/Msg_Value_Data_Encoded6' incorporates:
           *  EnablePort: '<S442>/Enable'
           */
          if (*rtd_Local_Ticks == 92.0) {
            localB->Constant_i = ((uint8_T)0U);

            /* Switch: '<S455>/Switch2' incorporates:
             *  Constant: '<S442>/Constant'
             *  Constant: '<S442>/Constant8'
             *  Constant: '<S442>/Constant9'
             *  DataStoreRead: '<S442>/Data Store Read1'
             *  RelationalOperator: '<S455>/LessThanOrEqual1'
             *  RelationalOperator: '<S455>/LessThanOrEqual2'
             *  Switch: '<S455>/Switch1'
             */
            if (2.0 < localDW->theta_fl) {
              /* Switch: '<S455>/Switch' */
              rtb_Fix1_e = 2.0;
            } else if (localDW->theta_fl >= (-2.0)) {
              /* Switch: '<S455>/Switch1' */
              rtb_Fix1_e = localDW->theta_fl;
            } else {
              rtb_Fix1_e = (-2.0);
            }

            /* End of Switch: '<S455>/Switch2' */

            /* RelationalOperator: '<S455>/GreaterThan' incorporates:
             *  Constant: '<S455>/Constant'
             */
            rtb_AND1_g0 = (rtb_Fix1_e < 0.0);

            /* Abs: '<S455>/Abs' */
            rtb_Fix1_e = fabs(rtb_Fix1_e);

            /* Rounding: '<S455>/Fix' */
            rtb_Minus_ch = floor(rtb_Fix1_e);

            /* Sum: '<S455>/Minus' */
            rtb_Fix1_e -= rtb_Minus_ch;

            /* DataTypeConversion: '<S455>/Cast' */
            rtb_Cast_ez = rtb_AND1_g0;

            /* Outputs for Atomic SubSystem: '<S455>/Bit Shift' */
            BitShift1(rtb_Cast_ez, &localB->BitShift_i);

            /* End of Outputs for SubSystem: '<S455>/Bit Shift' */

            /* Product: '<S455>/Multiply' */
            rtb_Minus_ch *= localC->Power1_fd;

            /* Product: '<S455>/Divide' */
            rtb_Plus1_b = rtb_Fix1_e / localC->Power_fb;

            /* Rounding: '<S455>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S455>/Fix1' */

            /* Sum: '<S455>/Plus' incorporates:
             *  DataTypeConversion: '<S455>/Cast1'
             *  DataTypeConversion: '<S455>/Cast2'
             */
            localB->Plus_o = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_i.y + (uint8_T)rtb_Minus_ch) + (uint8_T)
              rtb_Plus1_b);

            /* Switch: '<S456>/Switch2' incorporates:
             *  Constant: '<S442>/Constant5'
             *  Constant: '<S442>/Constant6'
             *  DataStoreRead: '<S442>/Data Store Read'
             *  RelationalOperator: '<S456>/LessThanOrEqual1'
             *  RelationalOperator: '<S456>/LessThanOrEqual2'
             *  Switch: '<S456>/Switch1'
             */
            if (2.0 < localDW->theta_fr) {
              /* Switch: '<S456>/Switch' */
              rtb_Minus_ch = 2.0;
            } else if (localDW->theta_fr >= (-2.0)) {
              /* Switch: '<S456>/Switch1' */
              rtb_Minus_ch = localDW->theta_fr;
            } else {
              rtb_Minus_ch = (-2.0);
            }

            /* End of Switch: '<S456>/Switch2' */

            /* RelationalOperator: '<S456>/GreaterThan' incorporates:
             *  Constant: '<S456>/Constant'
             */
            rtb_AND1_g0 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S456>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S456>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S456>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S456>/Cast' */
            rtb_Cast_j = rtb_AND1_g0;

            /* Outputs for Atomic SubSystem: '<S456>/Bit Shift' */
            BitShift1(rtb_Cast_j, &localB->BitShift_es);

            /* End of Outputs for SubSystem: '<S456>/Bit Shift' */

            /* Product: '<S456>/Multiply' */
            rtb_Fix1_e *= localC->Power1_c;

            /* Product: '<S456>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_lo;

            /* Rounding: '<S456>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S456>/Fix1' */

            /* Sum: '<S456>/Plus' incorporates:
             *  DataTypeConversion: '<S456>/Cast1'
             *  DataTypeConversion: '<S456>/Cast2'
             */
            localB->Plus_i = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_es.y + (uint8_T)rtb_Fix1_e) + (uint8_T)
              rtb_Plus1_b);

            /* Switch: '<S457>/Switch2' incorporates:
             *  Constant: '<S442>/Constant11'
             *  Constant: '<S442>/Constant12'
             *  DataStoreRead: '<S442>/Data Store Read2'
             *  RelationalOperator: '<S457>/LessThanOrEqual1'
             *  RelationalOperator: '<S457>/LessThanOrEqual2'
             *  Switch: '<S457>/Switch1'
             */
            if (2.0 < localDW->theta_ar) {
              /* Switch: '<S457>/Switch' */
              rtb_Minus_ch = 2.0;
            } else if (localDW->theta_ar >= (-2.0)) {
              /* Switch: '<S457>/Switch1' */
              rtb_Minus_ch = localDW->theta_ar;
            } else {
              rtb_Minus_ch = (-2.0);
            }

            /* End of Switch: '<S457>/Switch2' */

            /* RelationalOperator: '<S457>/GreaterThan' incorporates:
             *  Constant: '<S457>/Constant'
             */
            rtb_AND1_g0 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S457>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S457>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S457>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S457>/Cast' */
            rtb_Cast_h = rtb_AND1_g0;

            /* Outputs for Atomic SubSystem: '<S457>/Bit Shift' */
            BitShift1(rtb_Cast_h, &localB->BitShift_ej);

            /* End of Outputs for SubSystem: '<S457>/Bit Shift' */

            /* Product: '<S457>/Multiply' */
            rtb_Fix1_e *= localC->Power1_h;

            /* Product: '<S457>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_i;

            /* Rounding: '<S457>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S457>/Fix1' */

            /* Sum: '<S457>/Plus' incorporates:
             *  DataTypeConversion: '<S457>/Cast1'
             *  DataTypeConversion: '<S457>/Cast2'
             */
            localB->Plus_lv = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_ej.y + (uint8_T)rtb_Fix1_e) + (uint8_T)
              rtb_Plus1_b);

            /* Switch: '<S458>/Switch2' incorporates:
             *  Constant: '<S442>/Constant14'
             *  Constant: '<S442>/Constant15'
             *  DataStoreRead: '<S442>/Data Store Read3'
             *  RelationalOperator: '<S458>/LessThanOrEqual1'
             *  RelationalOperator: '<S458>/LessThanOrEqual2'
             *  Switch: '<S458>/Switch1'
             */
            if (2.0 < localDW->theta_al) {
              /* Switch: '<S458>/Switch' */
              rtb_Minus_ch = 2.0;
            } else if (localDW->theta_al >= (-2.0)) {
              /* Switch: '<S458>/Switch1' */
              rtb_Minus_ch = localDW->theta_al;
            } else {
              rtb_Minus_ch = (-2.0);
            }

            /* End of Switch: '<S458>/Switch2' */

            /* RelationalOperator: '<S458>/GreaterThan' incorporates:
             *  Constant: '<S458>/Constant'
             */
            rtb_AND1_g0 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S458>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S458>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S458>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S458>/Cast' */
            rtb_Cast_f = rtb_AND1_g0;

            /* Outputs for Atomic SubSystem: '<S458>/Bit Shift' */
            BitShift1(rtb_Cast_f, &localB->BitShift_mw);

            /* End of Outputs for SubSystem: '<S458>/Bit Shift' */

            /* Product: '<S458>/Multiply' */
            rtb_Fix1_e *= localC->Power1_pj;

            /* Product: '<S458>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_dk;

            /* Rounding: '<S458>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S458>/Fix1' */

            /* Sum: '<S458>/Plus' incorporates:
             *  DataTypeConversion: '<S458>/Cast1'
             *  DataTypeConversion: '<S458>/Cast2'
             */
            localB->Plus_e = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_mw.y + (uint8_T)rtb_Fix1_e) + (uint8_T)
              rtb_Plus1_b);
          }

          /* End of Outputs for SubSystem: '<S438>/Msg_Value_Data_Encoded6' */

          /* Outputs for Enabled SubSystem: '<S438>/Check msg transmission CAN1' incorporates:
           *  EnablePort: '<S440>/Enable'
           */
          if (rtb_Equal_e2 && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
            if (!localDW->CheckmsgtransmissionCAN1_MODE_f) {
              localDW->CheckmsgtransmissionCAN1_MODE_f = true;
            }

            /* Outputs for Enabled SubSystem: '<S440>/TX buffer update CAN1' incorporates:
             *  EnablePort: '<S443>/Enable'
             */
            if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - 92.0, 5.0) == 0.0) {
              /* DataTypeConversion: '<S443>/Cast4' incorporates:
               *  DataStoreRead: '<S443>/Data Store Read3'
               */
              rtb_Cast4_e = localDW->basic_cycle_count;

              /* Outputs for Atomic SubSystem: '<S444>/Bit Shift1' */
              BitShift1(rtb_Cast4_e, &localB->BitShift1_aq);

              /* End of Outputs for SubSystem: '<S444>/Bit Shift1' */

              /* DataTypeConversion: '<S443>/Cast1' */
              rtb_Cast1_n = (uint8_T)*rtd_Tx_msg_count_CAN1;

              /* Outputs for Atomic SubSystem: '<S444>/Bit Shift' */
              BitShift4(rtb_Cast1_n, &localB->BitShift_fg);

              /* End of Outputs for SubSystem: '<S444>/Bit Shift' */

              /* DataStoreWrite: '<S443>/Data Store Write10' incorporates:
               *  DataTypeConversion: '<S443>/Cast16'
               *  Sum: '<S444>/Minus'
               */
              rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                ((uint32_T)localB->BitShift1_aq.y + localB->BitShift_fg.y) +
                (uint8_T)*rtd_Board_ID);
              rtd_Msg_Tx_CAN1->Buffer_2 = localB->Plus_i;
              rtd_Msg_Tx_CAN1->Buffer_3 = localB->Plus_o;
              rtd_Msg_Tx_CAN1->Buffer_4 = localB->Plus_lv;
              rtd_Msg_Tx_CAN1->Buffer_5 = localB->Plus_e;
              rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant_i;
              rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant_i;
              rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant_i;

              /* DataStoreWrite: '<S443>/Data Store Write8' */
              *rtd_TxID_CAN1 = localC->Cast_o;
            }

            /* End of Outputs for SubSystem: '<S440>/TX buffer update CAN1' */

            /* RelationalOperator: '<S440>/Equal7' incorporates:
             *  Constant: '<S440>/Constant11'
             *  Constant: '<S440>/Constant22'
             *  Constant: '<S440>/Constant24'
             *  Constant: '<S440>/Constant27'
             *  Constant: '<S440>/Constant8'
             *  Math: '<S440>/Mod'
             *  Math: '<S440>/Mod1'
             *  RelationalOperator: '<S440>/Equal4'
             *  Sum: '<S440>/Minus'
             *  Sum: '<S440>/Minus1'
             */
            localB->Equal7_e = (rt_modd((real_T)*rtd_Local_Ticks - 92.0, 5.0) ==
                                0.0);
          } else {
            if (localDW->CheckmsgtransmissionCAN1_MODE_f) {
              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_e = false;
              localDW->CheckmsgtransmissionCAN1_MODE_f = false;
            }
          }

          /* End of Outputs for SubSystem: '<S438>/Check msg transmission CAN1' */

          /* Outputs for Enabled SubSystem: '<S438>/Check msg transmission CAN2' incorporates:
           *  EnablePort: '<S441>/Enable'
           */
          if (rtb_Equal_e2 && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
            if (!localDW->CheckmsgtransmissionCAN2_MODE_k) {
              localDW->CheckmsgtransmissionCAN2_MODE_k = true;
            }

            /* Outputs for Enabled SubSystem: '<S441>/TX buffer update CAN2' incorporates:
             *  EnablePort: '<S449>/Enable'
             */
            if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - 92.0, 8.0) == 0.0) {
              /* DataTypeConversion: '<S449>/Cast18' incorporates:
               *  DataStoreRead: '<S449>/Data Store Read6'
               */
              rtb_Cast18_p = localDW->basic_cycle_count;

              /* Outputs for Atomic SubSystem: '<S450>/Bit Shift1' */
              BitShift1(rtb_Cast18_p, &localB->BitShift1_et);

              /* End of Outputs for SubSystem: '<S450>/Bit Shift1' */

              /* DataTypeConversion: '<S449>/Cast9' */
              rtb_Cast9_k = (uint8_T)*rtd_Tx_msg_count_CAN2;

              /* Outputs for Atomic SubSystem: '<S450>/Bit Shift' */
              BitShift4(rtb_Cast9_k, &localB->BitShift_py);

              /* End of Outputs for SubSystem: '<S450>/Bit Shift' */

              /* DataStoreWrite: '<S449>/Data Store Write4' incorporates:
               *  DataTypeConversion: '<S449>/Cast17'
               *  Sum: '<S450>/Minus'
               */
              rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                ((uint32_T)localB->BitShift1_et.y + localB->BitShift_py.y) +
                (uint8_T)*rtd_Board_ID);
              rtd_Msg_Tx_CAN2->Buffer_2 = localB->Plus_i;
              rtd_Msg_Tx_CAN2->Buffer_3 = localB->Plus_o;
              rtd_Msg_Tx_CAN2->Buffer_4 = localB->Plus_lv;
              rtd_Msg_Tx_CAN2->Buffer_5 = localB->Plus_e;
              rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant_i;
              rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant_i;
              rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant_i;

              /* DataStoreWrite: '<S449>/Data Store Write5' */
              *rtd_TxID_CAN2 = localC->Cast8_j;
            }

            /* End of Outputs for SubSystem: '<S441>/TX buffer update CAN2' */

            /* RelationalOperator: '<S441>/Equal7' incorporates:
             *  Constant: '<S441>/Constant11'
             *  Constant: '<S441>/Constant22'
             *  Constant: '<S441>/Constant24'
             *  Constant: '<S441>/Constant27'
             *  Constant: '<S441>/Constant8'
             *  Math: '<S441>/Mod'
             *  Math: '<S441>/Mod1'
             *  RelationalOperator: '<S441>/Equal4'
             *  Sum: '<S441>/Minus'
             *  Sum: '<S441>/Minus1'
             */
            localB->Equal7_p = (rt_modd((real_T)*rtd_Local_Ticks - 92.0, 8.0) ==
                                0.0);
          } else {
            if (localDW->CheckmsgtransmissionCAN2_MODE_k) {
              /* Disable for Outport: '<S441>/Send CAN2' */
              localB->Equal7_p = false;
              localDW->CheckmsgtransmissionCAN2_MODE_k = false;
            }
          }

          /* End of Outputs for SubSystem: '<S438>/Check msg transmission CAN2' */
        } else {
          if (localDW->Transmissionsubtasks_MODE_l) {
            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE_f) {
              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_e = false;
              localDW->CheckmsgtransmissionCAN1_MODE_f = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE_k) {
              /* Disable for Outport: '<S441>/Send CAN2' */
              localB->Equal7_p = false;
              localDW->CheckmsgtransmissionCAN2_MODE_k = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S438>/Send CAN1' */
            localB->Equal7_e = false;

            /* Disable for Outport: '<S438>/Send CAN2' */
            localB->Equal7_p = false;
            localDW->Transmissionsubtasks_MODE_l = false;
          }
        }

        /* End of Outputs for SubSystem: '<S329>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskSensor_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S329>/Reception substasks' */
          if (localDW->Receptionsubstasks_gp.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_gp,
              &localDW->Receptionsubstasks_gp);
          }

          /* End of Disable for SubSystem: '<S329>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S329>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_l) {
            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE_f) {
              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_e = false;
              localDW->CheckmsgtransmissionCAN1_MODE_f = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE_k) {
              /* Disable for Outport: '<S441>/Send CAN2' */
              localB->Equal7_p = false;
              localDW->CheckmsgtransmissionCAN2_MODE_k = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S438>/Send CAN1' */
            localB->Equal7_e = false;

            /* Disable for Outport: '<S438>/Send CAN2' */
            localB->Equal7_p = false;
            localDW->Transmissionsubtasks_MODE_l = false;
          }

          /* End of Disable for SubSystem: '<S329>/Transmission subtasks' */

          /* Disable for Outport: '<S329>/Send CAN1' */
          localB->Equal7_e = false;

          /* Disable for Outport: '<S329>/Receive CAN1' */
          localB->Receptionsubstasks_gp.AND = false;

          /* Disable for Outport: '<S329>/Send CAN2' */
          localB->Equal7_p = false;

          /* Disable for Outport: '<S329>/Receive CAN2' */
          localB->Receptionsubstasks_gp.AND1 = false;
          localDW->COMMTaskSensor_Values_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMM Task - Sensor_Values' */

      /* Outputs for Enabled SubSystem: '<S90>/COMM Task - Set_Values' incorporates:
       *  EnablePort: '<S330>/Enable'
       */
      if ((rtb_DataStoreRead8_o5 >= 48.0) && (rtb_DataStoreRead8_o5 <
           localC->Sum3)) {
        if (!localDW->COMMTaskSet_Values_MODE) {
          localDW->COMMTaskSet_Values_MODE = true;
        }

        /* RelationalOperator: '<S330>/Equal12' incorporates:
         *  Constant: '<S330>/Constant55'
         */
        rtb_Equal_e2 = (*rtd_Board_ID == 4.0);

        /* Logic: '<S330>/NOT' */
        rtb_NOT_ac = !rtb_Equal_e2;

        /* Outputs for Enabled SubSystem: '<S330>/Reception substasks' */
        Receptionsubstasks(rtb_NOT_ac, 48.0, &localB->Receptionsubstasks_ga,
                           &localC->Receptionsubstasks_ga,
                           &localDW->Receptionsubstasks_ga, rtd_Local_Ticks,
                           &localDW->Msg_Rx, rtd_New_Msg_Ready_CAN1,
                           rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN1, rtd_RxID_CAN2,
                           rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                           &localDW->new_msg_Rx);

        /* End of Outputs for SubSystem: '<S330>/Reception substasks' */

        /* Outputs for Enabled SubSystem: '<S330>/Transmission subtasks' incorporates:
         *  EnablePort: '<S468>/Enable'
         */
        if (rtb_Equal_e2) {
          if (!localDW->Transmissionsubtasks_MODE) {
            localDW->Transmissionsubtasks_MODE = true;
          }

          /* RelationalOperator: '<S468>/Equal2' */
          rtb_Equal_e2 = (*rtd_Local_Ticks > 48.0);

          /* Outputs for Enabled SubSystem: '<S468>/Msg_Value_Data_Encoded5' incorporates:
           *  EnablePort: '<S472>/Enable'
           */
          if (*rtd_Local_Ticks == 48.0) {
            localB->Constant_oj = ((uint8_T)0U);

            /* Switch: '<S485>/Switch2' incorporates:
             *  Constant: '<S472>/Constant'
             *  Constant: '<S472>/Constant6'
             *  Constant: '<S472>/Constant7'
             *  DataStoreRead: '<S472>/Data Store Read1'
             *  RelationalOperator: '<S485>/LessThanOrEqual1'
             *  RelationalOperator: '<S485>/LessThanOrEqual2'
             *  Switch: '<S485>/Switch1'
             */
            if (1.0 < localDW->delta_a_set) {
              /* Switch: '<S485>/Switch' */
              rtb_Fix1_e = 1.0;
            } else if (localDW->delta_a_set >= (-1.0)) {
              /* Switch: '<S485>/Switch1' */
              rtb_Fix1_e = localDW->delta_a_set;
            } else {
              rtb_Fix1_e = (-1.0);
            }

            /* End of Switch: '<S485>/Switch2' */

            /* RelationalOperator: '<S485>/GreaterThan' incorporates:
             *  Constant: '<S485>/Constant'
             */
            rtb_AND1_g0 = (rtb_Fix1_e < 0.0);

            /* Abs: '<S485>/Abs' */
            rtb_Fix1_e = fabs(rtb_Fix1_e);

            /* Rounding: '<S485>/Fix' */
            rtb_Minus_ch = floor(rtb_Fix1_e);

            /* Sum: '<S485>/Minus' */
            rtb_Fix1_e -= rtb_Minus_ch;

            /* DataTypeConversion: '<S485>/Cast' */
            rtb_Cast_i = rtb_AND1_g0;

            /* Outputs for Atomic SubSystem: '<S485>/Bit Shift' */
            BitShift1(rtb_Cast_i, &localB->BitShift_ls);

            /* End of Outputs for SubSystem: '<S485>/Bit Shift' */

            /* Product: '<S485>/Multiply' */
            rtb_Minus_ch *= localC->Power1_d;

            /* Product: '<S485>/Divide' */
            rtb_Plus1_b = rtb_Fix1_e / localC->Power_pa;

            /* Rounding: '<S485>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S485>/Fix1' */

            /* Sum: '<S485>/Plus' incorporates:
             *  DataTypeConversion: '<S485>/Cast1'
             *  DataTypeConversion: '<S485>/Cast2'
             */
            localB->Plus = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_ls.y + (uint8_T)rtb_Minus_ch) + (uint8_T)
              rtb_Plus1_b);

            /* Switch: '<S486>/Switch2' incorporates:
             *  Constant: '<S472>/Constant8'
             *  Constant: '<S472>/Constant9'
             *  DataStoreRead: '<S472>/Data Store Read2'
             *  RelationalOperator: '<S486>/LessThanOrEqual1'
             *  RelationalOperator: '<S486>/LessThanOrEqual2'
             *  Switch: '<S486>/Switch1'
             */
            if (10.0 < localDW->v_set) {
              /* Switch: '<S486>/Switch' */
              rtb_Minus_ch = 10.0;
            } else if (localDW->v_set >= (-10.0)) {
              /* Switch: '<S486>/Switch1' */
              rtb_Minus_ch = localDW->v_set;
            } else {
              rtb_Minus_ch = (-10.0);
            }

            /* End of Switch: '<S486>/Switch2' */

            /* RelationalOperator: '<S486>/GreaterThan' incorporates:
             *  Constant: '<S486>/Constant'
             */
            rtb_AND1_g0 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S486>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S486>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S486>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S486>/Cast' */
            rtb_Cast_l = rtb_AND1_g0;

            /* Outputs for Atomic SubSystem: '<S486>/Bit Shift' */
            BitShift1(rtb_Cast_l, &localB->BitShift_pn);

            /* End of Outputs for SubSystem: '<S486>/Bit Shift' */

            /* Product: '<S486>/Multiply' */
            rtb_Fix1_e *= localC->Power1_f;

            /* Product: '<S486>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_fz;

            /* Rounding: '<S486>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S486>/Fix1' */

            /* Sum: '<S486>/Plus' incorporates:
             *  DataTypeConversion: '<S486>/Cast1'
             *  DataTypeConversion: '<S486>/Cast2'
             */
            localB->Plus_b = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_pn.y + (uint8_T)rtb_Fix1_e) + (uint8_T)
              rtb_Plus1_b);

            /* Switch: '<S487>/Switch2' incorporates:
             *  Constant: '<S472>/Constant4'
             *  Constant: '<S472>/Constant5'
             *  DataStoreRead: '<S472>/Data Store Read'
             *  RelationalOperator: '<S487>/LessThanOrEqual1'
             *  RelationalOperator: '<S487>/LessThanOrEqual2'
             *  Switch: '<S487>/Switch1'
             */
            if (1.0 < localDW->delta_f_set) {
              /* Switch: '<S487>/Switch' */
              rtb_Minus_ch = 1.0;
            } else if (localDW->delta_f_set >= (-1.0)) {
              /* Switch: '<S487>/Switch1' */
              rtb_Minus_ch = localDW->delta_f_set;
            } else {
              rtb_Minus_ch = (-1.0);
            }

            /* End of Switch: '<S487>/Switch2' */

            /* RelationalOperator: '<S487>/GreaterThan' incorporates:
             *  Constant: '<S487>/Constant'
             */
            rtb_AND1_g0 = (rtb_Minus_ch < 0.0);

            /* Abs: '<S487>/Abs' */
            rtb_Minus_ch = fabs(rtb_Minus_ch);

            /* Rounding: '<S487>/Fix' */
            rtb_Fix1_e = floor(rtb_Minus_ch);

            /* Sum: '<S487>/Minus' */
            rtb_Minus_ch -= rtb_Fix1_e;

            /* DataTypeConversion: '<S487>/Cast' */
            rtb_Cast_m = rtb_AND1_g0;

            /* Outputs for Atomic SubSystem: '<S487>/Bit Shift' */
            BitShift1(rtb_Cast_m, &localB->BitShift_pb);

            /* End of Outputs for SubSystem: '<S487>/Bit Shift' */

            /* Product: '<S487>/Multiply' */
            rtb_Fix1_e *= localC->Power1_mu;

            /* Product: '<S487>/Divide' */
            rtb_Plus1_b = rtb_Minus_ch / localC->Power_oc;

            /* Rounding: '<S487>/Fix1' */
            if (rtb_Plus1_b < 0.0) {
              rtb_Plus1_b = ceil(rtb_Plus1_b);
            } else {
              rtb_Plus1_b = floor(rtb_Plus1_b);
            }

            /* End of Rounding: '<S487>/Fix1' */

            /* Sum: '<S487>/Plus' incorporates:
             *  DataTypeConversion: '<S487>/Cast1'
             *  DataTypeConversion: '<S487>/Cast2'
             */
            localB->Plus_l = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
              localB->BitShift_pb.y + (uint8_T)rtb_Fix1_e) + (uint8_T)
              rtb_Plus1_b);
          }

          /* End of Outputs for SubSystem: '<S468>/Msg_Value_Data_Encoded5' */

          /* Outputs for Enabled SubSystem: '<S468>/Check msg transmission CAN1' incorporates:
           *  EnablePort: '<S470>/Enable'
           */
          if (rtb_Equal_e2 && (*rtd_Tx_msg_count_CAN1 <= 7.0)) {
            if (!localDW->CheckmsgtransmissionCAN1_MODE) {
              localDW->CheckmsgtransmissionCAN1_MODE = true;
            }

            /* Outputs for Enabled SubSystem: '<S470>/TX buffer update CAN1' incorporates:
             *  EnablePort: '<S473>/Enable'
             */
            if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - 48.0, 5.0) == 0.0) {
              /* DataTypeConversion: '<S473>/Cast4' incorporates:
               *  DataStoreRead: '<S473>/Data Store Read3'
               */
              rtb_Cast4_c = localDW->basic_cycle_count;

              /* Outputs for Atomic SubSystem: '<S474>/Bit Shift1' */
              BitShift1(rtb_Cast4_c, &localB->BitShift1_n3);

              /* End of Outputs for SubSystem: '<S474>/Bit Shift1' */

              /* DataTypeConversion: '<S473>/Cast1' */
              rtb_Cast1_c = (uint8_T)*rtd_Tx_msg_count_CAN1;

              /* Outputs for Atomic SubSystem: '<S474>/Bit Shift' */
              BitShift4(rtb_Cast1_c, &localB->BitShift_mo);

              /* End of Outputs for SubSystem: '<S474>/Bit Shift' */

              /* DataStoreWrite: '<S473>/Data Store Write10' incorporates:
               *  DataTypeConversion: '<S473>/Cast16'
               *  Sum: '<S474>/Minus'
               */
              rtd_Msg_Tx_CAN1->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                ((uint32_T)localB->BitShift1_n3.y + localB->BitShift_mo.y) +
                (uint8_T)*rtd_Board_ID);
              rtd_Msg_Tx_CAN1->Buffer_2 = localB->Plus_l;
              rtd_Msg_Tx_CAN1->Buffer_3 = localB->Plus;
              rtd_Msg_Tx_CAN1->Buffer_4 = localB->Plus_b;
              rtd_Msg_Tx_CAN1->Buffer_5 = localB->Constant_oj;
              rtd_Msg_Tx_CAN1->Buffer_6 = localB->Constant_oj;
              rtd_Msg_Tx_CAN1->Buffer_7 = localB->Constant_oj;
              rtd_Msg_Tx_CAN1->Buffer_8 = localB->Constant_oj;

              /* DataStoreWrite: '<S473>/Data Store Write8' */
              *rtd_TxID_CAN1 = localC->Cast;
            }

            /* End of Outputs for SubSystem: '<S470>/TX buffer update CAN1' */

            /* RelationalOperator: '<S470>/Equal7' incorporates:
             *  Constant: '<S470>/Constant11'
             *  Constant: '<S470>/Constant22'
             *  Constant: '<S470>/Constant24'
             *  Constant: '<S470>/Constant27'
             *  Constant: '<S470>/Constant8'
             *  Math: '<S470>/Mod'
             *  Math: '<S470>/Mod1'
             *  RelationalOperator: '<S470>/Equal4'
             *  Sum: '<S470>/Minus'
             *  Sum: '<S470>/Minus1'
             */
            localB->Equal7_l = (rt_modd((real_T)*rtd_Local_Ticks - 48.0, 5.0) ==
                                0.0);
          } else {
            if (localDW->CheckmsgtransmissionCAN1_MODE) {
              /* Disable for Outport: '<S470>/Send CAN1' */
              localB->Equal7_l = false;
              localDW->CheckmsgtransmissionCAN1_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S468>/Check msg transmission CAN1' */

          /* Outputs for Enabled SubSystem: '<S468>/Check msg transmission CAN2' incorporates:
           *  EnablePort: '<S471>/Enable'
           */
          if (rtb_Equal_e2 && (*rtd_Tx_msg_count_CAN2 <= 7.0)) {
            if (!localDW->CheckmsgtransmissionCAN2_MODE) {
              localDW->CheckmsgtransmissionCAN2_MODE = true;
            }

            /* Outputs for Enabled SubSystem: '<S471>/TX buffer update CAN2' incorporates:
             *  EnablePort: '<S479>/Enable'
             */
            if (rt_modd(((real_T)*rtd_Local_Ticks + 1.0) - 48.0, 8.0) == 0.0) {
              /* DataTypeConversion: '<S479>/Cast18' incorporates:
               *  DataStoreRead: '<S479>/Data Store Read6'
               */
              rtb_Cast18_f = localDW->basic_cycle_count;

              /* Outputs for Atomic SubSystem: '<S480>/Bit Shift1' */
              BitShift1(rtb_Cast18_f, &localB->BitShift1_a1);

              /* End of Outputs for SubSystem: '<S480>/Bit Shift1' */

              /* DataTypeConversion: '<S479>/Cast9' */
              rtb_Cast9_o = (uint8_T)*rtd_Tx_msg_count_CAN2;

              /* Outputs for Atomic SubSystem: '<S480>/Bit Shift' */
              BitShift4(rtb_Cast9_o, &localB->BitShift_j);

              /* End of Outputs for SubSystem: '<S480>/Bit Shift' */

              /* DataStoreWrite: '<S479>/Data Store Write4' incorporates:
               *  DataTypeConversion: '<S479>/Cast17'
               *  Sum: '<S480>/Minus'
               */
              rtd_Msg_Tx_CAN2->Buffer_1 = (uint8_T)((uint32_T)(uint8_T)
                ((uint32_T)localB->BitShift1_a1.y + localB->BitShift_j.y) +
                (uint8_T)*rtd_Board_ID);
              rtd_Msg_Tx_CAN2->Buffer_2 = localB->Plus_l;
              rtd_Msg_Tx_CAN2->Buffer_3 = localB->Plus;
              rtd_Msg_Tx_CAN2->Buffer_4 = localB->Plus_b;
              rtd_Msg_Tx_CAN2->Buffer_5 = localB->Constant_oj;
              rtd_Msg_Tx_CAN2->Buffer_6 = localB->Constant_oj;
              rtd_Msg_Tx_CAN2->Buffer_7 = localB->Constant_oj;
              rtd_Msg_Tx_CAN2->Buffer_8 = localB->Constant_oj;

              /* DataStoreWrite: '<S479>/Data Store Write5' */
              *rtd_TxID_CAN2 = localC->Cast8;
            }

            /* End of Outputs for SubSystem: '<S471>/TX buffer update CAN2' */

            /* RelationalOperator: '<S471>/Equal7' incorporates:
             *  Constant: '<S471>/Constant11'
             *  Constant: '<S471>/Constant22'
             *  Constant: '<S471>/Constant24'
             *  Constant: '<S471>/Constant27'
             *  Constant: '<S471>/Constant8'
             *  Math: '<S471>/Mod'
             *  Math: '<S471>/Mod1'
             *  RelationalOperator: '<S471>/Equal4'
             *  Sum: '<S471>/Minus'
             *  Sum: '<S471>/Minus1'
             */
            localB->Equal7 = (rt_modd((real_T)*rtd_Local_Ticks - 48.0, 8.0) ==
                              0.0);
          } else {
            if (localDW->CheckmsgtransmissionCAN2_MODE) {
              /* Disable for Outport: '<S471>/Send CAN2' */
              localB->Equal7 = false;
              localDW->CheckmsgtransmissionCAN2_MODE = false;
            }
          }

          /* End of Outputs for SubSystem: '<S468>/Check msg transmission CAN2' */
        } else {
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE) {
              /* Disable for Outport: '<S470>/Send CAN1' */
              localB->Equal7_l = false;
              localDW->CheckmsgtransmissionCAN1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE) {
              /* Disable for Outport: '<S471>/Send CAN2' */
              localB->Equal7 = false;
              localDW->CheckmsgtransmissionCAN2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S468>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S468>/Send CAN2' */
            localB->Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }
        }

        /* End of Outputs for SubSystem: '<S330>/Transmission subtasks' */
      } else {
        if (localDW->COMMTaskSet_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S330>/Reception substasks' */
          if (localDW->Receptionsubstasks_ga.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_ga,
              &localDW->Receptionsubstasks_ga);
          }

          /* End of Disable for SubSystem: '<S330>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S330>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE) {
              /* Disable for Outport: '<S470>/Send CAN1' */
              localB->Equal7_l = false;
              localDW->CheckmsgtransmissionCAN1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE) {
              /* Disable for Outport: '<S471>/Send CAN2' */
              localB->Equal7 = false;
              localDW->CheckmsgtransmissionCAN2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S468>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S468>/Send CAN2' */
            localB->Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S330>/Transmission subtasks' */

          /* Disable for Outport: '<S330>/Send CAN1' */
          localB->Equal7_l = false;

          /* Disable for Outport: '<S330>/Receive CAN1' */
          localB->Receptionsubstasks_ga.AND = false;

          /* Disable for Outport: '<S330>/Send CAN2' */
          localB->Equal7 = false;

          /* Disable for Outport: '<S330>/Receive CAN2' */
          localB->Receptionsubstasks_ga.AND1 = false;
          localDW->COMMTaskSet_Values_MODE = false;
        }
      }

      /* End of Outputs for SubSystem: '<S90>/COMM Task - Set_Values' */

      /* Outputs for Enabled SubSystem: '<S90>/COMM Task - Sync bc 1' */
      COMMTaskSyncbc0(rtb_AND17, 0.0, &localB->COMMTaskSyncbc1,
                      &localC->COMMTaskSyncbc1, &localDW->COMMTaskSyncbc1,
                      rtd_Board_ID, rtd_Local_Ticks, &localDW->Msg_Rx,
                      rtd_Msg_Tx_CAN1, rtd_Msg_Tx_CAN2, rtd_New_Msg_Ready_CAN1,
                      rtd_New_Msg_Ready_CAN2, &localDW->Role_ID, rtd_RxID_CAN1,
                      rtd_RxID_CAN2, rtd_Rx_State_CAN1, rtd_Rx_State_CAN2,
                      rtd_TxID_CAN1, rtd_TxID_CAN2, rtd_Tx_msg_count_CAN1,
                      rtd_Tx_msg_count_CAN2, &localDW->basic_cycle_count,
                      &localDW->delta_a_est, &localDW->delta_f_est,
                      &localDW->new_msg_Rx, &localDW->speed_integral,
                      &localDW->torque_ar_integral, &localDW->torque_fr_integral);

      /* End of Outputs for SubSystem: '<S90>/COMM Task - Sync bc 1' */

      /* Logic: '<S90>/OR1' incorporates:
       *  Constant: '<S438>/Constant6'
       *  Constant: '<S438>/Constant7'
       *  Constant: '<S440>/Constant22'
       *  Constant: '<S440>/Constant24'
       *  Constant: '<S440>/Constant8'
       *  Constant: '<S441>/Constant22'
       *  Constant: '<S441>/Constant24'
       *  Constant: '<S441>/Constant8'
       *  Constant: '<S442>/Constant'
       *  Constant: '<S468>/Constant6'
       *  Constant: '<S468>/Constant7'
       *  Constant: '<S470>/Constant22'
       *  Constant: '<S470>/Constant24'
       *  Constant: '<S470>/Constant8'
       *  Constant: '<S471>/Constant22'
       *  Constant: '<S471>/Constant24'
       *  Constant: '<S471>/Constant8'
       *  Constant: '<S472>/Constant'
       *  Constant: '<S90>/Constant'
       *  Constant: '<S90>/Constant25'
       *  Constant: '<S90>/Constant35'
       *  Constant: '<S90>/Constant37'
       *  Constant: '<S90>/Constant38'
       *  Constant: '<S90>/Constant5'
       *  Logic: '<S438>/AND'
       *  Logic: '<S438>/AND1'
       *  Logic: '<S468>/AND'
       *  Logic: '<S468>/AND1'
       *  Logic: '<S90>/AND10'
       *  Logic: '<S90>/AND12'
       *  Logic: '<S90>/AND15'
       *  Logic: '<S90>/AND3'
       *  Logic: '<S90>/AND5'
       *  Math: '<S440>/Mod'
       *  Math: '<S441>/Mod'
       *  Math: '<S470>/Mod'
       *  Math: '<S471>/Mod'
       *  RelationalOperator: '<S408>/Equal16'
       *  RelationalOperator: '<S438>/Equal16'
       *  RelationalOperator: '<S438>/GreaterThan2'
       *  RelationalOperator: '<S438>/GreaterThan3'
       *  RelationalOperator: '<S440>/Equal4'
       *  RelationalOperator: '<S441>/Equal4'
       *  RelationalOperator: '<S468>/Equal16'
       *  RelationalOperator: '<S468>/GreaterThan2'
       *  RelationalOperator: '<S468>/GreaterThan3'
       *  RelationalOperator: '<S470>/Equal4'
       *  RelationalOperator: '<S471>/Equal4'
       *  RelationalOperator: '<S90>/GreaterThan10'
       *  RelationalOperator: '<S90>/GreaterThan11'
       *  RelationalOperator: '<S90>/GreaterThan22'
       *  RelationalOperator: '<S90>/GreaterThan23'
       *  RelationalOperator: '<S90>/GreaterThan24'
       *  RelationalOperator: '<S90>/GreaterThan25'
       *  RelationalOperator: '<S90>/GreaterThan30'
       *  RelationalOperator: '<S90>/GreaterThan31'
       *  RelationalOperator: '<S90>/GreaterThan6'
       *  RelationalOperator: '<S90>/GreaterThan7'
       *  Sum: '<S440>/Minus'
       *  Sum: '<S441>/Minus'
       *  Sum: '<S470>/Minus'
       *  Sum: '<S471>/Minus'
       */
      localB->OR1 = (localB->COMMTaskSyncbc1.Equal7_a || localB->Equal7_l ||
                     localB->Equal7_e ||
                     localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN1_e.Equal7
                     ||
                     localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN1_e.Equal7
                     || localB->CheckmsgtransmissionCAN1_i.Equal7);

      /* Logic: '<S90>/OR2' */
      localB->OR2 = (localB->COMMTaskSyncbc1.Receptionsubstasks_h.AND1 ||
                     localB->Receptionsubstasks_ga.AND1 ||
                     localB->Receptionsubstasks_gp.AND1 ||
                     localB->Receptionsubstasks_a.AND1 ||
                     localB->Receptionsubstasks_ah.AND1 ||
                     localB->Receptionsubstasks_b.AND1);

      /* Logic: '<S90>/OR3' */
      localB->OR3 = (localB->COMMTaskSyncbc1.Receptionsubstasks_h.AND ||
                     localB->Receptionsubstasks_ga.AND ||
                     localB->Receptionsubstasks_gp.AND ||
                     localB->Receptionsubstasks_a.AND ||
                     localB->Receptionsubstasks_ah.AND ||
                     localB->Receptionsubstasks_b.AND);

      /* Logic: '<S90>/OR4' */
      localB->OR4 = (localB->COMMTaskSyncbc1.Equal7 || localB->Equal7 ||
                     localB->Equal7_p ||
                     localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN2_b.Equal7
                     ||
                     localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN2_b.Equal7
                     || localB->CheckmsgtransmissionCAN2_c.Equal7);
    } else {
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' */
        if (localDW->COMPTaskRx_Output_Control1_Chec) {
          /* Disable for Enabled SubSystem: '<S337>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ce) {
              /* Disable for Outport: '<S554>/CAN1_msg_coherent' */
              localB->Equal_i2 = false;
              localDW->DemuxmessageCAN1andcheckcohe_ce = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_a) {
              /* Disable for Outport: '<S555>/CAN2_msg_coherent' */
              localB->Equal_b = false;
              localDW->DemuxmessageCAN1andcheckcoher_a = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S337>/Process_Messages' */
          localDW->COMPTaskRx_Output_Control1_Chec = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' */
        if (localDW->COMPTaskRx_Output_Control2_Chec) {
          /* Disable for Enabled SubSystem: '<S338>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_nj) {
              /* Disable for Outport: '<S583>/CAN1_msg_coherent' */
              localB->Equal_i = false;
              localDW->DemuxmessageCAN1andcheckcohe_nj = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n) {
              /* Disable for Outport: '<S584>/CAN2_msg_coherent' */
              localB->Equal_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_n = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S338>/Process_Messages' */
          localDW->COMPTaskRx_Output_Control2_Chec = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' */
        if (localDW->COMPTaskRx_Output_Emulator_Chec) {
          /* Disable for Enabled SubSystem: '<S339>/Process_Messages' */
          if (localDW->Process_Messages_MODE_o) {
            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_h0) {
              /* Disable for Outport: '<S611>/CAN1_msg_coherent' */
              localB->Equal_d = false;
              localDW->DemuxmessageCAN1andcheckcohe_h0 = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_hb) {
              /* Disable for Outport: '<S612>/CAN2_msg_coherent' */
              localB->Equal_g = false;
              localDW->DemuxmessageCAN1andcheckcohe_hb = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_o = false;
          }

          /* End of Disable for SubSystem: '<S339>/Process_Messages' */
          localDW->COMPTaskRx_Output_Emulator_Chec = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */
        if (localDW->COMPTaskRx_Sensor_Values_Check_) {
          /* Disable for Enabled SubSystem: '<S340>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_k) {
              /* Disable for Outport: '<S640>/CAN1_msg_coherent' */
              localB->Equal_j = false;
              localDW->DemuxmessageCAN1andcheckcoher_k = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_m4) {
              /* Disable for Outport: '<S641>/CAN2_msg_coherent' */
              localB->Equal_a = false;
              localDW->DemuxmessageCAN1andcheckcohe_m4 = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S340>/Process_Messages' */
          localDW->COMPTaskRx_Sensor_Values_Check_ = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' */
        if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
          /* Disable for Enabled SubSystem: '<S341>/Process_Messages' */
          if (localDW->Process_Messages_MODE_m) {
            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m) {
              /* Disable for Outport: '<S693>/CAN1_msg_coherent' */
              localB->Equal_f = false;
              localDW->DemuxmessageCAN1andcheckcoher_m = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_h) {
              /* Disable for Outport: '<S694>/CAN2_msg_coherent' */
              localB->Equal = false;
              localDW->DemuxmessageCAN1andcheckcoher_h = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_m = false;
          }

          /* End of Disable for SubSystem: '<S341>/Process_Messages' */
          localDW->COMPTaskRx_Set_Values_Check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S342>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c) {
              /* Disable for Outport: '<S738>/CAN1_msg_coherent' */
              localB->AND_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_c = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoheren) {
              /* Disable for Outport: '<S739>/CAN2_msg_coherent' */
              localB->AND = false;
              localDW->DemuxmessageCAN1andcheckcoheren = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S342>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - TMR' */
        if (localDW->COMPTaskTMR_MODE) {
          /* Disable for Enabled SubSystem: '<S343>/TMR_main' */
          if (localDW->TMR_main_MODE) {
            /* Disable for Enabled SubSystem: '<S766>/Agreement Out1' */
            if (localDW->AgreementOut1_MODE) {
              /* Disable for Outport: '<S807>/tau_fr_agree' */
              tau_fr1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_fl_agree ' */
              tau_fl1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_ar_agree' */
              tau_ar1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_al_agree' */
              tau_al1_agree_s = false;
              localDW->AgreementOut1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out1' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out2' */
            if (localDW->AgreementOut2_MODE) {
              /* Disable for Outport: '<S808>/tau_fr_agree' */
              tau_fr2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_fl_agree ' */
              tau_fl2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_ar_agree' */
              tau_ar2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_al_agree' */
              tau_al2_agree_s = false;
              localDW->AgreementOut2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out2' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out3' */
            if (localDW->AgreementOut3_MODE) {
              /* Disable for Outport: '<S809>/tau_fr_agree' */
              tau_fr_agree_s = false;

              /* Disable for Outport: '<S809>/tau_fl_agree ' */
              tau_fl_agree_s = false;

              /* Disable for Outport: '<S809>/tau_ar_agree' */
              tau_ar_agree_s = false;

              /* Disable for Outport: '<S809>/tau_al_agree' */
              tau_al_agree_s = false;
              localDW->AgreementOut3_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out3' */
            localDW->TMR_main_MODE = false;
          }

          /* End of Disable for SubSystem: '<S343>/TMR_main' */
          localDW->COMPTaskTMR_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - TMR' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Control1' */
        if (localDW->COMMTaskOutputControl1_MODE) {
          /* Disable for Enabled SubSystem: '<S326>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S326>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S326>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_ic.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_ic,
              &localDW->Transmissionsubtasks_ic);
          }

          /* End of Disable for SubSystem: '<S326>/Transmission subtasks' */

          /* Disable for Outport: '<S326>/Send CAN1' */
          localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN1_e.Equal7 =
            false;

          /* Disable for Outport: '<S326>/Receive CAN1' */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for Outport: '<S326>/Send CAN2' */
          localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN2_b.Equal7 =
            false;

          /* Disable for Outport: '<S326>/Receive CAN2' */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskOutputControl1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Output Control1' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Control2' */
        if (localDW->COMMTaskOutputControl2_MODE) {
          /* Disable for Enabled SubSystem: '<S327>/Reception substasks' */
          if (localDW->Receptionsubstasks_ah.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_ah,
              &localDW->Receptionsubstasks_ah);
          }

          /* End of Disable for SubSystem: '<S327>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S327>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_m.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_m,
              &localDW->Transmissionsubtasks_m);
          }

          /* End of Disable for SubSystem: '<S327>/Transmission subtasks' */

          /* Disable for Outport: '<S327>/Send CAN1' */
          localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN1_e.Equal7 =
            false;

          /* Disable for Outport: '<S327>/Receive CAN1' */
          localB->Receptionsubstasks_ah.AND = false;

          /* Disable for Outport: '<S327>/Send CAN2' */
          localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN2_b.Equal7 =
            false;

          /* Disable for Outport: '<S327>/Receive CAN2' */
          localB->Receptionsubstasks_ah.AND1 = false;
          localDW->COMMTaskOutputControl2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Output Control2' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Emulator' */
        if (localDW->COMMTaskOutputEmulator_MODE) {
          /* Disable for Enabled SubSystem: '<S328>/Reception substasks' */
          if (localDW->Receptionsubstasks_b.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_b,
              &localDW->Receptionsubstasks_b);
          }

          /* End of Disable for SubSystem: '<S328>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S328>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_i.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_i,
                 &localDW->CheckmsgtransmissionCAN1_i);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_g_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S408>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

            /* Disable for Outport: '<S408>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S328>/Transmission subtasks' */

          /* Disable for Outport: '<S328>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

          /* Disable for Outport: '<S328>/Receive CAN1' */
          localB->Receptionsubstasks_b.AND = false;

          /* Disable for Outport: '<S328>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S328>/Receive CAN2' */
          localB->Receptionsubstasks_b.AND1 = false;
          localDW->COMMTaskOutputEmulator_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Output Emulator' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Sensor_Values' */
        if (localDW->COMMTaskSensor_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S329>/Reception substasks' */
          if (localDW->Receptionsubstasks_gp.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_gp,
              &localDW->Receptionsubstasks_gp);
          }

          /* End of Disable for SubSystem: '<S329>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S329>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_l) {
            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE_f) {
              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_e = false;
              localDW->CheckmsgtransmissionCAN1_MODE_f = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE_k) {
              /* Disable for Outport: '<S441>/Send CAN2' */
              localB->Equal7_p = false;
              localDW->CheckmsgtransmissionCAN2_MODE_k = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S438>/Send CAN1' */
            localB->Equal7_e = false;

            /* Disable for Outport: '<S438>/Send CAN2' */
            localB->Equal7_p = false;
            localDW->Transmissionsubtasks_MODE_l = false;
          }

          /* End of Disable for SubSystem: '<S329>/Transmission subtasks' */

          /* Disable for Outport: '<S329>/Send CAN1' */
          localB->Equal7_e = false;

          /* Disable for Outport: '<S329>/Receive CAN1' */
          localB->Receptionsubstasks_gp.AND = false;

          /* Disable for Outport: '<S329>/Send CAN2' */
          localB->Equal7_p = false;

          /* Disable for Outport: '<S329>/Receive CAN2' */
          localB->Receptionsubstasks_gp.AND1 = false;
          localDW->COMMTaskSensor_Values_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Sensor_Values' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Set_Values' */
        if (localDW->COMMTaskSet_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S330>/Reception substasks' */
          if (localDW->Receptionsubstasks_ga.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_ga,
              &localDW->Receptionsubstasks_ga);
          }

          /* End of Disable for SubSystem: '<S330>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S330>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE) {
              /* Disable for Outport: '<S470>/Send CAN1' */
              localB->Equal7_l = false;
              localDW->CheckmsgtransmissionCAN1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE) {
              /* Disable for Outport: '<S471>/Send CAN2' */
              localB->Equal7 = false;
              localDW->CheckmsgtransmissionCAN2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S468>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S468>/Send CAN2' */
            localB->Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S330>/Transmission subtasks' */

          /* Disable for Outport: '<S330>/Send CAN1' */
          localB->Equal7_l = false;

          /* Disable for Outport: '<S330>/Receive CAN1' */
          localB->Receptionsubstasks_ga.AND = false;

          /* Disable for Outport: '<S330>/Send CAN2' */
          localB->Equal7 = false;

          /* Disable for Outport: '<S330>/Receive CAN2' */
          localB->Receptionsubstasks_ga.AND1 = false;
          localDW->COMMTaskSet_Values_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Set_Values' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1,
            &localDW->COMMTaskSyncbc1);
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Sync bc 1' */

        /* Disable for Outport: '<S90>/Send_Message_CAN1' */
        localB->OR1 = false;

        /* Disable for Outport: '<S90>/Send_Message_CAN2' */
        localB->OR4 = false;

        /* Disable for Outport: '<S90>/Receive_Message_CAN1' */
        localB->OR3 = false;

        /* Disable for Outport: '<S90>/Receive_Message_CAN2' */
        localB->OR2 = false;
        localDW->controllerbasiccycle1_MODE = false;
      }
    }

    /* End of Outputs for SubSystem: '<S41>/controller basic cycle 1' */

    /* Switch: '<S41>/Switch' incorporates:
     *  Constant: '<S101>/Constant4'
     *  Constant: '<S103>/Constant4'
     *  Constant: '<S105>/Constant4'
     *  Constant: '<S107>/Constant4'
     *  Constant: '<S344>/Constant4'
     *  Constant: '<S41>/Constant1'
     *  Constant: '<S438>/Constant6'
     *  Constant: '<S438>/Constant7'
     *  Constant: '<S440>/Constant22'
     *  Constant: '<S440>/Constant24'
     *  Constant: '<S440>/Constant8'
     *  Constant: '<S441>/Constant22'
     *  Constant: '<S441>/Constant24'
     *  Constant: '<S441>/Constant8'
     *  Constant: '<S442>/Constant'
     *  Constant: '<S468>/Constant6'
     *  Constant: '<S468>/Constant7'
     *  Constant: '<S470>/Constant22'
     *  Constant: '<S470>/Constant24'
     *  Constant: '<S470>/Constant8'
     *  Constant: '<S471>/Constant22'
     *  Constant: '<S471>/Constant24'
     *  Constant: '<S471>/Constant8'
     *  Constant: '<S472>/Constant'
     *  Constant: '<S89>/Constant'
     *  Constant: '<S89>/Constant12'
     *  Constant: '<S89>/Constant14'
     *  Constant: '<S89>/Constant17'
     *  Constant: '<S89>/Constant19'
     *  Constant: '<S89>/Constant2'
     *  Constant: '<S89>/Constant21'
     *  Constant: '<S89>/Constant23'
     *  Constant: '<S89>/Constant25'
     *  Constant: '<S89>/Constant27'
     *  Constant: '<S89>/Constant28'
     *  Constant: '<S89>/Constant3'
     *  Constant: '<S89>/Constant31'
     *  Constant: '<S89>/Constant33'
     *  Constant: '<S89>/Constant6'
     *  Constant: '<S89>/Constant8'
     *  Constant: '<S89>/Constant9'
     *  Constant: '<S90>/Constant'
     *  Constant: '<S90>/Constant12'
     *  Constant: '<S90>/Constant14'
     *  Constant: '<S90>/Constant16'
     *  Constant: '<S90>/Constant21'
     *  Constant: '<S90>/Constant23'
     *  Constant: '<S90>/Constant25'
     *  Constant: '<S90>/Constant27'
     *  Constant: '<S90>/Constant28'
     *  Constant: '<S90>/Constant31'
     *  Constant: '<S90>/Constant33'
     *  Constant: '<S90>/Constant35'
     *  Constant: '<S90>/Constant37'
     *  Constant: '<S90>/Constant38'
     *  Constant: '<S90>/Constant4'
     *  Constant: '<S90>/Constant5'
     *  Constant: '<S90>/Constant6'
     *  Constant: '<S90>/Constant7'
     *  DataStoreRead: '<S101>/Data Store Read1'
     *  DataStoreRead: '<S103>/Data Store Read5'
     *  DataStoreRead: '<S105>/Data Store Read5'
     *  DataStoreRead: '<S107>/Data Store Read5'
     *  DataStoreRead: '<S332>/Data Store Read1'
     *  DataStoreRead: '<S332>/Data Store Read2'
     *  DataStoreRead: '<S333>/Data Store Read1'
     *  DataStoreRead: '<S333>/Data Store Read2'
     *  DataStoreRead: '<S334>/Data Store Read1'
     *  DataStoreRead: '<S334>/Data Store Read2'
     *  DataStoreRead: '<S344>/Data Store Read1'
     *  DataStoreRead: '<S41>/Data Store Read10'
     *  DataStoreRead: '<S639>/Data Store Read6'
     *  DataStoreRead: '<S692>/Data Store Read6'
     *  DataStoreRead: '<S764>/Data Store Read'
     *  DataStoreRead: '<S765>/Data Store Read1'
     *  Logic: '<S100>/AND'
     *  Logic: '<S101>/AND'
     *  Logic: '<S103>/AND'
     *  Logic: '<S104>/AND'
     *  Logic: '<S105>/AND'
     *  Logic: '<S106>/AND'
     *  Logic: '<S107>/AND'
     *  Logic: '<S108>/AND'
     *  Logic: '<S332>/AND'
     *  Logic: '<S332>/NOT'
     *  Logic: '<S332>/OR'
     *  Logic: '<S333>/AND'
     *  Logic: '<S333>/NOT'
     *  Logic: '<S333>/OR'
     *  Logic: '<S334>/AND'
     *  Logic: '<S334>/NOT'
     *  Logic: '<S334>/OR'
     *  Logic: '<S337>/AND'
     *  Logic: '<S338>/AND'
     *  Logic: '<S339>/AND'
     *  Logic: '<S340>/AND'
     *  Logic: '<S340>/AND2'
     *  Logic: '<S341>/AND'
     *  Logic: '<S341>/AND2'
     *  Logic: '<S342>/AND'
     *  Logic: '<S343>/AND'
     *  Logic: '<S343>/AND1'
     *  Logic: '<S343>/AND2'
     *  Logic: '<S344>/AND'
     *  Logic: '<S438>/AND'
     *  Logic: '<S438>/AND1'
     *  Logic: '<S468>/AND'
     *  Logic: '<S468>/AND1'
     *  Logic: '<S639>/NOT1'
     *  Logic: '<S666>/NOT2'
     *  Logic: '<S692>/NOT1'
     *  Logic: '<S766>/AND14'
     *  Logic: '<S89>/AND1'
     *  Logic: '<S89>/AND10'
     *  Logic: '<S89>/AND11'
     *  Logic: '<S89>/AND12'
     *  Logic: '<S89>/AND13'
     *  Logic: '<S89>/AND14'
     *  Logic: '<S89>/AND15'
     *  Logic: '<S89>/AND16'
     *  Logic: '<S89>/AND18'
     *  Logic: '<S89>/AND19'
     *  Logic: '<S89>/AND2'
     *  Logic: '<S89>/AND3'
     *  Logic: '<S89>/AND4'
     *  Logic: '<S89>/AND5'
     *  Logic: '<S89>/AND6'
     *  Logic: '<S89>/AND7'
     *  Logic: '<S89>/AND8'
     *  Logic: '<S89>/AND9'
     *  Logic: '<S89>/NOT1'
     *  Logic: '<S90>/AND1'
     *  Logic: '<S90>/AND10'
     *  Logic: '<S90>/AND11'
     *  Logic: '<S90>/AND12'
     *  Logic: '<S90>/AND13'
     *  Logic: '<S90>/AND14'
     *  Logic: '<S90>/AND15'
     *  Logic: '<S90>/AND16'
     *  Logic: '<S90>/AND18'
     *  Logic: '<S90>/AND19'
     *  Logic: '<S90>/AND2'
     *  Logic: '<S90>/AND20'
     *  Logic: '<S90>/AND3'
     *  Logic: '<S90>/AND4'
     *  Logic: '<S90>/AND5'
     *  Logic: '<S90>/AND6'
     *  Logic: '<S90>/AND7'
     *  Logic: '<S90>/AND8'
     *  Logic: '<S90>/AND9'
     *  Logic: '<S90>/NOT2'
     *  Logic: '<S98>/AND'
     *  Math: '<S440>/Mod'
     *  Math: '<S441>/Mod'
     *  Math: '<S470>/Mod'
     *  Math: '<S471>/Mod'
     *  RelationalOperator: '<S101>/Equal'
     *  RelationalOperator: '<S101>/Equal2'
     *  RelationalOperator: '<S102>/Equal'
     *  RelationalOperator: '<S103>/Equal'
     *  RelationalOperator: '<S103>/Equal2'
     *  RelationalOperator: '<S105>/Equal'
     *  RelationalOperator: '<S105>/Equal2'
     *  RelationalOperator: '<S107>/Equal'
     *  RelationalOperator: '<S107>/Equal2'
     *  RelationalOperator: '<S332>/Equal'
     *  RelationalOperator: '<S333>/Equal'
     *  RelationalOperator: '<S334>/Equal'
     *  RelationalOperator: '<S336>/Equal2'
     *  RelationalOperator: '<S340>/Equal1'
     *  RelationalOperator: '<S341>/Equal1'
     *  RelationalOperator: '<S343>/Equal'
     *  RelationalOperator: '<S343>/Equal1'
     *  RelationalOperator: '<S343>/Equal3'
     *  RelationalOperator: '<S344>/Equal'
     *  RelationalOperator: '<S344>/Equal2'
     *  RelationalOperator: '<S408>/Equal16'
     *  RelationalOperator: '<S41>/Equal1'
     *  RelationalOperator: '<S438>/Equal16'
     *  RelationalOperator: '<S438>/GreaterThan2'
     *  RelationalOperator: '<S438>/GreaterThan3'
     *  RelationalOperator: '<S440>/Equal4'
     *  RelationalOperator: '<S441>/Equal4'
     *  RelationalOperator: '<S468>/Equal16'
     *  RelationalOperator: '<S468>/GreaterThan2'
     *  RelationalOperator: '<S468>/GreaterThan3'
     *  RelationalOperator: '<S470>/Equal4'
     *  RelationalOperator: '<S471>/Equal4'
     *  RelationalOperator: '<S89>/GreaterThan10'
     *  RelationalOperator: '<S89>/GreaterThan11'
     *  RelationalOperator: '<S89>/GreaterThan12'
     *  RelationalOperator: '<S89>/GreaterThan13'
     *  RelationalOperator: '<S89>/GreaterThan14'
     *  RelationalOperator: '<S89>/GreaterThan15'
     *  RelationalOperator: '<S89>/GreaterThan16'
     *  RelationalOperator: '<S89>/GreaterThan17'
     *  RelationalOperator: '<S89>/GreaterThan18'
     *  RelationalOperator: '<S89>/GreaterThan19'
     *  RelationalOperator: '<S89>/GreaterThan2'
     *  RelationalOperator: '<S89>/GreaterThan20'
     *  RelationalOperator: '<S89>/GreaterThan21'
     *  RelationalOperator: '<S89>/GreaterThan22'
     *  RelationalOperator: '<S89>/GreaterThan23'
     *  RelationalOperator: '<S89>/GreaterThan24'
     *  RelationalOperator: '<S89>/GreaterThan25'
     *  RelationalOperator: '<S89>/GreaterThan26'
     *  RelationalOperator: '<S89>/GreaterThan27'
     *  RelationalOperator: '<S89>/GreaterThan28'
     *  RelationalOperator: '<S89>/GreaterThan29'
     *  RelationalOperator: '<S89>/GreaterThan3'
     *  RelationalOperator: '<S89>/GreaterThan30'
     *  RelationalOperator: '<S89>/GreaterThan31'
     *  RelationalOperator: '<S89>/GreaterThan32'
     *  RelationalOperator: '<S89>/GreaterThan33'
     *  RelationalOperator: '<S89>/GreaterThan4'
     *  RelationalOperator: '<S89>/GreaterThan5'
     *  RelationalOperator: '<S89>/GreaterThan6'
     *  RelationalOperator: '<S89>/GreaterThan7'
     *  RelationalOperator: '<S89>/GreaterThan8'
     *  RelationalOperator: '<S89>/GreaterThan9'
     *  RelationalOperator: '<S90>/GreaterThan10'
     *  RelationalOperator: '<S90>/GreaterThan11'
     *  RelationalOperator: '<S90>/GreaterThan12'
     *  RelationalOperator: '<S90>/GreaterThan13'
     *  RelationalOperator: '<S90>/GreaterThan14'
     *  RelationalOperator: '<S90>/GreaterThan15'
     *  RelationalOperator: '<S90>/GreaterThan16'
     *  RelationalOperator: '<S90>/GreaterThan17'
     *  RelationalOperator: '<S90>/GreaterThan18'
     *  RelationalOperator: '<S90>/GreaterThan19'
     *  RelationalOperator: '<S90>/GreaterThan2'
     *  RelationalOperator: '<S90>/GreaterThan20'
     *  RelationalOperator: '<S90>/GreaterThan21'
     *  RelationalOperator: '<S90>/GreaterThan22'
     *  RelationalOperator: '<S90>/GreaterThan23'
     *  RelationalOperator: '<S90>/GreaterThan24'
     *  RelationalOperator: '<S90>/GreaterThan25'
     *  RelationalOperator: '<S90>/GreaterThan26'
     *  RelationalOperator: '<S90>/GreaterThan27'
     *  RelationalOperator: '<S90>/GreaterThan28'
     *  RelationalOperator: '<S90>/GreaterThan29'
     *  RelationalOperator: '<S90>/GreaterThan3'
     *  RelationalOperator: '<S90>/GreaterThan30'
     *  RelationalOperator: '<S90>/GreaterThan31'
     *  RelationalOperator: '<S90>/GreaterThan32'
     *  RelationalOperator: '<S90>/GreaterThan33'
     *  RelationalOperator: '<S90>/GreaterThan34'
     *  RelationalOperator: '<S90>/GreaterThan35'
     *  RelationalOperator: '<S90>/GreaterThan4'
     *  RelationalOperator: '<S90>/GreaterThan5'
     *  RelationalOperator: '<S90>/GreaterThan6'
     *  RelationalOperator: '<S90>/GreaterThan7'
     *  RelationalOperator: '<S90>/GreaterThan8'
     *  RelationalOperator: '<S90>/GreaterThan9'
     *  RelationalOperator: '<S96>/Equal'
     *  RelationalOperator: '<S97>/Equal'
     *  RelationalOperator: '<S98>/Equal2'
     *  RelationalOperator: '<S99>/Equal2'
     *  Sum: '<S440>/Minus'
     *  Sum: '<S441>/Minus'
     *  Sum: '<S470>/Minus'
     *  Sum: '<S471>/Minus'
     */
    if (rtb_OR1_l) {
      localB->signal1 = localB->OR1_o;
      localB->signal2 = localB->OR4_o;
      localB->signal3 = localB->OR2_p;
      localB->signal4 = localB->OR3_b;
    } else {
      localB->signal1 = localB->OR1;
      localB->signal2 = localB->OR4;
      localB->signal3 = localB->OR3;
      localB->signal4 = localB->OR2;
    }

    /* End of Switch: '<S41>/Switch' */

    /* DataStoreRead: '<S88>/Data Store Read' */
    Master_ID_s = *rtd_Master_ID;

    /* DataStoreRead: '<S88>/Data Store Read1' */
    Role_ID_s = localDW->Role_ID;

    /* DataStoreRead: '<S88>/Data Store Read10' */
    BC1_sync_processed_s = localDW->BC1_Sync_processed;

    /* DataStoreRead: '<S88>/Data Store Read2' */
    BC0_sync_processed_s = localDW->BC0_Sync_processed;

    /* DataStoreRead: '<S88>/Data Store Read3' */
    votes_Board_1_DEBUG = localDW->Votes_count.First_Board;
    votes_Board_2_DEBUG = localDW->Votes_count.Second_Board;
    votes_Board_3_DEBUG = localDW->Votes_count.Third_Board;

    /* DataStoreRead: '<S88>/Data Store Read4' */
    Board_1_error_counter_s = localDW->Board1_error_counter;

    /* DataStoreRead: '<S88>/Data Store Read5' */
    Board_2_error_counter_s = localDW->Board2_error_counter;

    /* DataStoreRead: '<S88>/Data Store Read6' */
    Board_3_error_counter_s = localDW->Board3_error_counter;

    /* DataStoreRead: '<S88>/Data Store Read7' */
    BC0_vote1_processed_s = localDW->BC0_Vote1_processed;

    /* DataStoreRead: '<S88>/Data Store Read8' */
    BC0_vote2_processed_s = localDW->BC0_Vote2_processed;

    /* DataStoreRead: '<S88>/Data Store Read9' */
    BC0_vote3_processed_s = localDW->BC0_Vote3_processed;

    /* DataStoreRead: '<S91>/Data Store Read24' */
    msg_count_DEBUG_s = localDW->msg_count_DEBUG;
  } else {
    if (localDW->MatrixCycleManager_MODE) {
      /* Disable for Enabled SubSystem: '<S41>/controller basic cycle 0' */
      if (localDW->controllerbasiccycle0_MODE) {
        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Sync bc0 check' */
        if (localDW->COMPTaskSyncbc0check_MODE) {
          /* Disable for Enabled SubSystem: '<S100>/Process_Messages' */
          if (localDW->Process_Messages_MODE_ek) {
            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_f) {
              /* Disable for Outport: '<S207>/CAN1_msg_coherent' */
              localB->AND_e = false;
              localDW->DemuxmessageCAN1andcheckcoher_f = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_me) {
              /* Disable for Outport: '<S208>/CAN2_msg_coherent' */
              localB->AND_b = false;
              localDW->DemuxmessageCAN1andcheckcohe_me = false;
            }

            /* End of Disable for SubSystem: '<S205>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_ek = false;
          }

          /* End of Disable for SubSystem: '<S100>/Process_Messages' */
          localDW->COMPTaskSyncbc0check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Sync bc0 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote1 check' */
        if (localDW->COMPTaskVote1check_MODE) {
          /* Disable for Enabled SubSystem: '<S104>/Process_Messages1' */
          if (localDW->Process_Messages1_MODE) {
            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_dz) {
              /* Disable for Outport: '<S242>/CAN1_msg_coherent' */
              localB->Equal_h = false;
              localDW->DemuxmessageCAN1andcheckcohe_dz = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_g) {
              /* Disable for Outport: '<S243>/CAN2_msg_coherent' */
              localB->Equal_c = false;
              localDW->DemuxmessageCAN1andcheckcoher_g = false;
            }

            /* End of Disable for SubSystem: '<S240>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages1_MODE = false;
          }

          /* End of Disable for SubSystem: '<S104>/Process_Messages1' */
          localDW->COMPTaskVote1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Vote1 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote2 check' */
        if (localDW->COMPTaskVote2check_MODE) {
          /* Disable for Enabled SubSystem: '<S106>/Process_Messages' */
          if (localDW->Process_Messages_MODE_mw) {
            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_p) {
              /* Disable for Outport: '<S271>/CAN1_msg_coherent' */
              localB->Equal_o3 = false;
              localDW->DemuxmessageCAN1andcheckcoher_p = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_d) {
              /* Disable for Outport: '<S272>/CAN2_msg_coherent' */
              localB->Equal_fk = false;
              localDW->DemuxmessageCAN1andcheckcoher_d = false;
            }

            /* End of Disable for SubSystem: '<S269>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_mw = false;
          }

          /* End of Disable for SubSystem: '<S106>/Process_Messages' */
          localDW->COMPTaskVote2check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Vote2 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMP Task - Vote3 check' */
        if (localDW->COMPTaskVote3check_MODE) {
          /* Disable for Enabled SubSystem: '<S108>/Process_Messages' */
          if (localDW->Process_Messages_MODE_f) {
            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_e) {
              /* Disable for Outport: '<S300>/CAN1_msg_coherent' */
              localB->Equal_dl = false;
              localDW->DemuxmessageCAN1andcheckcoher_e = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_j) {
              /* Disable for Outport: '<S301>/CAN2_msg_coherent' */
              localB->Equal_k = false;
              localDW->DemuxmessageCAN1andcheckcoher_j = false;
            }

            /* End of Disable for SubSystem: '<S298>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_f = false;
          }

          /* End of Disable for SubSystem: '<S108>/Process_Messages' */
          localDW->COMPTaskVote3check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMP Task - Vote3 check' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Sync bc 0' */
        if (localDW->COMMTaskSyncbc0_b.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc0_b,
            &localDW->COMMTaskSyncbc0_b);
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Sync bc 0' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote1' */
        if (localDW->COMMTaskVote1_MODE) {
          /* Disable for Enabled SubSystem: '<S93>/Reception substasks' */
          if (localDW->Receptionsubstasks_k.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_k,
              &localDW->Receptionsubstasks_k);
          }

          /* End of Disable for SubSystem: '<S93>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S93>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_ik.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_ik,
              &localDW->Transmissionsubtasks_ik);
          }

          /* End of Disable for SubSystem: '<S93>/Transmission subtasks' */

          /* Disable for Outport: '<S93>/Send CAN1' */
          localB->Transmissionsubtasks_ik.Equal7_i = false;

          /* Disable for Outport: '<S93>/Receive CAN1' */
          localB->Receptionsubstasks_k.AND = false;

          /* Disable for Outport: '<S93>/Send CAN2' */
          localB->Transmissionsubtasks_ik.Equal7 = false;

          /* Disable for Outport: '<S93>/Receive CAN2' */
          localB->Receptionsubstasks_k.AND1 = false;
          localDW->COMMTaskVote1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Vote1' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote2' */
        if (localDW->COMMTaskVote2_MODE) {
          /* Disable for Enabled SubSystem: '<S94>/Reception substasks' */
          if (localDW->Receptionsubstasks_g.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_g,
              &localDW->Receptionsubstasks_g);
          }

          /* End of Disable for SubSystem: '<S94>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S94>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_l.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_l,
              &localDW->Transmissionsubtasks_l);
          }

          /* End of Disable for SubSystem: '<S94>/Transmission subtasks' */

          /* Disable for Outport: '<S94>/Send CAN1' */
          localB->Transmissionsubtasks_l.Equal7_i = false;

          /* Disable for Outport: '<S94>/Receive CAN1' */
          localB->Receptionsubstasks_g.AND = false;

          /* Disable for Outport: '<S94>/Send CAN2' */
          localB->Transmissionsubtasks_l.Equal7 = false;

          /* Disable for Outport: '<S94>/Receive CAN2' */
          localB->Receptionsubstasks_g.AND1 = false;
          localDW->COMMTaskVote2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Vote2' */

        /* Disable for Enabled SubSystem: '<S89>/COMM Task - Vote3' */
        if (localDW->COMMTaskVote3_MODE) {
          /* Disable for Enabled SubSystem: '<S95>/Reception substasks' */
          if (localDW->Receptionsubstasks_e.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_e,
              &localDW->Receptionsubstasks_e);
          }

          /* End of Disable for SubSystem: '<S95>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S95>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_g.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_Disable(&localB->Transmissionsubtasks_g,
              &localDW->Transmissionsubtasks_g);
          }

          /* End of Disable for SubSystem: '<S95>/Transmission subtasks' */

          /* Disable for Outport: '<S95>/Send CAN1' */
          localB->Transmissionsubtasks_g.Equal7_i = false;

          /* Disable for Outport: '<S95>/Receive CAN1' */
          localB->Receptionsubstasks_e.AND = false;

          /* Disable for Outport: '<S95>/Send CAN2' */
          localB->Transmissionsubtasks_g.Equal7 = false;

          /* Disable for Outport: '<S95>/Receive CAN2' */
          localB->Receptionsubstasks_e.AND1 = false;
          localDW->COMMTaskVote3_MODE = false;
        }

        /* End of Disable for SubSystem: '<S89>/COMM Task - Vote3' */

        /* Disable for Outport: '<S89>/Send_Message_CAN1' */
        localB->OR1_o = false;

        /* Disable for Outport: '<S89>/Send_Message_CAN2' */
        localB->OR4_o = false;

        /* Disable for Outport: '<S89>/Receive_Message_CAN1' */
        localB->OR2_p = false;

        /* Disable for Outport: '<S89>/Receive_Message_CAN2' */
        localB->OR3_b = false;
        localDW->controllerbasiccycle0_MODE = false;
      }

      /* End of Disable for SubSystem: '<S41>/controller basic cycle 0' */

      /* Disable for Enabled SubSystem: '<S41>/controller basic cycle 1' */
      if (localDW->controllerbasiccycle1_MODE) {
        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' */
        if (localDW->COMPTaskRx_Output_Control1_Chec) {
          /* Disable for Enabled SubSystem: '<S337>/Process_Messages' */
          if (localDW->Process_Messages_MODE_h) {
            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_ce) {
              /* Disable for Outport: '<S554>/CAN1_msg_coherent' */
              localB->Equal_i2 = false;
              localDW->DemuxmessageCAN1andcheckcohe_ce = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_a) {
              /* Disable for Outport: '<S555>/CAN2_msg_coherent' */
              localB->Equal_b = false;
              localDW->DemuxmessageCAN1andcheckcoher_a = false;
            }

            /* End of Disable for SubSystem: '<S552>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_h = false;
          }

          /* End of Disable for SubSystem: '<S337>/Process_Messages' */
          localDW->COMPTaskRx_Output_Control1_Chec = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Control1_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' */
        if (localDW->COMPTaskRx_Output_Control2_Chec) {
          /* Disable for Enabled SubSystem: '<S338>/Process_Messages' */
          if (localDW->Process_Messages_MODE_g) {
            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_nj) {
              /* Disable for Outport: '<S583>/CAN1_msg_coherent' */
              localB->Equal_i = false;
              localDW->DemuxmessageCAN1andcheckcohe_nj = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_n) {
              /* Disable for Outport: '<S584>/CAN2_msg_coherent' */
              localB->Equal_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_n = false;
            }

            /* End of Disable for SubSystem: '<S581>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_g = false;
          }

          /* End of Disable for SubSystem: '<S338>/Process_Messages' */
          localDW->COMPTaskRx_Output_Control2_Chec = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Control2_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' */
        if (localDW->COMPTaskRx_Output_Emulator_Chec) {
          /* Disable for Enabled SubSystem: '<S339>/Process_Messages' */
          if (localDW->Process_Messages_MODE_o) {
            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcohe_h0) {
              /* Disable for Outport: '<S611>/CAN1_msg_coherent' */
              localB->Equal_d = false;
              localDW->DemuxmessageCAN1andcheckcohe_h0 = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_hb) {
              /* Disable for Outport: '<S612>/CAN2_msg_coherent' */
              localB->Equal_g = false;
              localDW->DemuxmessageCAN1andcheckcohe_hb = false;
            }

            /* End of Disable for SubSystem: '<S609>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_o = false;
          }

          /* End of Disable for SubSystem: '<S339>/Process_Messages' */
          localDW->COMPTaskRx_Output_Emulator_Chec = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Output_Emulator_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */
        if (localDW->COMPTaskRx_Sensor_Values_Check_) {
          /* Disable for Enabled SubSystem: '<S340>/Process_Messages' */
          if (localDW->Process_Messages_MODE_e) {
            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_k) {
              /* Disable for Outport: '<S640>/CAN1_msg_coherent' */
              localB->Equal_j = false;
              localDW->DemuxmessageCAN1andcheckcoher_k = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcohe_m4) {
              /* Disable for Outport: '<S641>/CAN2_msg_coherent' */
              localB->Equal_a = false;
              localDW->DemuxmessageCAN1andcheckcohe_m4 = false;
            }

            /* End of Disable for SubSystem: '<S637>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_e = false;
          }

          /* End of Disable for SubSystem: '<S340>/Process_Messages' */
          localDW->COMPTaskRx_Sensor_Values_Check_ = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Sensor_Values_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' */
        if (localDW->COMPTaskRx_Set_Values_Check_MOD) {
          /* Disable for Enabled SubSystem: '<S341>/Process_Messages' */
          if (localDW->Process_Messages_MODE_m) {
            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_m) {
              /* Disable for Outport: '<S693>/CAN1_msg_coherent' */
              localB->Equal_f = false;
              localDW->DemuxmessageCAN1andcheckcoher_m = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoher_h) {
              /* Disable for Outport: '<S694>/CAN2_msg_coherent' */
              localB->Equal = false;
              localDW->DemuxmessageCAN1andcheckcoher_h = false;
            }

            /* End of Disable for SubSystem: '<S690>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE_m = false;
          }

          /* End of Disable for SubSystem: '<S341>/Process_Messages' */
          localDW->COMPTaskRx_Set_Values_Check_MOD = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Rx_Set_Values_Check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - Sync bc1 check' */
        if (localDW->COMPTaskSyncbc1check_MODE) {
          /* Disable for Enabled SubSystem: '<S342>/Process_Messages' */
          if (localDW->Process_Messages_MODE) {
            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence' */
            if (localDW->DemuxmessageCAN1andcheckcoher_c) {
              /* Disable for Outport: '<S738>/CAN1_msg_coherent' */
              localB->AND_o = false;
              localDW->DemuxmessageCAN1andcheckcoher_c = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence' */

            /* Disable for Enabled SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            if (localDW->DemuxmessageCAN1andcheckcoheren) {
              /* Disable for Outport: '<S739>/CAN2_msg_coherent' */
              localB->AND = false;
              localDW->DemuxmessageCAN1andcheckcoheren = false;
            }

            /* End of Disable for SubSystem: '<S736>/Demux message CAN1 and check coherence1' */
            localDW->Process_Messages_MODE = false;
          }

          /* End of Disable for SubSystem: '<S342>/Process_Messages' */
          localDW->COMPTaskSyncbc1check_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - Sync bc1 check' */

        /* Disable for Enabled SubSystem: '<S90>/COMP Task - TMR' */
        if (localDW->COMPTaskTMR_MODE) {
          /* Disable for Enabled SubSystem: '<S343>/TMR_main' */
          if (localDW->TMR_main_MODE) {
            /* Disable for Enabled SubSystem: '<S766>/Agreement Out1' */
            if (localDW->AgreementOut1_MODE) {
              /* Disable for Outport: '<S807>/tau_fr_agree' */
              tau_fr1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_fl_agree ' */
              tau_fl1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_ar_agree' */
              tau_ar1_agree_s = false;

              /* Disable for Outport: '<S807>/tau_al_agree' */
              tau_al1_agree_s = false;
              localDW->AgreementOut1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out1' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out2' */
            if (localDW->AgreementOut2_MODE) {
              /* Disable for Outport: '<S808>/tau_fr_agree' */
              tau_fr2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_fl_agree ' */
              tau_fl2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_ar_agree' */
              tau_ar2_agree_s = false;

              /* Disable for Outport: '<S808>/tau_al_agree' */
              tau_al2_agree_s = false;
              localDW->AgreementOut2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out2' */

            /* Disable for Enabled SubSystem: '<S766>/Agreement Out3' */
            if (localDW->AgreementOut3_MODE) {
              /* Disable for Outport: '<S809>/tau_fr_agree' */
              tau_fr_agree_s = false;

              /* Disable for Outport: '<S809>/tau_fl_agree ' */
              tau_fl_agree_s = false;

              /* Disable for Outport: '<S809>/tau_ar_agree' */
              tau_ar_agree_s = false;

              /* Disable for Outport: '<S809>/tau_al_agree' */
              tau_al_agree_s = false;
              localDW->AgreementOut3_MODE = false;
            }

            /* End of Disable for SubSystem: '<S766>/Agreement Out3' */
            localDW->TMR_main_MODE = false;
          }

          /* End of Disable for SubSystem: '<S343>/TMR_main' */
          localDW->COMPTaskTMR_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMP Task - TMR' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Control1' */
        if (localDW->COMMTaskOutputControl1_MODE) {
          /* Disable for Enabled SubSystem: '<S326>/Reception substasks' */
          if (localDW->Receptionsubstasks_a.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_a,
              &localDW->Receptionsubstasks_a);
          }

          /* End of Disable for SubSystem: '<S326>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S326>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_ic.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_ic,
              &localDW->Transmissionsubtasks_ic);
          }

          /* End of Disable for SubSystem: '<S326>/Transmission subtasks' */

          /* Disable for Outport: '<S326>/Send CAN1' */
          localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN1_e.Equal7 =
            false;

          /* Disable for Outport: '<S326>/Receive CAN1' */
          localB->Receptionsubstasks_a.AND = false;

          /* Disable for Outport: '<S326>/Send CAN2' */
          localB->Transmissionsubtasks_ic.CheckmsgtransmissionCAN2_b.Equal7 =
            false;

          /* Disable for Outport: '<S326>/Receive CAN2' */
          localB->Receptionsubstasks_a.AND1 = false;
          localDW->COMMTaskOutputControl1_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Output Control1' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Control2' */
        if (localDW->COMMTaskOutputControl2_MODE) {
          /* Disable for Enabled SubSystem: '<S327>/Reception substasks' */
          if (localDW->Receptionsubstasks_ah.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_ah,
              &localDW->Receptionsubstasks_ah);
          }

          /* End of Disable for SubSystem: '<S327>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S327>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_m.Transmissionsubtasks_MODE) {
            Transmissionsubtasks_g_Disable(&localB->Transmissionsubtasks_m,
              &localDW->Transmissionsubtasks_m);
          }

          /* End of Disable for SubSystem: '<S327>/Transmission subtasks' */

          /* Disable for Outport: '<S327>/Send CAN1' */
          localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN1_e.Equal7 =
            false;

          /* Disable for Outport: '<S327>/Receive CAN1' */
          localB->Receptionsubstasks_ah.AND = false;

          /* Disable for Outport: '<S327>/Send CAN2' */
          localB->Transmissionsubtasks_m.CheckmsgtransmissionCAN2_b.Equal7 =
            false;

          /* Disable for Outport: '<S327>/Receive CAN2' */
          localB->Receptionsubstasks_ah.AND1 = false;
          localDW->COMMTaskOutputControl2_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Output Control2' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Output Emulator' */
        if (localDW->COMMTaskOutputEmulator_MODE) {
          /* Disable for Enabled SubSystem: '<S328>/Reception substasks' */
          if (localDW->Receptionsubstasks_b.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_b,
              &localDW->Receptionsubstasks_b);
          }

          /* End of Disable for SubSystem: '<S328>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S328>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_c) {
            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_i.CheckmsgtransmissionCAN1_MODE)
            {
              CheckmsgtransmissionCAN_Disable
                (&localB->CheckmsgtransmissionCAN1_i,
                 &localDW->CheckmsgtransmissionCAN1_i);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S408>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_c.CheckmsgtransmissionCAN2_MODE)
            {
              CheckmsgtransmissionC_g_Disable
                (&localB->CheckmsgtransmissionCAN2_c,
                 &localDW->CheckmsgtransmissionCAN2_c);
            }

            /* End of Disable for SubSystem: '<S408>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S408>/Send CAN1' */
            localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

            /* Disable for Outport: '<S408>/Send CAN2' */
            localB->CheckmsgtransmissionCAN2_c.Equal7 = false;
            localDW->Transmissionsubtasks_MODE_c = false;
          }

          /* End of Disable for SubSystem: '<S328>/Transmission subtasks' */

          /* Disable for Outport: '<S328>/Send CAN1' */
          localB->CheckmsgtransmissionCAN1_i.Equal7 = false;

          /* Disable for Outport: '<S328>/Receive CAN1' */
          localB->Receptionsubstasks_b.AND = false;

          /* Disable for Outport: '<S328>/Send CAN2' */
          localB->CheckmsgtransmissionCAN2_c.Equal7 = false;

          /* Disable for Outport: '<S328>/Receive CAN2' */
          localB->Receptionsubstasks_b.AND1 = false;
          localDW->COMMTaskOutputEmulator_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Output Emulator' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Sensor_Values' */
        if (localDW->COMMTaskSensor_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S329>/Reception substasks' */
          if (localDW->Receptionsubstasks_gp.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_gp,
              &localDW->Receptionsubstasks_gp);
          }

          /* End of Disable for SubSystem: '<S329>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S329>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE_l) {
            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE_f) {
              /* Disable for Outport: '<S440>/Send CAN1' */
              localB->Equal7_e = false;
              localDW->CheckmsgtransmissionCAN1_MODE_f = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S438>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE_k) {
              /* Disable for Outport: '<S441>/Send CAN2' */
              localB->Equal7_p = false;
              localDW->CheckmsgtransmissionCAN2_MODE_k = false;
            }

            /* End of Disable for SubSystem: '<S438>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S438>/Send CAN1' */
            localB->Equal7_e = false;

            /* Disable for Outport: '<S438>/Send CAN2' */
            localB->Equal7_p = false;
            localDW->Transmissionsubtasks_MODE_l = false;
          }

          /* End of Disable for SubSystem: '<S329>/Transmission subtasks' */

          /* Disable for Outport: '<S329>/Send CAN1' */
          localB->Equal7_e = false;

          /* Disable for Outport: '<S329>/Receive CAN1' */
          localB->Receptionsubstasks_gp.AND = false;

          /* Disable for Outport: '<S329>/Send CAN2' */
          localB->Equal7_p = false;

          /* Disable for Outport: '<S329>/Receive CAN2' */
          localB->Receptionsubstasks_gp.AND1 = false;
          localDW->COMMTaskSensor_Values_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Sensor_Values' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Set_Values' */
        if (localDW->COMMTaskSet_Values_MODE) {
          /* Disable for Enabled SubSystem: '<S330>/Reception substasks' */
          if (localDW->Receptionsubstasks_ga.Receptionsubstasks_MODE) {
            Receptionsubstasks_Disable(&localB->Receptionsubstasks_ga,
              &localDW->Receptionsubstasks_ga);
          }

          /* End of Disable for SubSystem: '<S330>/Reception substasks' */

          /* Disable for Enabled SubSystem: '<S330>/Transmission subtasks' */
          if (localDW->Transmissionsubtasks_MODE) {
            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN1' */
            if (localDW->CheckmsgtransmissionCAN1_MODE) {
              /* Disable for Outport: '<S470>/Send CAN1' */
              localB->Equal7_l = false;
              localDW->CheckmsgtransmissionCAN1_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN1' */

            /* Disable for Enabled SubSystem: '<S468>/Check msg transmission CAN2' */
            if (localDW->CheckmsgtransmissionCAN2_MODE) {
              /* Disable for Outport: '<S471>/Send CAN2' */
              localB->Equal7 = false;
              localDW->CheckmsgtransmissionCAN2_MODE = false;
            }

            /* End of Disable for SubSystem: '<S468>/Check msg transmission CAN2' */

            /* Disable for Outport: '<S468>/Send CAN1' */
            localB->Equal7_l = false;

            /* Disable for Outport: '<S468>/Send CAN2' */
            localB->Equal7 = false;
            localDW->Transmissionsubtasks_MODE = false;
          }

          /* End of Disable for SubSystem: '<S330>/Transmission subtasks' */

          /* Disable for Outport: '<S330>/Send CAN1' */
          localB->Equal7_l = false;

          /* Disable for Outport: '<S330>/Receive CAN1' */
          localB->Receptionsubstasks_ga.AND = false;

          /* Disable for Outport: '<S330>/Send CAN2' */
          localB->Equal7 = false;

          /* Disable for Outport: '<S330>/Receive CAN2' */
          localB->Receptionsubstasks_ga.AND1 = false;
          localDW->COMMTaskSet_Values_MODE = false;
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Set_Values' */

        /* Disable for Enabled SubSystem: '<S90>/COMM Task - Sync bc 1' */
        if (localDW->COMMTaskSyncbc1.COMMTaskSyncbc0_MODE) {
          COMMTaskSyncbc0_Disable(&localB->COMMTaskSyncbc1,
            &localDW->COMMTaskSyncbc1);
        }

        /* End of Disable for SubSystem: '<S90>/COMM Task - Sync bc 1' */

        /* Disable for Outport: '<S90>/Send_Message_CAN1' */
        localB->OR1 = false;

        /* Disable for Outport: '<S90>/Send_Message_CAN2' */
        localB->OR4 = false;

        /* Disable for Outport: '<S90>/Receive_Message_CAN1' */
        localB->OR3 = false;

        /* Disable for Outport: '<S90>/Receive_Message_CAN2' */
        localB->OR2 = false;
        localDW->controllerbasiccycle1_MODE = false;
      }

      /* End of Disable for SubSystem: '<S41>/controller basic cycle 1' */

      /* Disable for Outport: '<S41>/Send_Message_CAN1' */
      localB->signal1 = false;

      /* Disable for Outport: '<S41>/Send_Message_CAN2' */
      localB->signal2 = false;

      /* Disable for Outport: '<S41>/Receive_Message_CAN1' */
      localB->signal3 = false;

      /* Disable for Outport: '<S41>/Receive_Message_CAN2' */
      localB->signal4 = false;
      localDW->MatrixCycleManager_MODE = false;
    }
  }

  /* End of Logic: '<S18>/NOT1' */
  /* End of Outputs for SubSystem: '<S18>/Matrix Cycle Manager' */

  /* Logic: '<S18>/OR' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read1'
   */
  rtb_OR1_l = (localB->signal3 || localDW->Initialization_flag);

  /* Chart: '<S18>/Chart' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart */
  if (localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart */
    localDW->bitsForTID1.is_active_c4_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart */
    /* Transition: '<S30>:10' */
    /* Entry 'Send_Trigger': '<S30>:9' */
    if (localB->signal1) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN1 Send' */
      /* Event: '<S30>:3' */
      CAN1Send(&localB->CAN1Send_o, &localDW->CAN1Send_o, rtd_Local_Ticks,
               rtd_Msg_Tx_CAN1, rtd_Toggle_Pin_A0, rtd_TxID_CAN1,
               rtd_Tx_msg_count_CAN1);

      /* End of Outputs for SubSystem: '<S6>/CAN1 Send' */
    }
  } else {
    /* During 'Send_Trigger': '<S30>:9' */
    if (localB->signal1) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN1 Send' */
      /* Event: '<S30>:3' */
      CAN1Send(&localB->CAN1Send_o, &localDW->CAN1Send_o, rtd_Local_Ticks,
               rtd_Msg_Tx_CAN1, rtd_Toggle_Pin_A0, rtd_TxID_CAN1,
               rtd_Tx_msg_count_CAN1);

      /* End of Outputs for SubSystem: '<S6>/CAN1 Send' */
    }
  }

  /* End of Chart: '<S18>/Chart' */

  /* Chart: '<S18>/Chart1' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart1 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart1 */
  if (localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart1 */
    localDW->bitsForTID1.is_active_c5_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart1 */
    /* Transition: '<S31>:10' */
    /* Entry 'Send_Trigger': '<S31>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN1 Recieve' */
      /* Event: '<S31>:3' */
      CAN1Recieve(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0);

      /* End of Outputs for SubSystem: '<S6>/CAN1 Recieve' */
    }
  } else {
    /* During 'Send_Trigger': '<S31>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN1 Recieve' */
      /* Event: '<S31>:3' */
      CAN1Recieve(&localB->CAN1Recieve_h, &localDW->CAN1Recieve_h,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN1, rtd_Msg_Rx_Ticks_CAN1,
                  rtd_New_Msg_Ready_CAN1, rtd_RxID_CAN1, rtd_Rx_State_CAN1,
                  rtd_Toggle_Pin_A0);

      /* End of Outputs for SubSystem: '<S6>/CAN1 Recieve' */
    }
  }

  /* End of Chart: '<S18>/Chart1' */

  /* Logic: '<S18>/OR1' incorporates:
   *  DataStoreRead: '<S18>/Data Store Read1'
   */
  rtb_OR1_l = (localDW->Initialization_flag || localB->signal4);

  /* Chart: '<S18>/Chart2' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart2 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart2 */
  if (localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart2 */
    localDW->bitsForTID1.is_active_c6_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart2 */
    /* Transition: '<S32>:10' */
    /* Entry 'Send_Trigger': '<S32>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN2 Recieve' */
      /* Event: '<S32>:3' */
      CAN2Recieve(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0);

      /* End of Outputs for SubSystem: '<S6>/CAN2 Recieve' */
    }
  } else {
    /* During 'Send_Trigger': '<S32>:9' */
    if (rtb_OR1_l) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN2 Recieve' */
      /* Event: '<S32>:3' */
      CAN2Recieve(&localB->CAN2Recieve_b, &localDW->CAN2Recieve_b,
                  rtd_Local_Ticks, rtd_Msg_Rx_CAN2, rtd_Msg_Rx_Ticks_CAN2,
                  rtd_New_Msg_Ready_CAN2, rtd_RxID_CAN2, rtd_Rx_State_CAN2,
                  rtd_Toggle_Pin_A0);

      /* End of Outputs for SubSystem: '<S6>/CAN2 Recieve' */
    }
  }

  /* End of Chart: '<S18>/Chart2' */

  /* Chart: '<S18>/Chart3' */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart3 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart3 */
  if (localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart3 */
    localDW->bitsForTID1.is_active_c7_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart3 */
    /* Transition: '<S33>:10' */
    /* Entry 'Send_Trigger': '<S33>:9' */
    if (localB->signal2) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN2 Send' */
      /* Event: '<S33>:3' */
      CAN2Send(&localB->CAN2Send_h, &localDW->CAN2Send_h, rtd_Local_Ticks,
               rtd_Msg_Tx_CAN2, rtd_Toggle_Pin_A0, rtd_TxID_CAN2,
               rtd_Tx_msg_count_CAN2);

      /* End of Outputs for SubSystem: '<S6>/CAN2 Send' */
    }
  } else {
    /* During 'Send_Trigger': '<S33>:9' */
    if (localB->signal2) {
      /* Outputs for Function Call SubSystem: '<S6>/CAN2 Send' */
      /* Event: '<S33>:3' */
      CAN2Send(&localB->CAN2Send_h, &localDW->CAN2Send_h, rtd_Local_Ticks,
               rtd_Msg_Tx_CAN2, rtd_Toggle_Pin_A0, rtd_TxID_CAN2,
               rtd_Tx_msg_count_CAN2);

      /* End of Outputs for SubSystem: '<S6>/CAN2 Send' */
    }
  }

  /* End of Chart: '<S18>/Chart3' */

  /* Outputs for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A0' incorporates:
   *  EnablePort: '<S35>/Enable'
   */
  /* Logic: '<S18>/AND' incorporates:
   *  Constant: '<S18>/Constant1'
   */
  if ((*rtd_Toggle_Pin_A0) && (1.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinA0_MODE) {
      localDW->DEBUGToggledigitalpinA0_MODE = true;
    }

    /* Switch: '<S35>/Switch' incorporates:
     *  DataStoreRead: '<S35>/Data Store Read'
     */
    if (localDW->A0_Pin_State) {
      /* DataStoreWrite: '<S35>/Data Store Write1' incorporates:
       *  Constant: '<S35>/Constant1'
       */
      localDW->A0_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S35>/Data Store Write1' incorporates:
       *  Constant: '<S35>/Constant'
       */
      localDW->A0_Pin_State = true;
    }

    /* End of Switch: '<S35>/Switch' */

    /* DataStoreWrite: '<S35>/Data Store Write' incorporates:
     *  Constant: '<S35>/Constant2'
     */
    *rtd_Toggle_Pin_A0 = false;

    /* DataStoreRead: '<S35>/Data Store Read1' */
    localB->DataStoreRead1_o1 = localDW->A0_Pin_State;

    /* Update for M-S-Function: '<S42>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_o1 == 0) {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN0, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA0_MODE) {
      localDW->DEBUGToggledigitalpinA0_MODE = false;
    }
  }

  /* End of Logic: '<S18>/AND' */
  /* End of Outputs for SubSystem: '<S18>/DEBUG - Toggle digital pin A0' */

  /* Outputs for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A1' incorporates:
   *  EnablePort: '<S36>/Enable'
   */
  /* Logic: '<S18>/AND1' incorporates:
   *  Constant: '<S18>/Constant4'
   *  DataStoreRead: '<S18>/Data Store Read3'
   */
  if (localDW->Toggle_Pin_A1 && (0.0 != 0.0)) {
    if (!localDW->DEBUGToggledigitalpinA1_MODE) {
      localDW->DEBUGToggledigitalpinA1_MODE = true;
    }

    /* Switch: '<S36>/Switch' incorporates:
     *  DataStoreRead: '<S36>/Data Store Read'
     */
    if (localDW->A1_Pin_State) {
      /* DataStoreWrite: '<S36>/Data Store Write1' incorporates:
       *  Constant: '<S36>/Constant1'
       */
      localDW->A1_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S36>/Data Store Write1' incorporates:
       *  Constant: '<S36>/Constant'
       */
      localDW->A1_Pin_State = true;
    }

    /* End of Switch: '<S36>/Switch' */

    /* DataStoreWrite: '<S36>/Data Store Write' incorporates:
     *  Constant: '<S36>/Constant2'
     */
    localDW->Toggle_Pin_A1 = false;

    /* DataStoreRead: '<S36>/Data Store Read1' */
    localB->DataStoreRead1_e = localDW->A1_Pin_State;

    /* Update for M-S-Function: '<S43>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1_e == 0) {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN6, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA1_MODE) {
      localDW->DEBUGToggledigitalpinA1_MODE = false;
    }
  }

  /* End of Logic: '<S18>/AND1' */
  /* End of Outputs for SubSystem: '<S18>/DEBUG - Toggle digital pin A1' */

  /* Outputs for Enabled SubSystem: '<S18>/DEBUG - Toggle digital pin A4' incorporates:
   *  EnablePort: '<S38>/Enable'
   */
  /* Constant: '<S18>/Constant7' */
  if (1.0 > 0.0) {
    if (!localDW->DEBUGToggledigitalpinA4_MODE) {
      localDW->DEBUGToggledigitalpinA4_MODE = true;
    }

    /* Switch: '<S38>/Switch' incorporates:
     *  DataStoreRead: '<S38>/Data Store Read'
     */
    if (localDW->A4_Pin_State) {
      /* DataStoreWrite: '<S38>/Data Store Write1' incorporates:
       *  Constant: '<S38>/Constant1'
       */
      localDW->A4_Pin_State = false;
    } else {
      /* DataStoreWrite: '<S38>/Data Store Write1' incorporates:
       *  Constant: '<S38>/Constant'
       */
      localDW->A4_Pin_State = true;
    }

    /* End of Switch: '<S38>/Switch' */
    /* DataStoreRead: '<S38>/Data Store Read1' */
    localB->DataStoreRead1 = localDW->A4_Pin_State;

    /* Update for M-S-Function: '<S45>/Level-2 M-file S-Function' */
    /* update digital output */
    if (localB->DataStoreRead1 == 0) {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTF_PIN9, DIGOUT_HIGH);
    }
  } else {
    if (localDW->DEBUGToggledigitalpinA4_MODE) {
      localDW->DEBUGToggledigitalpinA4_MODE = false;
    }
  }

  /* End of Constant: '<S18>/Constant7' */
  /* End of Outputs for SubSystem: '<S18>/DEBUG - Toggle digital pin A4' */

  /* Outputs for Enabled SubSystem: '<S18>/LT_Update Desync_Positive' incorporates:
   *  EnablePort: '<S40>/Enable'
   */
  /* DataStoreRead: '<S18>/Data Store Read6' */
  if (localDW->Desync_Positive) {
    /* Switch: '<S40>/Switch' incorporates:
     *  Constant: '<S40>/Constant'
     *  Constant: '<S40>/Constant1'
     *  Constant: '<S40>/Constant4'
     *  Constant: '<S40>/Constant5'
     *  Constant: '<S40>/Constant8'
     *  DataStoreRead: '<S18>/Data Store Read7'
     *  RelationalOperator: '<S40>/Equal'
     */
    if (localDW->basic_cycle_count == 0.0) {
      localDW->Switch_1_DIMS1 = 17;
      localDW->Switch_2_DIMS1 = 17;
      memcpy(&rtb_signal1[0], rtConstP.Constant_Value, 17U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant1_Value, 17U * sizeof(real_T));
    } else {
      localDW->Switch_1_DIMS1 = 18;
      localDW->Switch_2_DIMS1 = 18;
      memcpy(&rtb_signal1[0], rtConstP.Constant4_Value, 18U * sizeof(real_T));
      memcpy(&rtb_signal2[0], rtConstP.Constant5_Value, 18U * sizeof(real_T));
    }

    /* End of Switch: '<S40>/Switch' */

    /* MATLAB Function: '<S40>/MATLAB Function' incorporates:
     *  Constant: '<S40>/Constant2'
     *  Constant: '<S40>/Constant3'
     */
    /* MATLAB Function 'HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/LT_Update Desync_Positive/MATLAB Function': '<S87>:1' */
    /* '<S87>:1:12' */
    rtb_Fix1_e = 1.0;
    do {
      exitg1 = 0;
      rtb_Minus_ch = rtb_signal1[(int32_T)rtb_Fix1_e - 1];
      if (*rtd_Local_Ticks > rtb_Minus_ch) {
        /* '<S87>:1:15' */
        /* '<S87>:1:16' */
        rtb_Fix1_e++;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    sigIdx = (int32_T)(rtb_Fix1_e - 1.0) - 1;
    if (rtb_signal2[sigIdx] != 0.0) {
      /* '<S87>:1:21' */
      rtb_Minus_ch = rt_roundd(rtb_Minus_ch - (real_T)*rtd_Local_Ticks);
      if (rtb_Minus_ch < 65536.0) {
        if (rtb_Minus_ch >= 0.0) {
          u1 = (uint16_T)rtb_Minus_ch;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 - 1U;
      if (qY_0 > u1) {
        qY_0 = 0U;
      }

      rtb_DataStoreRead8_o5 = (uint16_T)qY_0;
    } else {
      /* '<S87>:1:25' */
      rtb_Minus_ch = rt_roundd((real_T)*rtd_Local_Ticks - rtb_signal1[sigIdx]);
      if (rtb_Minus_ch < 65536.0) {
        if (rtb_Minus_ch >= 0.0) {
          rtb_DataStoreRead8_o5 = (uint16_T)rtb_Minus_ch;
        } else {
          rtb_DataStoreRead8_o5 = 0U;
        }
      } else {
        rtb_DataStoreRead8_o5 = MAX_uint16_T;
      }

      /* '<S87>:1:27' */
      /* '<S87>:1:29' */
      /* '<S87>:1:31' */
      /* '<S87>:1:34' */
      rtb_Minus_ch = rt_roundd((real_T)rtb_DataStoreRead8_o5 / 5.0);
      if (rtb_Minus_ch < 65536.0) {
        if (rtb_Minus_ch >= 0.0) {
          u1 = (uint16_T)rtb_Minus_ch;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (qY_0 > 65535U) {
        qY_0 = 65535U;
      }

      rtb_Minus_ch = rt_roundd((real_T)qY_0 * 5.0);
      if (rtb_Minus_ch < 65536.0) {
        if (rtb_Minus_ch >= 0.0) {
          u0 = (uint16_T)rtb_Minus_ch;
        } else {
          u0 = 0U;
        }
      } else {
        u0 = MAX_uint16_T;
      }

      rtb_Minus_ch = rt_roundd((real_T)rtb_DataStoreRead8_o5 / 8.0);
      if (rtb_Minus_ch < 65536.0) {
        if (rtb_Minus_ch >= 0.0) {
          u1 = (uint16_T)rtb_Minus_ch;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      qY_0 = u1 + 1U;
      if (qY_0 > 65535U) {
        qY_0 = 65535U;
      }

      rtb_Minus_ch = rt_roundd((real_T)qY_0 * 8.0);
      if (rtb_Minus_ch < 65536.0) {
        if (rtb_Minus_ch >= 0.0) {
          u1 = (uint16_T)rtb_Minus_ch;
        } else {
          u1 = 0U;
        }
      } else {
        u1 = MAX_uint16_T;
      }

      if (u0 < u1) {
        u1 = u0;
      }

      qY_0 = (uint32_T)u1 - rtb_DataStoreRead8_o5;
      if (qY_0 > u1) {
        qY_0 = 0U;
      }

      qY = qY_0 - 1U;
      if (qY > qY_0) {
        qY = 0U;
      }

      rtb_DataStoreRead8_o5 = (uint16_T)qY;
    }

    /* End of MATLAB Function: '<S40>/MATLAB Function' */

    /* Outputs for Atomic SubSystem: '<S40>/Local Time Update with Positive Desync' */
    /* Switch: '<S86>/Switch' incorporates:
     *  DataStoreRead: '<S86>/Data Store Read2'
     *  RelationalOperator: '<S86>/GreaterThan'
     */
    if (rtb_DataStoreRead8_o5 <= localDW->Desync_Ticks) {
      rtb_Fix1_e = rtb_DataStoreRead8_o5;
    } else {
      rtb_Fix1_e = localDW->Desync_Ticks;
    }

    /* End of Switch: '<S86>/Switch' */

    /* Sum: '<S86>/Minus' */
    rtb_Minus_ch = (real_T)*rtd_Local_Ticks + rtb_Fix1_e;

    /* Sum: '<S86>/Minus1' incorporates:
     *  DataStoreRead: '<S86>/Data Store Read2'
     */
    rtb_Fix1_e -= localDW->Desync_Ticks;

    /* Logic: '<S86>/NOT' incorporates:
     *  Constant: '<S86>/Constant'
     *  DataStoreWrite: '<S86>/Data Store Write'
     *  RelationalOperator: '<S86>/Equal'
     */
    localDW->Desync_Positive = (rtb_Fix1_e > 0.0);

    /* DataStoreWrite: '<S86>/Data Store Write1' incorporates:
     *  DataTypeConversion: '<S86>/Cast'
     */
    *rtd_Local_Ticks = (uint16_T)rtb_Minus_ch;

    /* DataStoreWrite: '<S86>/Data Store Write2' */
    localDW->Desync_Ticks = rtb_Fix1_e;

    /* End of Outputs for SubSystem: '<S40>/Local Time Update with Positive Desync' */
  }

  /* End of DataStoreRead: '<S18>/Data Store Read6' */
  /* End of Outputs for SubSystem: '<S18>/LT_Update Desync_Positive' */

  /* Chart: '<S18>/Chart4' incorporates:
   *  Constant: '<S18>/Constant3'
   */
  /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart4 */
  /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart4 */
  if (localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ == 0U) {
    /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart4 */
    localDW->bitsForTID1.is_active_c8_HANcoder_E407_TTA_ = 1U;

    /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Chart4 */
    /* Transition: '<S34>:10' */
    /* Entry 'Send_Trigger': '<S34>:9' */
    if (0.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S6>/Measure EXecution time' */
      /* Event: '<S34>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S6>/Measure EXecution time' */
    }
  } else {
    /* During 'Send_Trigger': '<S34>:9' */
    if (0.0 != 0.0) {
      /* Outputs for Function Call SubSystem: '<S6>/Measure EXecution time' */
      /* Event: '<S34>:3' */
      MeasureEXecutiontime(&localB->MeasureEXecutiontime_d,
                           &localDW->MeasureEXecutiontime_d);

      /* End of Outputs for SubSystem: '<S6>/Measure EXecution time' */
    }
  }

  /* End of Chart: '<S18>/Chart4' */
}

/* Model step function */
void HANcoder_E407_TTA_Controller_v2_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_Level2MfileSFunction_l;
  boolean_T rtb_Level2MfileSFunction_g;
  int32_T rowIdx;
  int8_T rtPrevAction;
  int8_T rtAction;
  uint8_T rtb_Output;
  real_T rtb_Multiply;
  real_T rtb_Multiply1;
  real_T rtb_Multiply2;
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_b;
  boolean_T rtb_SampleTimeCrowBar;

  /* DigitalClock: '<S6>/Digital Clock' */
  simulation_time = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0*
                       4294967296.0)) * 0.01);

  /* Outputs for Enabled SubSystem: '<S6>/Initialize Clock Schedule' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  /* Logic: '<S6>/NOT' incorporates:
   *  DataStoreRead: '<S6>/If 1 -> Clock initialized '
   */
  if (rtDWork.init_clock == 0.0) {
    if (!rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = true;
    }

    /* DataStoreWrite: '<S25>/Data Store Write' incorporates:
     *  Constant: '<S25>/Constant2'
     */
    rtDWork.init_clock = 1.0;

    /* Update for M-S-Function: '<S924>/Level-2 M-file S-Function' incorporates:
     *  Constant: '<S25>/Constant'
     *  Constant: '<S25>/Constant1'
     */
    /* schedule the next output compare event */
    TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)1U),
      (tTimeoutAction)((uint8_T)3U));
  } else {
    if (rtDWork.InitializeClockSchedule_MODE) {
      rtDWork.InitializeClockSchedule_MODE = false;
    }
  }

  /* End of Logic: '<S6>/NOT' */
  /* End of Outputs for SubSystem: '<S6>/Initialize Clock Schedule' */

  /* If: '<S6>/If' incorporates:
   *  DataStoreRead: '<S6>/Data Store Read1'
   */
  rtPrevAction = rtDWork.If_ActiveSubsystem;
  rtAction = -1;
  if (rtDWork.Board_ID == 0.0) {
    rtAction = 0;
  }

  rtDWork.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
  }

  if (rtAction == 0) {
    if (0 != rtPrevAction) {
    }

    /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* M-S-Function: '<S920>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN2);

    /* Product: '<S24>/Multiply' incorporates:
     *  Constant: '<S24>/Constant'
     */
    rtb_Multiply = rtb_Level2MfileSFunction_l ? 1.0 : 0.0;

    /* M-S-Function: '<S921>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN4);

    /* Product: '<S24>/Multiply1' incorporates:
     *  Constant: '<S24>/Constant1'
     */
    rtb_Multiply1 = rtb_Level2MfileSFunction_l ? 2.0 : 0.0;

    /* M-S-Function: '<S922>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN5);

    /* Product: '<S24>/Multiply2' incorporates:
     *  Constant: '<S24>/Constant2'
     */
    rtb_Multiply2 = rtb_Level2MfileSFunction_l ? 4.0 : 0.0;

    /* M-S-Function: '<S923>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_l = DiginGet(DIGIN_PORTE_PIN6);

    /* Sum: '<S24>/Add' incorporates:
     *  Constant: '<S24>/Constant3'
     *  Product: '<S24>/Multiply3'
     */
    Board_ID_s = ((rtb_Multiply + rtb_Multiply1) + rtb_Multiply2) +
      (rtb_Level2MfileSFunction_l ? 8.0 : 0.0);

    /* End of Outputs for SubSystem: '<S6>/If Action Subsystem' */
  }

  /* End of If: '<S6>/If' */

  /* DataStoreWrite: '<S6>/Data Store Write' */
  rtDWork.Board_ID = Board_ID_s;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S930>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction_g = DiginGet(DIGIN_PORTA_PIN0);

    /* Outputs for Triggered SubSystem: '<S932>/J-K Flip-Flop' incorporates:
     *  TriggerPort: '<S933>/Trigger'
     */
    if ((!rtb_Level2MfileSFunction_g) && (rtPrevZCSigState.JKFlipFlop_Trig_ZCE
         != ZERO_ZCSIG)) {
      /* CombinatorialLogic: '<S933>/Logic' incorporates:
       *  Memory: '<S932>/TmpLatchAtJ-K Flip-FlopInport1'
       *  Memory: '<S933>/Memory'
       */
      rowIdx = (int32_T)(((((uint32_T)rtDWork.Memory_PreviousInput << 1) +
                           rtDWork.TmpLatchAtJKFlipFlopInport1_Pre) << 1) +
                         rtDWork.TmpLatchAtJKFlipFlopInport2_Pre);
      rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
      rtB.Logic[1U] = rtConstP.Logic_table[rowIdx + 8U];

      /* Update for Memory: '<S933>/Memory' */
      rtDWork.Memory_PreviousInput = rtB.Logic[0];
    }

    rtPrevZCSigState.JKFlipFlop_Trig_ZCE = rtb_Level2MfileSFunction_g;

    /* End of Outputs for SubSystem: '<S932>/J-K Flip-Flop' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S12>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S14>/FixPt Sum1' incorporates:
     *  Constant: '<S14>/FixPt Constant'
     *  UnitDelay: '<S12>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S15>/FixPt Switch' incorporates:
     *  Constant: '<S15>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S15>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S13>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S16>/FixPt Sum1' incorporates:
     *  Constant: '<S16>/FixPt Constant'
     */
    rtb_FixPtSum1_b = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S17>/FixPt Switch' incorporates:
     *  Constant: '<S17>/Constant'
     */
    if (rtb_FixPtSum1_b > ((uint8_T)1U)) {
      rtb_FixPtSum1_b = ((uint8_T)0U);
    }

    /* End of Switch: '<S17>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || rtb_Level2MfileSFunction_g) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */
  }

  /* Constant: '<S3>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S935>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S936>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S937>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S932>/TmpLatchAtJ-K Flip-FlopInport1' incorporates:
     *  Constant: '<S8>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport1_Pre = true;

    /* Update for Memory: '<S932>/TmpLatchAtJ-K Flip-FlopInport2' incorporates:
     *  Constant: '<S8>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport2_Pre = true;

    /* Update for M-S-Function: '<S934>/Level-2 M-file S-Function' */
    /* update digital output */
    if (LedValue == 0) {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
    } else {
      DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
    }

    /* Update for UnitDelay: '<S12>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S13>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_b;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  rtM->Timing.clockTick0++;
  if (!rtM->Timing.clockTick0) {
    rtM->Timing.clockTickH0++;
  }

  rate_scheduler();
}

/* Model initialize function */
void HANcoder_E407_TTA_Controller_v2_initialize(void)
{
  {
    /* user code (Start function Header) */
    uint8_t canResult1;
    tCanFilter canFilter1;
    uint8_t canResult2;
    tCanFilter canFilter2;

    /* user code (Start function Body) */

    /* initialize the CAN driver. */
    CanInit(64, 8);

    /* initialize the CAN I/O module for channel 1 */
    CanIoInit(0);

    /* initialize the CAN I/O module for channel 2 */
    CanIoInit(1);

    /* initialize the timer module for output compare. */
    TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

    /* Start for DataStoreMemory: '<S6>/Data Store Memory5' */
    rtDWork.Master_ID = 1.0;

    /* Start for If: '<S6>/If' */
    rtDWork.If_ActiveSubsystem = -1;

    /* Start for IfAction SubSystem: '<S6>/If Action Subsystem' */

    /* Start for M-S-Function: '<S920>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN2, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S921>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN4, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S922>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN5, DIGIN_CFG_PULLDOWN);

    /* Start for M-S-Function: '<S923>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTE_PIN6, DIGIN_CFG_PULLDOWN);

    /* End of Start for SubSystem: '<S6>/If Action Subsystem' */

    /* Start for DataStoreMemory: '<S6>/Data Store Memory14' */
    rtDWork.RxID_CAN2 = 1U;

    /* Start for DataStoreMemory: '<S6>/Data Store Memory8' */
    rtDWork.RxID_CAN1 = 1U;

    /* Start for M-S-Function: '<S930>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for S-Function (sfcn_timeout_event_irq): '<S23>/S-Function' incorporates:
     *  SubSystem: '<S6>/Local Time generation'
     */

    /* Start for function-call system: '<S6>/Local Time generation' */

    /* Start for Chart: '<S26>/Chart' incorporates:
     *  SubSystem: '<S6>/CAN Management'
     */
    CANManagement_Start(&rtDWork.CANManagement_c);

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S23>/S-Function' */

    /* Start for S-Function (sfcn_timeout_init): '<S28>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for DataStoreMemory: '<S6>/Data Store Memory' */
    rtDWork.Tx_msg_count_CAN1 = 1.0;

    /* Start for DataStoreMemory: '<S6>/Data Store Memory20' */
    rtDWork.Tx_msg_count_CAN2 = 1.0;

    /* Start for M-S-Function: '<S934>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) +
      100);

    /* configure the sample time of the model in microseconds */
    AppCtrlTaskSetPeriod(10000);

    /* Run the ADC conversions ten times faster than the Simulink model */
    ADCconversionTaskSetPeriod(10000/10);

    /* Start for M-S-Function: '<S4>/Level-2 M-file S-Function' */

    /* store the CAN controller's filter configuration */
    canFilter1.mask = 0x00000000;
    canFilter1.code = 0x00000000;
    canFilter1.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult1 = CanConnect(0, 1000000, &canFilter1);
    configASSERT(canResult1 == TRUE);

    /* store the CAN controller's filter configuration */
    canFilter2.mask = 0x00000000;
    canFilter2.code = 0x00000000;
    canFilter2.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult2 = CanConnect(1, 1000000, &canFilter2);
    configASSERT(canResult2 == TRUE);

    /* Start for M-S-Function: '<S11>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.JKFlipFlop_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for Triggered SubSystem: '<S932>/J-K Flip-Flop' */
  /* SystemInitialize for Outport: '<S933>/!Q' */
  rtB.Logic[1] = true;

  /* End of SystemInitialize for SubSystem: '<S932>/J-K Flip-Flop' */

  /* SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S23>/S-Function' incorporates:
   *  SubSystem: '<S6>/Local Time generation'
   */

  /* System initialize for function-call system: '<S6>/Local Time generation' */

  /* SystemInitialize for Chart: '<S26>/Chart' incorporates:
   *  SubSystem: '<S6>/CAN Management'
   */
  CANManagement_Init(&rtB.CANManagement_c);

  /* End of SystemInitialize for S-Function (sfcn_timeout_event_irq): '<S23>/S-Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
