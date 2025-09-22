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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 0;
signed long int var_1_4 = -32;
signed long int var_1_5 = 2;
signed short int var_1_6 = -10;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 3470417420;
unsigned char var_1_10 = 0;
double var_1_12 = 25.6;
float var_1_14 = 5.4;
float var_1_15 = 127.5;
float var_1_16 = 3.5;
double var_1_17 = 64.4;
double var_1_18 = 5.5;
double var_1_19 = 256.5;
unsigned long int var_1_20 = 1;
unsigned long int var_1_21 = 0;
double var_1_22 = 0.0;
unsigned short int var_1_23 = 10;
double var_1_24 = 4.75;
double var_1_25 = 4.6;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed long int var_1_29 = -256;
unsigned char var_1_30 = 1;
signed long int var_1_31 = 8;
signed long int var_1_32 = -5;
signed long int var_1_33 = 5;
signed long int var_1_34 = 100;
signed long int var_1_35 = -8;
signed long int var_1_36 = 10;
float var_1_37 = 31.8;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned long int var_1_40 = 1;
signed long int var_1_41 = 500;
unsigned long int var_1_42 = 2882328056;
unsigned short int var_1_43 = 5;
unsigned short int var_1_44 = 2;
unsigned short int var_1_45 = 50;
unsigned short int var_1_46 = 4;
unsigned char var_1_47 = 0;
signed long int last_1_var_1_1 = 0;
signed long int last_1_var_1_5 = 2;
signed short int last_1_var_1_6 = -10;
double last_1_var_1_17 = 64.4;
unsigned long int last_1_var_1_21 = 0;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_4 = ((var_1_9) - (last_1_var_1_6));
                                          if ( (( (- (8u))) >= (stepLocal_4))) {
                                           var_1_8 = (
                                            (! (
    var_1_10
   ))
  );
 } else {
                                           var_1_8 = (
                                            ((
                                             ((
                                              ((
      last_1_var_1_17
     ) / (
      var_1_12
     ))
    ) >= (
     last_1_var_1_17
    ))
   ) || (
    var_1_10
   ))
  );
 }
                                if (var_1_8) {
                                 var_1_17 = (
                                  ((((( ((((15.45) < 0 ) ? -(15.45) : (15.45))) )) > (( (( var_1_18 ) + ( var_1_19 )) ))) ? (( ((((15.45) < 0 ) ? -(15.45) : (15.45))) )) : (( (( var_1_18 ) + ( var_1_19 )) ))))
  );
 }
                                           var_1_20 = (
  last_1_var_1_21
 );
                                var_1_21 = (
  var_1_20
 );
 signed long int stepLocal_1 = (- (last_1_var_1_1));
                                         if ( ((last_1_var_1_1) < (stepLocal_1))) {
                                          var_1_6 = (
                                           ((
    32
   ) - (
    last_1_var_1_5
   ))
  );
 }
                              if ( ((var_1_21) > ( (- (var_1_6))))) {
                               var_1_1 = (
                                ((((( var_1_6 )) > (( (( var_1_21 ) + ( var_1_4 )) ))) ? (( var_1_6 )) : (( (( var_1_21 ) + ( var_1_4 )) ))))
  );
 } else {
                               var_1_1 = (
                                ((((( (( 1 ) - ( var_1_21 )) )) < (( 16 ))) ? (( (( 1 ) - ( var_1_21 )) )) : (( 16 ))))
  );
 }
 unsigned long int stepLocal_3 = var_1_20;
 unsigned long int stepLocal_2 = var_1_20;
                               if ( ((var_1_21) > (stepLocal_3))) {
                                if ( ((var_1_4) <= (stepLocal_2))) {
                                 var_1_7 = (
                                  ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))
   );
  }
 }
 unsigned long int stepLocal_5 = var_1_9;
                                if ( (( ((var_1_12) * (var_1_17))) > (var_1_17))) {
                                 if ( ((stepLocal_5) < (var_1_21))) {
                                 var_1_14 = (
    var_1_15
   );
  } else {
                                  var_1_14 = (
    var_1_16
   );
  }
 } else {
                                 var_1_14 = (
   7.75f
  );
 }
 unsigned long int stepLocal_0 = var_1_7;
                              if ( ((var_1_6) < (stepLocal_0))) {
                               var_1_5 = (
                                ((
                                 ((
     var_1_7
    ) - (
     var_1_6
    ))
   ) + (
    var_1_4
   ))
  );
 }
             if ( (( ((32) / (var_1_23))) > (-500))) {
              var_1_22 = (
               (((((( var_1_24 ) - ( var_1_25 ))) < 0 ) ? -((( var_1_24 ) - ( var_1_25 ))) : ((( var_1_24 ) - ( var_1_25 )))))
  );
 }
             if (var_1_27) {
              if ( ((var_1_28) && ( ((1) >= (var_1_29))))) {
               if (var_1_28) {
                var_1_26 = (
     var_1_30
    );
   }
  }
 }
             if ( (( ((var_1_23) & (var_1_29))) >= (var_1_32))) {
              var_1_31 = (
               ((((((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) < 0 ) ? -(((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) : (((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))))))
  );
 } else {
              if (var_1_26) {
               var_1_31 = (
                ((((( (( var_1_23 ) - ( ((((( var_1_33 )) > (( var_1_34 ))) ? (( var_1_33 )) : (( var_1_34 )))) )) )) > (( ((((((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 ))))) < 0 ) ? -(((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 ))))) : (((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 ))))))) ))) ? (( (( var_1_23 ) - ( ((((( var_1_33 )) > (( var_1_34 ))) ? (( var_1_33 )) : (( var_1_34 )))) )) )) : (( ((((((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 ))))) < 0 ) ? -(((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 ))))) : (((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 ))))))) ))))
   );
  }
 }
             if ( ((var_1_34) > (var_1_33))) {
              var_1_37 = (
   var_1_25
  );
 }
             if ( (( ((var_1_23) & (-100))) <= (var_1_29))) {
              var_1_38 = (
               (! (
    var_1_39
   ))
  );
 }
             if ( (( (( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))) - ( ((var_1_23) + (var_1_41))))) <= (var_1_33))) {
              var_1_40 = (
               ((((( var_1_41 )) > (( ((((( var_1_33 )) < (( (( var_1_42 ) - ( var_1_34 )) ))) ? (( var_1_33 )) : (( (( var_1_42 ) - ( var_1_34 )) )))) ))) ? (( var_1_41 )) : (( ((((( var_1_33 )) < (( (( var_1_42 ) - ( var_1_34 )) ))) ? (( var_1_33 )) : (( (( var_1_42 ) - ( var_1_34 )) )))) ))))
  );
 }
             var_1_43 = (
              ((
   var_1_44
  ) + (
               ((
    var_1_45
   ) + (
    var_1_46
   ))
  ))
 );
             if ( ((var_1_37) <= (var_1_22))) {
              var_1_47 = (
               ((
                ((
     1
    ) >= (
     var_1_45
    ))
   ) && (
    var_1_39
   ))
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1073741823);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 2147483647);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65535);
 assume_abort_if_not(var_1_23 != 0);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 2147483646);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -2147483646);
 assume_abort_if_not(var_1_35 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483646);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 0);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1073741823);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 2147483647);
 assume_abort_if_not(var_1_42 <= 4294967294);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 32767);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 16384);
 var_1_46 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 16383);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_5 = var_1_5;
 last_1_var_1_6 = var_1_6;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 if ( ((var_1_21) > ( (- (var_1_6))))) {
 } else {
 }
 if ( ((var_1_6) < (var_1_7))) {
 }
 if ( ((last_1_var_1_1) < ( (- (last_1_var_1_1))))) {
 }
 if ( ((var_1_21) > (var_1_20))) {
  if ( ((var_1_4) <= (var_1_20))) {
  }
 }
 if ( (( (- (8u))) >= ( ((var_1_9) - (last_1_var_1_6))))) {
 } else {
 }
 if ( (( ((var_1_12) * (var_1_17))) > (var_1_17))) {
  if ( ((var_1_9) < (var_1_21))) {
  } else {
  }
 } else {
 }
 if (var_1_8) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                   ((
                                            ((
                                                 ((
          var_1_21
         ) > (
                                                  (- (
           var_1_6
          ))
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed long int) (
                                               ((((( var_1_6 )) > (( (( var_1_21 ) + ( var_1_4 )) ))) ? (( var_1_6 )) : (( (( var_1_21 ) + ( var_1_4 )) ))))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed long int) (
                                               ((((( (( 1 ) - ( var_1_21 )) )) < (( 16 ))) ? (( (( 1 ) - ( var_1_21 )) )) : (( 16 ))))
          ))
         ))
        ))
       ) && (
                                            ((
                                                  ((
          var_1_6
         ) < (
          var_1_7
         ))
        ) ? (
                                             ((
          var_1_5
         ) == (
                                              ((signed long int) (
                                               ((
                                                ((
             var_1_7
            ) - (
             var_1_6
            ))
           ) + (
            var_1_4
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
         last_1_var_1_1
        ) < (
                                                             (- (
          last_1_var_1_1
         ))
        ))
       ) ? (
                                                       ((
         var_1_6
        ) == (
                                                        ((signed short int) (
                                                         ((
           32
          ) - (
           last_1_var_1_5
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
        var_1_21
       ) > (
        var_1_20
       ))
      ) ? (
                                            ((
                                                  ((
         var_1_4
        ) <= (
         var_1_20
        ))
       ) ? (
                                             ((
         var_1_7
        ) == (
                                              ((unsigned long int) (
                                               ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))
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
                                                             (- (
        8u
       ))
      ) >= (
                                                             ((
        var_1_9
       ) - (
        last_1_var_1_6
       ))
      ))
     ) ? (
                                                      ((
       var_1_8
      ) == (
                                                       ((unsigned char) (
                                                        (! (
         var_1_10
        ))
       ))
      ))
     ) : (
                                                       ((
       var_1_8
      ) == (
                                                        ((unsigned char) (
                                                         ((
                                                         ((
                                                          ((
           last_1_var_1_17
          ) / (
           var_1_12
          ))
         ) >= (
          last_1_var_1_17
         ))
        ) || (
         var_1_10
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_12
      ) * (
       var_1_17
      ))
     ) > (
      var_1_17
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_9
      ) < (
       var_1_21
      ))
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((float) (
        var_1_15
       ))
      ))
     ) : (
                                           ((
       var_1_14
      ) == (
                                            ((float) (
        var_1_16
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_14
     ) == (
                                           ((float) (
       7.75f
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_8
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((double) (
                                           ((((( ((((15.45) < 0 ) ? -(15.45) : (15.45))) )) > (( (( var_1_18 ) + ( var_1_19 )) ))) ? (( ((((15.45) < 0 ) ? -(15.45) : (15.45))) )) : (( (( var_1_18 ) + ( var_1_19 )) ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                                  ((
   var_1_20
  ) == (
                                                   ((unsigned long int) (
    last_1_var_1_21
   ))
  ))
 ))
) && (
                                      ((
  var_1_21
 ) == (
                                       ((unsigned long int) (
   var_1_20
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
