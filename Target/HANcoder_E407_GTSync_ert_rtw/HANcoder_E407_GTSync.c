/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_GTSync.c
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

#include "HANcoder_E407_GTSync.h"
#include "HANcoder_E407_GTSync_private.h"

/* map ByteSwap function */
#define ByteSwap(x)                    (ByteSwap_x((uint8_t *) &x, sizeof(x)))

/* Named constants for Chart: '<S35>/Even_Tick' */
#define IN_Even_tick                   ((uint8_T)1U)
#define IN_NO_ACTIVE_CHILD             ((uint8_T)0U)
#define IN_Rise_edge                   ((uint8_T)2U)

/* Named constants for Chart: '<S35>/Odd_Tick' */
#define IN_Odd_tick                    ((uint8_T)1U)

void TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12(void);
void TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4(void);

/* Exported block signals */
real_T LED_local_ticks_signal;         /* '<S9>/Switch' */
real_T simulation_time;                /* '<S6>/Digital Clock' */
real_T id;                             /* '<S1>/Data Store Read' */
uint32_T SI_FreeHeap;                  /* '<S57>/Level-2 M-file S-Function' */
uint32_T SI_FreeStack;                 /* '<S58>/Level-2 M-file S-Function' */
uint32_T local_ticks_interrupt;        /* '<S35>/Switch' */
uint32_T tx_temp_counter;              /* '<S50>/Add' */
uint8_T SI_CPUload;                    /* '<S56>/Level-2 M-file S-Function' */
uint8_T bc;                            /* '<S42>/Data Store Read' */
boolean_T LedValue;                    /* '<S2>/Data Type Conversion' */
boolean_T odd;                         /* '<S35>/Odd_Tick' */
boolean_T even;                        /* '<S35>/Even_Tick' */

