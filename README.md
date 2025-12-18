===== Sistema de Gestión de Minimarket (C++) =====

Descripción del problema

Un minimarket necesita un sistema sencillo que permita gestionar sus productos, controlar el stock y realizar ventas de manera ordenada.
El manejo desorganizado del inventario puede generar errores como falta de productos sin darse cuenta, precios incorrectos o pérdidas de información importante.

Solución propuesta

Se desarrolló un sistema de gestión de minimarket en C++, aplicando el paradigma de Programación Orientada a Objetos (POO).

El sistema permite:
- Registrar productos
- Gestionar el inventario
- Buscar productos por ID
- Listar productos disponibles
- Integrar ventas, clientes y empleados

Requisitos del sistema

- Lenguaje: C++
- Estándar: C++11
- Compilador recomendado:  
  - Embarcadero Dev C++
- Sistema operativo:
  - Windows

Cómo compilar y ejecutar

- PASO 1: Compilar correctamente (Asegurarse de compilar TODOS los archivos del proyecto).

- PASO 2: Ejecutar el proyecto.

- PASO 3: Agregar clientes (OBLIGATORIO).

  Menú:
  1. Agregar cliente
    Ingresa (Como mínimo 1 cliente):
    - ID válido (>0).
    - Nombre (texto).
    - DNI (texto).
    - Tipo: "normal" o "frecuente".

- PASO 4: Agregar productos (OBLIGATORIO).

  Menú:
  2. Agregar producto
    Ingresa (Como mínimo 1 producto):
    - ID único (>0).
    - Nombre.
    - Stock (>0 recomendado).
    - Precio (>0).

- PASO 5 (Opcional): Listar clientes

  Menú:
  3. Listar clientes
  - Listará los clientes en el orden ingresado.

- PASO 5 (Opcional): Listar productos

  Menú:
  4. Listar productos
  - Listará los productos en el orden ingresado.

- PASO 6 (Importante): Registrar una venta

  Menú:
  5. Registrar venta
  Ingresa:
  - ID de venta.
  - ID de cliente (YA REGISTRADO).
  - Cantidad de productos a vender.
  - Para cada producto (Ingresar):
    a. ID del producto.
    b. Cantidad a vender.
  - El sistema aplicará descuento si el cliente es frecuente.
  - Guarda el reporte automáticamente en un archivo .txt.
  - Si el stock es menor a 5 mostrará una advertencia: "ADVERTENCIA: Stock crítico".

- PASO 7: Ordenar productos por precio

  Menú:
  6. Ordenar productos por precio
  - El sistema listará los productos ordenados por precio.
  Luego:
  4. Listar productos
  - Mostrará la lista de productos ordenados de menor a mayor precio.

- PASO 8: Buscar producto

  Menú:
  7. Buscar producto
  Ingresa:
  - ID del producto
  - El sistema:
    a. Muestra el producto si existe
    b. Muestra mensaje si no existe

- PASO 9: Ver reporte de ventas

  - Ver el archivo generado: reporte_ventas.txt
