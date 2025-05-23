import pandas as pd

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
    df = products.copy()

    for col in df.columns:
        if col != 'price':
            df[col] = df[col].fillna(0)
            
    return df