/* Exported block parameters */
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
  /* Output and update for function-call system: '<S6>/Timer ISR handler' */
  {
    uint32_T rtb_DataStoreRead;
    boolean_T rtb_AND_j;

    /* DataStoreRead: '<S35>/Data Store Read' */
    rtb_DataStoreRead = rtDWork.local_ticks_mem_IRQ;

    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S35>/Constant'
     *  DataStoreRead: '<S35>/Data Store Read'
     *  DataStoreRead: '<S35>/Data Store Read1'
     *  Sum: '<S35>/Sum'
     */
    if (rtB.Logic[0]) {
      local_ticks_interrupt = rtDWork.local_ticks_mem_IRQ + 1U;
    } else {
      local_ticks_interrupt = rtDWork.local_ticks_mem_IRQ;
    }

    /* End of Switch: '<S35>/Switch' */

    /* DataStoreWrite: '<S35>/Data Store Write' */
    rtDWork.local_ticks_mem_IRQ = local_ticks_interrupt;

    /* Chart: '<S35>/Even_Tick' */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Even_Tick */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Even_Tick */
    if (rtDWork.bitsForTID1.is_active_c1_HANcoder_E407_GTSy == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Even_Tick */
      rtDWork.bitsForTID1.is_active_c1_HANcoder_E407_GTSy = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Even_Tick */
      /* Transition: '<S38>:2' */
      rtDWork.bitsForTID1.is_c1_HANcoder_E407_GTSync = IN_Even_tick;

      /* Entry 'Even_tick': '<S38>:1' */
      if (local_ticks_interrupt - ((local_ticks_interrupt >> 1) << 1) == 0U) {
        rtDWork.active_flag_a = 1.0;
      }
    } else if (rtDWork.bitsForTID1.is_c1_HANcoder_E407_GTSync == IN_Even_tick) {
      /* During 'Even_tick': '<S38>:1' */
      if (rtDWork.active_flag_a == 1.0) {
        /* Transition: '<S38>:5' */
        rtDWork.bitsForTID1.is_c1_HANcoder_E407_GTSync = IN_Rise_edge;

        /* Entry 'Rise_edge': '<S38>:3' */
        /* Event: '<S38>:6' */
        rtDWork.rise_edge_at_evenEventCounter++;
      } else {
        if (local_ticks_interrupt - ((local_ticks_interrupt >> 1) << 1) == 0U) {
          rtDWork.active_flag_a = 1.0;
        }
      }
    } else {
      /* During 'Rise_edge': '<S38>:3' */
      /* Event: '<S38>:6' */
      rtDWork.rise_edge_at_evenEventCounter++;
    }

    if (rtDWork.rise_edge_at_evenEventCounter > 0U) {
      even = !even;
      rtDWork.rise_edge_at_evenEventCounter--;
    }

    /* End of Chart: '<S35>/Even_Tick' */

    /* Outputs for Triggered SubSystem: '<S35>/Reset Free Running Counter1' */
    ResetFreeRunningCounter1(even, &rtPrevZCSigState.ResetFreeRunningCounter1_i);

    /* End of Outputs for SubSystem: '<S35>/Reset Free Running Counter1' */

    /* Chart: '<S35>/Odd_Tick' */
    /* Gateway: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Odd_Tick */
    /* During: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Odd_Tick */
    if (rtDWork.bitsForTID1.is_active_c3_HANcoder_E407_GTSy == 0U) {
      /* Entry: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Odd_Tick */
      rtDWork.bitsForTID1.is_active_c3_HANcoder_E407_GTSy = 1U;

      /* Entry Internal: HANcoder STM32 Target - E407-STM32 algorithm/Global Ticks Increment/Timer ISR handler/Local time generator/Odd_Tick */
      /* Transition: '<S39>:2' */
      rtDWork.bitsForTID1.is_c3_HANcoder_E407_GTSync = IN_Odd_tick;

      /* Entry 'Odd_tick': '<S39>:1' */
      if (local_ticks_interrupt - ((local_ticks_interrupt >> 1) << 1) == 1U) {
        rtDWork.active_flag = 1.0;
      }
    } else if (rtDWork.bitsForTID1.is_c3_HANcoder_E407_GTSync == IN_Odd_tick) {
      /* During 'Odd_tick': '<S39>:1' */
      if (rtDWork.active_flag == 1.0) {
        /* Transition: '<S39>:5' */
        rtDWork.bitsForTID1.is_c3_HANcoder_E407_GTSync = IN_Rise_edge;

        /* Entry 'Rise_edge': '<S39>:3' */
        /* Event: '<S39>:6' */
        rtDWork.rise_edge_at_oddEventCounter++;
      } else {
        if (local_ticks_interrupt - ((local_ticks_interrupt >> 1) << 1) == 1U) {
          rtDWork.active_flag = 1.0;
        }
      }
    } else {
      /* During 'Rise_edge': '<S39>:3' */
      /* Event: '<S39>:6' */
      rtDWork.rise_edge_at_oddEventCounter++;
    }

    if (rtDWork.rise_edge_at_oddEventCounter > 0U) {
      odd = !odd;
      rtDWork.rise_edge_at_oddEventCounter--;
    }

    /* End of Chart: '<S35>/Odd_Tick' */

    /* Outputs for Triggered SubSystem: '<S35>/Reset Free Running Counter2' */
    ResetFreeRunningCounter1(odd, &rtPrevZCSigState.ResetFreeRunningCounter2);

    /* End of Outputs for SubSystem: '<S35>/Reset Free Running Counter2' */

    /* If: '<S36>/True if end of basic cycle' */
    if (rtb_DataStoreRead == 50000U) {
      /* Outputs for IfAction SubSystem: '<S36>/Reset values' incorporates:
       *  ActionPort: '<S42>/Action Port'
       */
      /* DataStoreRead: '<S42>/Data Store Read' */
      bc = rtDWork.basic_cycle_count;

      /* Sum: '<S42>/Add' incorporates:
       *  Constant: '<S42>/Constant2'
       *  DataStoreWrite: '<S42>/Data Store Write2'
       */
      rtDWork.basic_cycle_count = (uint8_T)((uint32_T)bc + ((uint8_T)1U));

      /* DataStoreWrite: '<S42>/Data Store Write' incorporates:
       *  Constant: '<S42>/Constant1'
       */
      rtDWork.local_ticks_mem_IRQ = 0U;

      /* If: '<S42>/If' incorporates:
       *  DataStoreWrite: '<S42>/Data Store Write2'
       */
      if (rtDWork.basic_cycle_count == 2) {
        /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem' incorporates:
         *  ActionPort: '<S43>/Action Port'
         */
        /* DataStoreWrite: '<S43>/Data Store Write1' incorporates:
         *  Constant: '<S43>/Constant'
         */
        rtDWork.basic_cycle_count = ((uint8_T)0U);

        /* End of Outputs for SubSystem: '<S42>/If Action Subsystem' */
      }

      /* End of If: '<S42>/If' */
      /* End of Outputs for SubSystem: '<S36>/Reset values' */
    }

    /* End of If: '<S36>/True if end of basic cycle' */

    /* If: '<S48>/If' incorporates:
     *  Constant: '<S37>/ '
     *  Constant: '<S37>/BC0'
     *  Constant: '<S49>/Constant'
     *  DataStoreRead: '<S48>/Data Store Read'
     *  DataStoreRead: '<S48>/Data Store Read1'
     *  Logic: '<S48>/AND'
     *  Logic: '<S48>/AND1'
     *  RelationalOperator: '<S48>/Equal'
     *  RelationalOperator: '<S48>/Equal1'
     *  RelationalOperator: '<S49>/Compare'
     */
    if ((rtb_DataStoreRead == 25000U) && (0U == rtDWork.basic_cycle_count) &&
        (rtDWork.Board_ID == 0.0)) {
      /* Outputs for IfAction SubSystem: '<S48>/If Action Subsystem' incorporates:
       *  ActionPort: '<S50>/Action Port'
       */
      /* Sum: '<S50>/Add' incorporates:
       *  Constant: '<S50>/Constant'
       *  DataStoreRead: '<S50>/Data Store Read'
       */
      tx_temp_counter = rtDWork.tx_temp_count + 1U;

      /* DataStoreWrite: '<S50>/Data Store Write' */
      rtDWork.tx_temp_count = tx_temp_counter;

      /* End of Outputs for SubSystem: '<S48>/If Action Subsystem' */
    }

    /* End of If: '<S48>/If' */

    /* Logic: '<S37>/AND' incorporates:
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  DataStoreRead: '<S37>/Data Store Read4'
     *  RelationalOperator: '<S44>/Compare'
     *  RelationalOperator: '<S45>/Compare'
     */
    rtb_AND_j = ((rtb_DataStoreRead == 0U) && (rtDWork.Board_ID == 1.0));
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

/*
 * Output and update for trigger system:
 *    '<S35>/Reset Free Running Counter1'
 *    '<S35>/Reset Free Running Counter2'
 */
void ResetFreeRunningCounter1(boolean_T rtu_Trigger,
  rtZCE_ResetFreeRunningCounter1 *localZCE)
{
  /* Outputs for Triggered SubSystem: '<S35>/Reset Free Running Counter1' incorporates:
   *  TriggerPort: '<S40>/Trigger'
   */
  if (rtu_Trigger && (localZCE->ResetFreeRunningCounter1_Trig_Z != POS_ZCSIG)) {
    /* M-S-Function: '<S40>/Level-2 M-file S-Function' */
    /* reset 16-bit free running counter value */
    TimeoutResetFreeRunningCounter(TIMEOUT_MODULE_TIM4);
  }

  localZCE->ResetFreeRunningCounter1_Trig_Z = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S35>/Reset Free Running Counter1' */
}

/* Model step function */
void HANcoder_E407_GTSync_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_Level2MfileSFunction;
  int32_T rowIdx;
  boolean_T rtb_GreaterThan;
  uint8_T rtb_Output;
  uint8_T rtb_FixPtSum1;
  uint8_T rtb_FixPtSum1_b;
  boolean_T rtb_SampleTimeCrowBar;

  /* RelationalOperator: '<S9>/GreaterThan' incorporates:
   *  Constant: '<S9>/Constant'
   *  DataStoreRead: '<S9>/Data Store Read'
   *  DataStoreRead: '<S9>/Data Store Read1'
   *  DataTypeConversion: '<S9>/Cast To Double'
   *  Sum: '<S9>/Sum'
   */
  rtb_GreaterThan = (rtDWork.local_ticks_mem_IRQ > rtDWork.LED_local_ticks +
                     10000.0);

  /* Switch: '<S9>/Switch' incorporates:
   *  DataStoreRead: '<S9>/Data Store Read'
   *  DataStoreRead: '<S9>/Data Store Read2'
   *  DataStoreRead: '<S9>/Data Store Read3'
   *  DataStoreWrite: '<S9>/Data Store Write1'
   *  DataTypeConversion: '<S9>/Cast To Double'
   *  Logic: '<S9>/NOT'
   *  Switch: '<S9>/Switch1'
   */
  if (rtb_GreaterThan) {
    LED_local_ticks_signal = rtDWork.local_ticks_mem_IRQ;
    rtDWork.LED_State = !rtDWork.LED_State;
  } else {
    LED_local_ticks_signal = rtDWork.LED_local_ticks;
  }

  /* End of Switch: '<S9>/Switch' */

  /* DataStoreWrite: '<S9>/Data Store Write' */
  rtDWork.LED_local_ticks = LED_local_ticks_signal;

  /* DataStoreRead: '<S9>/Data Store Read5' */
  rtB.DataStoreRead5 = rtDWork.LED_State;
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S13>/Output' */
    rtb_Output = rtDWork.Output_DSTATE;

    /* Sum: '<S15>/FixPt Sum1' incorporates:
     *  Constant: '<S15>/FixPt Constant'
     *  UnitDelay: '<S13>/Output'
     */
    rtb_FixPtSum1 = (uint8_T)((uint32_T)rtDWork.Output_DSTATE + ((uint8_T)1U));

    /* Switch: '<S16>/FixPt Switch' incorporates:
     *  Constant: '<S16>/Constant'
     */
    if (rtb_FixPtSum1 > ((uint8_T)1U)) {
      rtb_FixPtSum1 = ((uint8_T)0U);
    }

    /* End of Switch: '<S16>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* UnitDelay: '<S14>/Output' */
    rtB.Output = rtDWork.Output_DSTATE_k;

    /* Sum: '<S17>/FixPt Sum1' incorporates:
     *  Constant: '<S17>/FixPt Constant'
     */
    rtb_FixPtSum1_b = (uint8_T)((uint32_T)rtB.Output + ((uint8_T)1U));

    /* Switch: '<S18>/FixPt Switch' incorporates:
     *  Constant: '<S18>/Constant'
     */
    if (rtb_FixPtSum1_b > ((uint8_T)1U)) {
      rtb_FixPtSum1_b = ((uint8_T)0U);
    }

    /* End of Switch: '<S18>/FixPt Switch' */
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* M-S-Function: '<S51>/Level-2 M-file S-Function' */
    /* read from digital input */
    rtb_Level2MfileSFunction = DiginGet(DIGIN_PORTA_PIN0);

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Logic: '<S2>/Logical Operator'
     */
    if (HANtuneOverride || rtb_Level2MfileSFunction) {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtb_Output != 0);
    } else {
      /* DataTypeConversion: '<S2>/Data Type Conversion' */
      LedValue = (rtB.Output != 0);
    }

    /* End of Switch: '<S2>/Switch' */

    /* Outputs for Triggered SubSystem: '<S53>/J-K Flip-Flop' incorporates:
     *  TriggerPort: '<S54>/Trigger'
     */
    if ((!rtb_Level2MfileSFunction) && (rtPrevZCSigState.JKFlipFlop_Trig_ZCE !=
         ZERO_ZCSIG)) {
      /* CombinatorialLogic: '<S54>/Logic' incorporates:
       *  Memory: '<S53>/TmpLatchAtJ-K Flip-FlopInport1'
       *  Memory: '<S54>/Memory'
       */
      rowIdx = (int32_T)(((((uint32_T)rtDWork.Memory_PreviousInput << 1) +
                           rtDWork.TmpLatchAtJKFlipFlopInport1_Pre) << 1) +
                         rtDWork.TmpLatchAtJKFlipFlopInport2_Pre);
      rtB.Logic[0U] = rtConstP.Logic_table[(uint32_T)rowIdx];
      rtB.Logic[1U] = rtConstP.Logic_table[rowIdx + 8U];

      /* Update for Memory: '<S54>/Memory' */
      rtDWork.Memory_PreviousInput = rtB.Logic[0];
    }

    rtPrevZCSigState.JKFlipFlop_Trig_ZCE = rtb_Level2MfileSFunction;

    /* End of Outputs for SubSystem: '<S53>/J-K Flip-Flop' */
  }

  /* DigitalClock: '<S6>/Digital Clock' */
  simulation_time = (((rtM->Timing.clockTick0+rtM->Timing.clockTickH0*
                       4294967296.0)) * 0.01);

  /* DataStoreRead: '<S1>/Data Store Read' */
  id = rtDWork.Board_ID;

  /* Constant: '<S3>/SampleTimeCrowBar' */
  rtb_SampleTimeCrowBar = true;

  /* M-S-Function: '<S56>/Level-2 M-file S-Function' */
  /* read the current CPU load */
  SI_CPUload = OsGetCpuLoad();

  /* M-S-Function: '<S57>/Level-2 M-file S-Function' */
  /* read the free heap size */
  SI_FreeHeap = OsGetFreeHeapSize();

  /* M-S-Function: '<S58>/Level-2 M-file S-Function' */
  /* read the task's free stack size */
  SI_FreeStack = OsGetTaskFreeStackSize("AppCtrlTask");

  /* Update for M-S-Function: '<S55>/Level-2 M-file S-Function' */
  /* update digital output */
  if (rtB.DataStoreRead5 == 0) {
    DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_LOW);
  } else {
    DigoutSet(DIGOUT_PORTC_PIN13, DIGOUT_HIGH);
  }

  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* Update for UnitDelay: '<S13>/Output' */
    rtDWork.Output_DSTATE = rtb_FixPtSum1;

    /* Update for Memory: '<S53>/TmpLatchAtJ-K Flip-FlopInport1' incorporates:
     *  Constant: '<S8>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport1_Pre = true;

    /* Update for Memory: '<S53>/TmpLatchAtJ-K Flip-FlopInport2' incorporates:
     *  Constant: '<S8>/Constant'
     */
    rtDWork.TmpLatchAtJKFlipFlopInport2_Pre = true;
  }

  if (rtM->Timing.TaskCounters.TID[2] == 0) {
    /* Update for UnitDelay: '<S14>/Output' */
    rtDWork.Output_DSTATE_k = rtb_FixPtSum1_b;
  }

  /* Update for M-S-Function: '<S22>/Level-2 M-file S-Function' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   */
  /* schedule the next output compare event */
  TimeoutScheduleCompareEvent(TIMEOUT_TIM4_PIN_PD12, ((uint16_T)99U),
    (tTimeoutAction)((uint8_T)3U));

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
void HANcoder_E407_GTSync_initialize(void)
{
  {
    /* user code (Start function Header) */
    uint8_t canResult2;
    tCanFilter canFilter2;

    /* user code (Start function Body) */

    /* initialize the CAN driver. */
    CanInit(64, 8);

    /* initialize the CAN I/O module for channel 2 */
    CanIoInit(1);

    /* initialize the timer module for output compare. */
    TimeoutInitModule(TIMEOUT_MODULE_TIM4, 1000000);

    /* Start for M-S-Function: '<S55>/Level-2 M-file S-Function' */

    /* configure the digital output */
    DigoutConfigure(DIGOUT_PORTC_PIN13, DIGOUT_CFG_PUSHPULL);

    /* Start for M-S-Function: '<S51>/Level-2 M-file S-Function' */

    /* configure the digital input */
    DiginConfigure(DIGIN_PORTA_PIN0, DIGIN_CFG_PULLDOWN);

    /* Start for S-Function (sfcn_timeout_event_irq): '<S20>/S-Function' */

    /* register the callback handler */
    TimeoutRegisterCompareEventCallback(TIMEOUT_TIM4_PIN_PD12,
      TimeoutEventIRQ_TIMEOUT_TIM4_PIN_PD12);

    /* End of Start for S-Function (sfcn_timeout_event_irq): '<S20>/S-Function' */

    /* Start for S-Function (sfcn_timeout_init): '<S21>/S-Function' */

    /* register the free running counter overflow callback handler */
    TimeoutRegisterOverflowCallback(TIMEOUT_MODULE_TIM4,
      TimeoutOverflowIRQ_TIMEOUT_MODULE_TIM4);

    /* Start for M-S-Function: '<S3>/Level-2 M-file S-Function' */

    /* configure the stack size for the task that executes the model */
    AppCtrlTaskSetStackSize((configMINIMAL_STACK_SIZE*sizeof(portBASE_TYPE)) + 0);

    /* configure the sample time of the model in microseconds */
    AppCtrlTaskSetPeriod(10000);

    /* Run the ADC conversions ten times faster than the Simulink model */
    ADCconversionTaskSetPeriod(10000/10);

    /* Start for M-S-Function: '<S4>/Level-2 M-file S-Function' */

    /* store the CAN controller's filter configuration */
    canFilter2.mask = 0x00000000;
    canFilter2.code = 0x00000000;
    canFilter2.mode = CAN_FILTER_MODE_STDID_ONLY;

    /* connect and synchronize the CAN bus */
    canResult2 = CanConnect(1, 500000, &canFilter2);
    configASSERT(canResult2 == TRUE);

    /* Start for M-S-Function: '<S11>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacCanInit(1, 1637, 1638);
    MacInit();

    /* Start for M-S-Function: '<S12>/Level-2 M-file S-Function' */

    /* initialize the measurement and calibration interface */
    MacUsbComInit();
    MacInit();
  }

  rtPrevZCSigState.JKFlipFlop_Trig_ZCE = ZERO_ZCSIG;
  rtPrevZCSigState.ResetFreeRunningCounter2.ResetFreeRunningCounter1_Trig_Z =
    POS_ZCSIG;
  rtPrevZCSigState.ResetFreeRunningCounter1_i.ResetFreeRunningCounter1_Trig_Z =
    POS_ZCSIG;

  /* SystemInitialize for Triggered SubSystem: '<S53>/J-K Flip-Flop' */
  /* SystemInitialize for Outport: '<S54>/!Q' */
  rtB.Logic[1] = true;

  /* End of SystemInitialize for SubSystem: '<S53>/J-K Flip-Flop' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
