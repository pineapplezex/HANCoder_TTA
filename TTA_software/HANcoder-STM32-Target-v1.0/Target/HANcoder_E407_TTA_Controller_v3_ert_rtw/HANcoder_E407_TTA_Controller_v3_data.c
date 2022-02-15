/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: HANcoder_E407_TTA_Controller_v3_data.c
 *
 * Code generated for Simulink model 'HANcoder_E407_TTA_Controller_v3'.
 *
 * Model version                  : 1.153
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Feb 15 11:14:52 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HANcoder_E407_TTA_Controller_v3.h"
#include "HANcoder_E407_TTA_Controller_v3_private.h"

/* Invariant block signals (default storage) */
const ConstBlockIO rtConstB = {
  /* Start of '<S10>/TTA System' */
  {
    288.0,                             /* '<S1134>/Sum18' */
    284.0,                             /* '<S1134>/Sum17' */
    136.0,                             /* '<S1134>/Sum7' */
    44.0,                              /* '<S1134>/Sum1' */
    48.0,                              /* '<S1134>/Sum2' */
    40.0,                              /* '<S1134>/Sum4' */
    280.0,                             /* '<S1134>/Sum16' */
    132.0,                             /* '<S1134>/Sum6' */
    0.05,                              /* '<S1354>/Multiply' */
    16.0,                              /* '<S1356>/Power1' */
    0.0625,                            /* '<S1356>/Power' */
    16.0,                              /* '<S1357>/Power1' */
    0.0625,                            /* '<S1357>/Power' */
    16.0,                              /* '<S1358>/Power1' */
    0.0625,                            /* '<S1358>/Power' */
    16.0,                              /* '<S1359>/Power1' */
    0.0625,                            /* '<S1359>/Power' */
    0.0625,                            /* '<S1278>/Power' */
    16.0,                              /* '<S1278>/Power1' */
    0.0625,                            /* '<S1279>/Power' */
    16.0,                              /* '<S1279>/Power1' */
    0.0625,                            /* '<S1280>/Power' */
    16.0,                              /* '<S1280>/Power1' */
    0.0625,                            /* '<S1281>/Power' */
    16.0,                              /* '<S1281>/Power1' */
    144.0,                             /* '<S1133>/Sum17' */
    208.0,                             /* '<S1133>/Sum16' */
    44.0,                              /* '<S1133>/Sum1' */
    48.0,                              /* '<S1133>/Sum2' */
    100.0,                             /* '<S1133>/Sum7' */
    52.0,                              /* '<S1133>/Sum3' */
    96.0,                              /* '<S1133>/Sum6' */
    40.0,                              /* '<S1133>/Sum4' */
    136.0,                             /* '<S951>/Sum5' */
    288.0,                             /* '<S951>/Sum18' */
    92.0,                              /* '<S951>/Sum6' */
    44.0,                              /* '<S951>/Sum1' */
    48.0,                              /* '<S951>/Sum2' */
    40.0,                              /* '<S951>/Sum4' */
    88.0,                              /* '<S951>/Sum3' */
    0.015625,                          /* '<S1052>/Power' */
    64.0,                              /* '<S1052>/Power1' */
    0.125,                             /* '<S1053>/Power' */
    8.0,                               /* '<S1053>/Power1' */
    0.015625,                          /* '<S1054>/Power' */
    64.0,                              /* '<S1054>/Power1' */
    52.0,                              /* '<S950>/Sum17' */
    208.0,                             /* '<S950>/Sum16' */
    44.0,                              /* '<S950>/Sum1' */
    48.0,                              /* '<S950>/Sum2' */
    40.0,                              /* '<S950>/Sum4' */
    148.0,                             /* '<S189>/Sum10' */
    140.0,                             /* '<S189>/Sum8' */
    144.0,                             /* '<S189>/Sum9' */
    288.0,                             /* '<S189>/Sum18' */
    192.0,                             /* '<S189>/Sum13' */
    236.0,                             /* '<S189>/Sum14' */
    284.0,                             /* '<S189>/Sum17' */
    136.0,                             /* '<S189>/Sum7' */
    92.0,                              /* '<S189>/Sum5' */
    44.0,                              /* '<S189>/Sum1' */
    240.0,                             /* '<S189>/Sum15' */
    48.0,                              /* '<S189>/Sum2' */
    40.0,                              /* '<S189>/Sum4' */
    188.0,                             /* '<S189>/Sum12' */
    232.0,                             /* '<S189>/Sum11' */
    280.0,                             /* '<S189>/Sum16' */
    88.0,                              /* '<S189>/Sum3' */
    132.0,                             /* '<S189>/Sum6' */
    1.0,                               /* '<S903>/Gain' */
    1.0,                               /* '<S903>/Gain1' */
    1.0,                               /* '<S903>/Gain2' */
    1.0,                               /* '<S903>/Gain3' */
    1.0,                               /* '<S903>/Gain4' */
    1.0,                               /* '<S903>/Gain5' */
    1.0,                               /* '<S903>/Gain6' */
    1.0,                               /* '<S903>/Gain7' */
    1.0,                               /* '<S902>/Gain' */
    1.0,                               /* '<S902>/Gain1' */
    1.0,                               /* '<S902>/Gain2' */
    1.0,                               /* '<S902>/Gain3' */
    1.0,                               /* '<S902>/Gain4' */
    1.0,                               /* '<S902>/Gain5' */
    1.0,                               /* '<S902>/Gain6' */
    1.0,                               /* '<S902>/Gain7' */
    1.0,                               /* '<S901>/Gain' */
    1.0,                               /* '<S901>/Gain1' */
    1.0,                               /* '<S901>/Gain2' */
    1.0,                               /* '<S901>/Gain3' */
    1.0,                               /* '<S901>/Gain4' */
    1.0,                               /* '<S901>/Gain5' */
    1.0,                               /* '<S901>/Gain6' */
    1.0,                               /* '<S901>/Gain7' */
    16.0,                              /* '<S881>/Power1' */
    0.0625,                            /* '<S881>/Power' */
    16.0,                              /* '<S882>/Power1' */
    0.0625,                            /* '<S882>/Power' */
    16.0,                              /* '<S883>/Power1' */
    0.0625,                            /* '<S883>/Power' */
    16.0,                              /* '<S884>/Power1' */
    0.0625,                            /* '<S884>/Power' */
    16.0,                              /* '<S861>/Power1' */
    0.0625,                            /* '<S861>/Power' */
    16.0,                              /* '<S862>/Power1' */
    0.0625,                            /* '<S862>/Power' */
    16.0,                              /* '<S863>/Power1' */
    0.0625,                            /* '<S863>/Power' */
    16.0,                              /* '<S864>/Power1' */
    0.0625,                            /* '<S864>/Power' */
    64.0,                              /* '<S815>/Power1' */
    0.015625,                          /* '<S815>/Power' */
    64.0,                              /* '<S814>/Power1' */
    0.015625,                          /* '<S814>/Power' */
    8.0,                               /* '<S816>/Power1' */
    0.125,                             /* '<S816>/Power' */
    16.0,                              /* '<S763>/Power1' */
    0.0625,                            /* '<S763>/Power' */
    16.0,                              /* '<S764>/Power1' */
    0.0625,                            /* '<S764>/Power' */
    16.0,                              /* '<S765>/Power1' */
    0.0625,                            /* '<S765>/Power' */
    16.0,                              /* '<S766>/Power1' */
    0.0625,                            /* '<S766>/Power' */
    0.05,                              /* '<S761>/Gain' */
    0.015625,                          /* '<S585>/Power' */
    64.0,                              /* '<S585>/Power1' */
    0.125,                             /* '<S586>/Power' */
    8.0,                               /* '<S586>/Power1' */
    0.015625,                          /* '<S587>/Power' */
    64.0,                              /* '<S587>/Power1' */
    0.0625,                            /* '<S525>/Power' */
    16.0,                              /* '<S525>/Power1' */
    0.0625,                            /* '<S526>/Power' */
    16.0,                              /* '<S526>/Power1' */
    0.0625,                            /* '<S527>/Power' */
    16.0,                              /* '<S527>/Power1' */
    0.0625,                            /* '<S528>/Power' */
    16.0,                              /* '<S528>/Power1' */
    200.0,                             /* '<S188>/Sum14' */
    204.0,                             /* '<S188>/Sum15' */
    212.0,                             /* '<S188>/Sum17' */
    208.0,                             /* '<S188>/Sum16' */
    44.0,                              /* '<S188>/Sum1' */
    48.0,                              /* '<S188>/Sum2' */
    52.0,                              /* '<S188>/Sum3' */
    100.0,                             /* '<S188>/Sum7' */
    96.0,                              /* '<S188>/Sum6' */
    148.0,                             /* '<S188>/Sum10' */
    144.0,                             /* '<S188>/Sum9' */
    196.0,                             /* '<S188>/Sum11' */
    192.0,                             /* '<S188>/Sum13' */
    40.0,                              /* '<S188>/Sum4' */
    188.0,                             /* '<S188>/Sum12' */
    92.0,                              /* '<S188>/Sum5' */
    140.0,                             /* '<S188>/Sum8' */
    16.0,                              /* '<S143>/Power1' */
    0.0625,                            /* '<S143>/Power' */
    16.0,                              /* '<S144>/Power1' */
    0.0625,                            /* '<S144>/Power' */
    8.0,                               /* '<S145>/Power1' */
    0.125,                             /* '<S145>/Power' */
    64.0,                              /* '<S146>/Power1' */
    0.015625,                          /* '<S146>/Power' */
    64.0,                              /* '<S147>/Power1' */
    0.015625,                          /* '<S147>/Power' */
    1.0,                               /* '<S115>/Add1' */
    0U,                                /* '<S140>/Cast' */
    0U,                                /* '<S1248>/Cast' */
    0U,                                /* '<S1248>/Cast1' */
    0U,                                /* '<S1248>/Cast2' */
    0U,                                /* '<S1249>/Cast' */
    0U,                                /* '<S1249>/Cast1' */
    0U,                                /* '<S1249>/Cast2' */
    0U,                                /* '<S1250>/Cast' */
    0U,                                /* '<S1250>/Cast1' */
    0U,                                /* '<S1250>/Cast2' */
    0U,                                /* '<S1251>/Cast' */
    0U,                                /* '<S1251>/Cast1' */
    0U,                                /* '<S1251>/Cast2' */
    0U,                                /* '<S1095>/Cast6' */
    0U,                                /* '<S555>/Cast' */
    0U,                                /* '<S555>/Cast1' */
    0U,                                /* '<S555>/Cast2' */
    0U,                                /* '<S556>/Cast' */
    0U,                                /* '<S556>/Cast1' */
    0U,                                /* '<S556>/Cast2' */
    0U,                                /* '<S557>/Cast' */
    0U,                                /* '<S557>/Cast1' */
    0U,                                /* '<S557>/Cast2' */
    0U,                                /* '<S558>/Cast' */
    0U,                                /* '<S558>/Cast1' */
    0U,                                /* '<S558>/Cast2' */
    0U,                                /* '<S302>/Cast6' */
    0U,                                /* '<S140>/Cast1' */
    0U,                                /* '<S115>/Cast' */
    0,                                 /* '<S1095>/Cast' */
    1,                                 /* '<S1095>/NOT' */
    0,                                 /* '<S303>/Cast' */
    0,                                 /* '<S302>/Cast' */
    1,                                 /* '<S302>/NOT' */

    /* Start of '<S1134>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S191>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1308>/Gain' */
        0.0625,                        /* '<S1308>/Power' */
        16.0,                          /* '<S1308>/Power1' */
        -3.0,                          /* '<S1309>/Gain' */
        0.125,                         /* '<S1309>/Power' */
        8.0,                           /* '<S1309>/Power1' */
        -6.0,                          /* '<S1310>/Gain' */
        0.015625,                      /* '<S1310>/Power' */
        64.0,                          /* '<S1310>/Power1' */
        -6.0,                          /* '<S1311>/Gain' */
        0.015625,                      /* '<S1311>/Power' */
        64.0,                          /* '<S1311>/Power1' */
        -4.0,                          /* '<S1312>/Gain' */
        0.0625,                        /* '<S1312>/Power' */
        16.0,                          /* '<S1312>/Power1' */
        1U,                            /* '<S1302>/Cast8' */
        1U                             /* '<S1296>/Cast' */
      }
      ,

      /* End of '<S191>/Transmission subtasks' */

      /* Start of '<S191>/Reception substasks' */
      {
        1U,                            /* '<S1292>/Cast13' */
        1U,                            /* '<S1292>/Cast3' */
        0U,                            /* '<S1292>/Cast15' */
        0U,                            /* '<S1292>/Cast6' */
        0,                             /* '<S1292>/Cast14' */
        0                              /* '<S1292>/Cast5' */
      }
      /* End of '<S191>/Reception substasks' */
    }
    ,

    /* End of '<S1134>/COMM Task - Sync bc 1' */

    /* Start of '<S1261>/Check msg transmission CAN2' */
    {
      22U                              /* '<S1272>/Cast8' */
    }
    ,

    /* End of '<S1261>/Check msg transmission CAN2' */

    /* Start of '<S1261>/Check msg transmission CAN1' */
    {
      22U                              /* '<S1266>/Cast' */
    }
    ,

    /* End of '<S1261>/Check msg transmission CAN1' */

    /* Start of '<S1223>/Reception substasks' */
    {
      22U,                             /* '<S1262>/Cast13' */
      22U,                             /* '<S1262>/Cast3' */
      0U,                              /* '<S1262>/Cast15' */
      0U,                              /* '<S1262>/Cast6' */
      0,                               /* '<S1262>/Cast14' */
      0                                /* '<S1262>/Cast5' */
    }
    ,

    /* End of '<S1223>/Reception substasks' */

    /* Start of '<S1231>/Check msg transmission CAN2' */
    {
      25U                              /* '<S1242>/Cast8' */
    }
    ,

    /* End of '<S1231>/Check msg transmission CAN2' */

    /* Start of '<S1231>/Check msg transmission CAN1' */
    {
      25U                              /* '<S1236>/Cast' */
    }
    ,

    /* End of '<S1231>/Check msg transmission CAN1' */

    /* Start of '<S1222>/Reception substasks' */
    {
      25U,                             /* '<S1232>/Cast13' */
      25U,                             /* '<S1232>/Cast3' */
      0U,                              /* '<S1232>/Cast15' */
      0U,                              /* '<S1232>/Cast6' */
      0,                               /* '<S1232>/Cast14' */
      0                                /* '<S1232>/Cast5' */
    }
    ,

    /* End of '<S1222>/Reception substasks' */

    /* Start of '<S1136>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S1177>/Cast6' */
      0,                               /* '<S1177>/Cast' */
      1                                /* '<S1177>/NOT' */
    }
    ,

    /* End of '<S1136>/RESET Board - Return to initialization' */

    /* Start of '<S1133>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S191>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1161>/Gain' */
        0.0625,                        /* '<S1161>/Power' */
        16.0,                          /* '<S1161>/Power1' */
        -3.0,                          /* '<S1162>/Gain' */
        0.125,                         /* '<S1162>/Power' */
        8.0,                           /* '<S1162>/Power1' */
        -6.0,                          /* '<S1163>/Gain' */
        0.015625,                      /* '<S1163>/Power' */
        64.0,                          /* '<S1163>/Power1' */
        -6.0,                          /* '<S1164>/Gain' */
        0.015625,                      /* '<S1164>/Power' */
        64.0,                          /* '<S1164>/Power1' */
        -4.0,                          /* '<S1165>/Gain' */
        0.0625,                        /* '<S1165>/Power' */
        16.0,                          /* '<S1165>/Power1' */
        1U,                            /* '<S1155>/Cast8' */
        1U                             /* '<S1149>/Cast' */
      }
      ,

      /* End of '<S191>/Transmission subtasks' */

      /* Start of '<S191>/Reception substasks' */
      {
        1U,                            /* '<S1145>/Cast13' */
        1U,                            /* '<S1145>/Cast3' */
        0U,                            /* '<S1145>/Cast15' */
        0U,                            /* '<S1145>/Cast6' */
        0,                             /* '<S1145>/Cast14' */
        0                              /* '<S1145>/Cast5' */
      }
      /* End of '<S191>/Reception substasks' */
    }
    ,

    /* End of '<S1133>/COMM Task - Sync bc 0' */

    /* Start of '<S951>/COMM Task - Sync bc 1' */
    {
      /* Start of '<S191>/Transmission subtasks' */
      {
        -4.0,                          /* '<S1079>/Gain' */
        0.0625,                        /* '<S1079>/Power' */
        16.0,                          /* '<S1079>/Power1' */
        -3.0,                          /* '<S1080>/Gain' */
        0.125,                         /* '<S1080>/Power' */
        8.0,                           /* '<S1080>/Power1' */
        -6.0,                          /* '<S1081>/Gain' */
        0.015625,                      /* '<S1081>/Power' */
        64.0,                          /* '<S1081>/Power1' */
        -6.0,                          /* '<S1082>/Gain' */
        0.015625,                      /* '<S1082>/Power' */
        64.0,                          /* '<S1082>/Power1' */
        -4.0,                          /* '<S1083>/Gain' */
        0.0625,                        /* '<S1083>/Power' */
        16.0,                          /* '<S1083>/Power1' */
        1U,                            /* '<S1073>/Cast8' */
        1U                             /* '<S1067>/Cast' */
      }
      ,

      /* End of '<S191>/Transmission subtasks' */

      /* Start of '<S191>/Reception substasks' */
      {
        1U,                            /* '<S1063>/Cast13' */
        1U,                            /* '<S1063>/Cast3' */
        0U,                            /* '<S1063>/Cast15' */
        0U,                            /* '<S1063>/Cast6' */
        0,                             /* '<S1063>/Cast14' */
        0                              /* '<S1063>/Cast5' */
      }
      /* End of '<S191>/Reception substasks' */
    }
    ,

    /* End of '<S951>/COMM Task - Sync bc 1' */

    /* Start of '<S1035>/Check msg transmission CAN2' */
    {
      21U                              /* '<S1046>/Cast8' */
    }
    ,

    /* End of '<S1035>/Check msg transmission CAN2' */

    /* Start of '<S1035>/Check msg transmission CAN1' */
    {
      21U                              /* '<S1040>/Cast' */
    }
    ,

    /* End of '<S1035>/Check msg transmission CAN1' */

    /* Start of '<S1027>/Reception substasks' */
    {
      21U,                             /* '<S1036>/Cast13' */
      21U,                             /* '<S1036>/Cast3' */
      0U,                              /* '<S1036>/Cast15' */
      0U,                              /* '<S1036>/Cast6' */
      0,                               /* '<S1036>/Cast14' */
      0                                /* '<S1036>/Cast5' */
    }
    ,

    /* End of '<S1027>/Reception substasks' */

    /* Start of '<S954>/RESET Board - Return to initialization' */
    {
      0U,                              /* '<S992>/Cast6' */
      0,                               /* '<S992>/Cast' */
      1                                /* '<S992>/NOT' */
    }
    ,

    /* End of '<S954>/RESET Board - Return to initialization' */

    /* Start of '<S950>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S191>/Transmission subtasks' */
      {
        -4.0,                          /* '<S976>/Gain' */
        0.0625,                        /* '<S976>/Power' */
        16.0,                          /* '<S976>/Power1' */
        -3.0,                          /* '<S977>/Gain' */
        0.125,                         /* '<S977>/Power' */
        8.0,                           /* '<S977>/Power1' */
        -6.0,                          /* '<S978>/Gain' */
        0.015625,                      /* '<S978>/Power' */
        64.0,                          /* '<S978>/Power1' */
        -6.0,                          /* '<S979>/Gain' */
        0.015625,                      /* '<S979>/Power' */
        64.0,                          /* '<S979>/Power1' */
        -4.0,                          /* '<S980>/Gain' */
        0.0625,                        /* '<S980>/Power' */
        16.0,                          /* '<S980>/Power1' */
        1U,                            /* '<S970>/Cast8' */
        1U                             /* '<S964>/Cast' */
      }
      ,

      /* End of '<S191>/Transmission subtasks' */

      /* Start of '<S191>/Reception substasks' */
      {
        1U,                            /* '<S960>/Cast13' */
        1U,                            /* '<S960>/Cast3' */
        0U,                            /* '<S960>/Cast15' */
        0U,                            /* '<S960>/Cast6' */
        0,                             /* '<S960>/Cast14' */
        0                              /* '<S960>/Cast5' */
      }
      /* End of '<S191>/Reception substasks' */
    }
    ,

    /* End of '<S950>/COMM Task - Sync bc 0' */

    /* Start of '<S432>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S612>/Gain' */
      0.0625,                          /* '<S612>/Power' */
      16.0,                            /* '<S612>/Power1' */
      -3.0,                            /* '<S613>/Gain' */
      0.125,                           /* '<S613>/Power' */
      8.0,                             /* '<S613>/Power1' */
      -6.0,                            /* '<S614>/Gain' */
      0.015625,                        /* '<S614>/Power' */
      64.0,                            /* '<S614>/Power1' */
      -6.0,                            /* '<S615>/Gain' */
      0.015625,                        /* '<S615>/Power' */
      64.0,                            /* '<S615>/Power1' */
      -4.0,                            /* '<S616>/Gain' */
      0.0625,                          /* '<S616>/Power' */
      16.0,                            /* '<S616>/Power1' */
      1U,                              /* '<S606>/Cast8' */
      1U                               /* '<S600>/Cast' */
    }
    ,

    /* End of '<S432>/Transmission subtasks1' */

    /* Start of '<S432>/Reception substasks' */
    {
      1U,                              /* '<S596>/Cast13' */
      1U,                              /* '<S596>/Cast3' */
      0U,                              /* '<S596>/Cast15' */
      0U,                              /* '<S596>/Cast6' */
      0,                               /* '<S596>/Cast14' */
      0                                /* '<S596>/Cast5' */
    }
    ,

    /* End of '<S432>/Reception substasks' */

    /* Start of '<S568>/Check msg transmission CAN2' */
    {
      21U                              /* '<S579>/Cast8' */
    }
    ,

    /* End of '<S568>/Check msg transmission CAN2' */

    /* Start of '<S568>/Check msg transmission CAN1' */
    {
      21U                              /* '<S573>/Cast' */
    }
    ,

    /* End of '<S568>/Check msg transmission CAN1' */

    /* Start of '<S431>/Reception substasks' */
    {
      21U,                             /* '<S569>/Cast13' */
      21U,                             /* '<S569>/Cast3' */
      0U,                              /* '<S569>/Cast15' */
      0U,                              /* '<S569>/Cast6' */
      0,                               /* '<S569>/Cast14' */
      0                                /* '<S569>/Cast5' */
    }
    ,

    /* End of '<S431>/Reception substasks' */

    /* Start of '<S538>/Check msg transmission CAN2' */
    {
      22U                              /* '<S549>/Cast8' */
    }
    ,

    /* End of '<S538>/Check msg transmission CAN2' */

    /* Start of '<S538>/Check msg transmission CAN1' */
    {
      22U                              /* '<S543>/Cast' */
    }
    ,

    /* End of '<S538>/Check msg transmission CAN1' */

    /* Start of '<S430>/Reception substasks' */
    {
      22U,                             /* '<S539>/Cast13' */
      22U,                             /* '<S539>/Cast3' */
      0U,                              /* '<S539>/Cast15' */
      0U,                              /* '<S539>/Cast6' */
      0,                               /* '<S539>/Cast14' */
      0                                /* '<S539>/Cast5' */
    }
    ,

    /* End of '<S430>/Reception substasks' */

    /* Start of '<S508>/Check msg transmission CAN2' */
    {
      25U                              /* '<S519>/Cast8' */
    }
    ,

    /* End of '<S508>/Check msg transmission CAN2' */

    /* Start of '<S508>/Check msg transmission CAN1' */
    {
      25U                              /* '<S513>/Cast' */
    }
    ,

    /* End of '<S508>/Check msg transmission CAN1' */

    /* Start of '<S429>/Reception substasks' */
    {
      25U,                             /* '<S509>/Cast13' */
      25U,                             /* '<S509>/Cast3' */
      0U,                              /* '<S509>/Cast15' */
      0U,                              /* '<S509>/Cast6' */
      0,                               /* '<S509>/Cast14' */
      0                                /* '<S509>/Cast5' */
    }
    ,

    /* End of '<S429>/Reception substasks' */

    /* Start of '<S428>/Transmission subtasks' */
    {
      -4.0,                            /* '<S495>/Gain' */
      0.0625,                          /* '<S495>/Power' */
      16.0,                            /* '<S495>/Power1' */
      -4.0,                            /* '<S496>/Gain' */
      0.0625,                          /* '<S496>/Power' */
      16.0,                            /* '<S496>/Power1' */
      -4.0,                            /* '<S497>/Gain' */
      0.0625,                          /* '<S497>/Power' */
      16.0,                            /* '<S497>/Power1' */
      -4.0,                            /* '<S498>/Gain' */
      0.0625,                          /* '<S498>/Power' */
      16.0,                            /* '<S498>/Power1' */

      /* Start of '<S447>/Check msg transmission CAN2' */
      {
        24U                            /* '<S489>/Cast8' */
      }
      ,

      /* End of '<S447>/Check msg transmission CAN2' */

      /* Start of '<S447>/Check msg transmission CAN1' */
      {
        24U                            /* '<S483>/Cast' */
      }
      /* End of '<S447>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S428>/Transmission subtasks' */

    /* Start of '<S428>/Reception substasks' */
    {
      24U,                             /* '<S479>/Cast13' */
      24U,                             /* '<S479>/Cast3' */
      0U,                              /* '<S479>/Cast15' */
      0U,                              /* '<S479>/Cast6' */
      0,                               /* '<S479>/Cast14' */
      0                                /* '<S479>/Cast5' */
    }
    ,

    /* End of '<S428>/Reception substasks' */

    /* Start of '<S427>/Transmission subtasks1' */
    {
      -4.0,                            /* '<S464>/Gain' */
      0.0625,                          /* '<S464>/Power' */
      16.0,                            /* '<S464>/Power1' */
      -4.0,                            /* '<S465>/Gain' */
      0.0625,                          /* '<S465>/Power' */
      16.0,                            /* '<S465>/Power1' */
      -4.0,                            /* '<S466>/Gain' */
      0.0625,                          /* '<S466>/Power' */
      16.0,                            /* '<S466>/Power1' */
      -4.0,                            /* '<S467>/Gain' */
      0.0625,                          /* '<S467>/Power' */
      16.0,                            /* '<S467>/Power1' */

      /* Start of '<S447>/Check msg transmission CAN2' */
      {
        23U                            /* '<S458>/Cast8' */
      }
      ,

      /* End of '<S447>/Check msg transmission CAN2' */

      /* Start of '<S447>/Check msg transmission CAN1' */
      {
        23U                            /* '<S452>/Cast' */
      }
      /* End of '<S447>/Check msg transmission CAN1' */
    }
    ,

    /* End of '<S427>/Transmission subtasks1' */

    /* Start of '<S427>/Reception substasks' */
    {
      23U,                             /* '<S448>/Cast13' */
      23U,                             /* '<S448>/Cast3' */
      0U,                              /* '<S448>/Cast15' */
      0U,                              /* '<S448>/Cast6' */
      0,                               /* '<S448>/Cast14' */
      0                                /* '<S448>/Cast5' */
    }
    ,

    /* End of '<S427>/Reception substasks' */

    /* Start of '<S194>/Transmission subtasks' */
    {
      13U,                             /* '<S289>/Cast8' */
      13U                              /* '<S283>/Cast' */
    }
    ,

    /* End of '<S194>/Transmission subtasks' */

    /* Start of '<S194>/Reception substasks' */
    {
      13U,                             /* '<S279>/Cast13' */
      13U,                             /* '<S279>/Cast3' */
      0U,                              /* '<S279>/Cast15' */
      0U,                              /* '<S279>/Cast6' */
      0,                               /* '<S279>/Cast14' */
      0                                /* '<S279>/Cast5' */
    }
    ,

    /* End of '<S194>/Reception substasks' */

    /* Start of '<S193>/Transmission subtasks' */
    {
      12U,                             /* '<S271>/Cast8' */
      12U                              /* '<S265>/Cast' */
    }
    ,

    /* End of '<S193>/Transmission subtasks' */

    /* Start of '<S193>/Reception substasks' */
    {
      12U,                             /* '<S261>/Cast13' */
      12U,                             /* '<S261>/Cast3' */
      0U,                              /* '<S261>/Cast15' */
      0U,                              /* '<S261>/Cast6' */
      0,                               /* '<S261>/Cast14' */
      0                                /* '<S261>/Cast5' */
    }
    ,

    /* End of '<S193>/Reception substasks' */

    /* Start of '<S192>/Transmission subtasks' */
    {
      11U,                             /* '<S253>/Cast8' */
      11U                              /* '<S247>/Cast' */
    }
    ,

    /* End of '<S192>/Transmission subtasks' */

    /* Start of '<S192>/Reception substasks' */
    {
      11U,                             /* '<S243>/Cast13' */
      11U,                             /* '<S243>/Cast3' */
      0U,                              /* '<S243>/Cast15' */
      0U,                              /* '<S243>/Cast6' */
      0,                               /* '<S243>/Cast14' */
      0                                /* '<S243>/Cast5' */
    }
    ,

    /* End of '<S192>/Reception substasks' */

    /* Start of '<S188>/COMM Task - Sync bc 0' */
    {
      /* Start of '<S191>/Transmission subtasks' */
      {
        -4.0,                          /* '<S226>/Gain' */
        0.0625,                        /* '<S226>/Power' */
        16.0,                          /* '<S226>/Power1' */
        -3.0,                          /* '<S227>/Gain' */
        0.125,                         /* '<S227>/Power' */
        8.0,                           /* '<S227>/Power1' */
        -6.0,                          /* '<S228>/Gain' */
        0.015625,                      /* '<S228>/Power' */
        64.0,                          /* '<S228>/Power1' */
        -6.0,                          /* '<S229>/Gain' */
        0.015625,                      /* '<S229>/Power' */
        64.0,                          /* '<S229>/Power1' */
        -4.0,                          /* '<S230>/Gain' */
        0.0625,                        /* '<S230>/Power' */
        16.0,                          /* '<S230>/Power1' */
        1U,                            /* '<S220>/Cast8' */
        1U                             /* '<S214>/Cast' */
      }
      ,

      /* End of '<S191>/Transmission subtasks' */

      /* Start of '<S191>/Reception substasks' */
      {
        1U,                            /* '<S210>/Cast13' */
        1U,                            /* '<S210>/Cast3' */
        0U,                            /* '<S210>/Cast15' */
        0U,                            /* '<S210>/Cast6' */
        0,                             /* '<S210>/Cast14' */
        0                              /* '<S210>/Cast5' */
      }
      /* End of '<S191>/Reception substasks' */
    }
    /* End of '<S188>/COMM Task - Sync bc 0' */
  }
  /* End of '<S10>/TTA System' */
};

/* Constant parameters (default storage) */
const ConstParam rtConstP = {
  /* Expression: TM_Data_bc0
   * Referenced by: '<S127>/Constant'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 50.0, 52.0, 92.0, 96.0, 100.0, 140.0, 142.0,
    144.0, 148.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0 },

  /* Expression: TM_Data_bc1
   * Referenced by: '<S127>/Constant4'
   */
  { 0.0, 40.0, 44.0, 46.0, 48.0, 88.0, 90.0, 92.0, 132.0, 134.0, 136.0, 140.0,
    144.0, 148.0, 188.0, 192.0, 232.0, 236.0, 237.0, 239.0, 240.0, 280.0, 282.0,
    284.0, 286.0 },

  /* Expression: TM_Type_bc0
   * Referenced by: '<S127>/Constant1'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: TM_Type_bc1
   * Referenced by: '<S127>/Constant5'
   */
  { 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S21>/Logic'
   */
  { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
