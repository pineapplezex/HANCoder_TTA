/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_GTSync.h
 *
 * Code generated for Simulink model 'HANcoder_E407_GTSync'.
 *
 * Model version                  : 1.160
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri May 28 21:44:30 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit Embedded Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HANcoder_E407_GTSync_h_
#define RTW_HEADER_HANcoder_E407_GTSync_h_
#ifndef HANcoder_E407_GTSync_COMMON_INCLUDES_
# define HANcoder_E407_GTSync_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "timeout.h"
#include "digout.h"
#include "digin.h"
#include "timein.h"
#include "app.h"
#include "SYS_config.h"
#include "os.h"
#include "anin.h"
#include "can.h"
#include "canio.h"
#include "mac.h"
#endif                                 /* HANcoder_E407_GTSync_COMMON_INCLUDES_ */

#include "HANcoder_E407_GTSync_types.h"

/* Macros for accessing real-time model data structure */
#define HANcoder_E407_GTSync_M         (rtM)

typedef union t_can_data_types
{
  /* simulink types (for quick reference) */
  uint8_t uint8_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
  int8_t int8_T_info[CAN_MAX_DATA_LEN/sizeof(int8_t)];
  uint16_t uint16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  int16_t int16_T_info[CAN_MAX_DATA_LEN/sizeof(uint16_t)];
  uint32_t uint32_T_info[CAN_MAX_DATA_LEN/sizeof(uint32_t)];
  int32_t int32_T_info[CAN_MAX_DATA_LEN/sizeof(int32_t)];
  uint8_t boolean_T_info[CAN_MAX_DATA_LEN/sizeof(uint8_t)];
} __attribute__((packed)) tCanDataTypes;

/* Zero-crossing (trigger) state for system '<S35>/Reset Free Running Counter1' */
typedef struct {
  ZCSigState ResetFreeRunningCounter1_Trig_Z;/* '<S35>/Reset Free Running Counter1' */
} rtZCE_ResetFreeRunningCounter1;

