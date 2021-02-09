  __IO uint32_t CREL;         /*!< FDCAN Core Release register,                                     Address offset: 0x000 */
  __IO uint32_t ENDN;         /*!< FDCAN Endian register,                                           Address offset: 0x004 */
       uint32_t RESERVED1;    /*!< Reserved,                                                                        0x008 */
  __IO uint32_t DBTP;         /*!< FDCAN Data Bit Timing & Prescaler register,                      Address offset: 0x00C */
  __IO uint32_t TEST;         /*!< FDCAN Test register,                                             Address offset: 0x010 */
  __IO uint32_t RWD;          /*!< FDCAN RAM Watchdog register,                                     Address offset: 0x014 */
  __IO uint32_t CCCR;         /*!< FDCAN CC Control register,                                       Address offset: 0x018 */
  __IO uint32_t NBTP;         /*!< FDCAN Nominal Bit Timing & Prescaler register,                   Address offset: 0x01C */
  __IO uint32_t TSCC;         /*!< FDCAN Timestamp Counter Configuration register,                  Address offset: 0x020 */
  __IO uint32_t TSCV;         /*!< FDCAN Timestamp Counter Value register,                          Address offset: 0x024 */
  __IO uint32_t TOCC;         /*!< FDCAN Timeout Counter Configuration register,                    Address offset: 0x028 */
  __IO uint32_t TOCV;         /*!< FDCAN Timeout Counter Value register,                            Address offset: 0x02C */
       uint32_t RESERVED2[4]; /*!< Reserved,                                                                0x030 - 0x03C */
  __IO uint32_t ECR;          /*!< FDCAN Error Counter register,                                    Address offset: 0x040 */
  __IO uint32_t PSR;          /*!< FDCAN Protocol Status register,                                  Address offset: 0x044 */
  __IO uint32_t TDCR;         /*!< FDCAN Transmitter Delay Compensation register,                   Address offset: 0x048 */
       uint32_t RESERVED3;    /*!< Reserved,                                                                        0x04C */
  __IO uint32_t IR;           /*!< FDCAN Interrupt register,                                        Address offset: 0x050 */
  __IO uint32_t IE;           /*!< FDCAN Interrupt Enable register,                                 Address offset: 0x054 */
  __IO uint32_t ILS;          /*!< FDCAN Interrupt Line Select register,                            Address offset: 0x058 */
  __IO uint32_t ILE;          /*!< FDCAN Interrupt Line Enable register,                            Address offset: 0x05C */
       uint32_t RESERVED4[8]; /*!< Reserved,                                                                0x060 - 0x07C */
  __IO uint32_t RXGFC;        /*!< FDCAN Global Filter Configuration register,                      Address offset: 0x080 */
  __IO uint32_t XIDAM;        /*!< FDCAN Extended ID AND Mask register,                             Address offset: 0x084 */
  __IO uint32_t HPMS;         /*!< FDCAN High Priority Message Status register,                     Address offset: 0x088 */
       uint32_t RESERVED5;    /*!< Reserved,                                                                        0x08C */
  __IO uint32_t RXF0S;        /*!< FDCAN Rx FIFO 0 Status register,                                 Address offset: 0x090 */
  __IO uint32_t RXF0A;        /*!< FDCAN Rx FIFO 0 Acknowledge register,                            Address offset: 0x094 */
  __IO uint32_t RXF1S;        /*!< FDCAN Rx FIFO 1 Status register,                                 Address offset: 0x098 */
  __IO uint32_t RXF1A;        /*!< FDCAN Rx FIFO 1 Acknowledge register,                            Address offset: 0x09C */
       uint32_t RESERVED6[8]; /*!< Reserved,                                                                0x0A0 - 0x0BC */
  __IO uint32_t TXBC;         /*!< FDCAN Tx Buffer Configuration register,                          Address offset: 0x0C0 */
  __IO uint32_t TXFQS;        /*!< FDCAN Tx FIFO/Queue Status register,                             Address offset: 0x0C4 */
  __IO uint32_t TXBRP;        /*!< FDCAN Tx Buffer Request Pending register,                        Address offset: 0x0C8 */
  __IO uint32_t TXBAR;        /*!< FDCAN Tx Buffer Add Request register,                            Address offset: 0x0CC */
  __IO uint32_t TXBCR;        /*!< FDCAN Tx Buffer Cancellation Request register,                   Address offset: 0x0D0 */
  __IO uint32_t TXBTO;        /*!< FDCAN Tx Buffer Transmission Occurred register,                  Address offset: 0x0D4 */
  __IO uint32_t TXBCF;        /*!< FDCAN Tx Buffer Cancellation Finished register,                  Address offset: 0x0D8 */
  __IO uint32_t TXBTIE;       /*!< FDCAN Tx Buffer Transmission Interrupt Enable register,          Address offset: 0x0DC */
  __IO uint32_t TXBCIE;       /*!< FDCAN Tx Buffer Cancellation Finished Interrupt Enable register, Address offset: 0x0E0 */
  __IO uint32_t TXEFS;        /*!< FDCAN Tx Event FIFO Status register,                             Address offset: 0x0E4 */
  __IO uint32_t TXEFA;        /*!< FDCAN Tx Event FIFO Acknowledge register,                        Address offset: 0x0E8 */
