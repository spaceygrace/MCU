//Assignment I, Grace Stratton, w0401926
//EETD 4001, Troy Conrad, 29 January 2018

//INCLUDE
    #include <stdio.h>
    #include <xc.h>
   
//PRAGMA_CONFIGURATION_STATEMENTS (USE project enums (INTEGRAL CONSTANTS)  instead of #define for ON and OFF)
    #pragma config FOSC = INTIO67 //OSCILLATOR_SELECTION_BITS_RA6_RA7
    #pragma config WDTEN = OFF //WATCHDOG_TIMER_ENABLE_BIT
    #pragma config LVP = OFF //SINGLE-SUPPLY_ICSP_ENABLE_BIT 

//PROJECT_FILE_INCLUDES

//FUNCTION_PROTOTYPES
    #define RMS 0.7071
    #define R1 10200
    #define R2 6800 
    void setUSART();
    
//PROGRAM
    void main()
    {
        setUSART();
    
        //INFO
        printf("Assignment I: Variables and Operators");
        printf("\n");
        printf("Grace Stratton, w0401926");
        printf("\n");
        printf("EETD 4001: Microcontrollers & Programming, Troy Conrad");
        printf("\n");
        printf("29 Jan 2018");
        printf("\n");
        printf("\n");
        printf("\n");
                
     //AREA_CALCULATION
        int a;
        float l, w, res;
        l = 5;
        w = 18; 
        res = l * w;
        a = res;
            
        printf("The area of the rectangle is %d units squared.", a);
        printf("\n");
        printf("\n");
    
    //RMS_CALCULATION
        int b;
        float Vp, res;
        Vp = 150;
        res = 150/(RMS);
        b = res;
        
        printf("150 Vp is equal to %f VRMS.", b, res);
        printf("\n");
        
    
    //RESISTANCE_CALCULATION
    


	while(1);
}

//USART_OP_DISPLAY
    void setUSART() 
    {
        //TXSTA_REG
        BRGH = 1;
        //BAUDCTL_REG_8 _BIT_BAUD_GENERATOR 
        BRG16= 0;
        //BAUD_SELECTION_9600
        SPBRG = 51;
        //TXSTA_SET_ASYNCHRONOUS
        SYNC = 0;
        //ENABLE_USART_Tx
        TXEN = 1;
        //ENABLE_INTERRUPTS_GENERAL_AND_PERIPHERAL
        INTCON = 0x00;
        //RCSTA_SET_8_BIT_RECEPTION
        RX9 =0;
        //RCSTA_SERIAL_PORT_ENABLE
        SPEN =1;
        //RCSTA_CONTINUOUS_RECIEVE_DISABLE 
        CREN = 0;
    }