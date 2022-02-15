/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v2_data.c
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

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S6>/CAN Management' */
  {
    148.0,                             /* '<S90>/Sum10' */
    140.0,                             /* '<S90>/Sum8' */
    144.0,                             /* '<S90>/Sum9' */
    288.0,                             /* '<S90>/Sum18' */
    192.0,                             /* '<S90>/Sum13' */
    236.0,                             /* '<S90>/Sum14' */
    212.0,                             /* '<S90>/Sum17' */
    136.0,                             /* '<S90>/Sum7' */
    92.0,                              /* '<S90>/Sum5' */
    44.0,                              /* '<S90>/Sum1' */
    240.0,                             /* '<S90>/Sum15' */
    48.0,                              /* '<S90>/Sum2' */
    40.0,                              /* '<S90>/Sum4' */
    188.0,                             /* '<S90>/Sum12' */
    232.0,                             /* '<S90>/Sum11' */
    280.0,                             /* '<S90>/Sum16' */
    88.0,                              /* '<S90>/Sum3' */
    132.0,                             /* '<S90>/Sum6' */
    237.0,                             /* '<S343>/Plus1' */
    239.0,                             /* '<S343>/Plus' */
    1.0,                               /* '<S809>/Gain' */
    1.0,                               /* '<S809>/Gain1' */
    1.0,                               /* '<S809>/Gain2' */
    1.0,                               /* '<S809>/Gain3' */
    1.0,                               /* '<S809>/Gain4' */
    1.0,                               /* '<S809>/Gain5' */
    1.0,                               /* '<S809>/Gain6' */
    1.0,                               /* '<S809>/Gain7' */
    1.0,                               /* '<S808>/Gain' */
    1.0,                               /* '<S808>/Gain1' */
    1.0,                               /* '<S808>/Gain2' */
    1.0,                               /* '<S808>/Gain3' */
    1.0,                               /* '<S808>/Gain4' */
    1.0,                               /* '<S808>/Gain5' */
    1.0,                               /* '<S808>/Gain6' */
    1.0,                               /* '<S808>/Gain7' */
    1.0,                               /* '<S807>/Gain' */
    1.0,                               /* '<S807>/Gain1' */
    1.0,                               /* '<S807>/Gain2' */
    1.0,                               /* '<S807>/Gain3' */
    1.0,                               /* '<S807>/Gain4' */
    1.0,                               /* '<S807>/Gain5' */
    1.0,                               /* '<S807>/Gain6' */
    1.0,                               /* '<S807>/Gain7' */
    16.0,                              /* '<S787>/Power1' */
    0.0625,                            /* '<S787>/Power' */
    16.0,                              /* '<S788>/Power1' */
    0.0625,                            /* '<S788>/Power' */
    16.0,                              /* '<S789>/Power1' */
    0.0625,                            /* '<S789>/Power' */
    16.0,                              /* '<S790>/Power1' */
    0.0625,                            /* '<S790>/Power' */
    16.0,                              /* '<S767>/Power1' */
    0.0625,                            /* '<S767>/Power' */
    16.0,                              /* '<S768>/Power1' */
    0.0625,                            /* '<S768>/Power' */
    16.0,                              /* '<S769>/Power1' */
    0.0625,                            /* '<S769>/Power' */
    16.0,                              /* '<S770>/Power1' */
    0.0625,                            /* '<S770>/Power' */
    90.0,                              /* '<S341>/Plus' */
    64.0,                              /* '<S722>/Power1' */
    0.015625,                          /* '<S722>/Power' */
    64.0,                              /* '<S721>/Power1' */
    0.015625,                          /* '<S721>/Power' */
    8.0,                               /* '<S723>/Power1' */
    0.125,                             /* '<S723>/Power' */
    134.0,                             /* '<S340>/Plus' */
    32.0,                              /* '<S670>/Power1' */
    0.03125,                           /* '<S670>/Power' */
    32.0,                              /* '<S671>/Power1' */
    0.03125,                           /* '<S671>/Power' */
    32.0,                              /* '<S672>/Power1' */
    0.03125,                           /* '<S672>/Power' */
    32.0,                              /* '<S673>/Power1' */
    0.03125,                           /* '<S673>/Power' */
    0.05,                              /* '<S668>/Gain' */
    0.015625,                          /* '<S485>/Power' */
    64.0,                              /* '<S485>/Power1' */
    0.125,                             /* '<S486>/Power' */
    8.0,                               /* '<S486>/Power1' */
    0.015625,                          /* '<S487>/Power' */
    64.0,                              /* '<S487>/Power1' */
    0.03125,                           /* '<S455>/Power' */
    32.0,                              /* '<S455>/Power1' */
    0.03125,                           /* '<S456>/Power' */
    32.0,                              /* '<S456>/Power1' */
    0.03125,                           /* '<S457>/Power' */
    32.0,                              /* '<S457>/Power1' */
    0.03125,                           /* '<S458>/Power' */
    32.0,                              /* '<S458>/Power1' */
    0.0625,                            /* '<S425>/Power' */
    16.0,                              /* '<S425>/Power1' */
    0.0625,                            /* '<S426>/Power' */
    16.0,                              /* '<S426>/Power1' */
    0.0625,                            /* '<S427>/Power' */
    16.0,                              /* '<S427>/Power1' */
    0.0625,                            /* '<S428>/Power' */
    16.0,                              /* '<S428>/Power1' */
    200.0,                             /* '<S89>/Sum14' */
    204.0,                             /* '<S89>/Sum15' */
    212.0,                             /* '<S89>/Sum17' */
    208.0,                             /* '<S89>/Sum16' */
    44.0,                              /* '<S89>/Sum1' */
    48.0,                              /* '<S89>/Sum2' */
    52.0,                              /* '<S89>/Sum3' */
    100.0,                             /* '<S89>/Sum7' */
    96.0,                              /* '<S89>/Sum6' */
    148.0,                             /* '<S89>/Sum10' */
    144.0,                             /* '<S89>/Sum9' */
    196.0,                             /* '<S89>/Sum11' */
    192.0,                             /* '<S89>/Sum13' */
    40.0,                              /* '<S89>/Sum4' */
    188.0,                             /* '<S89>/Sum12' */
    92.0,                              /* '<S89>/Sum5' */
    140.0,                             /* '<S89>/Sum8' */
    16.0,                              /* '<S51>/Power1' */
    0.0625,                            /* '<S51>/Power' */
    16.0,                              /* '<S52>/Power1' */
    0.0625,                            /* '<S52>/Power' */
    8.0,                               /* '<S53>/Power1' */
    0.125,                             /* '<S53>/Power' */
    64.0,                              /* '<S54>/Power1' */
    0.015625,                          /* '<S54>/Power' */
    64.0,                              /* '<S55>/Power1' */
    0.015625,                          /* '<S55>/Power' */
    1.0,                               /* '<S29>/Add1' */
    21U,                               /* '<S479>/Cast8' */
    21U,                               /* '<S473>/Cast' */
    22U,                               /* '<S449>/Cast8' */
    22U,                               /* '<S443>/Cast' */
    0U,                                /* '<S48>/Cast' */
    0U,                                /* '<S203>/Cast6' */
    0U,                                /* '<S48>/Cast1' */
    0U,                                /* '<S29>/Cast' */
    0,                                 /* '<S204>/Cast' */
    0,                                 /* '<S203>/Cast' */
    1,                                 /* '<S203>/NOT' */

    /* Start of '<S90>/COMM Task - Sync bc 1' */
    {
      -4.0,                            /* '<S512>/Gain' */
      0.0625,                          /* '<S512>/Power' */
      16.0,                            /* '<S512>/Power1' */
      -3.0,                            /* '<S513>/Gain' */
      0.125,                           /* '<S513>/Power' */
      8.0,                             /* '<S513>/Power1' */
      -6.0,                            /* '<S514>/Gain' */
      0.015625,                        /* '<S514>/Power' */
      64.0,                            /* '<S514>/Power1' */
      -6.0,                            /* '<S515>/Gain' */
      0.015625,                        /* '<S515>/Power' */
      64.0,                            /* '<S515>/Power1' */
      -4.0,                            /* '<S516>/Gain' */
      0.0625,                          /* '<S516>/Power' */
      16.0,                            /* '<S516>/Power1' */
      1U,                              /* '<S506>/Cast8' */
      1U,                              /* '<S500>/Cast' */

      /* Start of '<S92>/Reception substasks' */
      {
        1U,                            /* '<S496>/Cast13' */
        1U,                            /* '<S496>/Cast3' */
        0U,                            /* '<S496>/Cast15' */
        0U,                            /* '<S496>/Cast6' */
        0,                             /* '<S496>/Cast14' */
        0                              /* '<S496>/Cast5' */
      }
      /* End of '<S92>/Reception substasks' */
    }
    ,

    /* End of '<S90>/COMM Task - Sync bc 1' */

    /* Start of '<S330>/Reception substasks' */
    {
      21U,                             /* '<S469>/Cast13' */
      21U,                             /* '<S469>/Cast3' */
      0U,                              /* '<S469>/Cast15' */
      0U,                              /* '<S469>/Cast6' */
      0,                               /* '<S469>/Cast14' */
      0                                /* '<S469>/Cast5' */
    }
    ,

    /* End of '<S330>/Reception substasks' */

    /* Start of '<S329>/Reception substasks' */
    {
      22U,                             /* '<S439>/Cast13' */
      22U,                             /* '<S439>/Cast3' */
      0U,                              /* '<S439>/Cast15' */
      0U,                              /* '<S439>/Cast6' */
      0,                               /* '<S439>/Cast14' */
      0                                /* '<S439>/Cast5' */
    }
    ,

    /* End of '<S329>/Reception substasks' */

    /* Start of '<S408>/Check msg transmission CAN2' */
    {
      25U                              /* '<S419>/Cast8' */
    }
    ,

    /* End of '<S408>/Check msg transmission CAN2' */

    /* Start of '<S408>/Check msg transmission CAN1' */
    {
      25U                              /* '<S413>/Cast' */
    }
    ,

    /* End of '<S408>/Check msg transmission CAN1' */

    /* Start of '<S328>/Reception substasks' */
    {
      25U,                             /* '<S409>/Cast13' */
      25U,                             /* '<S409>/Cast3' */
      0U,                              /* '<S409>/Cast15' */
      0U,                              /* '<S409>/Cast6' */
      0,                               /* '<S409>/Cast14' */
      0                                /* '<S409>/Cast5' */
    }
    ,

    /* End of '<S328>/Reception substasks' */

    /* Start of '<S327>/Transmission subtasks' */
    {
      -4.0,                            /* '<S395>/Gain' */
      0.0625,                          /* '<S395>/Power' */
      16.0,                            /* '<S395>/Power1' */
      -4.0,                            /* '<S396>/Gain' */
      0.0625,                          /* '<S396>/Power' */
      16.0,                            /* '<S396>/Power1' */
      -4.0,                            /* '<S397>/Gain' */
      0.0625,                          /* '<S397>/Power' */
      16.0,                            /* '<S397>/Power1' */
      -4.0,                            /* '<S398>/Gain' */
      0.0625,                          /* '<S398>/Power' */
      16.0,                            /* '<S398>/Power1' */

      /* Start of '<S347>/Check msg transmission CAN2' */
      {
        24U                            /* '<S389>/Cast8' */
      }
      ,

      /* End of '<S347>/Check msg transmission CAN2' */

      /* Start of '<S347>/Check msg transmission CAN1' */
      {
        24U                            /* '<S383>/Cast' */
      }
      /* End of '<S347>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S327>/Transmission subtasks' */

    /* Start of '<S327>/Reception substasks' */
    {
      24U,                             /* '<S379>/Cast13' */
      24U,                             /* '<S379>/Cast3' */
      0U,                              /* '<S379>/Cast15' */
      0U,                              /* '<S379>/Cast6' */
      0,                               /* '<S379>/Cast14' */
      0                                /* '<S379>/Cast5' */
    }
    ,

    /* End of '<S327>/Reception substasks' */

    /* Start of '<S326>/Transmission subtasks' */
    {
      -4.0,                            /* '<S364>/Gain' */
      0.0625,                          /* '<S364>/Power' */
      16.0,                            /* '<S364>/Power1' */
      -4.0,                            /* '<S365>/Gain' */
      0.0625,                          /* '<S365>/Power' */
      16.0,                            /* '<S365>/Power1' */
      -4.0,                            /* '<S366>/Gain' */
      0.0625,                          /* '<S366>/Power' */
      16.0,                            /* '<S366>/Power1' */
      -4.0,                            /* '<S367>/Gain' */
      0.0625,                          /* '<S367>/Power' */
      16.0,                            /* '<S367>/Power1' */

      /* Start of '<S347>/Check msg transmission CAN2' */
      {
        23U                            /* '<S358>/Cast8' */
      }
      ,

      /* End of '<S347>/Check msg transmission CAN2' */

      /* Start of '<S347>/Check msg transmission CAN1' */
      {
        23U                            /* '<S352>/Cast' */
      }
      /* End of '<S347>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S326>/Transmission subtasks' */

    /* Start of '<S326>/Reception substasks' */
    {
      23U,                             /* '<S348>/Cast13' */
      23U,                             /* '<S348>/Cast3' */
      0U,                              /* '<S348>/Cast15' */
      0U,                              /* '<S348>/Cast6' */
      0,                               /* '<S348>/Cast14' */
      0                                /* '<S348>/Cast5' */
    }
    ,

    /* End of '<S326>/Reception substasks' */

    /* Start of '<S95>/Transmission subtasks' */
    {
      13U,                             /* '<S190>/Cast8' */
      13U                              /* '<S184>/Cast' */
    }
    ,

    /* End of '<S95>/Transmission subtasks' */

    /* Start of '<S95>/Reception substasks' */
    {
      13U,                             /* '<S180>/Cast13' */
      13U,                             /* '<S180>/Cast3' */
      0U,                              /* '<S180>/Cast15' */
      0U,                              /* '<S180>/Cast6' */
      0,                               /* '<S180>/Cast14' */
      0                                /* '<S180>/Cast5' */
    }
    ,

    /* End of '<S95>/Reception substasks' */

    /* Start of '<S94>/Transmission subtasks' */
    {
      12U,                             /* '<S172>/Cast8' */
      12U                              /* '<S166>/Cast' */
    }
    ,

    /* End of '<S94>/Transmission subtasks' */

    /* Start of '<S94>/Reception substasks' */
    {
      12U,                             /* '<S162>/Cast13' */
      12U,                             /* '<S162>/Cast3' */
      0U,                              /* '<S162>/Cast15' */
      0U,                              /* '<S162>/Cast6' */
      0,                               /* '<S162>/Cast14' */
      0                                /* '<S162>/Cast5' */
    }
    ,

    /* End of '<S94>/Reception substasks' */

    /* Start of '<S93>/Transmission subtasks' */
    {
      11U,                             /* '<S154>/Cast8' */
      11U                              /* '<S148>/Cast' */
    }
    ,

    /* End of '<S93>/Transmission subtasks' */

    /* Start of '<S93>/Reception substasks' */
    {
      11U,                             /* '<S144>/Cast13' */
      11U,                             /* '<S144>/Cast3' */
      0U,                              /* '<S144>/Cast15' */
      0U,                              /* '<S144>/Cast6' */
      0,                               /* '<S144>/Cast14' */
      0                                /* '<S144>/Cast5' */
    }
    ,

    /* End of '<S93>/Reception substasks' */

    /* Start of '<S89>/COMM Task - Sync bc 0' */
    {
      -4.0,                            /* '<S127>/Gain' */
      0.0625,                          /* '<S127>/Power' */
      16.0,                            /* '<S127>/Power1' */
      -3.0,                            /* '<S128>/Gain' */
      0.125,                           /* '<S128>/Power' */
      8.0,                             /* '<S128>/Power1' */
      -6.0,                            /* '<S129>/Gain' */
      0.015625,                        /* '<S129>/Power' */
      64.0,                            /* '<S129>/Power1' */
      -6.0,                            /* '<S130>/Gain' */
      0.015625,                        /* '<S130>/Power' */
      64.0,                            /* '<S130>/Power1' */
      -4.0,                            /* '<S131>/Gain' */
      0.0625,                          /* '<S131>/Power' */
      16.0,                            /* '<S131>/Power1' */
      1U,                              /* '<S121>/Cast8' */
      1U,                              /* '<S115>/Cast' */

      /* Start of '<S92>/Reception substasks' */
      {
        1U,                            /* '<S111>/Cast13' */
        1U,                            /* '<S111>/Cast3' */
        0U,                            /* '<S111>/Cast15' */
        0U,                            /* '<S111>/Cast6' */
        0,                             /* '<S111>/Cast14' */
        0                              /* '<S111>/Cast5' */
      }
      /* End of '<S92>/Reception substasks' */
    }
    /* End of '<S89>/COMM Task - Sync bc 0' */
  }
  /* End of '<S6>/CAN Management' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S40>/Constant'
   */
  { 0.0, 40.0, 44.0, 48.0, 52.0, 92.0, 96.0, 100.0, 140.0, 144.0, 148.0, 188.0,
    192.0, 196.0, 200.0, 204.0, 208.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S40>/Constant4'
   */
  { 0.0, 40.0, 44.0, 48.0, 88.0, 92.0, 132.0, 136.0, 140.0, 144.0, 148.0, 188.0,
    192.0, 232.0, 236.0, 240.0, 280.0, 284.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S40>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S40>/Constant5'
   */
  { 0.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0,
    0.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S933>/Logic'
   */
  { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
