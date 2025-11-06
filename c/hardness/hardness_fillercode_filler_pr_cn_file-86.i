// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch86Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 128;
unsigned short int var_1_4 = 32;
unsigned short int var_1_5 = 128;
unsigned char var_1_6 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 500;
signed char var_1_11 = 4;
signed char var_1_12 = 1;
signed long int var_1_13 = -1;
signed long int var_1_14 = 256;
unsigned char var_1_15 = 128;
unsigned char var_1_16 = 64;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 5;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 100;
signed char var_1_23 = 0;
unsigned char var_1_24 = 0;
signed char var_1_25 = 0;
signed char var_1_26 = 50;
signed char var_1_27 = -1;
signed char var_1_28 = 2;
signed char var_1_29 = 5;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 8;
unsigned char var_1_32 = 1;
signed char var_1_33 = -1;
unsigned char var_1_34 = 64;
double var_1_35 = 9.2;
double var_1_36 = 255.8;
signed char var_1_37 = -4;
signed short int var_1_38 = 256;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
double var_1_42 = 9.7;
double var_1_43 = 31.6;
double var_1_44 = 4.625;
double var_1_45 = 31.25;
unsigned char last_1_var_1_6 = 0;
signed long int last_1_var_1_14 = 256;
unsigned char last_1_var_1_19 = 0;
void initially(void) {
}
void step(void) {
                                         if (last_1_var_1_6) {
                                          var_1_6 = (
                                           ((
    last_1_var_1_19
   ) || (
    var_1_9
   ))
  );
 }
             var_1_35 = (
  var_1_36
 );
             if ( (( ((-100000) + (var_1_34))) >= (var_1_33))) {
              var_1_38 = (
               ((
    var_1_27
   ) - (
                ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
   ))
  );
 } else {
              var_1_38 = (
               ((
                ((((( var_1_34 )) > (( ((((( var_1_30 )) > (( var_1_25 ))) ? (( var_1_30 )) : (( var_1_25 )))) ))) ? (( var_1_34 )) : (( ((((( var_1_30 )) > (( var_1_25 ))) ? (( var_1_30 )) : (( var_1_25 )))) ))))
   ) - (
    var_1_28
   ))
  );
 }
 signed long int stepLocal_1 = ((var_1_11) - (var_1_12));
                                         if ( ((stepLocal_1) < ( (((((((((32)) < ((last_1_var_1_14))) ? ((32)) : ((last_1_var_1_14))))) < 0 ) ? -((((((32)) < ((last_1_var_1_14))) ? ((32)) : ((last_1_var_1_14))))) : ((((((32)) < ((last_1_var_1_14))) ? ((32)) : ((last_1_var_1_14)))))))))) {
                                          var_1_10 = (
   var_1_11
  );
 } else {
                                          if (last_1_var_1_6) {
                                           var_1_10 = (
    var_1_13
   );
  } else {
                                           var_1_10 = (
    var_1_4
   );
  }
 }
                                var_1_22 = (
  var_1_15
 );
             if ( (( ((var_1_30) % ( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))))) > (var_1_25))) {
              var_1_37 = (
   var_1_33
  );
 } else {
              var_1_37 = (
               ((((( var_1_26 )) > (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) ))) ? (( var_1_26 )) : (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) ))))
  );
 }
 unsigned long int stepLocal_5 = (( ((var_1_5) % (var_1_15))) + ( ((var_1_10) / (var_1_20))));
                                if ( ((stepLocal_5) != (var_1_10))) {
                                var_1_19 = (
   var_1_9
  );
 } else {
                                 if ( (! ( (! (var_1_6))))) {
                                  var_1_19 = (
                                   ((
                                    ((
      var_1_13
     ) >= (
      var_1_15
     ))
    ) || (
                                    ((
      var_1_9
     ) && (
      var_1_21
     ))
    ))
   );
  }
 }
             var_1_34 = (
  var_1_30
 );
 signed char stepLocal_2 = var_1_11;
                               if ( (! (var_1_19))) {
                                if ( (( (( ((var_1_15) - (var_1_12))) * ( (- (var_1_10))))) <= (stepLocal_2))) {
                                 var_1_14 = (
    var_1_11
   );
  }
 }
 signed long int stepLocal_0 = var_1_10;
                              if ( ((stepLocal_0) <= ( ((var_1_14) / (-2))))) {
                               var_1_1 = (
                                ((
    57907
   ) - (
                                 ((
     var_1_4
    ) + (
     var_1_5
    ))
   ))
  );
 } else {
                               var_1_1 = (
   1
  );
 }
 unsigned short int stepLocal_4 = var_1_1;
 signed long int stepLocal_3 = var_1_14;
                               if ( ((stepLocal_3) >= (var_1_12))) {
                                var_1_16 = (
                                 ((
    var_1_12
   ) + (
    var_1_17
   ))
  );
 } else {
                                if ( ((stepLocal_4) > (var_1_13))) {
                                 var_1_16 = (
                                  ((((( var_1_17 )) < (( var_1_12 ))) ? (( var_1_17 )) : (( var_1_12 ))))
   );
  } else {
                                 var_1_16 = (
    var_1_12
   );
  }
 }
            if (var_1_24) {
             var_1_23 = (
              ((((( (( var_1_25 ) - ( ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) )) )) < (( (( var_1_27 ) - ( var_1_28 )) ))) ? (( (( var_1_25 ) - ( ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) )) )) : (( (( var_1_27 ) - ( var_1_28 )) ))))
  );
 }
             if ( (( ((var_1_23) / ( ((var_1_30) + (var_1_31))))) >= (var_1_27))) {
              if ( ((var_1_24) || ( (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) > (var_1_30))))) {
               var_1_29 = (
                ((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) < 0 ) ? -(((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))))
   );
  }
 } else {
              var_1_29 = (
   var_1_33
  );
 }
             if (var_1_24) {
              var_1_39 = (
   var_1_40
  );
 } else {
              var_1_39 = (
               (! (
                ((
     var_1_32
    ) || (
                 ((
      var_1_40
     ) || (
      var_1_41
     ))
    ))
   ))
  );
 }
             if ( (! ( (( ((var_1_35) + (var_1_36))) >= (var_1_43))))) {
              var_1_42 = (
               ((
    var_1_44
   ) + (
    var_1_45
   ))
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 16384);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483647);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 127);
 assume_abort_if_not(var_1_15 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 4294967295);
 assume_abort_if_not(var_1_20 != 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 126);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -126);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -1);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 128);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
}
int property(void) {
 if ( ((var_1_10) <= ( ((var_1_14) / (-2))))) {
 } else {
 }
 if (last_1_var_1_6) {
 }
 if ( (( ((var_1_11) - (var_1_12))) < ( (((((((((32)) < ((last_1_var_1_14))) ? ((32)) : ((last_1_var_1_14))))) < 0 ) ? -((((((32)) < ((last_1_var_1_14))) ? ((32)) : ((last_1_var_1_14))))) : ((((((32)) < ((last_1_var_1_14))) ? ((32)) : ((last_1_var_1_14)))))))))) {
 } else {
  if (last_1_var_1_6) {
  } else {
  }
 }
 if ( (! (var_1_19))) {
  if ( (( (( ((var_1_15) - (var_1_12))) * ( (- (var_1_10))))) <= (var_1_11))) {
  }
 }
 if ( ((var_1_14) >= (var_1_12))) {
 } else {
  if ( ((var_1_1) > (var_1_13))) {
  } else {
  }
 }
 if ( (( (( ((var_1_5) % (var_1_15))) + ( ((var_1_10) / (var_1_20))))) != (var_1_10))) {
 } else {
  if ( (! ( (! (var_1_6))))) {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
                                               ((
        var_1_10
       ) <= (
                                                ((
         var_1_14
        ) / (
         -2
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned short int) (
                                             ((
          57907
         ) - (
                                              ((
           var_1_4
          ) + (
           var_1_5
          ))
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned short int) (
         1
        ))
       ))
      ))
     ) && (
                                                     ((
       last_1_var_1_6
      ) ? (
                                                      ((
        var_1_6
       ) == (
                                                       ((unsigned char) (
                                                        ((
          last_1_var_1_19
         ) || (
          var_1_9
         ))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                                    ((
                                                          ((
                                                           ((
        var_1_11
       ) - (
        var_1_12
       ))
      ) < (
                                                           ((((((((( 32 )) < (( last_1_var_1_14 ))) ? (( 32 )) : (( last_1_var_1_14 ))))) < 0 ) ? -(((((( 32 )) < (( last_1_var_1_14 ))) ? (( 32 )) : (( last_1_var_1_14 ))))) : (((((( 32 )) < (( last_1_var_1_14 ))) ? (( 32 )) : (( last_1_var_1_14 )))))))
      ))
     ) ? (
                                                     ((
       var_1_10
      ) == (
                                                      ((signed long int) (
        var_1_11
       ))
      ))
     ) : (
                                                     ((
       last_1_var_1_6
      ) ? (
                                                      ((
        var_1_10
       ) == (
                                                       ((signed long int) (
         var_1_13
        ))
       ))
      ) : (
                                                      ((
        var_1_10
       ) == (
                                                       ((signed long int) (
         var_1_4
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                (! (
      var_1_19
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((
                                                   ((
         var_1_15
        ) - (
         var_1_12
        ))
       ) * (
                                                   (- (
         var_1_10
        ))
       ))
      ) <= (
       var_1_11
      ))
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((signed long int) (
        var_1_11
       ))
      ))
     ) : (
      1
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_14
    ) >= (
     var_1_12
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_12
      ) + (
       var_1_17
      ))
     ))
    ))
   ) : (
                                         ((
                                                ((
      var_1_1
     ) > (
      var_1_13
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned char) (
                                            ((((( var_1_17 )) < (( var_1_12 ))) ? (( var_1_17 )) : (( var_1_12 ))))
      ))
     ))
    ) : (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned char) (
       var_1_12
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((
                                                ((
      var_1_5
     ) % (
      var_1_15
     ))
    ) + (
                                                ((
      var_1_10
     ) / (
      var_1_20
     ))
    ))
   ) != (
    var_1_10
   ))
  ) ? (
                                        ((
    var_1_19
   ) == (
                                         ((unsigned char) (
     var_1_9
    ))
   ))
  ) : (
                                        ((
                                               (! (
                                                (! (
      var_1_6
     ))
    ))
   ) ? (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned char) (
                                           ((
                                            ((
        var_1_13
       ) >= (
        var_1_15
       ))
      ) || (
                                            ((
        var_1_9
       ) && (
        var_1_21
       ))
      ))
     ))
    ))
   ) : (
    1
   ))
  ))
 ))
) && (
                                      ((
  var_1_22
 ) == (
                                       ((unsigned short int) (
   var_1_15
  ))
 ))
))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
