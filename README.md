# Domain-Specific Language (DSL) Compiler

A custom **Domain-Specific Language (DSL)** based compiler designed to simplify data analysis and machine learning workflows.  
Instead of writing extensive Python code, users can write high-level DSL commands like `LOAD`, `PREPROCESS`, `TRAIN`, and `EVALUATE`, which are translated into optimized Python code using **Pandas** and **scikit-learn**.

---

## 🔹 Core Features

### Compiler Pipeline
- **Lexical Analysis** → Flex  
- **Syntax Parsing** → Bison  
- **Semantic Analysis** → C  
- **Code Generation** → Python (Pandas, scikit-learn)  
- **Execution Engine** → Python runtime

### Supported ML Models
- Linear Regression  
- KNN  
- SVM

### Data Operations
- Loading datasets  
- Preprocessing & filtering  
- Scaling & transformation

### Outputs
- Accuracy scores  
- Processed data tables  
- Visual plots & metrics

### User Interfaces
- Command-Line Interface (CLI)  
- Web-based GUI (HTML, CSS, JS, Node.js)

---

## 🔹 Deliverables
- Fully functional DSL compiler (Flex + Bison + C)  
- Python execution engine for ML workflows  
- Syntax & user guide documentation  
- Complete testing suite (syntax, semantic, execution validation)

---

## Quick Examples

### DSL example — classification (SVM)
```dsl
LOAD "iris.csv";
PREPROCESS DROP NA;
PREPROCESS SCALE STANDARD;
TRAIN MODEL SVM WITH FEATURES ["sepal_length","sepal_width","petal_length","petal_width"] TARGET "species";
EVALUATE METRICS ACCURACY, CONFUSION_MATRIX;
