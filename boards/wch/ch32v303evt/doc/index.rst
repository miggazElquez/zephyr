.. zephyr:board:: ch32v303evt

Overview
********

The `WCH`_ CH3V303EVT hardware provides support for QingKe 32-bit RISC-V4F
processor and the following devices:

* CLOCK
* :abbr:`GPIO (General Purpose Input Output)`
* :abbr:`NVIC (Nested Vectored Interrupt Controller)`

The `WCH webpage on CH32V303`_ contains
the processor's information and the datasheet.

Hardware
********

The QingKe 32-bit RISC-V4F processor of the WCH CH32V303EVT is clocked by an external
32 MHz crystal or the internal 8 MHz oscillator and runs up to 144 MHz.
The CH32V208 SoC Features 8 USART, 4 GPIO ports, 3 SPI, 2 I2C, 2 ADC, RTC,
CAN, USB Host/Device, and 4 OPA.

Supported Features
==================

The ``ch32v303evt`` board target supports the following hardware features:

+-----------+------------+----------------------+
| Interface | Controller | Driver/Component     |
+===========+============+======================+
| CLOCK     | on-chip    | clock_control        |
+-----------+------------+----------------------+
| GPIO      | on-chip    | gpio                 |
+-----------+------------+----------------------+
| PINCTRL   | on-chip    | pinctrl              |
+-----------+------------+----------------------+
| TIMER     | on-chip    | timer                |
+-----------+------------+----------------------+
| UART      | on-chip    | uart                 |
+-----------+------------+----------------------+

Other hardware features have not been enabled yet for this board.

Connections and IOs
===================

LED
---

* LED0 = Green Mode LED
* LED1 = Blue Activity LED

Button
------
* SW0 = Mode Select Button (Active Low)
* SW1 = Bootstrap Button (Active High)

Programming and Debugging
*************************

Applications for the ``ch32v303evt`` board target can be built and flashed
in the usual way (see :ref:`build_an_application` and :ref:`application_run`
for more details); however, an external programme(like) is required since the board
does not have any built-in debug support.

Flashing
========

You can use ``minichlink`` to flash the board. Once ``minichlink`` has been set
up, build and flash applications as usual (see :ref:`build_an_application` and
:ref:`application_run` for more details).

Here is an example for the :zephyr:code-sample:`hello_world` application.

.. zephyr-app-commands::
   :zephyr-app: samples/hello_world
   :board: ch32v303evt
   :goals: build flash

Debugging
=========

This board can be debugged via OpenOCD, using .

References
**********

.. target-notes::

.. _WCH: http://www.wch-ic.com
.. _WCH webpage on CH32V303: https://www.wch-ic.com/products/CH32V303.html