/* Block signals (default storage) */
typedef struct {
  uint8_T Output;                      /* '<S14>/Output' */
  boolean_T DataStoreRead5;            /* '<S9>/Data Store Read5' */
  boolean_T Logic[2];                  /* '<S54>/Logic' */
} BlockIO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T LED_local_ticks;              /* '<S9>/Data Store Memory' */
  real_T Board_ID;                     /* '<S1>/Data Store Memory1' */
  real_T active_flag;                  /* '<S35>/Odd_Tick' */
  real_T active_flag_a;                /* '<S35>/Even_Tick' */
  uint32_T local_ticks_mem_IRQ;        /* '<S1>/Data Store Memory2' */
  uint32_T tx_temp_count;              /* '<S50>/Data Store Memory' */
  uint32_T rise_edge_at_oddEventCounter;/* '<S35>/Odd_Tick' */
  uint32_T rise_edge_at_evenEventCounter;/* '<S35>/Even_Tick' */
  struct {
    uint_T is_c3_HANcoder_E407_GTSync:2;/* '<S35>/Odd_Tick' */
    uint_T is_c1_HANcoder_E407_GTSync:2;/* '<S35>/Even_Tick' */
    uint_T is_active_c3_HANcoder_E407_GTSy:1;/* '<S35>/Odd_Tick' */
    uint_T is_active_c1_HANcoder_E407_GTSy:1;/* '<S35>/Even_Tick' */
  } bitsForTID1;

  uint8_T Output_DSTATE;               /* '<S13>/Output' */
  uint8_T Output_DSTATE_k;             /* '<S14>/Output' */
  uint8_T basic_cycle_count;           /* '<S1>/Data Store Memory' */
  boolean_T LED_State;                 /* '<S9>/Data Store Memory1' */
  boolean_T TmpLatchAtJKFlipFlopInport1_Pre;/* synthesized block */
  boolean_T TmpLatchAtJKFlipFlopInport2_Pre;/* synthesized block */
  boolean_T Memory_PreviousInput;      /* '<S54>/Memory' */
} D_Work;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState JKFlipFlop_Trig_ZCE;      /* '<S53>/J-K Flip-Flop' */
  rtZCE_ResetFreeRunningCounter1 ResetFreeRunningCounter2;/* '<S35>/Reset Free Running Counter2' */
  rtZCE_ResetFreeRunningCounter1 ResetFreeRunningCounter1_i;/* '<S35>/Reset Free Running Counter1' */
} PrevZCSigStates;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S54>/Logic'
   */
  boolean_T Logic_table[16];
} ConstParam;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    struct {
      uint8_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO rtB;

/* Block states (default storage) */
extern D_Work rtDWork;

/* Constant parameters (default storage) */
extern const ConstParam rtConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T LED_local_ticks_signal;  /* '<S9>/Switch' */
extern real_T simulation_time;         /* '<S6>/Digital Clock' */
extern real_T id;                      /* '<S1>/Data Store Read' */
extern uint32_T SI_FreeHeap;           /* '<S57>/Level-2 M-file S-Function' */
extern uint32_T SI_FreeStack;          /* '<S58>/Level-2 M-file S-Function' */
extern uint32_T local_ticks_interrupt; /* '<S35>/Switch' */
extern uint32_T tx_temp_counter;       /* '<S50>/Add' */
extern uint8_T SI_CPUload;             /* '<S56>/Level-2 M-file S-Function' */
extern uint8_T bc;                     /* '<S42>/Data Store Read' */
extern boolean_T LedValue;             /* '<S2>/Data Type Conversion' */
extern boolean_T odd;                  /* '<S35>/Odd_Tick' */
extern boolean_T even;                 /* '<S35>/Even_Tick' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern boolean_T HANtuneOverride;      /* Variable: HANtuneOverride
                                        * Referenced by: '<S2>/Constant'
                                        */

/* Model entry point functions */
extern void HANcoder_E407_GTSync_initialize(void);
extern void HANcoder_E407_GTSync_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HANcoder_E407_GTSync'
 * '<S1>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm'
 * '<S2>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm'
 * '<S3>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Base Sample Time config'
 * '<S4>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/CAN config'
 * '<S5>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Custom ID config'
 * '<S6>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment'
 * '<S7>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Inputs'
 * '<S8>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode'
 * '<S9>'   : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Outputs'
 * '<S10>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/System information'
 * '<S11>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/XCP on CAN config'
 * '<S12>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/XCP on USB config'
 * '<S13>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter'
 * '<S14>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited'
 * '<S15>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Increment Real World'
 * '<S16>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/10Hz  Counter Limiter/Wrap To Zero'
 * '<S17>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Increment Real World'
 * '<S18>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Algorithm/5Hz  Counter Limited/Wrap To Zero'
 * '<S19>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management'
 * '<S20>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Compare Event IRQ'
 * '<S21>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Output Compare Init1'
 * '<S22>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Schedule Compare Event1'
 * '<S23>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Send'
 * '<S24>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler'
 * '<S25>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/CAN Recieve'
 * '<S26>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Check send sync message'
 * '<S27>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Idle Time Delay'
 * '<S28>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Update Board ID'
 * '<S29>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/CAN Recieve/CAN receive'
 * '<S30>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/CAN Recieve/UINT8 to UINT32'
 * '<S31>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/CAN Recieve/CAN receive/Enabled Subsystem'
 * '<S32>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/CAN Management/Check send sync message/Check_Reset_Idle_Time'
 * '<S33>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Send/CAN send'
 * '<S34>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Send/UINT32 to UINT8'
 * '<S35>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator'
 * '<S36>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix control block'
 * '<S37>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler'
 * '<S38>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Even_Tick'
 * '<S39>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Odd_Tick'
 * '<S40>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Reset Free Running Counter1'
 * '<S41>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Reset Free Running Counter2'
 * '<S42>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix control block/Reset values'
 * '<S43>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix control block/Reset values/If Action Subsystem'
 * '<S44>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler/Compare To Constant'
 * '<S45>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler/Compare To Constant1'
 * '<S46>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler/Compare To Constant3'
 * '<S47>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler/Compare To Constant4'
 * '<S48>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler/TX Temperature'
 * '<S49>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler/TX Temperature/Compare To Constant4'
 * '<S50>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Matrix scheduler/TX Temperature/If Action Subsystem'
 * '<S51>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Inputs/Digital Input'
 * '<S52>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode/Flip Flop T'
 * '<S53>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode/Flip Flop T/J-K Flip-Flop'
 * '<S54>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Operation Mode/Flip Flop T/J-K Flip-Flop/J-K Flip-Flop'
 * '<S55>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/Outputs/Digital Output'
 * '<S56>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get CPU load'
 * '<S57>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Heap'
 * '<S58>'  : 'HANcoder_E407_GTSync/HANcoder STM32 Target - E407-STM32 algorithm/System information/Get free Stack'
 */
#endif                                 /* RTW_HEADER_HANcoder_E407_GTSync_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
